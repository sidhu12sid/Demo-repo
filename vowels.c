#include <stdio.h>
#include <string.h>
int main(){
  char str[50];
  int i,len,vowels=0,con;
  printf("Enter the stirng which we needed to check:");
  scanf("%[^\n]s",str);
  len = strlen(str);
  for(i = 0 ; i <= len ; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
         vowels++;
         con= len-vowels;
       }
  }

  printf("The number of consonants:%d\n",con);
  printf("The number of vowels:%d\n",vowels);
return 0;
}
