/*swap1.c --使用指针解决函数交换问题*/
#include<stdio.h>
void interchange(int * u, int * v);		 /*声明函数*/

int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);		//把地址发送给函数
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}

void interchange(int * u, int * v)		/*定义函数*/
{
	int temp;

	temp = *u;		//temp获得u所指向对象的值
	*u = *v;
	*v= temp;
}
