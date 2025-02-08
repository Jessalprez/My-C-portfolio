#include <iostream>

using namespace std;

int main()
{
    int optionNum;
    char optionChar;
    do{
        system("cls");
        cout<< endl;
        cout<< "1.- Simple text edit" <<endl;
        cout<< "2.- Bank Managment System" <<endl;
        cout<< "3.- Library Managment System" <<endl;
        cout<< "4.- Custom shell" <<endl;
        cout<< "5.- Tic-Tac-Toe" <<endl;
        cout<< "6.- Mini Calculator" <<endl;
        cout<< "7.- File Compression tool" <<endl;
        cout<< "8.- Employee record system" <<endl;
        cout<< "9.- Snake game" <<endl;
        cout<< "10.- Weather Data Logger" <<endl;
        cout<< "0.- Exit" <<endl;
        cout<< "Please enter a valid option with the number of the desired program." <<endl;
        cin>>optionNum;

        switch(optionNum){
            case 0:
                system("cls");
                cout<< endl;
                cout<< "\tAre you sure you want to exit the program?"<<endl;
                cout<< "\tY = yes" <<endl;
                cout<< "\tN = no" <<endl;
                cout<< "\tOption: ";
                cin>>optionChar;
                if(optionChar == 'Y' || optionChar == 'y'){
                    optionChar = '0';
                } else if (optionChar == 'N' || optionChar == 'n'){
                    optionChar = ' ';
                } else{
                }
                cout<< "Exiting..." <<endl;
                break;
            case 1:
                cout<< "Entring in Simple text edit..." <<endl;
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;
            case 8:

                break;
            case 9:

                break;
            case 10:

                break;
        }
    }while(optionNum != 0);

    return 0;
}
