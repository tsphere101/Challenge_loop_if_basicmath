#include <stdio.h>
#include <math.h>


int main()
{
	double x, y,i, Average, SD, amount,sigmaOfDif =0;
	scanf_s("%lf %lf",&x,&y);
	Average = (x + y) / 2.0;
	if (x < y)
	{
		amount = (y - x) + 1;
		while (x <= y) 
		{
			sigmaOfDif += pow((x-Average),2);
			printf("%.0f ",x);
			x++;
		}

	}
	else if (x > y)
	{
		amount = (x-y) + 1;

		while (x >= y)
		{
			sigmaOfDif += pow((x - Average), 2);
			printf("%.0f ", x);
			x--;
		}
	}
	else 
	{
		amount = 2;
		sigmaOfDif += (x - Average) * (x - Average);
		printf("%.0f %0.f",x,y);
	}
	printf("\n");
	SD = sqrt((sigmaOfDif / (amount-1)));
	printf("Average = %.2f\n", Average);
	printf("SD = %.2f", SD);

	return 0;
}