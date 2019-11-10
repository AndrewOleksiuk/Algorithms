Y, G = map(int, input().split())
string=''
if Y >= G:
    k = 1
    for i in range(Y):
        string += 'Y'
        if k <= G:
            string += 'G'
            k+=1
else:
    k = 1
    for i in range(G):
        string += 'G'
        if k <= Y:
            string += 'Y'
            k+=1
print(string)
