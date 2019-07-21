n=int(input())
l=input().split()
flag=False
for i in range(n):
	if l.count(l[i])>1:
		print(l[i])
		flag=True
		break
if flag==False:
	print("unique")
