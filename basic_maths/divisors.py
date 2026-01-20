def divisors(num):
    d = []
    f = 1
    while(f <= num):
        if num % f == 0:
            d.append(f)
        f += 1

    return d

num = int(input("Input: "))
result = divisors(num)

print(result)