#include <stdio.h>
#include <iostream>

int main()
{
	
int value =7;
double d_value = 10;

int* int_ptr = &value;
double* d_ptr = &d_value;

std::cout << int_ptr <<'\n';
std::cout << d_ptr <<'\n';
std::cout << *int_ptr <<'\n';
std::cout << *d_ptr <<'\n';
}
