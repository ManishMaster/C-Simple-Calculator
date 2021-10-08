#include <iostream>
#include <cmath>

using namespace std;
int firRes, SecRes, AddOperator, SubSSOperator, MulSSOperator, DivSSOperator;
char symbo;

int main()
{
          cout << "Welcome to the simple calculator using SWITCH statement" << endl;
          cout << "Enter 1st number" << endl;
          cin >> firRes;
          cout << "Enter 2nd number" << endl;
          cin >> SecRes;
          cout << "Enter Different Types of Symbols: +,-,*,/,^,^2, LCM, HCF" << endl;
          cin >> symbo;

          switch (symbo)
          {
          case ('+'):
          {
                    int AddOperator = firRes + SecRes;
                    cout << AddOperator;
          }
          case ('-'):
          {
                    int SubSSOperator = firRes - SecRes;
                    cout << SubSSOperator;
          }
          case ('*'):
          {
                    int MulSSOperator = firRes * SecRes;
                    cout << MulSSOperator;
          }
          case ('/'):
          {
                    int DivSSOperator = firRes / SecRes;
                    cout << DivSSOperator;
          }
          }
}