def countSign(nums=[]):
    res = {"Positive": 0, "Negative": 0}
    for num in nums:
        if num >= 0:
            res["Positive"] += 1
        else:
            res["Negative"] += 1
    return res

print(countSign([-1, 2, -3, 4, 5, -6]))