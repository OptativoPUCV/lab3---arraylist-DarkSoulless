#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList * lista = (ArrayList *) malloc(sizeof(ArrayList));
  lista -> capacity=2;
  lista -> size=0;
  lista -> data= malloc(sizeof(void));
  return lista;
}

void append(ArrayList * l, void * data){
  if(l->data[l->capacity]==NULL){
    l->data=realloc(data,(l->size*2)*sizeof(ArrayList));
  }
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
