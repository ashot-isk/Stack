#include "Stack.h"
#include "Vector.h"
#include <iostream>

int main()
{
    Stack obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);
    obj.push_back(6);
    obj.pop();
    obj.pop();

  for(int i = 0 ; i <obj.get_size() ; i++){
    std::cout<<obj[i]<<std::endl;

  }
}