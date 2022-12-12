num = int(input("enter number of rings you have to play ? : "))

#                     A    B    C
def TowerOfHanoi(num,A,B,C):
    if(num==1):
        print("move disk from",A ," to C ",C )
        return
    TowerOfHanoi(num-1,A,C,B)
    #                   A  -  (C use) B  
    TowerOfHanoi(1,A,False,C)
    #               A    -(false)    C 
    TowerOfHanoi(num-1,B,A,C)
    #                   B  - (A use) c

TowerOfHanoi(num,"A","B","C")

#   input = 3
#   a-b
#
#
#
#