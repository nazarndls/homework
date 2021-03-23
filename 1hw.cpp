#include <iostream>
#include <sstream>
#include <iterator>
using namespace std;
 
int main()
{
    string input;
    getline(cin, input);
    istringstream isstrm(input);
 
    signed sum(0), result(0);
    for
    (
        istream_iterator<signed> it(isstrm);
        it != istream_iterator<signed>();
        ++it
    )
        sum += *it, ++result;
 
    cout << sum / result << endl;
 
    system("pause");
}
