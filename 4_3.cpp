#include"stdio.h"
main()
{
	int num,count=0;
	printf("Please enter a positive integer:");
	do
	{
		scanf("%d",&num);
		if(num<=0)printf("Input error,piease reenter:");
	}while(num<=0);

	while(num!=1)
	{
		if(num%2==0)
			num=num/2;
		else
			num=num*3+1;
		count++;
	}
	printf("Number of steps is %d\n",count);
}

