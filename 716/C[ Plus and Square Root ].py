# your code goes here
n = int(raw_input())
cur = 2;
if n < 2:
	print 2
else:
	for i in range(1,n+1):
		if i == 1:
			print 2
			continue
		lcm = i*(i+1)
		target = lcm*lcm/i - cur/i
		print target
		cur = lcm