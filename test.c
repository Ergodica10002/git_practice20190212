#include <stdio.h>
int main()
{
	double e = 0, add = 1;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		e = e + 1 / add;
		printf("%d:%lf\n", i + 1, e);
		add = add * (i + 1);
	}
	return 0;
}
