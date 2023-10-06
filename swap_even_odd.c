/*Swap Odd and Even Bits. Implement a function to swap odd and even bits in an 
integer.
WTD: For a given integer, swap its odd and even bits. Bit 1 should swap with Bit 2, Bit 3 
with Bit 4, and so on. Use bitwise operations to perform the swapping.
(e.g.: I/P: 0b10101010; O/P: 0b01010101*/

#include<stdio.h>

int swap_even_odd_bits(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int res = swap_even_odd_bits(num);
    printf("After swap = %d\n",res);
    return 0;
}

int swap_even_odd_bits(int num)
{
    int mask1,mask2;
    mask1 = num & 0xAA;
    mask2 = num & 0x55;
    mask1 >>= 1;
    mask2 <<= 1;
    return (mask1 | mask2);
}