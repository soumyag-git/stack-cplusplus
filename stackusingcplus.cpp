#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
};

class stack{
    node *top;
    public:
    stack(){
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
};

void stack::push(int x){
     node *p=new node;

    if(p==NULL){
        cout<<"Stack overflow";
    }
    else{
        p->data=x;
        p->next=top;
        top=p;
    }
}

int stack::pop(){
    int x=-1;
    if(top==NULL){
        cout<<"stack overflow";
    }
    else{
        node *p=top;
        x=p->data;
        top=top->next;
        free(p);
       
    }
    return x;
}

void stack::display(){
    node *p=top;
    while(p){
        cout<<p->data<<"\t";
        p=p->next;
    }
}


int main (){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    //cout<<st.pop();
    st.display();


}