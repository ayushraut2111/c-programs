#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
    node *head=new node();
    head->data=45;
    head->link=NULL;
    struct node *current=new node();
    current->data=98;
    current->link=NULL;
    head->link=current;
    cout<<head->data<<" "<<head->link->data<<endl;
    return 0;

}