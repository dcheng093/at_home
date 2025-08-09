def commonElement(a, b):
    res = []
    for num in b:
        if num in a:
            res.append(num)
    return res
    

print(commonElement([1, 2, 3, 4, 5], [4, 5, 6, 7, 8]))