#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
typedef struct tree_trie
{
	struct tree_trie* arr[26];

	bool isEndOfWord;
}trie; 

trie* createNode()
{
	trie* nn = (trie *)malloc(sizeof(trie));
	for(int i=0;i<26;i++)
	{
		nn->arr[i]=0;
	}
	nn->isEndOfWord=false;
	return nn;
}

void insert(trie* curr,char *str)
{
	for(int i=0;i<strlen(str);i++)
	{
		if(curr->arr[str[i]-'a'])
			curr=curr->arr[str[i]-'a'];
		else
		{
			trie* nn = createNode();
			curr->arr[str[i]-'a']=nn;
			curr=nn;
		}
	}
	curr->isEndOfWord=true;
	
}
bool search(trie *root, char *key) 
{ 
    trie* nn = root; 
  
    for (int i = 0; i < strlen(key); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!nn->arr[index]) 
            return false; 
  
        nn = nn->arr[index]; 
    } 
  
    return (nn != NULL && nn->isEndOfWord); 
} 
int de(trie *root,char *str,int index)
{
	if(index==strlen(str))
	{
		if(!root->isEndOfWord)  return false;

		
	}
}
bool sh(trie* root,char *key,int index)
{
	if(root == NULL)
		return false;

}
int main()
{
	char *a;
	a=(char*)calloc(50,1);
	trie* node = createNode();
	scanf("%s",a);
	insert(node,a);
	insert(node,a);
  	search(node, "atc")? cout << "Yes\n" : cout << "No\n"; 
	
}