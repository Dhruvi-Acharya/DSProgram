#include<stdio.h>
void main()
{
  int ch,ba,r,c,i,j;
  printf("enter base address: ");
  scanf("%d",&ba);
  printf("enter number of row: ");
  scanf("%d",&r);
  printf("enter number of column: ");
  scanf("%d",&c);
  printf("enter index i and j you want to find address: ");
  scanf("%d %d",&i,&j);
  printf("enter 1. row major array\n 2. column major array: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: 
	printf("address of that index is: %d\n",ba+((i-1)*c+(j-1))*4);
	break;
    case 2: 
	printf("address of that index is: %d\n",ba+((j-1)*r+(i-1))*4);
	break;
    default: 
	printf("enter correct choice\n");
	break;

  }
}
