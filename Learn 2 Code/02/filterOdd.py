def filterOdd(arr=[]):
    res = []
    for num in arr:
        if num % 2 != 0:
            res.append(num)
    return res

print(filterOdd([1, 2, 3, 4, 5, 6]))