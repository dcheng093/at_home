def secondMax(arr = []):
    maxVal = max(arr)
    res = 0
    for i in range(0, len(arr)):
        if arr[i] > res and arr[i] < maxVal:
            res = arr[i]
    return res

def secondMax2(arr=[]):
    largest, secondLargest = 0, 0
    for num in arr:
        if num > largest:
            largest = num
        elif num > secondLargest and num < largest:
            secondLargest = num
    return secondLargest

print(secondMax([10, 20, 4, 45, 99]))