///week 03-1.cpp
///File-Save As
#include <iostream> ///c++��cin cont
#include <vector> ///c++���}�C vector
using namespace std;
int main()
{
    vector<int> a(2);
    for(int i=0;i<a .size();i++)cout << a[i] <<' '; ///�L�X�}�C
    cout << endl; ///����

    a.push_back(99);
    a.push_back(77);

    for(int i=0;i<a.size();i++)cout << a[i] <<' '; ///�L�X�}�C
    cout << endl; ///����
}
