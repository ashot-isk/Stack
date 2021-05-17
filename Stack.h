#ifndef STACK_H
#define STACK_H
#include "Vector.h"

class Stack : private Vector
{
   public:
    
      void push_back(int x){
          Vector::push_back(x);
          ++m_size;
      }
      
      void pop(){
          Vector::pop();
          --m_size;
      }
      int get_size()
      {return m_size;}

      int operator[](int y){
        return  Vector::operator[](y);
      }
  private:
  int m_size=0;
    
};




#endif //STACK_H