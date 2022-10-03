//Cafe hoepage Project
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int choice, num, option1, option2, id = 2248;
    string oldp = "aprajita19", password, name, newp,surname;
    cout << "JUG MUG THELA" << endl << endl << endl;
    cout << "Login/Sign in" << endl;
    cout << "Enter last four digit of you mobile no." << endl;
    cin >> num;
    if (num == id)   //id is specific last 4 digit of registered mobile no.
    {
        cout << "Enter password" << endl;
        cin >> password;
        if (password == oldp)        //oldp is default password
        {
            cout << "Login Succesfull" << endl;
            system("cls");
            while (1 > 0)
            {
                cout << "JUG MUG THELA" << endl;
                cout << "address: Champa gali, Saket, ND-47" << endl;
                cout << "--------------------------------------------------" << endl << endl << endl;
                cout << "MENU" << endl;
                cout << "1.PIZZA" << endl;
                cout << "2.BURGER" << endl;
                cout << "3.Exit Window" << endl << endl;
                cout << "Search ";
                cin >> choice;
                system("cls");
                switch (choice)
                {
                case 1:
                    cout << "PIZZA" << endl << endl;
                    cout << "1.Margerhita(rs 300)" << endl;
                    cout << "2.Corn & Chesse(rs 220)" << endl;
                    cout << "3.Chicken Cheese(rs 390)" << endl << endl;
                    cout << "Order Your Food" << endl;
                    cin >> option1;
                    system("cls");
                    switch (option1)
                    {
                    case 1:
                        cout << "You have successfully ordered Margerhita Pizza" << endl;
                        cout << "Total Amount: 300rs" << endl<<endl;
                        break;

                    case 2:
                        cout << "You have successfully ordered Corn & Cheese Pizza" << endl;
                        cout << "Total Amount: 220rs" << endl<<endl;
                        break;

                    case 3:
                        cout << "You have successfully ordered Chicken Cheese Pizza" << endl;
                        cout << "Total Amount: 390rs" << endl<<endl;
                        break;

                    default:
                        cout << "Invalid Option" << endl<<endl;
                        break;
                    }
                    break;
                case 2:
                    cout << "BURGER" << endl << endl;
                    cout << "1.Cheese(rs 240)" << endl;
                    cout << "2.Aalo Tikki(rs 120)" << endl;
                    cout << "Order Your Food" << endl;
                    cin >> option2;
                    system("cls");
                    switch (option2)
                    {
                    case 1:
                        cout << "You have successfully ordered Cheese Burger" << endl;
                        cout << "Total Amount: 240rs" << endl<<endl;
                        break;

                    case 2:
                        cout << "You have successfully ordered Aalo Tikki Burger" << endl;
                        cout << "Total Amount: 120rs" << endl<<endl;
                        break;

                    default:
                        cout << "Invalid Option" << endl<<endl;
                        break;
                    }
                    break;
                    
                case 3:
                    exit(0);

                default:
                    cout << "Invalid Option" << endl << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "Wrong Password" << endl << endl;
            cout << "A link has been sent to your mail to create new password" << endl;
            exit(0);
        }
    }
    if(num != id)
    {
        cout << "SING-IN" << endl << endl;
        cout << "Enter your Fist Name" << endl;
        cin >> name;
        cout << "Enter your Last Name" << endl;
        cin >> surname;
        cout << "Create Password" << endl;
        cin >> newp;
        cout << "Name: " << name + surname << endl;
        cout << "Password: " << newp << endl<<endl;
        cout << "Password Reset Successfull" << endl;
    }
    return 0;
}