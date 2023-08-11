#include<stdio.h>
#include<stdlib.h>
long long unsigned int _atoi(char *s)
{
	int i, ascii, d = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		ascii = (int)s[i];
		if (ascii >= 48 && ascii <= 57)
		{
			d += ascii - 48;
			d *= 10;
		}
	}
	d /= 10;
	return d;
}
int main()
{
	long long unsigned int i = _atoi("1234567890");
	printf("%llu\n", i);
	return 0;
}
