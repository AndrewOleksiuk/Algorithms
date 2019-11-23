k, n = map(int, input().split())
liist = list(map(int, input().split()))
liist.sort()
counter = 0
i = 0
while k > 0 and i < n:
    k -= liist[i]
    if k >= 0:
        counter += 1
    i += 1
print(counter)
        
