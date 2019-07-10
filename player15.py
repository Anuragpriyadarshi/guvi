from collections import Counter
x=input()
y = Counter(x)
print(max(y,key=y.get))
