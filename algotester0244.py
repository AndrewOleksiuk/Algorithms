import sys
n = int(input())
liist = []
for i in range(n):
    liist.append(input())
if liist[0] == 'Out':
    print("Error")
    sys.exit()
In = liist.count('In')
Out = liist.count('Out')
if In == Out:
    print("Just a fantasy")
elif In > Out:
    print("Cunning elector")
elif In < Out:
    print("Error")


