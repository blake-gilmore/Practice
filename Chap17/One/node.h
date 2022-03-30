#ifndef NODE_H
#define NODE_H
namespace ListNodeGilmore{
class ListNode
{
public:
    ListNode(){}
    ListNode(int theNum, ListNode* theLink): num(theNum), link(theLink){}
    ~ListNode();
    ListNode* getLink(){return link;}
    int getNum(){return num;}
    void setLink(ListNode* newLink) {link = newLink;}
    void setNum(int newNum) {num = newNum;}
private:
    ListNode* link;
    int num;
};
typedef ListNode* ListNodePtr;
}//namespace ListNodeGilmore
#endif;