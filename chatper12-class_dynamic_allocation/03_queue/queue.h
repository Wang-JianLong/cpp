#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <cstdlib>
class Customer{
    private:
        long arrive;
        int processtime;
    public:
        Customer(){arrive = processtime = 10;}
        void set(long when);
        long when() const {return arrive;};
        int ptime() const {return processtime;}
};



typedef Customer Item;
class Queue
{
    private:
        enum {SIZE = 10};
        struct Node
        {
            Item data;
            Node * next;
        };
        // data 
        Node * head;
        Node * tail;
        int items;
        const int qsize;
        // 禁止复制和复制 只允许引用传递
        Queue(const Queue &);
        Queue & operator=(const Queue&);
    public:
        Queue(int i = SIZE);
        ~Queue();
        // methods
        bool isempty() const ;
        bool isfull() const;
        int queuecout() const;
        bool enqueue(const Item & item);
        bool dequeue(Item & item);
};
#endif
