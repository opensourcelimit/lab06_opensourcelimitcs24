// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){

}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){

}

// Returns the minimum element in the heap
int Heap::top(){
  if(empty())
  {
    return -010101;
  }
  else
  {
    return vdata.at(0);
  }  
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  if(vdata.empty() ){ return true;
  
  else
      return false;
}

    
