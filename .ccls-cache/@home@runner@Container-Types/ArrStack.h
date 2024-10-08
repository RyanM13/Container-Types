#pragma once
class Stack {
private:
  int size;
  int top;
  double *arr;
  // default constructor
  // Did inline constructor because it was only a single line
public:
  Stack();
  // Parameterized constructor
  Stack(int size);
  ~Stack() { delete[] arr; }

  void push(double);
  void pop();
  bool isfull();
  bool isempty();
  int Sizeof();
  void print();
  void Top();
};