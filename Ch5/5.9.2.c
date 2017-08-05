#include <stdio.h>
#include <ctype.h>

int main()
{
	int c, t;
	while ( (c = getchar()) != EOF ) {
		if (isalpha(c)) {	
			t = isupper(c)?'Z':'z';
			if (c + 13 > t)
				c -= 13;
			else
				c += 13;
		}
		putchar(c);
	}
	return 0;
}
