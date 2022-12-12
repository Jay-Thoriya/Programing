from ast import main
import time
from functools import lru_cache

@lru_cache(maxsize=3)
def some_work(n):
    time.sleep(n)
    return n

if __name__ == '__main__':
    print(" Now , runing some work !")
    some_work(3)
    print("done.....")
    some_work(3)
    some_work(5)
    some_work(2)
    print("again called")
    some_work(3)
    print("called")
