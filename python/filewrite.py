

"""
f = open("file1.text","w")
f.write("Haan ho gayi galti mujse !\n")
f.write("paar aab bhi tuje tuje apni jan manta hu ") #===>>Haan ho gayi galti mujse !


f = open("file1.text","a")
f.write("Haan ho gayi galti mujse !\n")    
f.write("paar aab bhi tuje tuje apni jan manta hu ")  #===>>Haan ho gayi galti mujse !Haan ho gayi galti mujse !\Haan ho gayi galti mujse !\Haan ho gayi galti mujse !\


f.close()

"""

with open("file1.text") as op:    #====>> file close karvani jarur na pade :)
    print(op.readline())        
                       