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
/**Function that copies a string.*/
char *_strncpy(char *dest, char *src, int n);
/** Function that compares two strings.*/
int _strcmp(char *s1, char *s2);
/** Function that reverses the content of an array of integers.*/
void reverse_array(int *a, int n);
/** Function that changes all lowercase letters of a string to uppercase.*/
char *string_toupper(char *s);
/** Function that capitalizes all words of a string.*/
char *cap_string(char *);
/** Function that encodes a string into 1337.*/
char *leet(char *a);
/** Function that fills memory with a constant byte.*/
char *_memset(char *s, char b, unsigned int n);
/** Function that copies memory area.*/
char *_memcpy(char *dest, char *src, unsigned int n);
/** Function that locates a character in a string.*/
char *_strchr(char *s, char c);
/** Function that gets the length of a prefix substring.*/
unsigned int _strspn(char *s, char *accept);
/** Function that searches a string for any of a set of bytes.*/
char *_strpbrk(char *s, char *accept);
/** Function that locates a substring.*/
char *_strstr(char *haystack, char *needle);
/** Function that prints the chessboard.*/
void print_chessboard(char (*a)[8]);
/** Function that prints the sum of the two diagonals of a square matrix of integers.*/
void print_diagsums(int *a, int size);
#endif
