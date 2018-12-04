#include <iostream>

using namespace std;

int main()
{
    int result = 0;
     for(int i=0; i<10;i++)
     {
         if(i%2==0) continue;
         result +=i;
         cout << result << " ";
     }

    cout<< "Result = " << result << endl;
  return 0;
}