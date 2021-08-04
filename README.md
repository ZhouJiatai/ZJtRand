# ZJtRand 随机数生成器

***注意：`main.cpp`采用**GB18030**编码。

## 编译

### Windows

执行：

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    g++ main.cpp -o ZJtRand.exe

可执行文件将会位于 `.\ZJtRand.exe`

***注意：这样生成的可执行文件将会依赖 `libgcc_s_dw2-1.dll` `libwinpthread-1.dll` `libstdc++-6.dll`。如要抗拒这种依赖，请执行：***

    git clone https://github.com/ZhouJiatai/ZJtRand.git
    cd ZJtRand
    g++ main.cpp -static -o ZJtRand.exe

## 版权

Copyright (C) 2021 Zhou Jiatai  
许可证: [GPL-3.0-or-later](https://github.com/ZhouJiatai/ZJtRand/blob/main/COPYING.txt) (GPLv3+)
