n = input()
liist = list(map(int, input().split()))
flag = 0
counter = 0
for i in liist:
    if flag == 0:
        if i % 2 == 0:
            flag = 1
        else:
            flag = 2
    elif flag == 1:
        if i % 2 == 0:
            continue
        else:
            flag = 2
            counter += 1
            
    else:
        if i % 2 != 0:
            continue
        else:
            flag = 1
            counter += 1
print(counter)
