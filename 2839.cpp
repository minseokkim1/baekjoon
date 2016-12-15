#include <stdio.h>

int main(){
	int n;
	int cnt = 0;
	int min = 0;
	int tmp = 0;
	scanf("%d", &n);

	if (n % 5 == 0){
		cnt = n / 5;
		printf("%d", cnt);
		return 0;
	}

	tmp = n;
	while (1){
		if (tmp % 3 == 0){
			cnt += tmp / 3;
			min = cnt;
			break;
		}
		if (tmp < 3){
			printf("-1");
			return 0;
		}
		tmp -= 5;
		cnt++;
	}

	cnt = 0;
	tmp = n;

	while (1){
		if (tmp % 5 == 0){
			cnt += tmp / 5;
			if (min > cnt){
				min = cnt;
			}
			break;
		}
		if (tmp < 3){
			printf("-1");
			return 0;
		}
		tmp -= 3;
		cnt++;
	}

	printf("%d",min);
	return 0;
}