def sumOfEven(n = []):
    res = 0
    for num in n:
        if num % 2 == 0:
            res += num
    return res

print(sumOfEven([1, 2, 3, 4, 5, 6, 8]))