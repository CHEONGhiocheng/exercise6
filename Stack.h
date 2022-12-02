//
//  Stack.h
//  exercise6
//
//  Created by jane cheong  on 23/11/2022.
//

#ifndef Stack_h
#define Stack_h
const int Size = 10;
class Stack{
private:
    int top;
    int my_stack[Size];
public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    int size();
    int peek();
    bool empty();
    bool full();
    void clear();
};


#endif /* Stack_h */
