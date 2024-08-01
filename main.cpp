#include "Stack.h"
#include <iostream>

void ArrStack(Stack &);
void LLStack(Stack &);

int main() {
  Stack numbers;
  ArrStack(numbers);
}

void ArrStack(Stack &numbers) {

  for (int i = 0; i < numbers.Sizeof() - 1; i++) {
    numbers.push(i);
  }
  numbers.push(24);
  numbers.push(25);

  //  numbers.push(26);
  std::cout << numbers.Sizeof();
}

void LLStack(Stack &numbers) {}