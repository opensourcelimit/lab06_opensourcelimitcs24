// heap.cpp
// Jorge Medina
// Cs24
// 6/2/2021

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
    if(vdata.empty()){return;}
    
    //set rood value equal to right most left node
    //Then delete right most leaf value
    vdata.at(0) = vdata.at(vdata.size()-1);
    vdata.pop_back();
    
    if(vdata.empty()){return;}
    //initilize indexes of root and left and right child;
    int i = 0;
    int left = (2*i+1);
    int right = (2*i+2);
    int swapVal = 0;
    
    //only need to check if left child index is out of vector index
    while(left <= (vdata.size()-1))
    {   
        //case where both left and right indexes are within vector bounds
        //check for smallest child value, then compare parent value to that child
        if(left <= (vdata.size()-1) && right <= (vdata.size()-1) )
        {   
            //case where left child smaller
            if ( vdata.at(left) < vdata.at(right))
            {   
                //swap values if left child smaller than parent
                if(vdata.at(i) > vdata.at(left))
                {
                    swapVal = vdata.at(i);
                    vdata.at(i) = vdata.at(left);
                    vdata.at(left) = swapVal;

                    i = left;
                    left = (2*i+1);
                    right =(2*i+2);
                    
                    continue;
                }
                //if childs value wasn't smaller than parents time to exit while loop
                else
                {
                    break;
                
                }
            }
            
            else
            {   
                //case where right child has smaller value
                if(vdata.at(i) > vdata.at(right))
                {
                    swapVal = vdata.at(i);
                    vdata.at(i) = vdata.at(right);
                    vdata.at(right) = swapVal;

                    i = right;
                    left = (2*i+1);
                    right = (2*i+2);
                    continue;
                }
                else
                {
                    break;

                }
            }
        }
        //this condition can only run if there is only a left child
        if(right > (vdata.size()-1) )
        {
            if(vdata.at(i) > vdata.at(left))
            {
                 swapVal = vdata.at(i);
                 vdata.at(i) = vdata.at(left);
                 vdata.at(left) = swapVal;

                 i = left;
                 left = (2*i+1);
                 right =(2*i+2);
                
            }
            else
            {
               break;
                
            }
        }


    }





}

// Returns the minimum element in the heap
int Heap::top(){
    if(vdata.empty()){return 0;}
    return vdata.at(0);
   
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  if(vdata.empty() ){ return true;}
  
  else
  {
      return false;
  }  
}

    
