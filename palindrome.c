#include <stdio.h>
#include <string.h>
int main(){
 char str[20];
 int l,i,flag=0;
 printf("Enter the string to check:");
 scanf("%s",str);
 l = strlen(str);
    for(i=0;i<=l;i++){
      if(str[i] != str[l-i-1]){
        flag=1;
        break;
      }
    }
if (flag) {
  printf("The string is not a palindrome\n" );
}
else{
  printf("The string is a palindrome\n");
}
}
