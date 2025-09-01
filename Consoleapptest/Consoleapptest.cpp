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

int ascii()
{
    print("_____________________ ________");
    print("___  __/__|__  /__  // /__|__ \\_______ _____  _______  __");
    print("__  /   ___/_ < _  // /_____/ /__  __ `/_  / / /__  / / /");
    print("_  /    ____/ / /__  __/_  __/ _  /_/ / / /_/ / _  /_/ / ");
    print("/_/     /____/    /_/   /____/ _\\__, /  \\__,_/  _\\__, /");
    print("                               /____/           /____/   ");
}

// remember to make sure the compiler can SEE the func BEFORE it is called, so that it doesnt complain. 
int main()
{
    ascii();
    print("Hello World");
    print("this took me longer then i would have hoped for");
    
    
    // this allows it to stay open when compiled as an EXE, as the debug compiles it so that it will notkill after it is done. 
    system("PAUSE");
}