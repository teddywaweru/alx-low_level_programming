#include "main.h"
/*
 * 3-print-remaining-days - calculate the number of days remaining for the year
 * for the date that is provided.
 * @month: month of the year
 * @year:: year
 * @day: day of the month
 * Returns: None
 */

void print_remaining_days(int month, int day)
{
  if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
		{
		if (month > 2 && day >= 60)
		{
		day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
		}
	else
	{
		if (month == 2 && day == 60)
		{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
