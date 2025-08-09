def commonElements(arr1, arr2):
    res = []
    for num in arr1:
        if num in arr2:
            res.append(num)
    return res

print(commonElements([1, 2, 3, 4, 5], [4, 5, 6, 7, 8]))