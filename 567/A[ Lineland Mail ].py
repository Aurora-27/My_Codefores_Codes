m = raw_input()
arr = [int(x) for x in raw_input().split()]
low = arr[0]
high = arr[len(arr)-1]
print abs(arr[0]-arr[1]), abs(high-low)
i = 1
while i < len(arr)-1:
    print min(arr[i]-arr[i-1],arr[i+1]-arr[i]), max(high-arr[i],arr[i]-low)
    i+=1
print high - arr[len(arr)-2] , high-low
