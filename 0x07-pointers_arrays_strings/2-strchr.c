/**
 * Locates a character in a string
 * @s: string to search in
 * @c: character to be search
 * Return: pointer to first occurrence of c in s, or NULL if not found
*/

char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (s + i);
        }
    }
    return ('\0');
}