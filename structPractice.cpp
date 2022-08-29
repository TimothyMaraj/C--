#include <iostream>

using namespace std; 

    struct UserCommand
    {
        string userInput; 
        string consoleOut;
    };

    void userCall(UserCommand userArray[])
    {
        string userInput = ""; 
        for(int i = 0; i < 2;i++)
        {
            cout << "UserCommand: "; 
            cin >> userInput; 
            userArray[i].userInput = userInput; 

            cout << "ConsoleOut:"; 
            cin >> userInput; 
            userArray[i].consoleOut = userInput; 
            
        }

        for(int i = 2; i < 10; i++)
        {
            userArray[i].userInput = "";
            userArray[i].consoleOut = ""; 
        }

        return; 
    }


    void printUser(UserCommand userArray[])
    {
        for(int i = 0; i < 10; i++)
        {
            cout << userArray[i].userInput << endl; 
            cout << userArray[i].consoleOut << endl; 
        }
    }

int main()
{


    UserCommand userArray [10]; 

    userCall(userArray); 
    printUser(userArray);

    return 0; 
}