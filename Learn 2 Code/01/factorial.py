def factorialIterative(n):
    res = n
    for i in range(1, n):
        res *= n - i
    return res

#n! = n * (n-1) * (n-2)...1

def factorialRecursion(n):
    if n == 1:
        return n
    return n * factorialRecursion(n-1)

from benchmark import benchmark

benchmark(factorialIterative, 20)
benchmark(factorialRecursion, 20)

# [factorialIterative] | Output: 2432902008176640000 | Average execution time: 0.002 ms
# [factorialRecursion] | Output: 2432902008176640000 | Average execution time: 0.002 ms