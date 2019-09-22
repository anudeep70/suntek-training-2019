/*
Program Title:
Binarize

Program Statement:

Write a C program to modify an array by reversing the binarized integer values and converting them back to decimal.

Note: Do NOT take additional leading zeroes while converting into binary.

eg: 3 can be represented in binary as 11 or 011 or 0011.
consider 11 as reversing 011 or 0011 will lead to 110 and 1100 which are all different numbers when converting back to decimal.

Sample Input  and Output

First line of the input will be size of the array.
Second line will be space separated integer values denoting the elements of the array.


Input:
5
1 2 3 4 5

Output:

1 1 3 1 5

Explanation:

binary values of the elements are: 1 10 11 100 101
reversing the values will give: 1 01 11 001 101
decimal representation of the above: 1 1 3 1 5

Hidden Test Cases 1: (mandatory)

Input: 7

34 45 236 65 134 677 55

Output:

17 45 55 65 97 661 59



*/

#include<stdio.h>
#include<math.h>
void binary(int i)
{
int bin=0;
int rbnum=0;
int k=0;
while(i!=0)
{
    bin=(i%2)+bin*10;
    i=i/2;

}
while(bin!=0)
{
   rbnum=(bin%10)*pow(2,k++)+rbnum;
   bin=bin/10;
}
printf("%d ",rbnum);
}
int main(void)
{
int n;
int a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    binary(a[i]);
}
}
