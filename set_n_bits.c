/*Set Bits Without Using Arithmetic Operations. Implement a function that sets the 
first n bits of a byte to 1.
WTD: You are given an integer n. Use bitwise operations to set the first n bits of an 8-bit 
number to 1 while setting the remaining bits to 0. You cannot use arithmetic operations like 
addition or multiplication.
(e.g.: I/P: n=4; O/P: 0b11110000*/


#include<stdio.h>

int set_bits_to_n(int num);

int main()
{
    int num,res,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    res = set_bits_to_n(num);
    if(res != 0)
    {
        for(i=7; i>=0; i--)
        {
            printf("%d",((res >> i)&1));
        }
    }
    else
    printf("Invalid number\n");
    return 0;
}

int set_bits_to_n(int num)
{
    int mask;
    if(num < 0 || num > 8)
    return 0;
    mask = (1 << num) - 1;
    return (mask << (8 - num));
}

