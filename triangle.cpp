#include <iostream>
using namespace std; 

void printTriangle()
{
   int variableAmount = 10; 
    for(int i = 0; i < 10; i++)
    {
        for(int k = variableAmount; k > 0; k--)
        {
            cout << " ";
        }

        cout << "*" ;

        for(int j = 0; j < i*2; j++)
        {
            cout << "*";
        }

        cout << endl; 
        variableAmount--; 
    }
}


int main()
{
    printTriangle(); 
}

