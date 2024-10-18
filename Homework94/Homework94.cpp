#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x = 0;
    int y = 0;
    int c = 0;
    int quantity = 0;
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        cout << x << " * " << y << " = ";
        cin >> c;
        if (x * y == c)
        {
            cout << "Правильный ответ" << endl;
            quantity++;
        }
        else
        {
            cout << "Ответ неверный" << endl;
        }
    }
    cout << "Вы ответили праильно на " << quantity << "/10";
}
