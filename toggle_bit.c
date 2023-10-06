/* 1. Write a function that toggles the 3rd and 5th bits of an 8-bit number.
WTD: You have an 8-bit number. Your task is to toggle the bits at positions 3 and 5 
(counting from the least significant bit). Use bitwise operations to modify these specific bits 
while leaving the others unchanged.
(e.g.: I/P: 0b10100101; O/P: 0b10000101)
*/

#include<stdio.h>

int toggle(int num,int k,int n);

int main()
{
    int num,k,n,res;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the bit positions to be toggled: ");
    scanf("%d%d",&k,&n);
    res = toggle(num,k,n);
    printf("Num = %d\n",res);
    
    return 0;
}

int toggle(int num,int k,int n)
{
    int temp;
    temp =(1 << (k-1)) | (1 << (n-1));
    return (temp ^ num);
}