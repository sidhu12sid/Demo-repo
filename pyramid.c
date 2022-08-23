#include <stdio.h>
main()
{
  int r, i, j,k;
  printf("Enter the number of rows:");
  scanf("%d",&r );
  for(i=1;i<=r;i++){
    for(j=i;j<r;j++){
      printf(" ");
          }
          for (k = 1; k <= i; k++) {
            printf("* ");
    }
    printf("\n");
  }
}
