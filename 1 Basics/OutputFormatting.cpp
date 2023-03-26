// A program to show different output formattings using manipulators

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

void replicateAsterisk(unsigned short);

void nextLine();
void setprecesionManipulator();
void boolalphaManipulator();
void setwManipulator();
void setfillManipulator();
void posManipulators();
void DecOctHexBases();
void displayBase();
void UpperCase();
void displayPoint();
void Scientific();

int main()
{
     unsigned short n = 90;
     setprecesionManipulator();
     replicateAsterisk(n);
     nextLine();

     boolalphaManipulator();
     replicateAsterisk(n);
     nextLine();

     setwManipulator();
     replicateAsterisk(n);
     nextLine();

     setfillManipulator();
     replicateAsterisk(n);
     nextLine();

     posManipulators();
     replicateAsterisk(n);
     nextLine();
     
     DecOctHexBases();
     cout << fixed;
     replicateAsterisk(n);
     nextLine();

     displayBase();
     replicateAsterisk(n);
     nextLine();

     UpperCase();
     replicateAsterisk(n);
     nextLine();

     displayPoint();
     replicateAsterisk(n);
     nextLine();

     Scientific();

     getch();
     return 0;
}

void replicateAsterisk(unsigned short n)
{
     cout << string(n, '*');
}

void nextLine()
{
     cout << '\n';
}

void setprecesionManipulator()
{
     // setprecision Manipulator
     float real_num = 10.2347;
     cout << "Real num is " << real_num << '\n';
     cout << "Upto two decimal places " << setprecision(4) << real_num << '\n';
     cout << "Upto one decimal places using \"fixed\" manipulator " << fixed << setprecision(1) << real_num << '\n';
     cout << "Upto two decimal places " << setprecision(2) << real_num << '\n';
}

void boolalphaManipulator()
{
     // boolalpha Manipulator
     bool flag = true, flag2 = false;
     cout << "Value of flag is " << flag << '\n';
     cout << "Value of flag1 is " << flag2 << '\n';
     cout << "Using boolalpha manipulator:-\n"
          << boolalpha;
     cout << "Value of flag is " << flag << '\n';
     cout << "Value of flag1 is " << flag2 << '\n';
}

void setwManipulator()
{
     // setw Manipulator
     cout << "Right Alignment:-\n";
     for (int i = 1; i <= 10000; i *= 10)
     {
          cout << setw(5) << i << '\n';
     }

     cout << "Left Alignment:-\n";
     for (int i = 1; i <= 10000; i *= 10)
     {
          cout << left << setw(5) << i << '\n';
     }

     cout << "Left Alignment is set:-\n";
     for (int i = 1; i <= 10000; i *= 10)
     {
          cout << setw(5) << i << '\n';
     }

     cout << "Internal Justified:-\n";
     cout << internal << setw(10) << -90.72 << '\n';
}

void setfillManipulator()
{
     // setfill Manipulator
     cout << setfill('*');
     cout << "INPUT" << setw(20) << "OUTPUT\n";
}

void posManipulators()
{
     // showpos and noshowpos
     int num{1}, num2{-1};
     cout << "Using showpos\n"
          << showpos;
     cout << num << '\n'
          << num2 << '\n';
     cout << "Using noshowpos\n"
          << noshowpos << right;
     cout << num << '\n'
          << num2 << '\n';
}

void DecOctHexBases()
{
     int pos_int{2304}, neg_int{-23445};
     float decimal{734579.346345f};

     cout << dec << pos_int << '\n'
          << oct << pos_int << '\n'
          << hex << pos_int << '\n';
     cout << dec << neg_int << '\n'
          << oct << neg_int << '\n'
          << hex << neg_int << '\n';
     cout << dec << decimal << '\n'
          << oct << decimal << '\n'
          << hexfloat << decimal << '\n';
}

void displayBase()
{
     int num = 23435;
     cout << showbase << dec << num << '\n'
          << oct << num << '\n'
          << hex << num << '\n';
}

void UpperCase()
{
     int num = 717171;
     cout << uppercase << dec << num << '\n'
          << oct << num << '\n'
          << hex << num << '\n';
}

void displayPoint()
{
     double num = 23.0, num2 = 2354.3453632534235634;
     cout << showpoint << num << '\n'
          << num2 << '\n';
}

void Scientific()
{
     double num = 428.435634, pi = 3.1415926535897932384626433832795, num2{1.34e-10};
     cout << scientific << num << '\n'
          << pi << '\n'
          << num2 << '\n';
     cout.unsetf(ios ::scientific);
}