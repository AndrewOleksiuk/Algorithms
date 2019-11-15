a1, b1, d1 = map(int, input().split())
a2, b2, d2 = map(int, input().split())

voc = {}
counter = 0
while a1 <= b1:
    voc[a1] = 1
    a1 += d1
while a2 <= b2:
    if voc.get(a2) is not None:
        counter += 1
    a2 += d2
        
print(counter)

