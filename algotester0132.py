t = input()
s = input()
res = False;
for i in range(len(t)):
    if t[i] != s[0] and t[i] != '?':
        continue
    ss = True;
    j = 1
    k = i + 1
    while j < len(s):
        if k != len(t) and (t[k] == s[j] or t[k] == '?'):
            j+=1
            k+=1
            continue
        ss = False
        break
    if ss == False:
        continue
    res = True
    break
if res:
    print("YES")
else:
    print("NO")
