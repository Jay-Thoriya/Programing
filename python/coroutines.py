import time
def searcher():
    book = " this is a book write by jay it is a good book"
    time.sleep(4)

    while True:
        text = (yield)
        if text in book :
            print("your text is in this book ")
        else:
            print("text is not in this book")


search = searcher()
next(search)
search.send("jay")
input("press any key >>>> ")
search.send("jaydw")
input("press any key >>>> ")
search.send("by")
input("press any key >>>> ")
search.send("good book")

