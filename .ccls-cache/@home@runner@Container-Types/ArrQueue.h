#include <iostream>

class Queue {
private:
  int head;
  int tail;
  int size;
  double *arr;

public:
  Queue(int);
  Queue();
  ~Queue() { delete[] arr; }

  void push(double);
  double pop();
};