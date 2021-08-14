#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* for (int i{10}; i > 0; --i) {
        cout << i << endl;

    }   cout << "Blastoff!";*/

    /*for (int i{ 10 }; i <= 100; i += 10) {
        if (i % 15 == 0) {
            cout << i << endl;
        }
        else {
            cout << "Nothing to display!!" << endl;
        }
    }*/

    /*for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j) {
        cout << i << " + " << j << " = " << (i + j) << endl;
    } */

    /*for (int i{ 1 }; i <= 100; ++i) {
        cout << i;
        if (i % 10 == 0) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }*/

    /*for (int i{1}; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }*/

    // For Vectors 

    vector <int> nums{10, 20, 30, 40, 50, 14, 67, 38, 89, 44}; 

    for (size_t i{ 0 }; i < nums.size(); ++i) { 
        if (nums[i] % 2 == 0) {
            cout << nums[i] << " is even. " << endl;
        }
        else {
            cout << nums[i] << " is odd." << endl;
        }
    }
        cout << endl;
        return 0;
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

/*for (int i{1}, j{5}; i <= 5 || j <= 11; ++i, ++j) {
        cout << i << " * " << j << " = " << (i * j) << endl;
    }

    */

/*
    
    }
*/