n = int(input())
minn = None
counter = 0
liist = list(map(int, input().split()))
for i in liist: 
    if minn == None:
        minn = i
        counter += 1
    elif i <= minn:
        minn = i
        counter += 1
print(counter)
    
