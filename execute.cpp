#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    const char* cammand = "ls";

    FILE* var = popen(cammand, "r");
    if (!var)
    {
        cerr << "Error opening" << endl;
        return EXIT_FAILURE;
    }
    char buffer[100];
    string result = "";

    while (fgets(buffer, sizeof(buffer), var) != nullptr)
    {
        result += buffer;
    }
    pclose(var);
    return EXIT_SUCCESS;
}