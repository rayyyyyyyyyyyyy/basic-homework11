#include<stdio.h>

 

int main()

{

	int num1,num2,num3,x; 

	printf("請輸入三個數字進行排序：");  

	scanf("%d%d%d",&num1,&num2,&num3); 

	if(num1>num2)
	{ 

	x=num1;  

	num1=num2; 

	num2=x; 

	}

	if(num1>num3)
	{ 

	x=num1; 

	num1=num3; 

	num3=x; 

	}

	if(num2>num3)
	{   

	x=num2;   

	num2=num3; 

	num3=x;

	}

	printf("從小到大的排列是:%d %d %d",num1,num2,num3);
	return 0;

}
