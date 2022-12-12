import time 

insialtime = time.time()

print(insialtime)

for i in range(0,5):
    print("hello")
print("time for loop is :", time.time()-insialtime)
j=0
while j<5:
    print("hello")
    j+=1

print(time.time()) 

print("Hello ! JAY ")
time.sleep(5)
print("How Are You ?")
time.sleep(5)
print("Oh thanks , i am also Good <3")
time.sleep(5)
print("ok , Bye :)")
