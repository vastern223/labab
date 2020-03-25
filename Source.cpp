#include"iostream"
#include"string"
#include "Header.h"
using namespace std;

int main()
{
    int a = 0;
    do
    {
        cout << "1 - Add new quiz" << endl;
        cout << "2 - show oll exam " << endl;
        cout << "3 - list employee by surname" << endl;
        cout << "0 - exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
        {
            cout << "Add new quiz" << endl;
            add();
        }
        break;
        case 2:
        {
            cout << "show oll exam" << endl;
            list();
        }
        break;
        case 3:
        {
            cout << "pas exam " << endl;
            pass();
        }
        case 0:
        {
            exit(0);
        }
        }

    } while (a != 0);


    return 0;
}