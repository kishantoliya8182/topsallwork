'''for r in range(1,6):
    for c in range(r):
        print(c+1,end=' ')
    print(" ")

for r in range(1,6):
    for c in range(r):
        print(1,end=' ')
    print(" ")

for i in range(10,0,-1):
    print(i)


for r in range(6,0,-1):
    for c in range(r):
        print(c+1,end=' ')
    print(" ")

for r in range(5,0,-1):
    for c in range(r):
        print(r,end=' ')
    print(" ")
'''
# Left triangle pattern
n = 5
for i in range(n):
    for j in range(i+1):
        print(chr(j + 65), end="")
    print()