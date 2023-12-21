

#include <iostream>
#include "List/Graph/Graph.h"
#include <fstream>
#include <string>

int main() {
    using namespace std;
    fstream dictionary_file;

    ifstream input("../turkish-dictionary.txt");
    while(!input.eof())
    {
        char *text1;
        char text2;

        input.getline(text1, text2);
        cout<<"text"<< endl;
    }
    return 0;
}