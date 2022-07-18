
#include <string>
#include <iostream>

using namespace std;

int cube(int inp);

int main()
{
    int inp;
    cout << "Please enter a number: " << endl;
    cin >> inp;
    int cubed = cube(inp);
    cout << "That value cubed is  " << cubed << endl;
}
int cube(int inp)
{
    int value = inp * inp * inp;
    return value;
}