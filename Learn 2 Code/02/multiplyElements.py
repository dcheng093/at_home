def multiplyElements(arr=[]):
    res = 1
    for num in arr:
        res *= num
    return res

print(multiplyElements([1, 2, 3, 4]))