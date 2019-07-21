n=int(input())
l=list(map(int,input().split()))
for i in range(len(l)):
	for j in range(len(l)):
		for k in range(len(l)):
			a=(l[i])+(l[j])
			if (a==l[k]) and (i<j<k):
				print(l[i],l[j],l[k])
