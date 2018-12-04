#include <iostream>

using namespace std;

int main()
{
    int i=1;

    for( ; ; )
    {
        cout << i << " * " << i << " = " << i*i<<endl;
        i++;

        if(i>9) break;
    }
    return 0;
}