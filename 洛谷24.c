#include <stdio.h>
int a[100000]={6,2,5,5,4,5,6,3,7,6,0};
void fun(int n)
{
	int temp=n;
	while(temp!=0){
		a[n]+=a[temp%10];
		temp=temp/10;
	}
}
int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	int i,j;
	for(i=10;i<100000;++i)
		fun(i);
	if(n==0)
		printf("0");
	else{
	for(i=0;i<10000;++i){
		for(j=0;j<10000;++j){
			if(a[i]+a[j]+a[i+j]==n-4){
					count++;
			}
		}
	}
	}printf("%d",count);
	return 0;
}
