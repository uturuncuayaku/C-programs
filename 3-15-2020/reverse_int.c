#include "practice.h"

int reverse(int x)
{
	int rev_num = 0;

	while (x != 0)
	{
		int pop = x % 10;
		x /= 10;

		/* INT_MAX 2,147,483,647
		 * INT_MIN -2,147,483,648
		 * 
		 */
		if (rev_num > INT_MAX/10 
		|| (rev_num == INT_MAX / 10
		&& pop > 7))
			return (0);
		if (rev_num < INT_MIN/10 
		|| (rev_num == INT_MIN/10 
		&& pop < -8)) 
			return (0);

		rev_num = rev_num * 10 + pop;

	}
	return (rev_num);
}
