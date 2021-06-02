// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
    vdata.push_back(value);
    
    int i = vdata.size()-1;
    int parent = (i-1)/2;
   
   while( parent >= 0 && value < vdata.at(parent))
    {
        vdata.at(i) = vdata.at(parent);
        vdata.at(parent) = value;
        
        i = parent;
        parent = (parent-1)/2;
       
    }
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
    //int lastKey = vdata.at(vdata.size()-1);
    //vdata.at(vdata.size()-1) = vdata.at(0);
    //vdata.at(0) = lastKey;
    if(vdata.empty()){return;}

    vdata.at(0) = vdata.at(vdata.size()-1);
    vdata.pop_back();
    
    int i = 0;
    int lChild = (2*i+1);
    int rChild = (2*i+1);




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
  if(vdata.empty() ){ return true;}
  
  else
      return false;
}

    
