#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int N, K;
	long double m;
	int arr[500] = { 0 };
	long double d = 0;
	long double min = 9999999.0;

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = K; i <= N; i++)
	{
		for (int j = 0; j < N - i + 1; j++)
		{
			d = 0;
			m = 0;

			for (int z = j; z < j + i; z++)
				m += arr[z];
			m = m / i;

			for (int z = j; z < j + i; z++)
			{
				d = d + (arr[z] - m)*(arr[z] - m);
			}
			d = sqrt(d / i);
			if (min > d)
				min = d;
		}
	}
	printf("%.11Lf", min);
	return 0;
}