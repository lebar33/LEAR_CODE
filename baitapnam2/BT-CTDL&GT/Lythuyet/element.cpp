#include "element.h" 
#include <iostream> 
element::element() 

{ 
    //ctor 
    this->data=0; 

    this->pointer=nullptr; 
} 

element::element(int data) 

{ 
    //ctor 
    this->data=data; 

    this->pointer=nullptr; 
} 

element::~element() 
{ 
    //dtor 
}  

 
