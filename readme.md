
# VS Code C++ project setup

- be sure you have went through official VS Code page tutorial for using it with C++
    - [https://code.visualstudio.com/docs/languages/cpp](https://code.visualstudio.com/docs/languages/cpp)
- to find `cl.exe` -- that is the compiler 
    - Open the "Developer Command Prompt"
    - type `where cl.exe`, the full path to the compiler will appear
- to find include paths the best way is the good old way
    - looking for e.g. vector, just use the dir command
    - `dir /s vector`
        - it might take some seconds if you do this from the root folder
    - NOTE: msvc include path is not the same as SDK include path
        - for example `<iostream>` includes `<crtdbg.h>` and the latter is part of Windows SDK, so you need to add that path too to your `c_cpp_properties.json` file in your `.vscode` folder in yourt worskpace aka folder in which you are

Example of the include path setup, for when MSVC and SDK are on two different drives

```
"includePath": [
    "F:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\BuildTools\\VC\\Tools\\MSVC\\14.24.28314\\include",
    "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt"
]
```

---
&copy; dbj.org CC BY SA 4.0