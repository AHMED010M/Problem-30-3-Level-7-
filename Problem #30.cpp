#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string Ch1;
    cout << "Please Enter a String?\n";
    getline(cin, Ch1);
    return Ch1;
}


char ReadCharacter() {
    char Ch1;
    cout << "Please Enter a String?\n";
    cin >> Ch1;
    return Ch1;
}


int CounterRepitedLetter(string name,char Character)
{
 
  
    int counter = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == Character)
        {
            counter++;

        }

    }


    return counter;
   
}

int main() 
{

    string name = ReadName();
    char ch1 = ReadCharacter();

    cout <<"Letter '"<< ch1 <<"'count = " << CounterRepitedLetter(name, ch1);
  

    


}
