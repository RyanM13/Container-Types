#include "ArrQueue.h"
#include <iostream>

Queue::Queue(int size) {
  this->size = size;
  tail = -1;
  head = -1;
  arr = new double[size];
}
Queue::Queue() {
  size = 25;
  arr = new double[size];
  tail = -1;
  head = -1;
}
void Queue::push(double num) {
  tail++;
  arr[tail] = num;
}
double Queue::pop() {
  std::cout << "Popping: " << arr[head++];
  return arr[head++];
}
