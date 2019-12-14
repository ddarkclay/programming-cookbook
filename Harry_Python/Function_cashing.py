import time
from functools import lru_cache

@lru_cache(maxsize = 2)
def some_work(n):
    time.sleep(n)
    return n


if __name__ == '__main__':
    print("Now Running Some Work 1")
    some_work(3)
    print("Done..Calling Again 2")
    some_work(3)
    print("Called Again 3")
    some_work(3)
    print("Called Again 4")