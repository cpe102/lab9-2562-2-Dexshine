#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
    ifstream cheerbook;
    cheerbook.open("F:\\cpp\\261102\\lab9-2562-2-Dexshine\\cheerbook.txt");
    ofstream cheerbook_copy;
    cheerbook_copy.open ("F:\\cpp\\261102\\lab9-2562-2-Dexshine\\cheerbook_copy.txt");
    cheerbook_copy << "“-------------------- SOTUS ---------------------”"<<endl;
    string text;
    while(getline(cheerbook,text)){
        cheerbook_copy << text << endl;
    }
    cheerbook_copy << "“-------------------- SOTUS ---------------------”"<<endl;
    cheerbook_copy.close();
    cheerbook.close();
    ifstream cheerbook_copy2; 
    cheerbook_copy2.open ("F:\\cpp\\261102\\lab9-2562-2-Dexshine\\cheerbook_copy.txt");
    
    while(getline(cheerbook_copy2,text)){
        cout << text << endl;
    }
    
    cheerbook_copy2.close();

    return 0;
}