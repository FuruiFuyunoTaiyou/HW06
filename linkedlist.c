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

struct node * insert_front(struct node * front, int new_val){
  struct node * new_front = (struct node *)malloc(sizeof(struct node));
  (*new_front).val = new_val;
  (*new_front).next = front;
  return new_front;
}

struct node * free_list(struct node * front){
  if(front){
    free_list((*front).next);
    free(front);
  }else{
    return front;
  }
}



int main(){

}
