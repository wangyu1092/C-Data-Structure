#include <iostream>
#include <algorithm>
#include <vector>

// �������ӷ�

// ����˼·������һ���������飬��һλ���λ�����ڶ�λ��ʼ��Ÿ�λ��ʮλ����λ������

using namespace std;

int main() {

    string s1, s2;
    int n1[1005] = {0}, n2[1005] = {0};

    cin >> s1 >> s2;
    n1[0] = s1.size();
    n2[0] = s2.size();

    for (int i = 1, j = s1.size() - 1; i <= n1[0]; i++, j--) {
        n1[i] = s1[j] - '0';
    }

    for (int i = 1, j = s2.size() - 1; i <= n2[0]; i++, j--) {
        n2[i] = s2[j] - '0';
    }
    n1[0] = max(n1[0], n2[0]);
    for (int i = 1; i <= n1[0]; i++) {
        n1[i] += n2[i];
        if (n1[i] >= 10) {
            n1[i + 1] += n1[i] / 10;
            n1[i] %= 10;
            if (i == n1[0]) {
                n1[0]++;
            }
        }
    }
    for (int i = n1[0]; i >= 1; i--) {
        cout << n1[i];
    }
    cout << endl;
    return 0;
}
