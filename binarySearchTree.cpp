#include<iostream>
#include<queue>

using namespace std;

struct Node{
int data;
Node *left;
Node *right;
};

Node *root=NULL, *n=NULL, *temp=NULL;

bool inputIsValid(string value){
     for (char c : value){
        if(!isdigit(c)){
            return false;
            break;
        }
    }
    return true;
}

bool isEmpty(Node *root){
    return root != nullptr;
    // x = head;
    // if(x != NULL){
    //     return true;
    // }else {
    //     return false;
    // }
}

// Node *createNode(Node *&root, int data){
// n = new Node;
// n->data = data;
// n->left = NULL;
// n->right = NULL;
// root = n;
// return n;
// }

Node *createNode(Node *&root, string value){
    if(inputIsValid(value)){
        n = new Node;
        int temp = stoi(value);
        n->data = temp;
        n->left = NULL;
        n->right = NULL;
        root = n;
        return n;
    }else {
        cout << "input is not valid" << endl;
        return NULL;
    }
}

// void insert(Node *&root, int data){
// if (root==NULL)
// root = createNode(root, data);
// else if (data <= root->data)
// insert(root->left, data);
// else if (data > root->data)
// insert(root->right, data);
// }

void insert(Node *&root, string data){
    if(inputIsValid(data)){
        int temp = stoi(data);
        if (root==NULL)
        root = createNode(root, data);
        else if (temp <= root->data)
        insert(root->left, data);
        else if (temp > root->data)
        insert(root->right, data);
    }else {
        cout << "input is not valid" << endl;
    }
}


// void levelOrder(Node *root){
// if (root==NULL) return;
// queue<Node*> q;
// q.push(root);
// while(!q.empty()){
// cout << q.front()->data << " ";
// if(q.front()->left != NULL)
// q.push(q.front()->left);
// if(q.front()->right != NULL)
// q.push(q.front()->right);
// q.pop();
// }
// }

void levelOrder(Node *root){
    if(isEmpty(root)){
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            cout << q.front()->data << " ";
            if(q.front()->left != NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right != NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }
    }else {
        cout << "data is empty" << endl;
    }
}


// void preOrder(Node *root){
// if (root==NULL) return;
// cout << root->data << " ";
// preOrder(root->left);
// preOrder(root->right);
// }

void preOrder2(Node *root){
    if(isEmpty(root)){
        cout << root->data << " ";
        preOrder2(root->left);
        preOrder2(root->right);
    }else {
        return;
    }
}

void preOrder(Node *root){
    if(isEmpty(root)){
        preOrder2(root);
    }else {
        cout << "data is empty" << endl;
    }
}


// void inOrder(Node *root){
// if (root==NULL) return;
// inOrder(root->left);
// cout << root->data << " ";
// inOrder(root->right);
// }

void inOrder2(Node *root){
    if(isEmpty(root)){
        inOrder2(root->left);
        cout << root->data << " ";
        inOrder2(root->right);
    }else {
        return;
    }
}


void inOrder(Node *root){
    if(isEmpty(root)){
        inOrder2(root);
    }else {
        cout << "data is empty" << endl;
    }
}

// void postOrder(Node *root){
// if (root==NULL) return;
// postOrder(root->left);
// postOrder(root->right);
// cout << root->data << " ";
// }

void postOrder2(Node *root){
    if(isEmpty(root)){
        postOrder2(root->left);
        postOrder2(root->right);
        cout << root->data << " ";
    }else {
       return;
    }
}

void postOrder(Node *root){
    if(isEmpty(root)){
        postOrder2(root);
    }else {
        cout << "data is empty" << endl;
    }
}


// bool cari(Node *root, int data){
// if (root==NULL)
// return false;
// else if(data < root->data)
// return cari(root->left, data);
// else if(data > root->data)
// return cari(root->right, data);
// else
// return true;
// }

bool cari2(Node *root, int data){
    if(isEmpty(root)){
        if(data < root->data){
            return cari2(root->left, data);
        }else if(data > root->data){
            return cari2(root->right, data);
        }else {
            cout << data << " is found" << endl;
            return true;
        }
    }else {
        cout << "data not found" << endl;
        return false;
    }
    
}

void cari(Node *root, string value){
    if(inputIsValid(value)){
        if(isEmpty(root)){
            int data = stoi(value);
            cari2(root, data);
        }else {
            cout << "data is empty" <<endl;
        }
    }else {
        cout << "input is not valid" << endl;
    }
}

// Node *cariMin(Node *root){
// if (root==NULL)
// return NULL;
// while(root->left != NULL)
// root = root->left;
// return root;
// }

Node *cariMin(Node *root){
    if(isEmpty(root)){
        while(root->left != NULL){
            root = root->left;
            // return root;
        }
    }else {
        return NULL;
    }
    return root;
}

// void hapus(Node *&root, int data){
// if (root==NULL)
// return;
// else if(data < root->data)
// return hapus(root->left, data);
// else if(data > root->data)
// return hapus(root->right, data);
// else{
// // kasus I
// if (root->left == NULL && root->right == NULL){
// delete(root);
// root=NULL;
// }
// // kasus II
// else if (root->left == NULL){
// temp = root;
// root = root->right;
// delete(temp);
// temp=NULL;
// }
// else if (root->right == NULL){
// temp = root;
// root = root->left;
// delete(temp);
// temp=NULL;
// }
// // kasus III
// else{
// temp = cariMin(root->right);
// root->data = temp->data;
// hapus(root->right, root->data);
// }
// }
// }

void hapus2(Node *&root, int data){
    if(isEmpty(root)){
        if(data < root->data){
            return hapus2(root->left, data);
        }else if(data > root->data){
            return hapus2(root->right, data);
        }else {
            if(root->left == NULL && root->right == NULL){
                delete(root);
                root = NULL;
            }else if(root->left == NULL){
                temp = root;
                root = root->right;
                delete(temp);
                temp = NULL;
            }else if(root->right == NULL){
                temp = root;
                root = root->left;
                delete(temp);
                temp = NULL;
            }else {
                temp = cariMin(root->right);
                root->data = temp->data;
                hapus2(root->right, root->data);
            }
        }
    }else {
        cout << "data not found" << endl;
        return;
    }
}

void hapus(Node *root, string data){
    if(inputIsValid(data)){
        if(isEmpty(root)){
            int temp = stoi(data);
            hapus2(root, temp);
        }else {
            cout << "data is empty" << endl;
        }
    }else {
        cout << "input is not valid" << endl;
    }
}

void menu(){
    cout << "\n Menu \n1. Create Node \n2. Insert \n3. Tree Traversal Level Order \n";
    cout << "4. Tree Traversal Preorder \n5. Tree Traversal Inoder \n6. Tree Traversal PostOrder \n";
    cout << "7. Search \n8. Delete \n9. keluar \n";
}

void run(){

    Node *n1;

    string pilihan, value;
    int pil = 0;

    while(pil != 9){
        menu();
        cout << "masukan pilihan : "; cin >> pilihan;
        system("clear");
        if(inputIsValid(pilihan)){
            if(pilihan == "1"){
                cout << "masukan nilai : "; cin >> value;
                createNode(n1, value);
                pil = stoi(pilihan);
            }else if(pilihan == "2"){
                cout << "masukan nilai : "; cin >> value;
                insert(n1, value);
                pil = stoi(pilihan);
            }else if(pilihan == "3"){
                cout << "list data secara Tree Traversal Level Order" << endl;
                levelOrder(n1);
                pil = stoi(pilihan);
            }else if(pilihan == "4"){
                cout << "list data secara Tree Traversal Preorder" << endl;
                preOrder(n1);
                pil = stoi(pilihan);
            }else if(pilihan == "5"){
                 cout << "list data secara Tree Traversal Inoder" << endl;
                 inOrder(n1);
                 pil = stoi(pilihan);
            }else if(pilihan == "6"){
                cout << "list data secara Tree Traversal PostOrder" << endl;
                postOrder(n1);
                pil = stoi(pilihan);
            }else if(pilihan == "7"){
                cout << "masukan data yang ingin dicari : "; cin >> value;
                cari(n1, value);
                pil = stoi(pilihan);
            }else if(pilihan == "8"){
                cout << "masukan data yang akan dihapus : "; cin >> value;
                hapus(n1, value);
                pil = stoi(pilihan);
            }else if(pilihan == "9"){
                cout << "terima kasih" << endl;
                pil = stoi(pilihan);
            }else {
                cout << "menu tidak tersedia" << endl;
            }
        }else {
            cout << "menu tidak tersedia" << endl;
        }
    }
}


int main(){

    run();
    
}

