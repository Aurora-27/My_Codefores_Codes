n,s = [int(x) for x in raw_input().split()]
time = 0
arr = []
tarr =[]
for x in range(n):
    a,b = [int(x) for x in raw_input().split()]
    arr.append(a)
    tarr.append(b)
i = n-1
cur = s
while i>=0:
    time += cur - arr[i]
    if tarr[i]>time :
        time += tarr[i]- time
    cur = arr[i]
    i-=1
time+= cur
print time
    
            


