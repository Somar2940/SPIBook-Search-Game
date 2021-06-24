#include<stdio.h>
#include<stdlib.h>
int main(void){
  char s[] = "alpha";
  int ch = 'a';
  int i, count = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == ch) {
      count++;
    }
  }
  printf("%d\n", count);
}
