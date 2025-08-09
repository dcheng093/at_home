def listElementKeys(string = []):
    res = {}
    for str in string:
        res[str] = len(str)
    return res

print(listElementKeys(["apple", "banana", "cherry"]))