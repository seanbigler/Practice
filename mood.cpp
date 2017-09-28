#include <iostream>
using namespace std;

int main()
{
    int mood;
    char cont = 'y';

    do
    {
        cout << "How are you doing today?" << endl;
        cout << "Enter number 1 through 10 (10 being the best, and 1 being the worst:" << endl;
        cin >> mood;

        if (mood <= 6) {
            cout << "I'm sorry you're feeling that way" << endl;
        } else if (mood > 6) {
            cout << "That's good to hear" << endl;
        }
        cout << "Would you like to go again? (y/n)" << endl;
        cin >> cont;
    }while(cont != 'n');

    return 0;
}