#include <stdio.h>
//#define CHECK 0
int main(){
  /*
   * variables
   */
  int data = 1000;
  short rv;

  /*
   * Gettting size of variables
   */
  printf("size of data(int): %ld\n",sizeof(data));
  printf("size of rv(char): %ld\n",sizeof(char));
  
  /* print bits of data
   */

  for(int i=0; i < (sizeof(data)*8); i++){
    printf("%d bit value: %d\n",i,(data >> (i) ) & 1);
  }
  /*
   * Assinging last byte of data to rv
   *
  char c;
  rv = (short) (data);
  c = (char) (rv >> 8);
  printf("c: %u\n",c);
  */

#ifdef CHECK 
  char *str = "IP header";
  printf("string: %s\n",str);
  printf("string address: %p\n",&str);
    
#endif
}
