///week02-2b.cpp part 2 �ϥ�C++ 2011 �~�s�����r��\�� stoi()�\��
///SOIT106_ADVANCE_001 C++
#include <iostream> ///cin cout Ū�J��� �L�X���
#include <string> ///srting �r�ꪺ�\��
using namespace std;/// �ϥ�(�R�W�Ŷ�)�зǪ� STD
int main()
{
	string a;///�ŧi�r�� a
	cin >> a;///�r�J�r�� a

	string ans;///�ŧi�r��ans�񵪮ץΪ�
	int N = a.length();///�r��a������
	for(int i=N-1; i>=0; i--){///�˹L�Ӫ��j��
		ans += a[i];///�b�j��� ��a[i] ��� ans ���᭱
	}

	cout << a << '+' << stoi(ans)
	<< '=' << stoi(a) + stoi(ans) << endl;

}///stoi() is "string to int" ��r���ܦ����
