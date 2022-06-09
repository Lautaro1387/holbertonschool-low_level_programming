#ifndef MAIN_H
#define MAIN_H
/**
 * Program that prints _putchar, followed by a new line.
 */
int _putchar(char);
/**
 * Function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void);
/**
 * Function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void);
/**
 * Function that checks for lowercase character.
 */
int _islower(int c);
/**
 * Function that checks for alphabetic character.
 */
int _isalpha(int c);
/**
 * Function that prints the sign of a number.
 */
int print_sign(int n);
/**
 * Function that computes the absolute value of an integer.
 */
int _abs(int n);
/**
 * Function that prints the last digit of a number.
 */
int print_last_digit(int n);
/**
 * Function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void);
#endif
