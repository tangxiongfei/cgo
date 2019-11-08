
ＣＰＰ代码通过文件导入的方式提供给ＣＧＯ使用

ＣＧＯ调用ｃ然后ｃ调用ｃ＋＋函数来将Ｃ＋＋的接口提供给ＧＯ使用

class 版本

需要关闭 unset GO111MODULE，不然依赖回去vendor里面找，导致项目go build 失败

### 打包命令
```bash
    go build 会自动根据 #include "my_buffer_capi.h" 找到Ｃ库并进行打包
```