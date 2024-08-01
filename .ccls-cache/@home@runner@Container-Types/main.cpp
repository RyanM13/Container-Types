#include "Stack.h"
#include <iostream>

void ArrStack(Stack);

int main() {
  Stack numbers;
  ArrStack(numbers);
}

void ArrStack(Stack numbers) {

  numbers.push(5);
  numbers.push(6);
  numbers.print();
  numbers.pull();
  std::cout << std::endl;
  numbers.print();

  for (int i = 0; i < numbers.Sizeof(); i++) {
    numbers.push(i);
  }
  numbers.print();
}