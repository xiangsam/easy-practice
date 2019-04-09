#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int a[10]={1};
	int temp;
	int count=0,j=0,i;
	long long b[100000];
	scanf("%d",&n);
	if(n>=10&&n<=30){
	for(a[0]=1;a[0]<=3;++a[0]){
		for(a[1]=1;a[1]<=3;++a[1]){
			for(a[2]=1;a[2]<=3;++a[2]){
				for(a[3]=1;a[3]<=3;++a[3]){
					for(a[4]=1;a[4]<=3;++a[4]){
						for(a[5]=1;a[5]<=3;++a[5]){
							for(a[6]=1;a[6]<=3;++a[6]){
								for(a[7]=1;a[7]<=3;++a[7]){
									for(a[8]=1;a[8]<=3;++a[8]){
										for(a[9]=1;a[9]<=3;++a[9]){
											if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==n){
												++count;
												for(i=0;i<10;++i){
													b[j]+=(a[i]*pow(10,9-i));
												}++j;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}printf("%d\n",count);
	for(j=0;j<count;++j){
		for(i=0;i<10;++i){
			temp=b[j]/(pow(10,9-i));
			printf("%d ",temp);
			b[j]=b[j]-temp*(pow(10,9-i));
		}printf("\n");
		}
	}else{
		printf("0");
	}
	return 0;
}
