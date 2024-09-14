#include <iostream>

using namespace std;

int main() {
    string name = "Hamid Hussain";
    string ID = "BC240203201";

    cout <<"Student Name:" <<name << endl;
    cout <<"Student ID:" <<ID  << endl;
    cout <<endl;

    int choice;
    char operations;
    double result = 0;
    double num;

    cout <<"Menu:" <<endl;
    cout <<"1. Addition" <<endl;
    cout <<"2. Subtraction" <<endl;
    cout <<"3. Multiplication" <<endl;
    cout <<"4. Division" <<endl;
    cout <<"5. Exit" <<endl;
    cout <<endl;

    do{
        cout <<"Enter your choice:";
        cin >> choice;

        switch(choice){

        case 1:
            operations = '+';
            break;

        case 2:
            operations = '-';
            break;

        case 3:
            operations = '*';
            break;

        case 4:
            operations = '/';
            break;

        case 5:
            cout <<"Exiting....";
            return 0;

        default:

            cout<< "Invalid choice. Please try again."<<endl;
            continue;
        }

        int numoperands;
        cout<< "How many numbers do you want to " <<((choice == 4)? "divide" : "use")<<"?";
        cin>> numoperands;

        if (choice ==  4){
            cout<< "Enter numerator:";
            cin >> result;
            for (int i = 0; i<numoperands; ++i){
                cout <<"Enter denominator:";
                cin >> num;
                if (num == 0){
                    cout <<"Error: Division by zero!" <<endl;
                    result = 0;
                    break;
                }
                result/=num;
            }
        }
        else {
            for (int i = 0 ; i<numoperands; ++i){
                cout<<"Enter number" <<(i+1)<<":";
                cin>>num;
                switch(operations){
                    case'+':
                        result += num;
                        break;

                    case '-':
                        result -= num;
                        break;

                    case '*':
                        result *= num;
                        break;
                    case '/': // Added missing case '*' 
                        result *= num;
                        break;
                }
            }
        }

        cout<< "Result:" <<result<<endl;
    }
    while (true);

    return 0;

}
