//
//  main.cpp
//  exercise6
//
//  Created by jane cheong  on 23/11/2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Stack.h"

Stack::Stack(){
    top=-1;
    for (int i=0;i<=Size;i++){
       my_stack[i]=0;
    }
}

Stack::~Stack(){
}

bool Stack::empty(){
    if (top==-1)
        return true;
    else
        return false;
}

bool Stack::full(){
    if (top == Size-1){
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int x){
    if (full()){
        std::cout << "stack overflow \n" << std::endl;
    }
    else{
        my_stack[top++]=x;
        std::cout<< x <<std::endl;
    }
}

int Stack::pop(){
  if (!empty()){
        int popvalue;
        popvalue = my_stack[top--];
        return popvalue;
    }
    else {
       std::cout<<"stack underflow \n" <<std::endl;
        return 0;
    }
}

int Stack::size(){
    return top + 1;
}


int Stack::peek(){
    if(!empty()){
        return my_stack[top];
    }
    else{
        std::cout<<"stack underflow \n" <<std::endl;
        return 0;
    }
}

void Stack::clear(){
    top = 0;
}



int main(int argc, const char * argv[]) {
    std::vector<int> v = {7, 5, 16, 8};
    Stack s1;
    std::cout<<"The Stack Push "<<std::endl;
     s1.push(1);
     s1.push(2);
     s1.pop();
     s1.push(3);
    std::cout << "The top element is " << s1.peek() << std::endl;
    std::cout << "The stack size is " << s1.size() << std::endl;
 
     s1.pop();
      std::cout<<"The Stack Pop : "<<std::endl;
      while(!s1.empty())
         {
         std::cout<< s1.pop()<<std::endl;
         }
    for (std::vector<int>::iterator it =v.begin() ; it != v.end(); ++it){
    std::cout << ' ' << *it;
    std::cout << '\n';
    }
    std::vector<int>::iterator start = v.begin();
     std::vector<int>::iterator end = v.end();
     std::sort(start,end);
    for (std::vector<int>::const_iterator it =v.begin() ; it != v.end(); ++it){
         std::cout << ' ' << *it;
         std::cout << '\n';
         }
    std::vector<int>::const_iterator p = v.begin();
     std::vector<int>::const_iterator k = v.end();
     std::sort(p,k);
      s1.clear();
      return 0;
   }

