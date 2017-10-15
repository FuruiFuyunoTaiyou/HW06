#include <stdio.h>
#include <stdlib.h>
#include "myheaders.h"

void print_list(struct node * current){
  printf("[");
  while((*current).next){
    printf("%d, ", (*current).val);
    current = (*current).next;
  }
  printf("%d]", (*current).val);
}



int main(){

}
