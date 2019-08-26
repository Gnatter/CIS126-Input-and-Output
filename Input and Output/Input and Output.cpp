// Unit 1 Assignment 2 Input and Output 2.16
// By Shawn O'Lear
// 09 Mar 2013

#include <stdafx.h> // required header for compiling
#include <stdio.h>  // input output header

// functuion main begins program execution
int main( void )
{
	int integer1; // first number to be entered by user
	int integer2; // second number to be entered by user
	int sum; // variable in which sum will be stored

	printf( "Enter first number\n" ); // prompt for first number from user
	scanf_s( "%d" , &integer1 ); // read an integer

	printf( "Enter second number\n" ); // prompt for second number from user
	scanf_s( "%d" , &integer2 ); // read an integer

	sum = integer1 + integer2; // assign total to sum

	printf( "Sum is %d\n" , sum ); // print sum

	sum = integer1 * integer2; // assign product to sum

	printf( "Product is %d\n" , sum ); // print product

	sum = integer1 - integer2; // assign difference to sum

	printf( "Difference is %d\n" , sum ); // print difference

	sum = integer1 / integer2; // assign quotient to sum

	printf( "Quotient is %d\n" , sum ); // print quotient

	sum = integer1 % integer2; // assign remainder to sum

	printf( "Remainder is %d\n" , sum ); // print remainder
} // end function main