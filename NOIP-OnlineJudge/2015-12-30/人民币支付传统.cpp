#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[5];
	b[0]=a/100;
	b[1]=(a-100*b[0])/50;
	b[2]=(a-100*b[0]-50*b[1])/20;
	b[3]=(a-100*b[0]-50*b[1]-20*b[2])/10;
	b[4]=(a-100*b[0]-50*b[1]-20*b[2]-10*b[3])/5;
	b[5]=(a-100*b[0]-50*b[1]-20*b[2]-10*b[3]-5*b[4])/1;
	for(int i=0;i<6;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
