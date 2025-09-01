#include <iostream>
#include <string>
using namespace std;

// I have no idea what i am doing though 
// this func is meant to send a string through a value and then print it to the console. 
// this took me too long to make maybe cuz i have no damn clue what i am doing lmao 
void print(string printval)
{
    cout << printval << endl;
}

int main()
{
    print("Hello World");
    print("this took me longer then i would have hoped for");
    // this allows it to stay open when compiled as an EXE, as the debug compiles it so that it will notkill after it is done. 
    system("PAUSE");
}