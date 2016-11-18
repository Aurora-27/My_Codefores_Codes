n1,b1 = [int(x) for x in raw_input().split()]
x1 = [int(x) for x in raw_input().split()]
n2,b2 = [int(x) for x in raw_input().split()]
x2 = [int(x) for x in raw_input().split()]
num1 =0
num2 =0
p =n1
q=n2
while n1>=1:
    num1+= (b1**(n1-1))*x1[p-n1]
    n1-=1
while n2>=1:
    num2+= b2**(n2-1)*x2[q-n2]
    n2-=1

print "=" if num1==num2 else ">" if num1>num2 else "<"
    
    




    
            


