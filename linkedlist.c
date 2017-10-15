#include <stdio.h>
#include <stdlib.h>
#include "myheaders.h"

void print_list(struct node * current){
  printf("[");
  while((*current).next){
    printf("%d, ", (*current).val);
    current = (*current).next;
  }
  printf("%d]\n", (*current).val);
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
  struct node * start = (struct node *)malloc(sizeof(struct node));
  (*start).val = 12345;
  (*start).next = 0;
  print_list(start);
  int i = 10;
  for(; i > 0; i--){
    start = insert_front(start, i);
  }
  print_list(start);
  start = free_list(start);
  //print_list(start);

  return 0;
}
