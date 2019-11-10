n = int(input())
llist = []
for i in range(n):
    llist.append(list(map(int, input().split())))
x1 = min(llist)[0]
x2 = max(llist)[0]
y1 = min(llist, key = lambda x: x[1])[1]
y2 = max(llist, key = lambda x: x[1])[1]

num = 0
for i in range(y1, y2):
    for j in range(x1,x2):
        if [j, i] in llist:
            num += 1
print(num)
    


