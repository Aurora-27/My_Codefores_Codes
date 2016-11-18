n=int(raw_input())
x=map(int,raw_input().split())
a = []
b = []
c = []
i = 0
while i < len(x):
    if x[i] == 1:
        a.append(i+1)
    elif x[i] == 2:
        b.append(i+1)
    else:
        c.append(i+1)
    i+=1
n = min(len(a),len(b),len(c))
print n
for p in range(n):
    print a[p],b[p],c[p]

        
