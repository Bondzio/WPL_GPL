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
    print(f'Stunden: {stunden}')

    with open(FILENAME, 'a') as w:
        w.write('\nAlter: ')
        w.write(str(jahre))
        w.write(' Jahre')
        w.write('\nStunden: ')
        w.write(str(stunden))
        w.write('\n')


    quanten = gf.Georg_Movie('Quantencomputer - unktionsweise und Anwendungen',
                                'Quantencomputer', 'quantencomputer.jpg',
                                'https://www.youtube.com/watch?v=m67jr1KQES0')

    print(quanten.movie_storyline)

    quanten.showTrailer()
