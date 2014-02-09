#include<stdio.h>

struct binary_byte{
  int data[8];
};

struct binary_byte charToByte(char c){
  int value = (int)c;
  struct binary_byte byte;
  int i = 0;
  for(i = 0; i < 8; i++){
    if(value & (1 << i)){
      byte.data[i] = 1;
    } else {
      byte.data[i] = 0;
    }
  }
  return byte;
}

int main(){
  struct binary_byte binary;
  int i = 0;

  binary = charToByte('a');

  printf("Testing %c is %d:\n", 'a', 'a');

  for(i = 7; i >= 0; i--){
    printf("%d ", binary.data[i]);
  }

  printf("\n");
}
