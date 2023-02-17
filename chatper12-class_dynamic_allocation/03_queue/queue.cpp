#include "queue.h"

Queue::Queue(int qs) : qsize(qs),items(0) // 初始化成员常量qsize 非静态 但不限于const成员变量 // 常量和引用必须使用该初始化方式 它们只能被创建时初始化
{
  head = tail = nullptr;
  // items = 0;
}

Queue::~Queue()
{
  // 若是释放对象本身则清除所有指针
  Node * temp;
  while(head != nullptr)
  {
    temp = head;
    head = temp->next;
    delete temp;
  }
}

bool Queue::isempty()const
{
  return items == 0;
}

bool Queue::isfull() const
{
  return items == qsize;
}

bool Queue::enqueue(const Item & item)
{
  if (isfull())
    return false;
  Node * n = new Node;
  n->data = item;
  n->next = nullptr;

  if (head == nullptr)
    head = n;
  else
    head->next = n;
  tail = n;
  items++;
  return true;
}

bool Queue::dequeue(Item & item)
{
  if(isempty())
    return false;
  item = head->data;
  items--;

  Node * tmp = head;
  head = tmp->next;
  delete tmp;
  if (items == 0)
    tail = nullptr;
  return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}

