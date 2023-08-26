#include <stdio.h>
#include <conio.h>
void main()
{
	int rono;
	char Name[20];
	float math, sci, eng, total, per, sanskrit, hindi, sst, msc, computer;
	clrscr();
	printf("\t\t\t\t\t Results\n\n");
	printf("\t Enter the roll no :");
	scanf("%d", &rono);
	printf("\n\t Name :");
	scanf("%s", &Name);
	printf("\n\t Enter the Maths marks :");
	scanf("%f", &math);
	printf("\n\t Enter the Sci mark :");
	scanf("%f", &sci);
	printf("\n\t Enter the Eng mark :");
	scanf("%f", &eng);
	printf("\n\t Enter the SST marks :");
	scanf("%f", &sst);
	printf("\n\t Enter the Sanskrit marks :");
	scanf("%f", &sanskrit);
	printf("\n\t Enter the Hindi marks :");
	scanf("%f", &hindi);
	printf("\n\t Enter the Computer marks :");
	scanf("%f", &computer);
	printf("\n\t Enter the MSC marks :");
	scanf("%f", &msc);
	total = math + sci + eng + sst + hindi + sanskrit + computer + msc;
	printf(" \n\t total Is=%f\n", total);
	per = total / 8;
	printf("\n\t Percantage is = %f", per);
	if (per < 33)
	{
		printf("\n\t Fail");
	}
	else if (per < 50 && per > 40)
	{
		printf("\n\t Grade D");
	}
	else if (per < 60 && per > 50)
	{
		printf("\n\t Grade C");
	}
	else if (per < 70 && per > 60)
	{
		printf("\n\t Grade B");
	}
	else if (per < 90 && per > 80)
	{
		printf("\n\t Grade A");
	}
	else if (per < 99 && per > 90)
	{
		printf("\n\t Grade A+");
	}
	else
	{
		printf("\n\n\t Dist");
	}
	if (math < 35 || sci < 35 || eng < 35 || sst < 35 || hindi < 35 || computer < 35 || sanskrit < 35 || msc < 35 )
	{
		printf("\n\n\n\t Better luck next time");
	}
	else
	{
		printf("\n\n\n\t Pass");
	}
}