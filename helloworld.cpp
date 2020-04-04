#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int main()
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    assert( 5 == msg.size() );

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
} 