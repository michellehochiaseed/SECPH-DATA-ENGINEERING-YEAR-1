//MICHELLE HO CHIA XIN
//A24CS0110
//14.11.2024

#include <iostream>  
#include <cmath>
using namespace std;

int main () {
  int dig;
  long int num;
  char choice;

do {
   int sum=0; 


  cout << "Enter an integer number that you want to calculate the sum of its digits: ";
  cin >> num;

while (num>0) {

  dig = (num%10);
  sum = sum+dig;
  num = num/10;
  if (num>0) {
    cout << dig << "+";
  } else {
    cout << dig;
  }
  }
cout << "=" << sum << "\n";

if (sum%2==0) {
    cout << sum << " is an even number & ";
} else {
    cout << sum << " is an odd number & ";
}

if (sum%3==0 && sum%4==0 && sum%5==0) {
    cout << "multiples of 3, 4 and 5. \n";
} else if (sum%3==0 && sum%4==0){
    cout << "multiples of 3 and 4. \n";
} else if (sum%4==0 && sum%5==0){
    cout << "multiples of 4 and 5. \n";
} else if (sum%3==0 && sum%5==0){
    cout << "multiples of 3 and 5. \n";
} else if (sum%3==0){
    cout << "multiples of 3. \n";
} else if (sum%4==0){
    cout << "multiples of 4. \n";
} else if (sum%5==0){
    cout << "multiples of 5. \n";
} else {
cout << "not a multiples of 3, 4 and 5. \n";
}

cout << "Do you want to perform another operation? (yes=y, no=n) \n";
cin >> choice;
}

while (choice=='y');


system ("pause");
return 0;
}
