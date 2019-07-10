x,y=[int(x) for x in input().split()]
a=[]
z = input().split()
for i in range(0,x):
	a.append(int(z[i]))
b=a[y+1:]
c=a[:y+1]
print(b+c)
