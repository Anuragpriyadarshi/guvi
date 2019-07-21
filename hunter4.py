n=int(input())
l=input().split()
for i in range(n):
	if l.count(l[i])==1:
		print(l[i])
		break
		
