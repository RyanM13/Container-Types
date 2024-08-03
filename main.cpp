#include "ArrQueue.h"
#include "ArrStack.h"
#include <iostream>

void ArrStack(Stack &);
void LLStack(Stack &);
void ArrQueue(Queue &);

int main() {
  Stack numbers;
  Queue num;
  int choice;
  std::cout << "Which container would you like to use?\n ";
  std::cout << "1. Array based stack\n2. linked list based stack\n3. Array "
               "based queue\n4. Lined list based queue\n";
  std::cin >> choice;
  switch (choice) {
  case 1:
    ArrStack(numbers);
    break;
  case 2:
    LLStack(numbers);
    break;
  case 3:
    ArrQueue(num);
    break;
  default:
    std::cout << "You have to select one";
    break;
  }
}

void ArrStack(Stack &numbers) {

  numbers.push(24);
  numbers.push(25);

  //  numbers.push(26);
  std::cout << numbers.Sizeof();
}

void LLStack(Stack &numbers) {}

void ArrQueue(Queue &num) {
  num.push(24);
  num.push(34);
  num.push(4);
  num.pop();
}