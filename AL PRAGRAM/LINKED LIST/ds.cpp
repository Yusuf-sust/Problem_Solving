#include <iostream>
using namespace std;

int main()
{
    int left_slippers, right_slippers, answer1, answer2;

    cin >> left_slippers >> right_slippers;

    answer1 = 40 + 2 * right_slippers;
    answer2 = 2 * left_slippers + 39;

    if (answer1 > answer2)
        cout <<answer1 << endl;
    else
        cout <<answer2 << endl;

    return 0;
}
