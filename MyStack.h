#ifndef MyStack_h
#define MyStack_h

template <class INF,class FRIEND>
class ListNode{
    INF d;
    ListNode* next;
    ListNode() { next = nullptr; }
    friend FRIEND;
};


template <class INF >
class MyStack{
public:
    MyStack();
    ~MyStack();
    bool empty();
    bool push(INF n);
    bool pop();
    INF top_inf();
private:
    typedef class ListNode < INF, MyStack <INF> > Node;
    Node* top;
};
#endif