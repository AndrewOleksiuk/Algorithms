n = int(input())
cards = [i+1 for i in range(n)]
left = []
right = cards
print(right)
for i in range(n):
    left = right[::]
    right.clear()
    right = left[:i]
    l = len(left) - len(right)
    if l >= i:
        for m in range(i,l):
            right.append(left[m])
    else:
        for j in range(n-i+1, len(left)):
            k = left[j]
            right.insert(j, k)
print(right)
