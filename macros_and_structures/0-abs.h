/*
 * project directory: macros_and_structures
 * task #: 0
 * file name: 0-abs.h
 * file type: header
 * dependent file(s): 0-main.c
 *
 * this macro returns the absolute value of an interger.
 *
 *  by Zee Adams, May 2016.
 */

# define ABS(i) i < 0 ? (i * -1):i
/* for the absolute value of i (ABS(i)), i < 0 ? asks if this is true or false.
 * If true, multiply num by -1, else (:), return the num.
 *
 * if i = -13,
 * i < 0 (true? or false?)
 * since i < 0 is true, multiply (i * -1)
 * (-13 * -1) = 13
 * for this example, ABS(i) or the absolute value of i is 13.
 */
