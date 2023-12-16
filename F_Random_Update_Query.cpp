#include <iostream>
#include <vector>

const int MOD = 998244353;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    long long totalOps = 0;
    long long result = 0;

    for (int i = 0; i < M; ++i) {
        int L, R, X;
        std::cin >> L >> R >> X;

        long long rangeSize = R - L + 1;
        long long invRangeSize = power(rangeSize, MOD - 2);

        long long ops = (power(rangeSize, N) - 1 + MOD) % MOD;
        ops = (ops * invRangeSize) % MOD;

        totalOps = (totalOps + ops) % MOD;

        result = (result + (A[L - 1] * ops) % MOD) % MOD;
        result = (result + (X * (power(rangeSize, N) - ops + MOD) % MOD)) % MOD;
    }

    result = (result * power(totalOps, MOD - 2)) % MOD;

    for (int i = 0; i < N; ++i) {
        std::cout << result << " ";
    }

    return 0;
}
