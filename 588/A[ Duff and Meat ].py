n=int(raw_input())
X =[]
Y = []
for i in range(n):
    a,b = [int(x) for x in raw_input().split()]
    X.append(a)
    Y.append(b)
ans = 0
min = 105
for i in range(n):
    if Y[i] < min:
        min = Y[i]
    ans+= X[i]*min
print ans
    
        
