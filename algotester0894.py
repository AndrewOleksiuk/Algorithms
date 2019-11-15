n = input()
text= input()
results = []
maxx = 1
for i in range(len(text)):
    for j in range(0, i):
        chunk = text[j:i + 1]
        if chunk == chunk[::-1] and len(chunk) > maxx:
            maxx = len(chunk)
print(maxx)
