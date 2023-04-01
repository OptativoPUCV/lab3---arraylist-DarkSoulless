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
  if(l->size==l->capacity){
    l->data=realloc(l->data,(l->capacity*2));
    l->data[l->size]=data;
    l->capacity*=2;
  }
  for(int j=l->size;j>i;j--){
    l->data[j]=l->data[j-1];
  }
  l->data[i]=data;
  l->size++;
}

void* pop(ArrayList * l, int i){
    return NULL;
}


void* get(ArrayList * l, int i) {
    if (i < 0) {
        i += l->size;  // convertir el índice negativo en uno positivo
    }
    
    return l->data[i];
}



int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
