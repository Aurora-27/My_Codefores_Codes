# your code goes here
a = raw_input()
b = raw_input()
x = "qwertyuiopasdfghjkl;zxcvbnm,./"
output = ""
if a == &#39;R&#39;:
	for i in b:
		output=output+x[x.index(i)-1]
else:
	for i in b:
		output=output+x[x.index(i)+1]
print output