#include <stdio.h>

int main(){
  int i=1,j=2;
  int k = 4&3;
  int l = 4|3;
  printf("i<<1(Left shift by one bit): %d\ni>>1(Right Shift by one bit): %d\n",i<<1,i>>1);
  printf("&:%d\n|:%d\n",k,l);
  
  /**
   * Reading checksum
   */
  short checksum = 0;
  short act_checksum = 18;
  char arr[] = {'1','8'};
  char *ptr = arr;
//  printf("size of char %c\n",*ptr);

  for(int i=0; i<sizeof(checksum); i++){
    checksum = (checksum<<8) |(char) (*ptr);
    printf("checksum =%d\tcharptr = %c\n",checksum,(char)(*ptr));
    ptr++;
  }
  printf("size of char %lu\n",sizeof(char));
 
  return 0;
}
