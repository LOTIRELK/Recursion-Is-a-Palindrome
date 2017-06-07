// RecursionAssignment3.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
int isPalindrome(char array[], int n);
using namespace std;

int main()
{
	
	char palindrome[7] = { 'r', 'a', 'c', 'e', 'c', 'a', 'r'};//declare array

	int number;

	number = isPalindrome(palindrome, 7);//pass in array and size
	cout << number <<endl;//output th results of the method
	
	return 0;

}

int isPalindrome(char array[], int n)
{
	if (n <2)//if length less then 2
		return 1; //return 1 (is a plaindrome)
	if (*array == array[n - 1])//if char at start of array is equal to char at end
	{
		return isPalindrome(array+1, n - 2);//invoke until a condition is met
	}
	else
	{
		return 2;//else return 2 (not a palindrome)
	}
}

