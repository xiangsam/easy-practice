1
2#include <stdio.h>
int main()
{
	int a1, a2, b1, b2, c1, c2 , d1, d2, e1, e2,f1 , f2, g1, g2;
	int max, sum[10];
	int i, d;
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2,&e1,&e2,&f1,&f2,&g1,&g2);
	sum[1] = a1 + a2;
	sum[2] = b1 + b2;
	sum[3] = c1 + c2;
	sum[4] = d1 + d2;
	sum[5] = e1 + e2;
	sum[6] = f1 + f2;
	sum[7] = g1 + g2;
	max = sum[1];
	if(sum[1] <=8&&sum[2] <= 8&&sum[3] <= 8&&sum[4] <= 8&&sum[5] <= 8&&sum[6] <= 8&&sum[7] <= 8)
	    printf("0\n");
	else{for(i = 1;i <= 7;++i){
		if(max < sum[i]){
		    max = sum[i];
		    d = i;}
	}printf("%d", d);
	}return 0;
}
