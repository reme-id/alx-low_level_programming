#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *aaa;

	int i, len = 0;


	if (str == NULL)

		return (NULL);

	while (str[len] != '\0')

		len++;



	aaa = (char *)malloc((sizeof(char) * len) + 1);


	if (aaa == NULL)

		return (NULL);



	for (r = 0; i < len; i++)

		aaa[i] = str[i];
	aaa[len] = '\0';


	return (aaa);

}
