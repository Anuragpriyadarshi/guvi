n=int(input())
l=input().split()
k=[]
for i in range(n):
	if (i%2==0):
		if int(l[i])%2!=0:
			k.append(l[i])
	elif(i%2!=0):
		if int(l[i])%2==0:
			k.append(l[i])
	else:
		pass
for i in range(len(k)-1):
	print(k[i],end=' ')
print(k[len(k)-1],end='')
			
		
