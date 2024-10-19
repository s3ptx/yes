#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
   int i = 1;
   while (i < argc) {
       cout << argv[i] << endl;
   }

    return 0;
}
