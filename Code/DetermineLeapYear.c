#include <stdio.h>
#include <stdbool.h>


bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{return true;}
	else {return false;}
}

int main()
	{
	int yearEntered;
	printf("enter a year to determine if it is a leap year: ");
	scanf("%d", &yearEntered);
	if (isLeapYear(yearEntered))
	{
	printf("Yes, this is a leap year");  
	}
	else {
	printf("No, this is NOT a leap year"); 
	}
	return 0;
	}
