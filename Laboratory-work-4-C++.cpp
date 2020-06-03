#include <iostream>
#include <string>

using namespace std;

void Base_lvl()
{
    cout << "Base task:" << endl;
    cout << "Enter a sentence: ";

    string str;
    getline(cin, str);
    str.pop_back();
    cout << str << "\n\n";
}

void Medium_lvl()
{
    cout << "Medium task:" << endl;
    cout << "Enter a sentence: ";

    string line;
    string new_line;

    getline(cin, line);

    for (int i = 0; i < (int)(line.size()); i++)
    {
        if (line[i] == ' ' || (int)(line[i]) > 47 && (int)(line[i]) < 58)
        {
            if (line[i] == ' ')
                new_line += "  ";
        }
        else
            new_line += line[i];
    }

    cout << new_line << "\n\n";
}

int main()
{
    Base_lvl();
    Medium_lvl();
}