n = int(input())
string = input()
abc = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
liist = []
for i in abc:
    liist.append(string.count(i))
maxx = max(liist)
print(n - maxx)
