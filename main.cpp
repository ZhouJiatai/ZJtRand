/*
    ZJtRand 0.1.0

    Copyright (C) 2021 Zhou Jiatai

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 3.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

inline void beginning()
{
    cout << "ZJtRand ����������� 0.1.0\n"
         << "Copyright (C) 2021 Zhou Jiatai\n\n"
         << "������Ϊ���������������������˷�����GNUͨ�ù������Э���Լ���£�����Զ�������ٷ������޸ġ�Э��汾Ϊ�����档\n"
         << "����ϣ�����������������ã�������֤����������֤���о��ü�ֵ���ʺ��ض���;������μ�GNUͨ�ù������Э�顣\n"
         << "�������յ�һ��GNUͨ�ù������Э��ĸ��������û�У������<http://www.gnu.org/licenses/>\n\n"
         << "��ע�⣺����������������λ��"
         << "��1~���ֵ��������1�����ֵ��֮��\n";
}

inline void srand_init()
{
    srand(time(nullptr));
}

inline bool getrand()
{
    int maxn;
    cout << "\n������Ҫ����������������ֵ��С��32769������0������0��ʾ�˳�����";
    cin >> maxn;
    if(maxn == 0)
        return false;
    else if(maxn >= 32769)
    {
        cout << "�Բ���������������ڻ����32769��\n";
        return true;
    }
    else if(maxn < 0)
    {
        cout << "�Բ������������С��0��";
        return true;
    }
    cout << "������������ǣ�" << rand() % maxn + 1 << '\n';
    return true;
}

inline void pause()
{
    cout << "\n�밴�س�������...";
    cin.get();
    cin.get();
}

int main()
{
    beginning();
    srand_init();
    while(getrand());
    pause();
    return 0;
}
