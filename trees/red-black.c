#include <stdio.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    struct Node* parent;
    char color;
};

struct Node* root = NULL;

struct Node* create(struct Node* new, struct Node* temp)
{
    if(new == NULL){
        return temp;
    }

    if (temp->data < new->data)
    {
        new->left = create(new->left, temp);
        new->left->parent = new;
    }
    else if (temp->data > new->data)
    {
        new->right = create(new->right, temp);
        new->right->parent = new;
    }

    // Return the (unchanged) node pointer
    return new;
}

void rightRotate(struct Node* temp)
{
    struct Node* left = temp->left;
    temp->left = left->right;
    if(temp->left)
        temp->left->parent = temp;
    left->parent = temp->parent;
    if (!temp->parent)
        root = left;
    else if (temp == temp->parent->left)
        temp->parent->left = left;
    else
        temp->parent->right = left;
    left->right = temp;
    temp->parent = left;
}


void leftRotate(struct Node* temp)
{
    struct Node* right = temp->right;
    temp->right = right->left;
    if (temp->right)
        temp->right->parent = temp;
    right->parent = temp->parent;
    if (!temp->parent)
        root = right;
    else if (temp == temp->parent->left)
        temp->parent->left = right;
    else
        temp->parent->right = right;
    right->left = temp;
    temp->parent = right;
}

void inorder(struct Node* node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}



int main()
{

}