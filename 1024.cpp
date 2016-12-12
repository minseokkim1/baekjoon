#include <stdio.h>

int main(){
	long long i, j, k, N, L;
	scanf("%lld %lld", &N, &L);
	for (int l = L; l <= 100; l++){
		for (long long n = N / l - l; n <= N; n++){
			long long m = n - l + 1;
			if (m < 0) continue;
			long long result = n*(n + 1) / 2 - m*(m - 1) / 2;
			if (result > N) break;
			if (result == N){
				for (long long k = m; k <= n; k++) printf("%lld ", k);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
}