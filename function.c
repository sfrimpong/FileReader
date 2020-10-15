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



// Header File for scanf, printf, and functions
#include "function.h"


/*************************************************************
* Function: read_double()                                   *
* Date Created:  9/20/20                                    *
* Date Last Modified:   9/20/20                             *
* Description: reads an input file and output a double value*
* Input parameters: Input File                              *
* Returns: Double value from file                           *
* Preconditions:   Input File                               *
* Postconditions: Double value from file                    *
*************************************************************/
double read_double(FILE* infile) {
	double v = 0.0;
	fscanf(infile, "%lf", &v);
	return v;
}
/*************************************************************
* Function: read_integer                                     *
* Date Created: 9/20/20                                      *
* Date Last Modified: 9/20/20                                *
* Description: reads an input file and output a integer value*                                           *
* Input parameters: Output File                              *
* Returns: Integer Value                                     *
* Preconditions: Output File                                 *
* Postconditions: Integer Value from file                    *
*************************************************************/
int read_integer(FILE* infile) {
	int v = 0;
	fscanf(infile, "%d", &v);
	return v; 
	
}
/*****************************************************************
* Function:  calculate_sum()                                     *
* Date Created:  9/20/20                                         *
* Date Last Modified: 9/20/20                                    *
* Description:  This function calculates the sum of 5 Values     *
* Input parameters: 5 number values                              *
* Returns: number1 + number2 + number3 + number4 + number5       *
* Preconditions:  5 number values                                *
* Postconditions:number1 + number2 + number3 + number4 + number5 *                                        *
*************************************************************/
double calculate_sum(double number1, double number2, double number3, double number4, double number5) {
	 return number1 + number2 + number3 + number4 + number5;
}
/*************************************************************
* Function: calculate_mean()                                 *
* Date Created: 9/20/20                                      *
* Date Last Modified:  9/20/20                               *
* Description:  This funtion calculates the mean             *
* Input parameters: sum and number                           *
* Returns: sum / number                                      *
* Preconditions: sum and number                              *
* Postconditions: sum/number                                 *
*************************************************************/
double calculate_mean(double sum, int number) {
	return sum / number;
}
/*************************************************************
* Function: calculate_deviation()                            *
* Date Created:  9/20/20                                     *
* Date Last Modified:  9/20/20                               *
* Description:  This function calculates the devation        *
* Input parameters: number and mean                          *
* Returns: number - mean                                     *
* Preconditions: number and mean                             *
* Postconditions: devation                                   *
*************************************************************/
double calculate_deviation(double number, double mean) {
	return number - mean;
}
/*************************************************************
* Function: calculate_variance()                             *
* Date Created:   9/20/20                                    *
* Date Last Modified: 9/20/20                                *
* Description: This function calculates the variance         *
* Input parameters: Devation Values                          *
* Returns: Variance                                          *
* Preconditions: Devation Values                             *
* Postconditions: Variance                                   *
*************************************************************/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	double sum = 0.0;
	sum = (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2));
	return calculate_mean(sum, 5);

}
/*************************************************************
* Function:  calculate_standard_deviation()                  *                    
* Date Created:  9/20/20                                     *
* Date Last Modified:  9/20/20                               *
* Description:This function calculates the Standard Devation *
* from the variance                                          *
* Input parameters: Variance                                 *
* Returns: Standard Deviation                                *
* Preconditions: Variance                                    *
* Postconditions: Standard Deviation                         *
*************************************************************/
double calculate_standard_deviation(double variance) {
	double v = 0.0;
	return sqrt(variance);
}
/*************************************************************
* Function: find_max()                                      *
* Date Created: 9/20/20                                     *
* Date Last Modified:  9/20/20                              *
* Description: when called reads 5 number values and        *
* a maximum.                                                *
* Input parameters: 5 number values                         *
* Returns: maximum value                                    *
* Preconditions: input 5 number values                      *
* Postconditions: returns the maxiumum value                *
*************************************************************/
double find_max(double number1, double number2, double number3, double number4, double number5) {
	double v[5] = {number1, number2, number3, number4, number5}, max = 0;
	
	for (int i = 1; i < 5; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max; 
}
/*************************************************************
* Function: find_min()                                      *
* Date Created: 9/20/20                                     *
* Date Last Modified:  9/20/20                              *
* Description: when called reads 5 number values and        *
* a minimum.                                                *
* Input parameters: 5 number values                         *
* Returns: minimun value                                    *
* Preconditions: input 5 number values                      *
* Postconditions: returns the miniumun value                *
*************************************************************/
double find_min(double number1, double number2, double number3, double number4, double number5) {
	double v[5] = { number1, number2, number3, number4, number5 }, min = 10;

	for (int i = 1; i < 5; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}
/*************************************************************
* Function:  print_double()                                  *
* Date Created:  9/20/20                                     *
* Date Last Modified:  9/20/20                               *
* Description:  Prints values to an outfile                  *
* Input parameters: outfile and number value                 *
* Returns: Nothing                                           *
* Preconditions: An outfile and a value to ouput             *
* Postconditions: print value into the outfile               *
*************************************************************/
void print_double(FILE* outfile, double number) {
	fprintf(outfile, "------- %.2lf\n", number);
}