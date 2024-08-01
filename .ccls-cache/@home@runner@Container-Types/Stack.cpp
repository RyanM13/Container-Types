#include "Stack.h"
#include <iostream>
Stack::Stack(int size) {
  this->size = size;
  arr = new double[size];
  top = 0;
}

Stack::Stack() {
  size = 25;
  arr = new double[size];
  top = 0;
}

void Stack::push(double num) {

  arr[top] = num;
  top++;
}

void Stack::pull() { top -= 1; }

int Stack::Sizeof() {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    counter++;
  }
  return counter;
}

void Stack::print() {

  for (int i = 0; i < top; i++) {
    std::cout << arr[i];
  }
}
