/**
 * _strstr - locates a substring.
 * @haystack: the string to search.
 * @needle: the substring to locate.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		while (*(needle + i))
		{
			if (*(needle + i) != *(haystack + i))
				break;
			i++;
		}
		if (*(needle + i) == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
