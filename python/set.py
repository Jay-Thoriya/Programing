s=set()
print(type(s))
s.add(30)
s.add(89)
s.add(79)
s.add(3)
print(s)

######
s1={20,30}
s1.remove(30)
print(s1)

######
"""s1=s.copy()
print(s)"""

s1=s.intersection()
print(s1)

#####

s=s1.isdisjoint(s)
print(s)