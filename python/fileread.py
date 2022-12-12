"""
 
  Files I/O besic :

  "r" ----> open file for reading !
  "w" ----> open file for writing !
  "x" ----> create file for if not exists
  "a" ----> add more content to file 
  "t" ----> text mode
  "b" ----> binery mode
  "+" ----> read & write

"""
f = open("file.txt","r")
print(f.readline())
print(f.tell())


print("\n")
print("chaenge pointer number to point :",f.seek(0))
print(f.readline())
print(f.tell())


#print(f.readline())

#content = f.read(356)
#print(content)

#content = f.read(409)
#print("2",content)

#for line in f:
#    print(line)

f.close() 