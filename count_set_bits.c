/*Count Set Bits. Design a function that counts the number of set bits (1s) in an integer 
without looping.
WTD: Given an integer, count the number of bits set to 1 in its binary representation. You 
need to achieve this without using any loops. Use bitwise operations to find the count 
efficiently.
(e.g.: I/P: 0b11010110; O/P: 5*/

#include<stdio.h>

int count_set_bits(int num);

int main()
{
    int num,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    res = count_set_bits(num);
    printf("Number of set bits in %d is : %d\n",num,res);
    return 0;
}

int count_set_bits(int num)
{
    if(num == 0)
    return 0;
    else
    return (num & 1) + count_set_bits(num >> 1);
}