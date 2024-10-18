#include "main.h"

/**
 * jack_bauer - Bauer Bauer 24 hour
 */
void jack_bauer(void)
{
	int hour_10, hour, minute_10, minute;

	for (hour_10 = 0; hour_10 < 3; ++hour_10)
		for (hour = 0; hour < 10; ++hour)
			for (minute_10 = 0; minute_10 < 6; ++minute_10)
				for (minute = 0; minute < 10; ++minute)
				{
					if (hour_10 == 2 && hour > 3)
						break;
					_putchar(hour_10 + '0');
					_putchar(hour + '0');
					_putchar(':');
					_putchar(minute_10 + '0');
					_putchar(minute + '0');
					_putchar('\n');
				}
}
