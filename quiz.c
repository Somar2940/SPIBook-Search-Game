/*
Congratulations!
This code is the second question.
By getting the answer, you can find the spi book hidden in the campus.
*/
#include<stdio.h>
int euclid(int x, int y){
  if (y == 0)
    return x;
  else
    return euclid(y, x % y);
}
int main(void){
  int floor_num;
  printf("function euclid(6,9)=? : "); scanf("%d",&floor_num );
  printf("%d����%d�K,", euclid(1,2021), floor_num); /*UTF-16BE*/
  printf("5171670930B930DA30FC30B9�̖{�I\n"); /*UTF-16BE*/
  return 0;
}
