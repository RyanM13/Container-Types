
class Queue {
private:
  int head;
  int tail;
  int size;
  double *arr;

public:
  Queue(int);
  Queue();

  void push(double);
  double pop();
};