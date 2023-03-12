#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    // Approch 1:
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        
        if(temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else if (temp->data == 2)
            twoCount++;

         temp = temp -> next;

    }

    temp = head;

    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
    return head;




    // Approch 2: when data replacement is not allowed

    //declaring pointers and dummy nodes
    // Node* zeroHead = new Node(-1);
    // Node* zeroTail = zeroHead;
    // Node* oneHead = new Node(-1);
    // Node* oneTail = oneHead;
    // Node* twoHead = new Node(-1);
    // Node* twoTail = twoHead;

    // Node* curr = head;

    // //creating separate lists for 0s, 1s, and 2s
    // while(curr != NULL) {
        
    //     int value = curr -> data;
        
    //     if(value == 0) {
    //         insertAtTail(zeroTail, curr);
    //     }
    //     else if(value == 1) {
    //         insertAtTail(oneTail, curr);
    //     }
    //     else if(value == 2) {
    //         insertAtTail(twoTail, curr);
    //     }       
    //     curr = curr -> next;
    // }

    // //merging 3 lists

    // // 1s list not empty
    // if(oneHead -> next != NULL) {
    //     zeroTail -> next = oneHead -> next;
    // }
    // else {
    //     //1s list -> empty
    //     zeroTail -> next = twoHead -> next;
    // }

    // oneTail -> next = twoHead -> next;
    // twoTail -> next = NULL;

    // // head pointing
    // head = zeroHead -> next;


    // //deleting dummy nodes
    // delete zeroHead;
    // delete oneHead;
    // delete twoHead;


    // return head;

}

int main(){
    return 0;
}