/*
    Copyright (C) 2021 Zhou Jiatai

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;

#if (__cplusplus < 201103L)
#error "请使用支持 C++11 标准的编译器！"
#endif // __cplusplus < 201103L

inline void beginning()
{
    cout << "ZJtRand 随机数生成器 0.2.2\n"
         << "Copyright (C) 2021 Zhou Jiatai\n"
         << "许可证：GPL-3.0-or-later（GPLv3+）\n"
         << "本程序的源代码可以从"
         << "<https://github.com/ZhouJiatai/ZJtRand>下载。\n\n"
         << "本程序为自由软件，"
         << "在自由软件联盟发布的GNU通用公共许可协议的约束下，"
         << "你可以对其进行再发布及修改。"
         << "协议版本为第三版或（随你）更新的版本。\n"
         << "我们希望发布的这款程序有用，但不保证，"
         << "甚至不保证它有经济价值和适合特定用途。"
         << "详情参见GNU通用公共许可协议。\n"
         << "你理当已收到一份GNU通用公共许可协议的副本，如果没有，"
         << "请查阅<http://www.gnu.org/licenses/>\n\n"
         << "除非适用法律或书面协议要求，"
         << "任何版权持有人或本程序按本协议可能存在的"
         << "第三方修改和再发布者，都不对你的损失负有责任，"
         << "包括由于使用或者不能使用本程序造成的"
         << "任何一般的、特殊的、偶发的或重大的损失"
         << "（包括而不仅限于数据丢失、数据失真、你或"
         << "第三方的后续损失、其他程序无法与本程序协同运作），"
         << "即使那些人声称会对此负责。\n\n"
         << "请注意：本程序产生的随机数位于"
         << "【1~最大值】（包含1和最大值）之间\n";
}

inline void srand_init()
{
    srand(time(nullptr));
}

inline int getint()
{
    string s;
    stringstream ss;
    int num = 0;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] < '0' || s[i] > '9')
            return -1;
    }
    ss << s;
    ss >> num;
    return num;
}

inline bool getrand()
{
    int maxn;
    cout << "\n请输入要产生的随机数的最大值（小于32769，大于0），\n"
    << "然后输入回车键确认"
    << "（直接输入回车键或输入0后再按回车键表示退出）：";
    maxn = getint();
    if(maxn == 0)
        return false;
    else if(maxn == -1)
    {
        cout << "对不起，您输入的字符串中含有非数字字符，请重新输入。\n";
        return true;
    }
    cout << "您输入的数是：" << maxn << '\n';
    if(maxn >= 32769)
    {
        cout << "对不起，您输入的数大于或等于32769。\n";
        return true;
    }
    cout << "产生的随机数是：" << rand() % maxn + 1 << '\n';
    return true;
}

inline void exit_the_program()
{
    cout << "\n请再按一次回车键退出...";
    cin.get();
}

int main()
{
    beginning();
    srand_init();
    while(getrand());
    exit_the_program();
    return 0;
}
