/**
 *string_toupper - to conveet lowercase letters into
 *uppercase
 *
 *@str: the string to be consodered
 *
 *Return: an uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{

		str[i] -= 32;

		}
		i++;

	}

	return (str);
}
