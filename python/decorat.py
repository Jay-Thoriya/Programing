
def dect(func1):
    def executed():
        print("Strat executing")
        func1()
        print("executed")
    return executed

@dect
def printing():
    print(2+2)

printing()
