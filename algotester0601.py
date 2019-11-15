n = input()
liist = list(map(int, input().split()))
counter = 0
for i in liist:
    if i <= 2:
        counter += 1
    elif 2 < i <= 7:
        counter += 2
    elif 8 <= i <= 47:
        counter += 3
    elif i > 47:
        counter += 4
print(counter)
    
