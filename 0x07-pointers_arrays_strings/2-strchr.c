#include "main.h"
/**
  *_strchr - locates a character in a string.
  *@s: pointer to string.
  *@c: character to be found.
  *
  *Return: pointer to first occurence of the character.
  *or null if character is not found.
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + i) == c)
		{
		  return (s + 1);
		}
	}
	if (*(s + i) == c)
	{
	     return (s + 1);
	}
	return (0);
}
