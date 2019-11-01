from math import sqrt



a = 0

n = int(input())


for i in range(0, n):

    b = list(map(int, input().split()))

    a += sqrt((b[0] - b[2]) ** 2 + (b[1] - b[3]) ** 2)



print(int(a))
