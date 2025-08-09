def findMinMax(nums=[]):
    res = {"Max": float("-inf"), "Min": float("inf")}
    for num in nums:
        if num > res["Max"]:
            res["Max"] = num
        if num < res["Min"]:
            res["Min"] = num
    return res


print(findMinMax([10, 20, 4, 45, 99]))