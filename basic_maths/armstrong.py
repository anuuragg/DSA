def armstrong(num):
    k = len(num)
    total = 0

    for i in num:
        total += int(i) ** k

    return total == int(num)

num = input("Enter a number to check if it's an armstrong number or not: ")
result = armstrong(num)

if result:
    print("True")
else:
    print("False")
