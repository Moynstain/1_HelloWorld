//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap10_stack.h"
Stack::Stack() {
    top = 0;
}

Stack::~Stack() {
    std::cout << "\n---called function destroyed---\n";
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == MAX;
}

bool Stack::push(const Item &item) {
    if (top < MAX){
        items[top++] = item;
        return true;
    } else{
        return false;
    }
}

bool Stack::pop(Item &item) {
    if (top > 0){
        item = items[--top];
        return true;
    } else{
        return false;
    }
}