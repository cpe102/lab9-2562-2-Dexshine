#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
    ifstream score("score.txt");
    double count=0,sum=0,zsquarex=0;
    string text;
    while(getline(score,text)){
        sum += atof(text.c_str());
        zsquarex += pow(atof(text.c_str()),2);
        ++count;

    }
    double deviation,mean;
    mean = sum/count;
    deviation = sqrt(((1/count) * (zsquarex)) - pow(mean,2));
    cout << "Number of data = " << count << " ";
    cout << "Mean = " << mean << " ";
    cout << "Standard deviation = " << deviation;
    return 0;
}
