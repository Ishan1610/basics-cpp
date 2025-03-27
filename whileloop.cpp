#include <iostream>
using namespace std;
int main(){
    int n; int sum = 0; int i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(i<=n){
        sum += i;
        i++;
    }
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}
// Sum of numbers from 1 to n using while loop