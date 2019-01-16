#include <iostream>
#include<stack>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *l,*r;
};

struct node *newNode(int key)
{
    struct node* temp = new node;
    temp->data = key;
    temp->l = temp->r = NULL;
    return temp;
};


void inorder(struct node *temp)
{
    if(temp==NULL)
    return ;
    
    inorder(temp->l);
    
    std::cout << temp->data<<" ";
    
    inorder(temp->r);
    
}

void preorder(struct node *temp)
{
    if(temp==NULL)
    return ;
    
    std::cout << temp->data << " ";
    preorder(temp->l);
    preorder(temp->r);
}

void postorder(struct node *temp)
{
    if(temp==NULL)
    return ;
    
    postorder(temp->l);
    postorder(temp->r);
    std::cout << temp->data << " ";
}

int main() {
	// your code goes here
	struct node *root = newNode(1);
	root->l = newNode(2);
	root->l->l = newNode(4);
	root->l->r = newNode(5);
	
	root->r = newNode(3);
	root->r->l = newNode(6);
    root->r->r = newNode(7);
    
    inorder(root);
    cout<<endl;
	preorder(root);
    cout<<endl;
	postorder(root);
	return 0;
}
