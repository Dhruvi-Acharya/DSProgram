#include<stdio.h>
void main()
{
  int bA,i;
  printf("enter base address: ");
  scanf("%d",&bA);
  printf("index of element you wantt to find address: ");
  scanf("%d",&i);
  printf("Address of that index is: %d\n",bA+(4*(i-1)));
}
