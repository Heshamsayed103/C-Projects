#include <iostream>
using namespace std;
int main()
{
    int Kilobyte, bytes,bits;
    cout << "Please Enter the Number of Kilobyte ";
    cin >> Kilobyte;
    bytes = Kilobyte*1024;
    bits = bytes * 8;
    cout << "The Number of Kilobytes is =" << Kilobyte<<endl;
    cout << "The Number of bytes is =" << bytes<<endl;
    cout << "The Number of bits is =" << bits << endl;
    return 0;


}


