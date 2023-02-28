#include<stdio.h>

int main()
{
	int num, flag = 0, dig;
	printf("Enter the num : ");
	scanf("%d", &num);
	while(num != 0)
	{
		dig = num %10;
		if(dig > 1 || dig < 0)
		{
			flag = 1;
			break;
		}
		num /= 10;
	}
	(flag == 1)?printf("Not a binary\n"):printf("Binary Number\n");
}

