f = open("names.txt","rt")
def name_search():
    f = open("names.txt", "r")
    names = f.read()

    while True:
        text = (yield)
        if text in names:
            print("Name in the File .")
        else:
            print("Name is Not in the File .")


search = name_search()
print("Search Started .")
next(search)
print("\nNext Method Run 1")
search.send("San")
print("\nNext Method Run 2")
search.send("Man")
print("\nNext Method Run 3")
search.send("Ran")
print("\nNext Method Run 4")
search.send("Shu")
