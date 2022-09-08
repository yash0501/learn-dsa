// C++ program to delete element in binary tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has key, pointer to left
child and a pointer to right child */
struct Node {
	int key;
	struct Node *left, *right;
};

/* function to create a new node of tree and
return pointer */
struct Node* newNode(int key)
{
	struct Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
};

/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
	if (!temp)
		return;
	inorder(temp->left);
	cout << temp->key << " ";
	inorder(temp->right);
}

/* function to delete the given deepest node
(d_node) in binary tree */
// void deletDeepest(struct Node* root, struct Node* d_node){
//     if(root == NULL){
//         return;
//     }
// 	if(root==d_node){
// 	    delete d_node;
// 	    root=NULL;
// 	    return;
// 	}
// 	if(root->left==d_node){
// 	    delete d_node;
// 	    root->left=NULL;
// 	    return;
// 	}
// 	if(root->right==d_node){
// 	    delete d_node;
// 	    root->right=NULL;
// 	    return;
// 	}
// 	deletDeepest(root->left, d_node);
// 	deletDeepest(root->right, d_node);
// }

/* function to delete element in binary tree */
Node* deletion(struct Node* root, int key){
	if(root == NULL){
	    return NULL;
	}
	if(root->left==NULL&&root->right==NULL){
	    if(root->key==key){
	        return NULL;
	    }
	    else{
	        return root;
	    }
	}
	queue<Node *> q;
	q.push(root);
	Node * key_node = NULL;
	Node * last_node = NULL;
	Node * t;
	// key_node = node to be deleted, t = node to be replaced, last_node = parent of last node to be replaced
	while(!q.empty()){
	    t = q.front();
	    q.pop();
	    if(t->key==key){
	        key_node=t;
	    }
	    if(t->left!=NULL){
	        q.push(t->left);
	        last_node = t;
	    }
	    if(t->right!=NULL){
	        q.push(t->right);
	        last_node = t;
	    }
	}
	if(key_node){
	    key_node->key = t->key;
	    if(last_node->left == t){
	        last_node->left = NULL;
	    }
	    if(last_node->right == t){
	        last_node->right = NULL;
	    }
	    delete(t);
	}
	return root;
}

// Driver code
int main()
{
	struct Node* root = newNode(10);
	root->left = newNode(11);
	root->left->left = newNode(7);
	root->left->right = newNode(12);
	root->right = newNode(9);
	root->right->left = newNode(15);
	root->right->right = newNode(8);

	cout << "Inorder traversal before deletion : ";
	inorder(root);

	int key = 11;
	root = deletion(root, key);

	cout << endl;
	cout << "Inorder traversal after deletion : ";
	inorder(root);

	return 0;
}
