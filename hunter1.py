n=int(input())
k=list(map(int,input().split()))
s=[]
for i in k:
	if k.count(i)>1:
		s.append(i)
s=list(set(sorted(s)))
if len(s)>0:
	for i in range(len(s)-1):
		print(s[i],end=' ')
	print(s[len(s)-1],end='')	
else:
	print("unique")
	
	
		
	
	
	
		
