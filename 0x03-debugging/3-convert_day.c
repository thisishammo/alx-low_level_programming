#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day, int year)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
        	if ((year % 4) == 0)
        	{
			    day = 60 + day;
			}
			else
				day = 59 + day;
            break;
        case 4:
            if ((year % 4) == 0)
        	{
			    day = 91 + day;
			}
			else
				day = 90 + day;
            break;
        case 5:
            if ((year % 4) == 0)
        	{
			    day = 121 + day;
			}
			else
				day = 120 + day;
            break;
        case 6:
            if ((year % 4) == 0)
        	{
			    day = 152 + day;
			}
			else
				day = 151 + day;
            break;
        case 7:
            if ((year % 4) == 0)
        	{
			    day = 183 + day;
			}
			else
				day = 182 + day;
            break;
        case 8:
            if ((year % 4) == 0)
        	{
			    day = 213 + day;
			}
			else
				day = 212 + day;
            break;
        case 9:
            if ((year % 4) == 0)
        	{
			    day = 244 + day;
			}
			else
				day = 243 + day;
            break;
        case 10:
            if ((year % 4) == 0)
        	{
			    day = 274 + day;
			}
			else
				day = 273 + day;
            break;
        case 11:
            if ((year % 4) == 0)
        	{
			    day = 305 + day;
			}
			else
				day = 304 + day;
            break;
        case 12:
            if ((year % 4) == 0)
        	{
			    day = 335 + day;
			}
			else
				day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
