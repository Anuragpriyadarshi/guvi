# your code goes here
x,y=[int(i) for i in input().split()]
a=[i for i in input().split()]
a = ''.join(a)
for i in range(y):
	a = a[len(a)-1]+a[0:len(a)-1]
print(' '.join(a))
