#include <stdio.h>
int main(){
	long a[100],n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int max = a[0], count = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			count++;
		}
	}
	printf("%d",count);
}
