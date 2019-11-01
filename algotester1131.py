N, K = map(int, input().split())

animals = list()

for i in range(N):

    animal = input()

    animals.append(animal)



used_animals = list()

counter = 0

time = 0

for i in animals:

    time += 1

    if i in used_animals:

        used_animals.append(i)

    else:

        counter += 1

        used_animals.append(i)

    if time > K:

        if len(used_animals) == 0:

            time = 0

        used_animals.pop(0)

print(counter)