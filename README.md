# ZJtRand 随机数生成器

**点击[此处](https://github.com/ZhouJiatai/ZJtRand/releases/tag/0.2.3)下载最新版。**

[![当前发布版本：0.2.3](https://img.shields.io/badge/%E5%BD%93%E5%89%8D%E5%8F%91%E5%B8%83%E7%89%88%E6%9C%AC-0.2.3-blue)](https://github.com/ZhouJiatai/ZJtRand/releases/tag/0.2.3)
[![SemVer 版本：2.0.0](https://img.shields.io/badge/Semver%20%E7%89%88%E6%9C%AC-2.0.0-blue)](https://semver.org/lang/zh-CN/spec/v2.0.0.html)

[![作者：Zhou Jiatai](https://img.shields.io/badge/%E4%BD%9C%E8%80%85-Zhou%20Jiatai-yellowgreen)](https://github.com/ZhouJiatai)

[![语言：C++](https://img.shields.io/badge/%E8%AF%AD%E8%A8%80-C%2B%2B-ff69b4)](https://github.com/cplusplus)
[![语言标准：C++11](https://img.shields.io/badge/%E8%AF%AD%E8%A8%80%E6%A0%87%E5%87%86-C%2B%2B11-ff69b4)](https://wg21.link/std11)

[![许可证：GPLv3+](https://img.shields.io/badge/%E8%AE%B8%E5%8F%AF%E8%AF%81-GPLv3%2B-red)](http://www.gnu.org/licenses/gpl-3.0.html)

**注意：`main.cpp`采用 GB2312（GB/T 2312-1980）编码，其余文件均采用 UTF-8 编码。**

## 编译

### Windows

你需要如下软件：
* [Git for Windows](https://gitforwindows.org/)  
* [MinGW-W64](http://www.mingw-w64.org/doku.php)（所含g++需支持并启用 C++11）  

在“命令提示符”中执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    g++ main.cpp -std=c++11 -o ZJtRand.exe

可执行文件将会位于 `.\ZJtRand.exe`

注意：这样生成的可执行文件将会依赖 `libgcc_s_dw2-1.dll` `libwinpthread-1.dll` `libstdc++-6.dll`。
如果要抗拒这种依赖，请使用静态链接，执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    g++ main.cpp -std=c++11 -static -o ZJtRand.exe

### GNU/Linux

你需要如下软件：
* [GCC](https://gcc.gnu.org/)（所含g++需支持并启用 C++11）
* [Git](https://git-scm.com/)
* [glibc](http://www.gnu.org/software/libc/)（内含iconv）

在 Bash 中执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    iconv -f gb2312 -t utf-8 main.cpp -o main-utf-8.cpp
    g++ main-utf-8.cpp -std=c++11 -o ZJtRand

可执行文件将会位于 `./ZJtRand`

同样，如果要使用静态链接，执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    iconv -f gb2312 -t utf-8 main.cpp -o main-utf-8.cpp
    g++ main-utf-8.cpp -std=c++11 -static -o ZJtRand

## 版权

Copyright (C) 2021 Zhou Jiatai  

## 许可证

[GNU General Public License v3.0 or later](http://www.gnu.org/licenses/gpl-3.0.html)（GPL-3.0-or-later, GPLv3+）

> [![GPL-3.0-or-later](http://www.gnu.org/graphics/gplv3-or-later-sm.png)](http://www.gnu.org/licenses/gpl-3.0.html)  
本程序为自由软件，在自由软件联盟发布的[GNU通用公共许可协议](http://www.gnu.org/licenses/gpl-3.0.html)的约束下，你可以对其进行再发布及修改。  
协议版本为第三版或（随你）更新的版本。  
我们希望发布的这款程序有用，但不保证，甚至不保证它有经济价值和适合特定用途。  
详情参见[GNU通用公共许可协议](http://www.gnu.org/licenses/gpl-3.0.html)。  
你理当已收到一份GNU通用公共许可协议的副本，如果没有，请查阅<http://www.gnu.org/licenses/>
