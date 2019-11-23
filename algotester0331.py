string = input()
abc = 'abcdefghijklmnopqrstuvwxyz'
liist = []
for i in abc:
    a = string.count(i)
    if a > 0:
        liist.append(a)
count_2 = 0
count_not2 = 0
for i in liist:
    if i % 2 == 0 and i != 0:
        count_2 += 1
    elif i != 0:
        count_not2 += 1
if (count_2 == 1 and count_not2 == 0) or (count_not2 == 1 and count_2 == 0):
    print("YES")
elif count_not2 > 1:
    print("NO")
else:
    print("YES")

    
