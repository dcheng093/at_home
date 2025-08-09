def listElementKey(strings=[]):
    res = {}
    for str in strings:
        res[str] = len(str)
    return res

print((listElementKey(["apple", "banana", "cherry"])))