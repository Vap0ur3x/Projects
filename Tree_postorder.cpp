#include <iostream>

using namespace std;
// Binary tree with data and pointers to left and right child`s
struct node
{
	int data;
	node* left;
	node* right;
};

struct node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    cout << node->data << " ";
}
// test for postorder
int main()
{
	node* root = NULL;
	root -> right = new node(2);
	root -> left = new node(3);
	root -> left -> left = new node(4);
	root -> left -> right = new node(5);

	cout << "Postorder traversal of binary tree is: ";
    printPostorder(root);

	return 0;
}
