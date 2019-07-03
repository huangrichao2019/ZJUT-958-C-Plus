#include<stdio.h>
#include<math.h>

int isprime(int n)
{
	int i,flag=0;
	for(i=2;i<=sqrt(n);i++)
		if(0==n%i) 
		{
			flag++;break;
		}
	if(!flag) return 1;
	else return 0; 
}

int main(){
	int i=1,j=0,flag=0,a[30];
	do{
		if(isprime(i)) 
		{
			flag++;
			a[j++]=i;

		
		}
		i++;
	}while(i<=100);// 健壮性思想，保护程序避免遇到错误后莫名其妙奔溃
		
	printf("\n1到100总共有%d个素数,它们分别是：\n",flag);
	for(j=0;j<flag;j++)
	{
		printf("%-4d",a[j]);
		if(0==(j+1)%4) printf("\n");


}
return 0;
}	
