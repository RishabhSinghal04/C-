
#include <conio.h>

#include "smart_pointers.h"

int main()
{
     using namespace std;

     uniquePointers();
     sharedPointers();
     weakPointers();

     getch();
     return 0;
}