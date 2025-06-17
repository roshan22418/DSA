#include <iostream>
using namespace std;

#include <vector>

class TrieNode
{
public:
    char ch;
    TrieNode *childNode[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        this->ch = ch;
        for (int i = 0; i < 26; i++)
        {
            this->childNode[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertion(TrieNode *root, string word)
{
    cout<<"after insertion string look like is "<<word<<endl;
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    if (root->childNode[index] != NULL)
    {
        child = root->childNode[index];
    }
    else
    {
        child = new TrieNode(ch);
        root->childNode[index] = child;
    }
    insertion(child, word.substr(1));
}

bool searching(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        if (root->isTerminal)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if (root->childNode[index] != NULL)
    {
        child = root->childNode[index];   
               
    }
    else{
        return false;
    }
    bool ans = searching(child,word.substr(1));  
    return ans;
    
}



void deletion(TrieNode* root,string word){
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if (root->childNode[index] != NULL)
    {
        child = root->childNode[index];
        deletion(child,word.substr(1));
    }
    else{
        return;
    }
    
}

int main()
{
    TrieNode *root = new TrieNode('-');
    insertion(root, "roshan");
    insertion(root, "mohar");
    insertion(root, "rohan");
    insertion(root, "sohan");
    insertion(root, "ros");
    insertion(root, "rosha");

    bool isPresent = searching(root,"roshan");
    if(isPresent){
        cout<<"yes this is present"<<endl;
    }
    else{
        cout<<"NOT FOund"<<endl;
    }
    deletion(root,"roshan");
    bool isPresent1 = searching(root,"roshan");
    if(isPresent1){
        cout<<"yes this is present"<<endl;
    }
    else{
        cout<<"NOT FOund "<<endl;
    }

}