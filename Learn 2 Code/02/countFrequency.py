def countFrequency(strings=[]):
    res = {}
    for s in strings:
        if s in res:
            res[s] += 1
        else:
            res[s] = 1
    return res


def countFrequency2(strings=[]):
    res = {}
    for s in strings:
        res[s] = res.get(s, 0) + 1
    return res


print(countFrequency(["apple", "banana", "apple", "apple", "orange"]))
print(countFrequency2(["apple", "banana", "apple", "apple", "orange"]))
