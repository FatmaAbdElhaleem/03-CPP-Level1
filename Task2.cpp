#include <iostream>
using namespace std;
int main()
{
    // program1
    // Ring a Bell
    cout << "\a";

    // program2 (escape sequences)
    // print this
    // Dear sir\Mohammed
    // How are you ?
    // My name is "Fatma", nice to meet you.

    cout << "Dear sir\\Mohammed.\n";
    cout << "How are you ?\n";
    cout << "My name is \"Fatma\", nice to meet you.\n\n";

    // program3
    // print:
    // Ali     Ahmed   Lina
    // Fadi    Zain    Mona
    cout << "Ali\tAhmed\tLina\nFadi\tZain\tMona\n";
    return 0;
}
