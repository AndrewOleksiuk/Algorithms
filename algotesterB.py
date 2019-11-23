n = int(input())
liist = list(map(int, input().split()))
flag = 0
current = liist[0]
counter = 0
for i in liist:
    if i > current:
        if flag == 0:
            flag = 1
        elif flag == 1:
            current = i
            continue
        elif flag == -1:
            flag = 1
            counter += 1
    elif i < current:
        if flag == 0:
            flag = -1
        elif flag == -1:
            current = i
            continue
        elif flag == 1:
            flag = -1
            counter += 1
    current = i
print(counter)
    
