//打印100-200的素数并计算总的素数（素数求解优化代码）
#include<stdio.h>
#include<math.h>//因为用到了sqrt计算开根号
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;//计算总素数个数
	printf("素数为：");
	for (i = 101; i <= 200; i+=2)//素数不可能是偶数，故可以排除所有的偶数
	{
		//试除法（例如13，只能被1和本身整除，则2-12试除，如果所有的余数不为0，则为素数）

		for (j = 2; j <= sqrt(i); j++)//i=a*b,a/b中至少有一个数小于sqrt(i)
		{
			if (i % j == 0)//如果为真，说明不是素数，直接跳出该循环
			{
				break;
			}
		}
		if (j> sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);
	return 0;
}
//
//《素数求解的n中种境界》