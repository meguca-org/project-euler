sum = 0
for n in range(3, 1000):
    sum += n if n % 3 == 0 or n % 5 == 0 else 0

print(sum)