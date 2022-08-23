#include <stdio.h>
main(){
  int low, high , inter;
  float faren, celsius;
  printf("Enter the celsius value to convert:");
  scanf("%f", &celsius);
    faren = ((9.0/5.0)*celsius)+32;
    printf("The corresponding farenhiet value of %4.0f C is : %6.1f F\n",celsius,faren);
}
