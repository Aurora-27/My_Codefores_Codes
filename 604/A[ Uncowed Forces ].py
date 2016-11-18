points = [500,1000,1500,2000,2500]
mnts = [int(x) for x in raw_input().split()]
wrng = [int(x) for x in raw_input().split()]
hacks = [int(x) for x in raw_input().split()]
score = 100*hacks[0]-50*hacks[1]
for i in range(len(mnts)):
    score+= max(0.3*points[i],(points[i]-mnts[i]*points[i]/250)-50*wrng[i])
print int(score)
    




    
            


