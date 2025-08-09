def countFreq(arr = []):
    res = {}
    for str in arr:
        if str in res:
            res[str] += 1
        else:
            res[str] = 1
    return res

print(countFreq(["apple", "banana", "apple", "apple", "orange"]))