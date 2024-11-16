#include <iostream>

using namespace std;

int main() 
{
    const int n = 20;
    char arr[n];
    srand(time(0));
    for (int i = 0; i < n; ++i) 
    {
        arr[i] = 'a' + rand() % 26; 
    }
    cout << "Початковий масив: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; ++i) 
    {
        for (int j = 0; j < n - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Масив після сортування (a -> z): ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char target;
    cout << "Введіть літеру для пошуку: ";
    cin >> target;

    int left = 0, right = n - 1;
    bool found = false;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            cout << "Літера '" << target << "' знайдена на індексі " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < target) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Літера '" << target << "' не знайдена." << endl;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Масив після сортування (z -> a): ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
