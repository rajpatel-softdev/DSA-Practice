//OOPs in C++ --> Part 1
//in case of empty class, size will be 1 byte, for identification
//class can also be created in other file --> "Hero.cpp"
// HW 1 --> Search about Pedding and Greedy Alignmenet

#include<iostream>
//#include "Hero.cpp"
using namespace std;

//creaction of class
class Hero{

    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //contructor
    Hero(){
        cout<<"Object created and Contructor Invoked"<<endl;
        name = new char[100];
    }

    //paramitarised constructor
    Hero(int health){
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    //copy constructor --> for deep copy
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: "<<this->level<<" ]";
    }

    static int random(){
        return timeToComplete;
    }

    //Getter Methods
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //Setter Methods
    void setHealth(int n){
        health = n;
    }

    void setLevel(char a){
        level = a;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }

};

int Hero::timeToComplete = 5;

int main(){

    cout<<endl;

    
    //cout << Hero::random() <<endl;
    
    //cout << Hero::timeToComplete <<endl;

    /*
    //Understanding Destructors

    //Statically allocated
    Hero a;

    //dynmically allocated
    Hero *b = new Hero();
    //for Dynamically allocated Object, we Need to Delete Manually
    delete b;

    //Static apane aap ho jaayega
    */

    /*
    //shellow & deep copy
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "babbar";
    hero1.setName(name);

    hero1.print();

    //using default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';   //Changing name for hero1
    hero2.print();
    */

    /*
    //Copy constructor
    Hero suresh(70,'B');
    suresh.print();

    Hero ramesh(suresh);
    ramesh.print();
    */

    /*
    //object created statically
    Hero ramesh;

    //paramitarisex constuctors
    Hero temp(10,'A');
    */

    /*
    //static allocation
    Hero a;
    a.setLevel('B');
    a.setHealth(80);
    cout<<"Level is: "<<a.level<<endl;
    cout<<"Health is: "<<a.getHealth()<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;
    */


    //creation of Object
    /*
    //This is Static Allocation
    Hero h1;

    cout<<endl<<"Size = "<<sizeof(h1);  //in case of empty class, size = 1 byte, for identification  
    */
    /*
    Hero ramesh;
    cout<<"Size = "<<sizeof(ramesh)<<endl;  //should be 5, but output=8  
    //Search WHY??? --> HW 1

    //ramesh.health = 70;
    //ramesh.level = 'A';

    ramesh.setHealth(70);
    ramesh.setLevel('A');

    cout<<"Health = "<<ramesh.getHealth()<<endl;
    cout<<"Level = "<<ramesh.level<<endl;
    */

    cout<<endl<<endl;
    return 0;
}