#include <stdio.h>



typedef struct timestamp
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
} ts;

int cpmdate(ts d1 , ts d2)
{
	if (d1.year >d2.year)
	{
		return 1;
	}
	if (d1.year <d2.year)
	{
		return -1;
	}
	if (d1.month >d2.month)
	{
		return 1;
	}
	if (d1.month <d2.month)
	{
		return -1;
	}
		if (d1.day >d2.day)
	{
		return 1;
	}
	if (d1.day <d2.day)
	{
		return -1;
	}
		if (d1.hour >d2.hour)
	{
		return 1;
	}
	if (d1.hour <d2.hour)
	{
		return -1;
	}
		if (d1.minute >d2.minute)
	{
		return 1;
	}
	if (d1.minute <d2.minute)
	{
		return -1;
	}
		if (d1.second >d2.second)
	{
		return 1;
	}
	if (d1.second <d2.second)
	{
		return -1;
	}
	return 0;

}

int main() 
{
	ts d1 = {2021 , 01 , 14 , 21 , 07 , 16};
	printf("Todays date in the format yyyy-MM-dd HH:mm:ss is>\n");
	printf("%d-%d-%d %d:%d:%d",d1.year,d1.month,d1.day,d1.hour,d1.minute,d1.second);
	ts d2 = {2021 , 01 , 14 , 21 , 07 , 16};
	printf("\nTo compate date in the format yyyy-MM-dd HH:mm:ss is>\n");
	printf("%d-%d-%d %d:%d:%d\n",d2.year,d2.month,d2.day,d2.hour,d2.minute,d2.second);

	int a= cpmdate(d1,d2);
	printf("%d",a);
}