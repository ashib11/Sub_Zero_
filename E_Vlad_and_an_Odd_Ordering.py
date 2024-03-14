def find_kth_card(t, test_cases):
    for _ in range(t):
        n, k = test_cases[_]
        i = 1
        while True:
            cur = n // 2 + (n & 1)
            if cur >= k:
                print((2 * k - 1) * i)
                break
            else:
                k -= cur
                i *= 2
                n //= 2