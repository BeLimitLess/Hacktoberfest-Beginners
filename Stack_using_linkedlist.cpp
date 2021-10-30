#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
     T data;
     Node<T> *next;
     Node(T data)
     {
          this->data = data;
          next = NULL;
     }
};

template <typename T>
class Stack
{
     Node<T> *head;
     int size;

public:
     Stack()
     {
          head = NULL;
          size = 0;
     }
     int getSize()
     {
          return size;
     }
     bool isEmpty()
     {
          return size == 0;
     }
     void push(T ele)
     {
          Node<T> *node = new Node<T> ele;
          node->next = head;
          head = node;
          size++;
     }
     void pop()
     {
          if (isEmpty())
          {
               cout << "Stack is empty" << endl;
               return;
          }
          Node<T> *tmp = head;
          head = head->next;
          tmp->next = NULL;
          delete tmp;
          size--;
     }

     T top()
     {
          if (isEmpty())
          {
               cout << "Stack is empty" << endl;
               return;
          }
          return head->data;
     }
};

int main()
{
     Stack<int> s;
     return 0;
}
