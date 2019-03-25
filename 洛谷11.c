#include <stdio.h>
int main()
{
	int L,M,count=0,num;
	int begin,end;
	int t[10001],i;
	int *p;
	p = &t[0];
	scanf("%d %d",&L,&M);
	for(i=0;i<=L;++i){
		t[i]=1;
	}for(num=1;num<=M;++num){
		scanf("%d %d",&begin,&end);
		for(i=0;i<=L;++i){
			if(i>=begin&&i<=end)
				t[i]=0;
		}
	}while(p<=&t[L]){
		if(*p==1)
			++count;
		++p;
	}printf("%d",count);
	return 0;
}
