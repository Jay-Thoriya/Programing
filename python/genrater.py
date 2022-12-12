
def gen(n):
    for i in range(n):
        yield i

g=gen(3)

#print(g.__next__())
#print(g.__next__())
#print(g.__next__())
 

for i in g:
    print(i)

n="jay"
n=894895308   # object is iterable a
for i in n:
    print(i)
