#include <iostream>
using namespace std;
// Transfer from decimal number to an another numeric system number
int main()
{
    long dec,rem,i=1,sum=0, BaseNumber;
    cout<<"Enter the decimal to be converted:";
    cin>>dec;
    cout << "Enter base number: "; cin >> BaseNumber;
    do
    {
        rem=dec%BaseNumber;
        sum=sum + (i*rem);
        dec=dec/BaseNumber;
        i=i*10;
    }while(dec>0);
    cout<<"The result is: "<<sum<<endl;
    cin.get();
    cin.get();

    return 0;
}
