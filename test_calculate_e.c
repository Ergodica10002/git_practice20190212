#include <stdio.h>
int main()
{
	double e = 0, add = 1;
	int n, i;
	while (1){
		printf("input the precision (in decimal):");
		scanf("%d", &n);
		if (n > 6){
			printf("Too big integer!\n");
			continue;
		}
		break;
	}
	double precision = 1;
	for (i = 0; i < n; i++){
		precision /= 10;
	}
	i = 1;
	while (1 / add > precision){
		e = e + 1 / add;
		printf("%lf\n", e);
		add = add * i;
		i++;
	}
	return 0;
}
