x=int(input())
a=input()
b=["a","e","i","o","u"]
c=[]
for i in a:
	if i not in b:
		c.append(i)
print(''.join(c[::-1]))
	
