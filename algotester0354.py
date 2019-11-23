sd, su, v = map(int, input().split())
td = (sd / v) / 2
tu = 2 * (su / v)
if td < tu:
    print("Down")
elif tu < td:
    print("Up")
else:
    print("Never mind")
