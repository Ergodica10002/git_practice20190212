#include <stdio.h>
int main()
{
	double e = 0, add = 1;
	int n, i;
	scanf("%d", &n);
	if (n > 6)
		printf("Too big integer!\n");
	else {

		double precision = 1;
		for (i = 0; i < n; i++)
			precision /= 10;
		i = 1;
		printf("\n");
		while (1 / add > precision){
			e = e + 1 / add;
			printf("%lf\n", e);
			add = add * i;
			i++;
		}
	}
	return 0;
}
