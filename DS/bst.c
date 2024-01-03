
#include<stdio.h>
#include<stdlib.h>

typedef struct BSTNode {
    int data;
    struct BSTNode *left, *right;
} BSTNode;

BSTNode* newNode(int data) {
    BSTNode* temp = (BSTNode*)malloc(sizeof(BSTNode));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

BSTNode* insert(BSTNode* node, int data) {
    if(node == NULL) {
        return newNode(data);
    }
    if(data < node->data) {
        node->left = insert(node->left, data);
    } else if(data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}

BSTNode* minValueNode(BSTNode* node) {
    BSTNode* current = node;
    while(current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

BSTNode* deleteNode(BSTNode* root, int data) {
    if(root == NULL) {
        return root;
    }
    if(data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if(data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if(root->left == NULL) {
            BSTNode* temp = root->right;
            free(root);
            return temp;
        } else if(root->right == NULL) {
            BSTNode* temp = root->left;
            free(root);
            return temp;
        }
        BSTNode* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inOrder(BSTNode* node) {
    if(node == NULL) {
        return;
    }
    inOrder(node->left);
    printf("%d \n", node->data);
    inOrder(node->right);
}

void preOrder(BSTNode* node) {
    if(node == NULL) {
        return;
    }
    printf("%d \n", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(BSTNode* node) {
    if(node == NULL) {
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    printf("%d \n", node->data);
}

int main() {
    BSTNode* root = NULL;
    int ch, data;
    do {
        printf("\n\n------------ MENU --------------\n");
        printf("1. Insertion of node\n");
        printf("2. Deletion of a node\n");
        printf("3. In-order traversal\n");
        printf("4. Pre-order traversal\n");
        printf("5. Post-order traversal\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter the value to be deleted: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;
            case 3:
                inOrder(root);
                break;
            case 4:
                preOrder(root);
                break;
            case 5:
                postOrder(root);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while(ch != 6);
    return 0;
}
