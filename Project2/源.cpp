#include<stdio.h>
int prime(int n);
int main()
{
	float i;
	double sum = 0;
	for (i = 2; i <= 100; i++)
	{
		if (prime(i) == 1)
			sum = sum +1.0/i;
	}
	printf("%f", sum);
	return 0;
}

int prime(int n)
{
	int j;
	int flag = 1;
	for (j = 2; j < n; j++)
	{
		flag = 1;
		while (n%j == 0)
		{
			flag = 0;
			goto label_1;
		}
	}
label_1:return flag;

}