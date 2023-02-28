#include<stdio.h>
int gcd(int num1, int num2, int cd);

int main()
{
	int num1, num2;
	printf("Enter num1: ");scanf("%d", &num1);
	printf("Enter num2: ");scanf("%d", &num2);
	printf("gcd : %d\n",gcd(num1, num2, num1<num2?num1:num2));
}

int gcd(int num1, int num2, int cd)
{
	if(num1 % cd == 0 && num2 % cd == 0) 
		return cd;
	else
		return gcd(num1, num2, cd-1);
}
