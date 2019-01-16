//  main.cpp
//  height
//  Created by Atul Bansal on 06/09/18.
//  Copyright © 2018 Atul Bansal. All rights reserved.
#include <iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
//
struct node
{
    int data;
    struct node *l,*r;
};
//
struct node *newNode(int key)
{
    struct node* temp = new node;
    temp->data = key;
    temp->l = temp->r = NULL;
    return temp;
};
//
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
//
int height(struct node *temp)
{
    if(temp==NULL)    return 0;
    else    return 1+max(height(temp->l),height(temp->r));
}
//
void dia(struct node *temp,int *arr)
{
    if(temp->r==NULL&&temp->l==NULL)
        return;
    int lh = height(temp->l);
    int rh = height(temp->r);
    
    int h = 1+lh+rh;
    
    if(h>*arr)
    {
        *arr=h;
        dia(temp->l,arr);
    }
    else
    dia(temp->r,arr);
}
//
int main() {
    // your code goes here
    struct node *root = newNode(1);
    root->l = newNode(2);
    root->l->l = newNode(4);
    root->l->r = newNode(5);
    
    root->r = newNode(3);
    root->r->l = newNode(6);
    root->r->r = newNode(7);
    root->r->r->r= newNode(7);
    root->r->r->r->l = newNode(7);
    
    cout<<height(root)<<endl;
    int *arr;
    arr = (int *)calloc(1, sizeof(int));
    dia(root,arr);
    cout<<*arr<<endl;
    return 0;
}
