def searcher():
    import time
    book = "Some Containt in the form of the text"
    time.sleep(4)
    while True:
        text = yield
        if text in book:
            print("Your Text in the book")
        else:
            print("Not in the book")


search = searcher()
print("Search Starter")
next(search)
print("Next Method Run 1")
search.send("in")
print("\nNext Method Run 2")
search.send("off")
print("\nNext Method Run 3")
search.send("of")
print("\nNext Method Run 4")
search.send("do")
print("\nNext Method Run 5")
search.send("Some")
print("\nNext Method Run 6")
search.send("of")
search.close()