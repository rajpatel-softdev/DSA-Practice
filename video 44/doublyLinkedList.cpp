//Implimantation of Doubly Linked List
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //destuctor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }


};

//traversing and printing a linked list
void print(Node* head){
    if(head == NULL){
        cout << "No Element Present in LL!!!" <<endl;
        return;
    }

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "END" << endl;
}

//gives length of LL
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//insert at head
void insertAtHead(Node* &head, Node* &tail, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

//Insert at Tail
void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}

//insert at position
void insertAtPosition(Node* &head, Node*tail, int position, int d){

    //insert at start
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at last position
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    //creating a node
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

//Deletion
void deleteNode(Node* &head, int position){

    //deleting first node
    if(position == 0){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }

}

int main(){
    cout << endl;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head,tail,11);
    print(head);

    cout << "Head = " << head->data <<endl;
    cout << "Tail = " << tail->data <<endl;

    insertAtTail(head,tail,12);
    print(head);

    cout << "Head = " << head->data <<endl;
    cout << "Tail = " << tail->data <<endl;

    insertAtPosition(head,tail,3,13);
    print(head);

    cout << "Head = " << head->data <<endl;
    cout << "Tail = " << tail->data <<endl;

    // deleteNode(head,2);
    // print(head);


    cout << endl;
    return 0;
}