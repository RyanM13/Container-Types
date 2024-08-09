#include "LlStack.h"

LlStack::LlStack() {

  head = nullptr;
  node *newNode = new node();
  newNode->next = nullptr;
}

LlStack::LlStack(int num) {

  head = nullptr;
  node *newNode = new node();
  newNode->next = nullptr;
  newNode->data = num;
}

void LlStack::push(node *newNode, int num) { newNode->data = num; }

void LlStack::pop(node *newNode) {

  node *poppednode = new node();
  poppednode = newNode->head;
}