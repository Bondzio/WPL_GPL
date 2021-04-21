import PySimpleGUI as sg
import WPLPictures as wp
import Georg_Funktion as gf
import datetime

######################################################
# Define constants
######################################################
FILENAME = "alterinstunden.txt"
IMG_NAME = "georg_2014.png"
LOGO_NAME = "fhg.png"
BTN_NAME = 'save_to_disk_4.png'
VERSION = "Version 1.1 2021 "

######################################################
# look and feel Definition
######################################################
# sg.ChangeLookAndFeel('Topanga')
# sg.ChangeLookAndFeel('Dark2')
######################################################
sg.ChangeLookAndFeel('DarkAmber')


def showMeTheButtons():
    ######################################################
    # Define Constants Section
    ######################################################
    sg.SetOptions(auto_size_buttons=True,
                  margins=(0, 0),
                  button_color=sg.COLOR_SYSTEM_DEFAULT)

    ######################################################
    # Toolbar, Text, Buttons
    ######################################################
    toolbar_buttons = [
        [sg.Text('Georg-Homework', font=(wp.myFont3, 35), size=(20, 1), justification='center')],
        [sg.Text('', background_color=wp.YELLOW, text_color=wp.YELLOW)],  # empty row
        [sg.Text('', size=(20, 1), background_color=wp.YELLOW, text_color=wp.YELLOW),
         sg.Image(filename=IMG_NAME, background_color=wp.YELLOW, tooltip=' Dr. Georg PLESSL '),
         sg.Text('', size=(3, 1), background_color=wp.YELLOW, text_color=wp.YELLOW),
         sg.Image(filename=LOGO_NAME, background_color=wp.YELLOW, tooltip=' Frauenhofer-Gesselschaft ')],
        [sg.Text('', background_color=wp.YELLOW, text_color=wp.YELLOW)],  # empty row
        [sg.Text('', size=(15, 1), background_color=wp.YELLOW, text_color=wp.YELLOW),
         sg.Text('Please enter your age:', size=(17, 1), background_color=wp.YELLOW, text_color=wp.BLACK,
                 font=(wp.myFont3, 15)),
         sg.Input(size=(3, 1), justification='center', font=(wp.myFont3, 15), text_color=wp.YELLOW, key='-AGE-',
                  enable_events=True, tooltip=' only whole numbers accepted '),
         sg.Text('', size=(15, 1), background_color=wp.YELLOW, text_color=wp.BLACK, key='-HOURS-',
                 font=(wp.myFont3, 15))],
        [sg.Text('', background_color=wp.YELLOW, text_color=wp.YELLOW)],  # empty row
        [sg.Text('', size=(52, 1), background_color=wp.YELLOW, text_color=wp.YELLOW),
         sg.Button('', image_filename=BTN_NAME, image_subsample=4, button_color=wp.YELLOW,
                   pad=(0, 0), key='-WRITE-TO-FILE-', border_width=5, font=(wp.myFont, 15),
                   tooltip=' Store hours to local file ')],
        [sg.Text('', background_color=wp.YELLOW, text_color=wp.YELLOW)],  # empty row
    ]

    ######################################################
    # layout, frame, textToolbar, Text, Buttons
    ######################################################
    layout = [[sg.Frame('', toolbar_buttons, title_color=wp.WHITE,
                        # background_color=sg.COLOR_SYSTEM_DEFAULT,
                        background_color=wp.YELLOW,
                        pad=(5, 5))],
              ######################################################
              # Status line
              ######################################################
              [sg.Text(VERSION, size=(35, 1), key='-OUT_TXT-', justification='left', font=(wp.myFont4, 10)),
               sg.Text('This program runs since: ', size=(38, 1), justification='right', font=(wp.myFont4, 10)),
               sg.Text('', size=(25, 1), justification='right', key='-TIME-', font=(wp.myFont4, 10))]
              ]

    ######################################################
    # window Definition
    ######################################################
    # GLOBAL setting --> set keyboard events --> return_keyboard_events=True
    ######################################################
    window = sg.Window('Homework', layout,
                       return_keyboard_events=True, finalize=True)

    start_time = datetime.datetime.now()
    age = 0
    # disable button
    window['-WRITE-TO-FILE-'].update(disabled=True)

    ######################################################
    # E V E N T - loop
    ######################################################
    while True:
        event, values = window.Read(timeout=10)

        if event != sg.TIMEOUT_KEY:  # Not Equal operator !=
            # sg.Print(event, values)
            # print(event, values)
            window['-TIME-'].update(values)

        if event in (None, '-CLOSE-', 'Exit'):
            break  # close application

        if event == '-AGE-':
            try:
                age = values['-AGE-']
                age = int(age)
                # enable button
                window['-WRITE-TO-FILE-'].update(disabled=False)
                if age < 1 or age > 100:
                    age = ''
                    window['-AGE-'].update(str(age))
                    window['-HOURS-'].update(' hours')
                    # disable button
                    window['-WRITE-TO-FILE-'].update(disabled=True)
                    sg.PopupError(' ---> Please enter whole numbers between 1 - 100 only! <--- ', font=(wp.myFont3, 15),
                                  title='Wrong age entered', auto_close_duration=5, auto_close=True)
                    continue
            except ValueError as err:
                # print to debug window
                sg.Print(err)
                sg.Print("Bitte eine GANZE Zahl eingeben!!!")
                age = ''
                # disable button
                window['-WRITE-TO-FILE-'].update(disabled=True)
                window['-AGE-'].update(str(age))
                sg.PopupError(' ---> Please enter whole numbers between 1 - 100 only! <--- ', font=(wp.myFont3, 15),
                              title='Wrong age entered', auto_close_duration=5, auto_close=True)
                continue
            except KeyboardInterrupt as err:  # ctrl + c
                # print to debug window
                sg.Print(err)
                sg.Print('You tried to cancel the operation')
                age = ''
                # disable button
                window['-WRITE-TO-FILE-'].update(disabled=True)
                continue

        ageinhours = gf.alterinStunden(age)
        window['-HOURS-'].update(str(ageinhours) + ' hours')

        if event == '-WRITE-TO-FILE-':
            with open(FILENAME, 'a') as w:
                w.write('\nAlter: ')
                w.write(str(age))
                w.write(' Jahre')
                w.write('\nStunden: ')
                w.write(str(ageinhours))
                w.write('\n')

            sg.PopupOK(' ---> successfully written to local file <--- ', font=(wp.myFont3, 15),
                       title='Write to file', auto_close_duration=5, auto_close=True)

        window['-TIME-'].update(str(datetime.datetime.now() - start_time))

    window.Close()


if __name__ == '__main__':
    sg.Print('program is ready ...')
    showMeTheButtons()

