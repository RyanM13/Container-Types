#include "Stack.h"
#include <iostream>
Stack::Stack(int size) {
  this->size = size;
  arr = new double[size];
  top = -1;
}

Stack::Stack() {
  size = 25;
  arr = new double[size];
  top = -1;
}

void Stack::push(double num) {
  if (isfull()) {
    std::cout << "Stack is full";
  }
  top++;
  arr[top] = num;
}

void Stack::pop() { top -= 1; }

int Stack::Sizeof() {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    counter++;
  }
  return counter;
}

bool Stack::isfull() {
  if (arr == nullptr) {
    return true;
  } else {
    return false;
  }
}

bool Stack::isempty() {
  if (top == -1) {
    return true;
  } else {
    return false;
  }
}

void Stack::print() {
  if (isempty()) {
    std::cout << "Stack is empty. ";
  }
  for (int i = 0; i <= top; i++) {
    std::cout << arr[i];
  }
}

void Stack::Top() { std::cout << arr[top]; }