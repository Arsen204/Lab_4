#include <iostream>
#include "MyStack.h"
#include "MyStack.cpp"
using namespace std;

void Multipliers(int n, MyStack<int> &stack);

int main(){
    MyStack<int> stack;
    MyStack<int> stack1;
    int n;

    cin>>n;
    cout<<n<<" = ";
    int flag = 0;

    Multipliers(n, stack);

    while(!stack.empty())
    {
        ++flag;
        if (flag > 1) cout<<" * ";
        cout<<stack.top_inf();
        stack1.push(stack.top_inf());
        stack.pop();
    }

    cout<<endl;
    cout<<n<<" = ";
    flag = 0;

    while(!stack1.empty())
    {
        ++flag;
        if (flag > 1) cout<<" * ";
        cout<<stack1.top_inf();
        stack1.pop();
    }
    return 0;
}

void Multipliers(int n, MyStack<int> &stack){
    int div = 2;
    while (n > 1)
    {
        while (n % div == 0)
        {
            stack.push(div);
            n = n / div;
        }
        if (div == 2) div++;
        else div += 2;
    }
}

