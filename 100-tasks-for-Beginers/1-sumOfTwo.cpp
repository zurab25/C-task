/*
მოცცემულია ორნიშნა მთელი რიცხვი N(10<=N).
დაწერეთ პროგრამა, რომელიც გამოიტანს მის ციფრთა ჯამს
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >>n;

    cout<< n%10+n/10;
    return 0;
}