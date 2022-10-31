#include <iostream>
#include <string>

using namespace std; 

struct node
{
    char letter;
    node* link;
};
 
void printout(node* head)
{
    node* p = head; 
    while(p != nullptr)
    {
        cout << p->letter << " ";
        p = p->link; 
    }
    cout << endl; 
}
 
void destroyList(node* head)
{
    node* p = head; 
    while(head->link != nullptr)
    {
        p = head; 
        head = head->link; 
        delete p; 
    }
}

node* createNode(node* head)
{
    node* p = new node; 
    char userChar = 'a';
    cout << "gimme: " ;
    cin >> userChar; 

    p->letter = userChar; 
    p->link = nullptr; 

    head->link = p; 

    return head; 

}

int main()
{
    node* head = nullptr; 
    int i = 0; 
    head->link = createNode(head);
 

    printout(head);
    destroyList(head);
    return 0; 
}