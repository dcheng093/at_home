def commonElements(a, b):
    res = []
    for num in a:
        if num in b:
            res.append(num)
    return res

print(commonElements([1, 2, 3, 4, 5], [4, 5, 6, 7, 8]))