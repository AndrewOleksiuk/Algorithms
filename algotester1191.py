n = int(input())
liist = []
while n > 3:
    liist.append(2)
    n -= 2
if n == 3:
    liist.append(3)
elif n == 2:
    liist.append(2)
elif n == 1:
    liist.pop()
    liist.append(3)
else:
    a = 3
print(len(liist))
print(str(liist).strip("[ ]").replace(",",''))
