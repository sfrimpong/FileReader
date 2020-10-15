/************************************************************************
 Programmer: Kofi Frimpong
 Class: CptS 121; Lab Section 1
 Programming Assignment: Programming Assignment 3
 Date: 9/22/20

 Description: This program processes numbers, orresponding to
				student records read in from a file,
				and writes the required results to an
				output file (see main ( )).

************************************************************************/



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* Header file for scanf, printf */
#include <math.h> /* Header file for pow(), sqrt() */

/* List the function prototypes for the program */\
/* The descriptions for each of the functions can be seen in a comment block in the function.c file
above each function definition */
double read_double(FILE* infile);
int read_integer(FILE* infile);
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
double calculate_mean(double sum, int number);
double calculate_deviation(double number, double mean);
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation(double variance);
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);
void print_double(FILE* outfile, double number);









