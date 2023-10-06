/*Detecting Power of Two. Write a program to check if a given number is a power of 
two using bit manipulation.
WTD: Given an integer, determine whether it is a power of 2 or not. Your solution should 
only use bitwise operations. Avoid using mathematical functions like logarithms or 
multiplication.
(e.g.: I/P: 32; O/P: True)*/

#include<stdio.h>

int is_power_of_two(int num);

int main()
{
    int num,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    res = is_power_of_two(num);
    if(res == 1)
    printf("%d is a power of 2\n",num);
    else
    printf("%d is not a power of 2\n",num);
    return 0;
}

int is_power_of_two(int num)
{
    int temp = !(num & (num - 1));
    return temp;
}