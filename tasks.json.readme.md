### standard & default

compiles all the cpp file in the workspace folder.

1. `/Zi` is for the debug build
1. `/EHsc` default exceptions setup
1. if `/kernel` replaces 2 that is driver code compilation. 
   - produces probably the smallest exe
   - probably also required for IoT builds


```json
{
    "version": "2.0.0",
    "tasks": [
      {
        "type": "shell",
        "label": "build",
        "command": "cl.exe",
        "args": [
          "/Zi",
          "/EHsc",
          "/Fe:",
          "${workspaceFolder}\\helloworld.exe",
          "${workspaceFolder}\\*.cpp"
        ],
        "problemMatcher": ["$msCompile"],
        "group": {
          "kind": "build",
          "isDefault": true
        }
      }
    ]
  }
  ```

  ### TODO: 
  
  1.how to build all cpp files in all subfolders?