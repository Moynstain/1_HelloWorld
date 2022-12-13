//
// Created by Moynstain_MBA on 2022/12/13.
//

#ifndef INC_1_HELLOWORLD_CHAP10_STACK_H
#define INC_1_HELLOWORLD_CHAP10_STACK_H

typedef unsigned long Item;

class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    /// push() returns false if stack already is full, otherwise true
    bool push(const Item & item);
    /// pop() returns false if stack is already empty, otherwith true
    bool pop(Item & item);
};


#endif //INC_1_HELLOWORLD_CHAP10_STACK_H
