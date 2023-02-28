#include<stdio.h>

int main()
{
	int dec_num, temp_rem, oct_num_rev = 0, oct_num = 0;
	printf("decimal : ");
	scanf("%d", &dec_num);
	while(dec_num > 0 )
	{
		temp_rem = dec_num % 8;
		dec_num = dec_num / 8;
		oct_num_rev = oct_num_rev*10 + temp_rem;
	}
	while(oct_num_rev > 0)
	{
		oct_num = (oct_num*10) + (oct_num_rev %10);
		oct_num_rev = oct_num_rev / 10;
	}
	printf("octal: %d", oct_num);
}


