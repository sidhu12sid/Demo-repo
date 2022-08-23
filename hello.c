#include <stdio.h>
main(){
int low , high , inter;
float far, cel;
low = 0;
high = 300;
inter = 20;
far = low;
while(far <= high){
  cel = (5.0 / 9.0) * (far - 32);
  printf("%f %6.1f\n",far,cel);
  far = far + inter;
}
}
