class LlStack {
private:
  struct node {
    int data;
    node *next;
  };
  node *head;

public:
  LlStack();
  LlStack(int size);

  void push(int num);
  void pop();
};