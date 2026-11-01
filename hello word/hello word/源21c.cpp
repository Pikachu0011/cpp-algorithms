#include<stdio.h>
//int sum(int x, int y, int z)
//{
//	int sum = x + y + z;
//	return sum;
//}
int max(int i, int o)
{
	int max;
	if (i > o)
	{
		max = i;
	}
	else if (i < o)
	{
		max = o;
	}
	else
	{
		printf("Ò»Ñù´ó");
	}
	return max;
	
}


int main()
{
	/*int yi, er, san, si;
	yi = sum(10, 20, 15);
	er = sum(20, 30, 17);
	san = sum(19, 17, 20);
	si = sum(23, 21, 19);*/
	max(10, 20);
	printf("%d\n", max);



	return 0;
}