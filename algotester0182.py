import sys
n, k = map(int, input().split())
if n == 0:
    print(0)
    sys.exit()
teeth = list(map(int, input().split()))
counter = 0
res = []
for i in teeth:
    if i >= k:
        counter += 1
    else:
        res.append(counter)
        counter = 0
res.append(counter)
print(max(res))

        
