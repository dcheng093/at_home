def fibIter(n):
    prev, curr = 0, 1
    for _ in range(2, n+1):
        prev, curr = curr, prev + curr
    return curr

def fibRecursion(n):
    if n < 2:
        return n
    return fibRecursion(n-1) + fibRecursion(n-2)

def fibRecursionMemo(n, cache = {}):
    if n in cache:
        return cache[n]
    if n < 2:
        return n
    cache[n] = fibRecursionMemo(n-1, cache) + fibRecursionMemo(n-2, cache)
    return cache[n]

from benchmark import benchmark

benchmark(fibIter, 30, repeats=5)
benchmark(fibRecursion, 30, repeats=5)
benchmark(fibRecursionMemo, 30, repeats=5)

# [fibIter] | Output: 832040 | Average execution time: 0.002 ms
# [fibRecursion] | Output: 832040 | Average execution time: 75.199 ms
# [fibRecursionMemo] | Output: 832040 | Average execution time: 0.003 ms