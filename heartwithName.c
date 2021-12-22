#include <stdio.h>
#include <conio.h>

void main()
{
	int r, c, s;
	for (r = 1; r <= 5; r++)
	{
		for (s = 5; s >= r; s--)
		{
			printf(" ");
		}
		for (c = 1; c <= r + 4; c++)
		{
			printf("* ");
		}
		for (s = 5; s > r; s--)
		{
			printf("  ");
		}
		for (c = 1; c <= r + 4; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (r = 1; r <= 18; r++)
	{
		for (s = 1; s <= r; s++)
		{
			printf(" ");
		}
		for (c = 18; c >= r; c--)
		{
			if (r == 6 && c == 10)
			{
				printf("L ");
			}
			else if (r == 6 && c == 11)
			{
				printf("U ");
			}
			else if (r == 6 && c == 12)
			{
				printf("H ");
			}
			else if (r == 6 && c == 13)
			{
				printf("A ");
			}
			else if (r == 6 && c == 14)
			{
				printf("R ");
			}
			else
			{
				printf("* ");
			}

		}
		printf("\n");
	}
}
