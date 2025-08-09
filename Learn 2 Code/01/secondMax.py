def secondMax(arr = []):
    res = 0
    maxNum = max(arr)
    for i in range(0, len(arr)):
        if arr[i] > res and arr[i] < maxNum:
            res = arr[i]
    return res

def secondMax2(arr = []):
    largest, secondLargest = 0, 0
    
    for num in arr:
        if num > largest:
            largest = num
        elif num > secondLargest and num != largest:
            secondLargest = num
    return secondLargest

print(secondMax([5, 1, 9, 13, 7, 13, 12]))
print(secondMax2([5, 1, 9, 13, 7, 13, 12]))
