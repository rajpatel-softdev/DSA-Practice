//Implimantation of SINGLY LINKED LIST
#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;

        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with Data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d){

    //creating a new node
    Node* temp = new Node(d);
    
    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    //creating a new node
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* & tail, int position, int d){

    //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    //Insert at position
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at last
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating new node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(Node* &head,Node* &tail, int position){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or Last Node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        tail = prev;              //updating tail, was HW

        //Memory Free
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){

    if(head == NULL){
        cout << "Link List is Empty!!!" << endl;
        return;
    }

    Node* temp = head;
    
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "END" <<endl;

}

int main(){
    cout << endl;

    //creaing a new node
    Node* node1 = new Node(10);
    //cout << node1->data <<endl;
    //cout << node1->next <<endl;
    
    //assigninh head and tail
    Node* head = node1;
    Node* tail = node1;
    
    //inserting at tail
    insertAtTail(tail,12);
    insertAtTail(tail,15);

    print(head);

    insertAtPosition(head,tail,4,20);

    print(head);

    deleteNode(head,tail,4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;



    //Insertion At HEAD
    /*
    //assigning Node1 to Head
    Node* head = node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head, 15);
    print(head);
    */

    cout << endl;
    return 0;
}