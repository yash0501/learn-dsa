// C++ program to print size of tree in iterative
#include<iostream>
#include<queue>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

// A utility function to
// create a new Binary Tree Node
Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

// return size of tree
int sizeoftree(Node *root)
{
    if(root==NULL){
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    int ans=1;
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            ans++;
        }
        if(temp->right){
            q.push(temp->right);
            ans++;
        }
    }
    return ans;
}

// Driver Code
int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Size of the tree is " <<
		sizeoftree(root) << endl;
	return 0;
}

// This code is contributed by SHAKEELMOHAMMAD
