#include <iostream>
#include <string>
using namespace std;

class STUDENT {                //this outputs name, age=0 and ID=0, empty class basically, ready to take in data

    public:

     STUDENT(){

         name ;                 //constructor that initializes variables
         age = 0;
         ID = 0;

    }

       void set_name(string studentname){

           name = studentname;

       }
       string get_name(){

           return name;

       }
       void set_age(int studentage){

           age = studentage;

       }
       int get_age(){

           return age;

       }
       void set_ID(int studentid){

           ID = studentid;

       }
       int get_ID(){

           return ID;

       }

    void DISPLAY (){                     //display method

        cout<<"Student name is: "<<get_name()<<endl<<"Student age is: "<<get_age()<<endl<<"Student ID is: "<<get_ID()<<endl;

    }

    private:              

       string name;
       int age;
       int ID;


};

int Menu(int option) {

    switch (option) {

    case 1:
        cout<<"Add student"<<endl;
                    break;
    case 2:
        cout<<"View students"<<endl;
                    break;
    case 3:
        cout<<"Exit"<<endl;
                    break;

    }
    return 0;
}

int Loop(int option){

    do{

        cout<<"Choose option 1 for add student, 2 for view students or 3 for exit"<<endl;
        cin>>option;
        Menu(option);

    }

    while (option != 3);
        return 0;

}

int main()
{
    int option;
    cout<<"Choose option 1 for add student, 2 for view students or 3 for exit"<<endl;
    cin>>option;

    STUDENT studentInfo;
    studentInfo.DISPLAY();

    Loop(option);

    return 0;
}
