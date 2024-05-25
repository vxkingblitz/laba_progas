#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Member
{
public:
    int id;
    char first_name[255];
    char middle_name[255];
    char last_name[255];
    char phone[25];
    
};

Member members[100] = {};

void AddMember()
{
    for (int i = 0; i < sizeof(members) / sizeof(Member); i++)
    {
        if (members[i].last_name[0] == '\0')
        {
            cout << "Vvedite imia" << endl;
            cin >> members[i].first_name;
            cout << "Vvedite otchestvo" << endl;
            cin >> members[i].middle_name;
            cout << "Vvedite familiy" << endl;
            cin >> members[i].last_name;
            cout << "Vvedite nomer telephona" << endl;
            cin >> members[i].phone;
            cout << endl;
            break;
        }
    }
}
//3

void DeleteMember()
{
x:
    int IdToDel = -1;
    cout << "Vvedite id udalyaemogo elementa" << endl;
    cin >> IdToDel;
    if (IdToDel <= 100 || IdToDel >= 0) {

        for (int i = 0; i < sizeof(members) / sizeof(Member); i++)
        {
            if (members[i].id == IdToDel) {
                strcpy(members[i].first_name, "");
                strcpy(members[i].middle_name, "");
                strcpy(members[i].last_name, "");
                strcpy(members[i].phone, "");
                break;
            }
        }
    }
    else
    {
        goto x;
    }
}
//4

void ShowTable()
{
    cout << "id\t" << "imia" << setw(20) << "otchestvo" << setw(20) << "familia" << setw(15) << "phone"  << endl;
    for (int i = 0; i < sizeof(members) / sizeof(Member); i++)
    {
        if (members[i].last_name[0] != '\0')
        {
            cout << endl;
            cout << setw(8) << left << members[i].id;
            cout << setw(15) << members[i].first_name;
            cout << setw(22) << members[i].middle_name;
            cout << setw(17) << members[i].last_name;
            cout << setw(15) << members[i].phone;
            cout << endl;
        }
        else
        {
            continue;
        }

    }
}
//2

void Search() {
    
    string InfoToFound;
    string InfoToFound_upper;
    string InfoToFound_lower;
    
    
    
    cout << "Vvedite chto hotite naiti" << endl;
    cin >> InfoToFound;
    bool flag = false;
    for (int i = 0; i < sizeof(members) / sizeof(Member); i++)
    {
        if (InfoToFound == to_string(members[i].id) || InfoToFound == members[i].first_name || InfoToFound == members[i].middle_name || InfoToFound == members[i].last_name || InfoToFound == members[i].phone) {
            cout << "Informajia bila naidena tut: " << endl;
            cout << members[i].id << "\t";
            cout << members[i].first_name << "\t";
            cout << members[i].middle_name << "\t";
            cout << members[i].last_name << "\t";
            cout << members[i].phone << "\t";
            cout << endl;
            flag = true;
        }
    }
    if (flag == false) { cout << "Takoi info net" << endl; }

}
//5

void InitMenu() {
    while (true)
    {
        cout << "1.Dobavit" << endl;
        cout << "2.Udalit" << endl;
        cout << "3.Show all" << endl;
        cout << "4.Search" << endl;
        cout << endl << endl;
        cout << "0.Exit" << endl;
        int choose = 0;
        cin >> choose;
        switch (choose)
        {
        case 1: {
            AddMember();
            break;
        }
        case 2: {
            DeleteMember();
            break;
        }
        case 3: {
            ShowTable();
            break;
        }
        case 4: {
            Search();
            break;
        }
        case 0: {
            exit(1);
        }
        default:
            cout << "Takoi comandi net" << endl;
        }
    }
}
//1

int main()
{
    for (int i = 0; i < sizeof(members) / sizeof(Member); i++)
    {
        members[i].id = i;
        strcpy(members[i].first_name, "");
        strcpy(members[i].middle_name, "");
        strcpy(members[i].last_name, "");
        strcpy(members[i].phone, "");

    }
    InitMenu();
}
