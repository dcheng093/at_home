def countFrequency(strings = []):
    res = {}
    for str in strings:
        if str in res:
            res[str] += 1
        else:
            res[str] = 1
    return res

print(countFrequency(["apple", "banana", "apple", "apple", "orange"]))