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

char byteToChar(struct binary_byte byte){
  int value = 0;
  int i;

  for(i = 0; i < 8; i++){
    value += (1 << i) * byte.data[i];
  }

  return (char)value;
}

int main(){
  struct binary_byte binary;
  int i = 0;

  binary = charToByte('Z');

  printf("Testing %c is %d:\nIn binary: ", 'Z', 'Z');

  for(i = 7; i >= 0; i--){
    printf("%d ", binary.data[i]);
  }

  printf("\nDecoded: %c\n", byteToChar(binary));
}
