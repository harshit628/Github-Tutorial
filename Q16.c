// 16)Write a C program to calculate profit and loss on a transaction accept cost price and 
//    selling price.

  #include<stdio.h>
  int main(){
  int cp,sp;
  printf("enter the cost price of the product");
  scanf("%i",&cp);

  printf("enter the selling price price of the product");
  scanf("%i",&sp);

  if(cp<sp)
  {
    printf("bingo!! profit");
  }

  else

  {
    
    printf("fuck loss");

  }
  return 0;
  }