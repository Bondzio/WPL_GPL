import webbrowser


class Georg_Movie():
    def __init__(self, movie_title, movie_storyline, movie_posterimg, movie_trailerurl):
        self.movie_title = movie_title
        self.movie_storyline = movie_storyline
        self.movie_posterimg = movie_posterimg
        self.movie_trailerurl = movie_trailerurl

    def showTrailer(self):
        webbrowser.open(self.movie_trailerurl)


def alterinStunden(jahre):
    stunden = jahre * 365 * 24
    return stunden


def alterInput():
    while True:
        try:
            num = input("Bitte Dein Alter eingeben: ")
            num = int(num)
            while (num < 1 or num > 100):
                print("Bitte ein gültiges Alter eingeben!!!")
                num = input("Bitte Dein Alter eingeben: ")
                num = int(num)
        except ValueError as err:
            print(err)
            print("Bitte eine GANZE Zahl eingeben!!!")
            continue
        except KeyboardInterrupt as err:  # ctrl + c
            print(err)
            print('You cancelled the operation.')
            continue
        break
    return num
