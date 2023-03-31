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
  if(l->size==l->capacity){
    l->data=realloc(l->data,(l->capacity*2));
    l->data[l->size]=data;
    l->size++;
    l->capacity*=2;
  }
  else{
    l->data[l->size]=data;
    l->size++;
  }
}

void push(ArrayList * l, void * data, int i){
  l->data=realloc(l->data,(l->capacity*2));
  for(inth)


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
