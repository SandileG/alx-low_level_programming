#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Destination buffer where the string is copied.
 * @src: Source string to be copied.
 *
 * Return: Pointer to the destination buffer dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy each character from src to dest */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; /* Null-terminate the destination string */

    return (dest);
}
