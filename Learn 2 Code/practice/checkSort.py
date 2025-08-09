def checkSort(nums = []):
    prev = float("-inf")
    for num in nums:
        if prev <= num:
            prev = num
        else:
            return False
    return True

print(checkSort([1, 2, 3, 4, 5]))