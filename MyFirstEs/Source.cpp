#include <stdio.h>
#include <math.h>

int main()
{
	int x, y,amount;
	double i, Average, SD, sigmaOfDif =0;
	scanf_s("%d %d",&x,&y);
	Average = (x + y) / 2.0;
	if (x < y)
	{
		amount = (y - x) + 1;
		while (x <= y) 
		{
			sigmaOfDif += pow((x-Average),2);
			printf("%d ",x);
			x++;
		}

	}
	else if (x > y)
	{
		amount = (x-y) + 1;

		while (x >= y)
		{
			sigmaOfDif += pow((x - Average), 2);
			printf("%d ", x);
			x--;
		}
	}
	else 
	{
		amount = 2;
		sigmaOfDif += (x - Average) * (x - Average);
		printf("%d %d",x,y);
	}
	printf("\n");
	SD = sqrt((sigmaOfDif / (amount-1.0)));
	printf("Average = %.2f\n", Average);
	printf("SD = %.2f", SD);

	return 0;
}