#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h";
using ListNodeGilmore::ListNodePtr;
using ListNodeGilmore::ListNode;
namespace LinkedListGilmore
{
    class LinkedList
    {
    public:
        LinkedList(){}
        LinkedList(ListNodePtr theHead): head(theHead){}
        ~LinkedList();
        void headInsert(int theData){head = new ListNode(theData, head);}
        void setHead(ListNodePtr newHead){head = newHead;}
    private:
        ListNodePtr head;
    };
}
#endif;