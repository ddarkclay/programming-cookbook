import os


def solder(path,file_name,file_format):
    os.chdir(path)
    i = 1
    files = os.listdir(path)
    with open(file_name) as f:
        file_list = f.read().split("\n")
        # print(file_list[1])

    for file in files:
        if file not in file_list:
            os.rename(file,file.capitalize())

        if os.path.splitext(file)[1] == file_format:
            os.rename(file, f"{i}{file_format}")
        i += 1


path = r"/root/PycharmProjects/Harry_Python/file_operations"
file_name = "Do_not_change.txt"
file_format = ".png"

solder(path,file_name,file_format)


# os.chdir("/root/PycharmProjects/Harry_Python/file_operations")
# with open("do_not_change.txt") as f:
#     for line in f:
#         word = str(line.split())
#         print("Word is : ",word)
#     print(type(word))