# ZJtRand 随机数生成器

**注意：`main.cpp`采用GB18030编码。**

## 编译

### Windows

你需要如下软件：
* [Git for Windows](https://gitforwindows.org/)  
* [Mingw-w64](http://www.mingw-w64.org/doku.php)（所含g++需支持并启用 C++11）  

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
    iconv -f gb18030 -t utf-8 main.cpp -o main-utf-8.cpp
    g++ main-utf-8.cpp -std=c++11 -o ZJtRand

可执行文件将会位于 `./ZJtRand`

同样，如果要使用静态链接，执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    iconv -f gb18030 -t utf-8 main.cpp -o main-utf-8.cpp
    g++ main-utf-8.cpp -std=c++11 -static -o ZJtRand

## 版权

Copyright (C) 2021 Zhou Jiatai  
许可证: [GPL-3.0-or-later](https://github.com/ZhouJiatai/ZJtRand/blob/main/COPYING.txt) (GPLv3+)

[![GPL-3.0-or-later](http://www.gnu.org/graphics/gplv3-or-later.png)](https://github.com/ZhouJiatai/ZJtRand/blob/main/COPYING.txt)  
