#include"main.h"
#include<stdlib.h>
/**
 * 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i __attribute__((unused));
		void *p;

		p = malloc(size * nmemb);
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			char *s = p;
			for (i = 0; i < nmemb; i++)
			{
				s[i] = 0;
			}	
			return (p);
		}
	}
}
