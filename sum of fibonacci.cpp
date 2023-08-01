#include<stdio.h>
int main(){
	int i, n,a=0,b=1,c=a+b,sum=0;
	printf("n=");
	scanf("%d",&n);
	for(i=3;i<=n;i++){
		a=b;
		b=c;
		c=a+b;
		sum+=a;
	}
	sum+=b;
	
	printf("sum=%d",sum);
	return 0;
}
