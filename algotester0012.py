n = int(input())
liist = []
for i in range(n):
    liist.append(list(map(int, input().split())))
a = b = c = 0
for i in liist:
    a += i[0]
    b += i[1]
    c += i[2]
opt_a = a/n
opt_b = b/n
opt_c = c/n

counter = 0
for i in liist:
    counter += abs(i[0] - opt_a)
    counter += abs(i[1] - opt_b)
    counter += abs(i[2] - opt_c)
print(round(counter))
    
