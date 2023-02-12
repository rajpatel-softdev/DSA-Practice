// Pointers Part - 2

// found answer for that "Nisarg's ajib syntax" here
// if we print pointer of an character array, it will print the content(till null found) of the array NOT address

#include <iostream>
using namespace std;

int main()
{

    /*
    int a[5];
    int *c;
    cout<<sizeof(a)<<" "<<sizeof(c);
    */
    /*
     int arr[] = {4,5,6,7};
     //cout<< *(a) << " " << *(a+1);
     int *p = (arr + 1);
     cout<< *arr<<endl;

     cout<<sizeof(arr);

     char b[] = "xyz";
     char *c = &b[0];
     cout<<c<<endl;
     */
    /*
    char ch[] = "abc";
    char *p = &ch;
    cout << *p <<endl;
     */
    /*
    int firstvalue = 5;
    int secondvalue = 15;
    char thirdvalue = 'a';

    int *p1, *p2;
    char *p3;

    p1 = &firstvalue;
    p2 = &secondvalue;
    p3 = &thirdvalue;

    *p1 = 10;
    *p2 = *p1;
    p1 = p2;

    *p1 = 20;
    *p3 = 'b';

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    */
    /*
    char s[] = "hello";
    char *p = s;
    cout<< s[0]<< " "<<p[0];
    */
    /*
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p = &numbers[2];
    *p = 20;
    p--;
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p+4) = 50;
    for(int i=0; i<5; i++){
        cout<<numbers[i]<<",";
    }
    */
    /*
    char st[] = "ABCD";
    for(int i=0; st[i]!='\0';i++){
        cout<< st[i]<< *(st)+i<< *(i+st)<< i[st];
    }
    */

    

    return 0;
}