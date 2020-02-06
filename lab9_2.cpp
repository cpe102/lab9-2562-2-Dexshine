//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
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
    cheerbook.close();
    cheerbook_copy.close();

    return 0;
}