#include <stdio.h>
int main()
{
	int a[15],i,give,lgive, sum;
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10],&a[11],&a[12]);
	sum = 0;
	give = 0;
	for(i = 1;i <= 12;++i){
		sum = sum + 300;
		if(sum < a[i]){
         printf("-%d",i);
		 return 0;}
		else {
			lgive = ((sum - a[i]) / 100) * 100;
			sum = sum - lgive - a[i];
			give = give + lgive;
		}
	}
	sum = sum + give * 1.2;
	printf("%d",sum);
	return 0;
}
