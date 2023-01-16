#include <stdio.h>
#include <unistd.h>
/*
 * _putschar - prints the string provided
 * @c: string to be printed
 *
 * Returns: 1 on success, 0 on error
 */
int _putchar(char c) { return (write(1, &c, 1)); }

/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c) {
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}

/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i) {
  if (i < 0)
    i = i * -1;
  return (i);
}

/**
 * _isupper: checs if the character is uppercase
 * Returns: 1- is uppercase
 *          2- is nt uppercase
 */
int _isupper(int c) {
  if (c >= 65 && c <= 90)
    return (1);
  else
    return (0);
}

/**
 * _isdigit - fn for check a number through 0 to 9
 * @c: is a number
 * Return: always 0.
 */
int _isdigit(int c) {
  if (c >= 48 && c <= 57) {
    return (1);
  } else {
    return (0);
  }
}

/**
 * _strlen - Get the length of a string
 * @s: string pointer
 *
 * Return: Length of string
 */
int _strlen(char *s) {
  int l = 0;

  while (*s != '\0') {
    s++;
    l++;
  }
  return (l);
}

/**
 * _puts - Prints a string
 * @str: string to be printed
 *
 * Return: None
 */
void _puts(char *str) {
  while (*str != '\0') {
    _putchar(*str);
    str++;
  }
  _putchar('\n');
}

/**
 * _strcpy - Unknown
 * @dest: Unknown
 * @src: Unknown
 *
 * Return: None
 */
char *_strcpy(char *dest, char *src) {
  char *s = NULL;
  return (s);
}

/**
 * _strcpy - Unknown
 * @dest: Unknown
 * @src: Unknown
 * @n: value
 *
 * Return: None
 */
char *_strncat(char *dest, char *src, int n) {

  char *s = NULL;
  return (s);
}

/**
 * _strncpy - Unknown
 * @dest: Unknown
 * @src: Unknown
 * @n: value
 *
 * Return: None
 *
 */
char *_strncpy(char *dest, char *src, int n) {

  char *s = NULL;
  return (s);
}
int _strcmp(char *s1, char *s2);

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
 */

int _strcmp(char *s1, char *s2) {
  int i;
  int R;

  i = 0;

  while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0')) {
    i++;
  }
  R = s1[i] - s2[i];
  return (R);
}

/**
 * _memset - Unknown
 * @s: Unknown
 * @b: Unknown
 * @n: value
 *
 * Return: None
 *
 */
char *_memset(char *s, char b, unsigned int n) {

  char *x = NULL;
  return (x);
}

/**
 * _memcpy - Unknown
 * @dest Unknown
 * @src: Unknown
 * @n: Value
 *
 * Return: None
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n) {

  char *x = NULL;
  return (x);
}

/**
 * _strchr - Unknown
 * @s: Unknown
 * @c: Unknown
 *
 * Return: None
 *
 */
char *_strchr(char *s, char c) {

  char *x = NULL;
  return (x);
}
/**
 * _strspn - Unknown
 * @s: Unknown
 * @accept: Unknown
 *
 * Return: None
 *
 */
unsigned int _strspn(char *s, char *accept) {

  int x = 0;
  return (0);
}
/**
 * _strpbrk - Unknown
 * @s: Unknown
 * @accept: Unknown
 *
 * Return: None
 *
 */
char *_strpbrk(char *s, char *accept) {
  char *x = NULL;

  return (x);
}

/**
 * _strstr - Unknown
 * @haystack: Unknown
 * @needle: Unknown
 *
 * Return: None
 *
 */
char *_strstr(char *haystack, char *needle) {

  char *x = NULL;
  return (x);
}
