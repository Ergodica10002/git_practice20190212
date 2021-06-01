#include <stdio.h>
int main()
{
	double now = 0;
	double toadd = 1;
	int n;
	while(1){
		printf("input the precision(in decimal):");
		scanf("%d", &n);
		if (n > 6){
			printf("Too big integer!\n");
			continue;
		}
		break;
	}
	double precision = 1;
	double pi = 4 * now;
	for (int i = 0; i < n; i++){
		precision /= 10;
	}
	int count = 1;
	while (1 / toadd > precision && count < 500){
		if (count % 2 == 1)
			now += 1 / toadd;
		else
			now -= 1 / toadd;
		count++;
		pi = 4 * now;
		printf("%lf\n", pi);
		toadd += 2;
	}

}
