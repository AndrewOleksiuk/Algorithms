n = int(input())
nd, a, b, c = 0, 0, 0, 0
d = []
for i in range(n):
    li = list(map(int, input().split()))
    a += li[0]
    b += li[1]
    c += li[2]
    d.append(li)

p_a = a / n
p_b = b / n
p_c = c / n
for i in range(len(d)):
    nd += abs(p_a - d[i][0]) + abs(p_b - d[i][1]) + abs(p_c - d[i][2])

print(round(nd))
