#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
/**
 * Function that takes a pointer to an int as parameter and updates the value it points to to 98.
 */
void reset_to_98(int *n);
/**
 * Function that swaps the values of two integers.
 */
void swap_int(int *a, int *b);
/**
 * Function that returns the length of a string.
 */
int _strlen(char *s);
/**
 * Function that prints a string, followed by a new line, to stdout.
 */
void _puts(char *str);
/**
 * Function that prints a string, in reverse, followed by a new line.
 */
void print_rev(char *s);
/**
 * Function that reverses a string.
 */
void rev_string(char *s);
/**
 * Function that prints every other character of a string, starting with the first character, followed by a new line.
 */
void puts2(char *str);
/**
 * Function that prints half of a string, followed by a new line.
 */
void puts_half(char *str);
/**
 * Function that prints n elements of an array of integers, followed by a new line.
 */
void print_array(int *a, int n);
/**
 * Function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src);
/**
 * Function that convert a string to an integer.
 */
int _atoi(char *s);
/**
 * Function that concatenates two strings.
 */
char *_strcat(char *dest, char *src);
/**
 * Function that concatenates two strings.
 */
char *_strncat(char *dest, char *src, int n);
/**Function that copies a string.**/
char *_strncpy(char *dest, char *src, int n);
/** Function that compares two strings.**/
int _strcmp(char *s1, char *s2);
/** Function that reverses the content of an array of integers.**/
void reverse_array(int *a, int n);
/** Function that changes all lowercase letters of a string to uppercase.**/
char *string_toupper(char *);
#endif
