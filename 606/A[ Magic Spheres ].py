l1 = [int(x) for x in raw_input().split()]
l2 = [int(x) for x in raw_input().split()]
diff = 0
for i in range(len(l1)):
    if l1[i]>l2[i]:
        diff+= (l1[i]-l2[i])/2
    else :
        diff-= l2[i]-l1[i]

if diff>=0:
    print "Yes"
else:
    print "No"


    
            


