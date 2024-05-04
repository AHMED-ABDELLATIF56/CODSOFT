/* TASK_2
a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
By: ahmed mohamed abdellatif
 */

 #include <iostream>
 using namespace std ;
 int main() {
     char op;
     float num1, num2;
     cout << "******calculator******"<<endl;
     cout << "enter first number" << endl;
     cin >> num1;
     cout << "enter operator (+,-,*,/)" << endl;
     cin >> op;
     cout << "enter second number" << endl;
     cin >> num2;
     switch (op) {
         case '+':
             cout << num1 << " " << op << " " << num2 << " " << "=" << num1 + num2 << endl;
             break;
         case '-':
             cout << num1 << " " << op << " " << num2 << " " << "=" << num1 - num2 << endl;
             break;
         case '*':
             cout << num1 << " " << op << " " << num2 << " " << "=" << num1 * num2 << endl;
             break;
         case '/':
             if (num2 == 0.0) { cout << "math error" << endl; }
             cout << num1 << " " << op << " " << num2 << " " << "=" <<" " <<num1 / num2 << endl;
             break;
         default :
             cout << "invalid operator";
             break;
     }

     return 0;
 }