str1 = input()
str2 = input()
k = str1.find('kyu')
if k != -1:
    str1_1 = str1[:k]
    str1_2 = str1[k:]
    res = str1_1+str2+str1_2
else:
    res = str1 + str2

res = res.replace('kyukyu','ku')
print(res)
