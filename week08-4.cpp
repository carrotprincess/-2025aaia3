// week08-4.cpp
// �Ʀ�¬} �d���C�J�`�� 6174�]�j��p - �p��j�A����7���^
#include <iostream>
#include <vector>   /// ���ۦp���}�C
#include <algorithm> /// �t��k sort()�O�t��k��!
using namespace std;

int main()
{
    cout << "�п�J���N4���(�����P):"; /// ex. 1234 1 2 3 4
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++) {  /// �@�B�B��,���w����¬} 6174
        vector<int> a;  /// ����ۦp���}�C
        while (n > 0) { /// ��֪k�A��4��ơA�v�@��X��
            a.push_back(n % 10); /// �⥦���}�C�̭�
            n = n / 10; /// �駹�֡A�N��...
        }
        sort(a.begin(), a.end()); /// ��}�C�u�p��j�v�Ʀn�K

        int M = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]; /// �˹L�ӡA�j��p
        int m = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3]; /// �p��j
        /// ���@�U�AM�O����Hm�O����H�٨S�o�{
        n = M - m;
        cout << M << "�" << m << "�o��:" << n << endl;
    }
}
