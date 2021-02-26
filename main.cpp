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
    cout << "ZJtRand 随机数生成器 0.1.0\n"
         << "Copyright (C) 2021 Zhou Jiatai\n\n"
         << "本程序为自由软件，在自由软件联盟发布的GNU通用公共许可协议的约束下，你可以对其进行再发布及修改。协议版本为第三版。\n"
         << "我们希望发布的这款程序有用，但不保证，甚至不保证它有经济价值和适合特定用途。详情参见GNU通用公共许可协议。\n"
         << "你理当已收到一份GNU通用公共许可协议的副本，如果没有，请查阅<http://www.gnu.org/licenses/>\n\n"
         << "请注意：本程序产生的随机数位于"
         << "【1~最大值】（包含1和最大值）之间\n";
}

inline void srand_init()
{
    srand(time(nullptr));
}

inline bool getrand()
{
    int maxn;
    cout << "\n请输入要产生的随机数的最大值（小于32769，大于0，输入0表示退出）：";
    cin >> maxn;
    if(maxn == 0)
        return false;
    else if(maxn >= 32769)
    {
        cout << "对不起，您输入的数大于或等于32769。\n";
        return true;
    }
    else if(maxn < 0)
    {
        cout << "对不起，您输入的数小于0。";
        return true;
    }
    cout << "产生的随机数是：" << rand() % maxn + 1 << '\n';
    return true;
}

inline void pause()
{
    cout << "\n请按回车键继续...";
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
