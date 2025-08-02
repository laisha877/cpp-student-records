#include <iostream>
using namespace std;

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
            
            cout<<"Choose option 1, 2 or 3"<<endl;
            cin>>option;
            Menu(option);
            
        }
        
        while (option != 3);
            return 0;
            
    }
    
int main()
{
        
    int option;
    cout<<"Choose option 1, 2 or 3"<<endl;
    cin>>option;
    Loop(option);
    
	
	return 0;
}