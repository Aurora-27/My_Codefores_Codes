d1,d2,d3 = [int(x) for x in raw_input().split()]
print min(d1+d2+d3,2*(d1+d2),2*(d2+d3),2*(d1+d3))
