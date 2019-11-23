n = int(input())
liist = list(map(int,input().split()))
a = sum(liist)

if a % 2 == 0:
    print('YES')
else:
    print('NO')
