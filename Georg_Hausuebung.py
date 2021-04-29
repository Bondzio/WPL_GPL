####################################################################
# read and write to a simple txt file
# https://realpython.com/read-write-files-python/
# The with statement automatically takes care of closing the file
# once it leaves the with block, even in cases of error. I highly
# recommend that you use the with statement as much as possible,
# as it allows for cleaner code and makes handling any unexpected
# errors easier for you.
####################################################################
import Georg_Funktion as gf

FILENAME = "alterinstunden.txt"

if __name__ == '__main__':

    jahre = gf.alterInput()
    stunden = gf.alterinStunden(jahre)
    print(f'{jahre} Jahre sind {stunden} Stunden')

    with open(FILENAME, 'a') as w:
        w.write('\nAlter: ')
        w.write(str(jahre))
        w.write(' Jahre')
        w.write('\nStunden: ')
        w.write(str(stunden))
        w.write('\n')


    quanten = gf.Georg_Movie('Quantencomputer - funktionsweise und Anwendungen',
                                'Quantencomputer', 'quantencomputer.jpg',
                                'https://www.youtube.com/watch?v=m67jr1KQES0')

    quanten2 = gf.Georg_Movie()  # no parameter --> use default constructor

    print(f"Object quanten: {quanten.movie_title}")
    print(f"Object quanten: {quanten2.movie_title}")

    quanten.showTrailer()
