n = int(input())
liist = []
for i in range(n):
    liist.append(input())
In = liist.count('In')
Out = liist.count('Out')
if In == Out:
    print("Just a fantasy")
elif In > Out:
    print("Cunning elector")
elif In < Out:
    print("Error")


