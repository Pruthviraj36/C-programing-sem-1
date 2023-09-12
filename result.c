#include <stdio.h>
#include <conio.h>
void main()
{
	int rono;
	char Name[20];
	float math, sci, eng, total, per, sanskrit, hindi, sst, msc, computer;
	printf("\t\t\t\t\t Results\n\n");
	printf("\t Enter the roll no	:");
	scanf("%d", &rono);
	printf("\t Name			:");
	scanf("%s", &Name);
	printf("\t Enter the Maths marks	:");
	scanf("%f", &math);
	printf("\t Enter the Sci mark	:");
	scanf("%f", &sci);
	printf("\t Enter the Eng mark	:");
	scanf("%f", &eng);
	printf("\t Enter the SST marks	:");
	scanf("%f", &sst);
	printf("\t Enter the Sans marks	:");
	scanf("%f", &sanskrit);
	printf("\t Enter the Hindi marks	:");
	scanf("%f", &hindi);
	printf("\t Enter the Comp marks	:");
	scanf("%f", &computer);
	printf("\t Enter the MSC marks	:");
	scanf("%f", &msc);
	total = math + sci + eng + sst + hindi + sanskrit + computer + msc;
	printf("\t total Is=%f\n", total);
	per = total / 8;
	printf("\t Percantage is = %f", per);
	if (per < 33)
	{
		printf("\n\t Fail");
	}
	else if (per < 50 && per >= 40)
	{
		printf("\n\t Grade D");
	}
	else if (per < 60 && per >= 50)
	{
		printf("\n\t Grade C");
	}
	else if (per < 70 && per >= 60)
	{
		printf("\n\t Grade B");
	}
	else if (per < 80 && per >= 70)
	{
		printf("\n\t Grade B+");
	}
	else if (per < 90 && per >= 80)
	{
		printf("\n\t Grade A");
	}
	else if (per < 100 && per >= 90)
	{
		printf("\n\t Grade A+");
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
