
try:
    f : open("dose.txt")

except Exception as e:
    print(e)
else :
    print("this will run only if except is not runnig ")
finally :
    print(" run this anyway....")

print(" IMportant stuff")