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




// inputting information from function.h 
#include "function.h"


//Main
int main(void) {
	
	//Initialize Variabes
	double gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0,
		gpa4 = 0.0, gpa5 = 0.0, sumgpa = 0.0, meangpa = 0.0, meanage = 0.0, meanstand = 0.0, 
		age1 = 0, age2 = 0, age3 = 0, age4 = 0, age5 = 0, sumage = 0.0, dev1 = 0.0, dev2 = 0.0, dev3 = 0.0, dev4 = 0.0, 
		dev5 = 0.0, var = 0.0, standdev = 0.0, max = 0.0, min = 0.0;
	int stand1 = 0, stand2 = 0, stand3 = 0, stand4 = 0, stand5 = 0, sumstand = 0, id1,id2,id3,id4,id5;
	
	// Import Files
	FILE* input = fopen("input.dat", "r");
	FILE* output = fopen("output.dat", "w");

	//error checking
	if (input != NULL)
	{
		printf("File opened successfully\n");
		//executes if() is true


	//call funtion to read first student
		id1 = read_integer(input);
		gpa1 = read_double(input);
		stand1 = read_integer(input);
		age1 = read_double(input);

		//call function to read second student
		id2 = read_integer(input);
		gpa2 = read_double(input);
		stand2 = read_integer(input);
		age2 = read_double(input);

		//call function to read third student
		id3 = read_integer(input);
		gpa3 = read_double(input);
		stand3 = read_integer(input);
		age3 = read_double(input);

		//call function to read fourth student
		id4 = read_integer(input);
		gpa4 = read_double(input);
		stand4 = read_integer(input);
		age4 = read_double(input);

		//call function to read fifth student
		id5 = read_integer(input);
		gpa5 = read_double(input);
		stand5 = read_integer(input);
		age5 = read_double(input);

		//sum of gpa, standings, and ages
		sumgpa = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
		sumstand = calculate_sum(stand1, stand2, stand3, stand4, stand5);
		sumage = calculate_sum(age1, age2, age3, age4, age5);

		//mean of gpa, standings, and ages
		meangpa = calculate_mean(sumgpa, 5);
		meanstand = calculate_mean(sumstand, 5);
		meanage = calculate_mean(sumage, 5);

		//calculate the deviation, variance, and standard deviation
		dev1 = calculate_deviation(gpa1, meangpa);
		dev2 = calculate_deviation(gpa2, meangpa);
		dev3 = calculate_deviation(gpa3, meangpa);
		dev4 = calculate_deviation(gpa4, meangpa);
		dev5 = calculate_deviation(gpa5, meangpa);
		var = calculate_variance(dev1, dev2, dev3, dev4, dev5, 5);
		standdev = calculate_standard_deviation(var);

		//calculate max and min gpa
		max = find_max(gpa1, gpa2, gpa3, gpa4, gpa5);
		min = find_min(gpa1, gpa2, gpa3, gpa4, gpa5);

		//print outputs to outfile
		print_double(output, meangpa);
		print_double(output, meanstand);
		print_double(output, meanage);
		print_double(output, standdev);
		print_double(output, min);
		print_double(output, max);

		//close input output files
		fclose(input);
		fclose(output);

	}
	else {
		printf("File doesn't exist");
	}


	return 0;
}