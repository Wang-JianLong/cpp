#include <iostream>
#include <cctype>
using namespace std;
long long count = 1;

void str_toupper(string & str);

int main()
{
    cout << "Please enter any phrase or word and I will convert it to uppercase" << endl;
    string str;
    for(;;)
    {
        cout << " " << count << "@:";
        getline(cin,str);
        if (str == "q")
        {
            break;
        }
        str_toupper(str);
        cout << str << endl;
    }
    cout << "Done" << endl;
    return 0;
}

void str_toupper(string & str)
{
    int i;
    for ( i = 0; i < str.size(); ++i)
    {
        str[i] = toupper(str[i]);
    }
}
