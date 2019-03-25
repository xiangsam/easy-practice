#include <stdio.h>
int main()
{
	int n,i;
	int a[4], b[4];
	int sum[4],pay;
	scanf("%d %d %d %d %d %d %d", &n, &a[1], &b[1], &a[2], &b[2], &a[3], &b[3]);\
	for(i = 1;i <= 3;++i){
		if((n % a[i]) != 0)
		    sum[i] = (n / a[i] + 1) * b[i];
		else
		    sum[i] = (n / a[i]) * b[i];
	}pay = sum[1];
	for(i = 1;i <= 3;++i){
		if(pay > sum[i])
		    pay = sum[i];
	}
	printf("%d",pay);
	return 0;
}
