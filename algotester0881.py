liist = list(map(int, input().split()))
liist.sort()
print(str(liist).strip("[ ]").replace(',',''))
