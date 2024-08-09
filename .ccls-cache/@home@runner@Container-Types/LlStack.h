class LlStack {
private:
  struct node {
    int data;
    node *next;
    node *head;
  };

public:
  LlStack();
  LlStack(int size);

  void push(node *, int num);
  void pop(node *);
  void print();
};