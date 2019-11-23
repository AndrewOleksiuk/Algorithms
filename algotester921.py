a, b = map(int,input().split())
res = min(a,b) + 1
x = max(a,b)
if res < x:
    print(res)
else:
    print(-1)
