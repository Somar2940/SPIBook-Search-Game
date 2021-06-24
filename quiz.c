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
  printf("%d†“%dŠK,", euclid(1,21), floor_num);
  printf("5171670930B930DA30FC30B9‚Ì–{’I\n"); /*UTF-16BE*/
  return 0;
}
