text = ""
while True:
	try:
		l = raw_input().strip()
	except EOFError:
		break
	else :
		text = text + l
index = 0
ans = 0
while index<len(text):
	char = text[index]
	if char == &#39;Q&#39;:
		ans+=9
	elif char == &#39;R&#39;:
		ans+=5
	elif char == &#39;B&#39;:
		ans+=3
	elif char == &#39;N&#39;:
		ans +=3
	elif char ==&#39;P&#39;:
		ans+=1
	elif char == &#39;q&#39;:
		ans-=9
	elif char == &#39;r&#39;:
		ans-=5
	elif char == &#39;b&#39;:
		ans-=3
	elif char == &#39;n&#39;:
		ans -=3
	elif char ==&#39;p&#39;:
		ans-=1
	else:
		ans+=0
	index+=1
if ans >0:
	print "White"
elif ans==0:
	print "Draw"
else:
	print "Black"