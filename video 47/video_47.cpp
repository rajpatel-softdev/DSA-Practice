// Lacture-> 47 : Detect & Remove Loop in Linked List

//Detect Cycle/Loop in LL
//Remove Cycle/Loop from LL
//Return Begening Node of Cycle/Loop from LL

//First edit in Circular and Singly linked list files

//Floyd's Cycle Detection Algorithem

// Coding Ninjas --> Detect and Remove Loop --> https://bit.ly/3rSdTDo


/*****
 * HomeWork -->
 * there are diffrent ways to detect and remove loop 
 * 
 * to remove -> 5 ways
 * to detect -> 3 ways
 * 
 * explore and lean all
*/

/******************************

 class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
 };

 * *****************************/


#include<iostream>
using namespace std;


class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
 };

Node* floydDetectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);

    if(intersection == NULL){
        return NULL;
    }

    Node* slow = head;

    while(slow != intersection){

        slow = slow->next;
        intersection = intersection->next;
    
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;

}

int main(){


    return 0;
}
