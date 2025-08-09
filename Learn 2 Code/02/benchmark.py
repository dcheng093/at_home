def benchmark(func, *args, repeats=5):
    import time
    durations, res = [], 0
    for _ in range(repeats):
        start = time.perf_counter()
        res = func(*args)
        end = time.perf_counter()
        durations.append((end - start) * 1000)
    avg = sum(durations) / repeats
    print(f"[{func.__name__}] | Output: {res} | Average execution time: {avg:.3f} ms")