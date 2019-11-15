n = int(input())
liist = list(map(int, input().split()))
res = []
for i in range(n):
    if liist[i] > 0:
        res.append(i+1)
print(str(res).strip("[ ]").replace(',', ''))
        
