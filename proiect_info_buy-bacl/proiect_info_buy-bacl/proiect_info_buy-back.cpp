#include <iostream>

using namespace std;

string registration_numbers[10001], reg_no_2[10001], car, operation;
int sop, sop2;///sop=size of platform

void acts(string x)///add car to stack
{
    sop++;
    registration_numbers[sop] = x;
}

void move_from_stk(string stk1[], int& k1, string stk2[], int& k2) {
    k2++;
    stk2[k2] = stk1[k1];
    k1--;
}

void rcfs(string y)///remove car from stack
{
    sop2 = 0;
    while (registration_numbers[sop] != y)
    {
        move_from_stk(registration_numbers, sop, reg_no_2, sop2);
    }
    sop--;
    while (sop2)
    {
        move_from_stk(reg_no_2, sop2, registration_numbers, sop);
    }
}

bool empty() {
    return (sop == 0);
}

int main()
{
    ///Clients can not buy cars that are not on the platform, therefore the case in which a requested car does not appear on the platform does not exist
    while (true)
    {
        cin >> operation;
        if (operation == "stop")
            break;
        if (operation == "push")///A car is returned
        {
            cin >> car;
            acts(car);
        }
        if (operation == "pop")///A car is requested
        {
            cin >> car;
            if (!empty())
                rcfs(car);
            else
                cout << "  No more cars are available" << endl;
        }
        if (operation == "show_available_cars")
        {
            if (empty())
                cout << "  There are no more cars" << endl;
            else
                for (int i = 1; i <= sop; i++)
                    cout << "  " << registration_numbers[i] << endl;
        }
    }
    return 0;
}
