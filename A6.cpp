//Zahika Ihsan
#include <iostream>
using namespace std;
int main ()
{
string input;
cout << "Enter the string: ";
cin >> input;
string result = "";
bool present[256] = { false }; 
for (int i = 0; i < input.length(); ++i) {
if (!present[tolower(input[i])]) {
result += input[i];
present[tolower(input[i])] = true;
 }
 }
cout << "Resultant string after removing duplicates: " << result <<endl;
return 0;
}