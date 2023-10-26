# 코드 편집 기능

## Common setting of clang-format in VSCode
1. [ctrl] + [shift] + [x]
2. Clang-Format install
3. install LLVM toolchain
> Windows
```
https://releases.llvm.org/ and install
...then, we can find clang-format.exe in install and execute in CMD(CLI)!
```

> Ubuntu
```
sudo apt-get install clang-format
```

4. VSCode clang-format shortcut
4.1. formatting
- Windows: [Alt] + [Shift] + [F]
- Ubuntu: [] + [] + []


### 1. C/C++
1.1. [ctrl] + [shift] + [x]
1.2. C/C++ install
1.3. [ctrl] + [,] ([File] - [Preferences] - [Settings]) and search "foramtting"
- Clang_format_path: ./.clang-format(X)
1.4 put ".clang-format" file in top of folder that open in vscode.



### 