#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of element in the array
int i; // index of array element


void input()
{
    while (true)
    {
        cout << "Enter the number of element is the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
    }

    // Accept array element
    cout << "\n----------------------\n";
    cout << " Enter array element \n";
    cout << "\n----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}



void LinearSearch()
{
    char ch;
    int ctr; // number of comparisons

    do
    {
        // Accept the number to be searched
        cout << "\nEnter the element you want to search: "; // Langkah algoritma no. 1
        int item;
        cin >> item;

        ctr = 0;
        for (i = 0; i < n; i++)                     // Langkah no. 2 & 3 & 4 alhoritma
        {
            ctr++;
            if (arr[i] == item)                     // Langkah no 5 Algoritma
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
