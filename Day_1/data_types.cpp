/*
 * @Author: Hakan CERAN
 * @Time: 04.08.2022
 * @Content: 30 Days of Code: Data Types
 * 
 * */

/*
 * Input:
 *
 * 12
 * 4.0
 * is the best place to learn and practice coding!
 *
 * Output:
 *
 * 16
 * 8.0
 * HackerRank is the best place to learn and practice coding!
 *
 */

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int i_1 = 0;
    double d_1 = 0.0;
    string s_1;
    
    cin >> i_1;
    cin >> d_1;
    getline(cin >> ws, s_1);
    
    i_1 += i;
    d_1 += d;

    cout << i_1 << endl;
    cout << fixed << setprecision(1) << d_1 << endl;
    cout << s << s_1 << endl;
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}

