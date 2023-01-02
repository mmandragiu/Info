#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main()
{
    char c[256], * p;
    cin.getline(c, 256);
    p = strtok(c, " !#$%&'()*+,-./:;<=>?@[\]^_`{|}~");
}