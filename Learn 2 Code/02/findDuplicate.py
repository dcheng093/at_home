def findDuplicate(arr=[]):
    res = {}
    for num in arr:
        if num in res:
            return num
        else:
            res[num] = num
    return None

print(findDuplicate([1, 2, 3, 4, 5, 2, 6]))