//打印100-200的素数并计算总的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//计算总素数个数
	printf("素数为：");
	for (i = 100; i <= 200; i++)
	{	
		//试除法（例如13，只能被1和本身整除，则2-12试除，如果所有的余数不为0，则为素数）
		
		for (j = 2; j <= i - 1; j++)//<=表示执行到i-1，如果单单<则执行到i-2
		{
			if (i % j == 0)//如果为真，说明不是素数，直接跳出该循环
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ",i);
		}

	}
	printf("\ncount=%d\n",count);
	return 0;
}