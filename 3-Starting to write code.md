# Section 3: Starting to write code

## Exploring the Visual Studio Code Environment
* Left - activity bar
* Right - Editor groups
* Bottom - Sidebar, status bar
* Panel - Terminal, debug

1. New File
2. Save as `.c` extension

* `Ctrl + Shift + P`: Gives command palate to see functionality VS Code
* Access Setting through Preferences

## Creating a Workspace and Configuring the Compiler in Visual Studio Code

* Workspace - area you want to work in for different C projects
1. Create directory in Terminal using `mkdir projects` (creating folder called `projects`)
2. `cd projects` (going into `projects` folder)
3. `mkdir helloworld` (creating folder called `helloworld` inside `projects folder`)
4. `cd helloworld` (going into `helloworld`)
5. `code .` to start VS Code with a workspace directory as `helloworld`
6. Configure compiler path by `Ctrl + Shift + P`
7. Search for **C/C++: Edit Configurations (UI)**
8. Set **Compiler path** (can select from dropdown, tpyically in bin)
9. Set **IntelliSense mode** as `gcc x64`
10. From Step 6, search for **Tasks: Configure Default Build Task**
11. Select **Create tasks.json file from template**
12. Select **Others** to create a default task
13. Change label to `build hello world`
14. Change command to `gcc`
15. Add
```
"args": [
    "-g",
    "-o",
    "helloworld",
    "helloworld.c"
],
"group": {
    "kind": "build",
    "isDefault": true
    }
```
16. From Step 6, search for **Debug: Open launch.json**
17. Select **C++ (GDB/LLDB)**
18. Change program to executable name (usually `helloworld`)
19. Make sure stopAtEntry is `true`
20. Create a source file to make sure everything works (`helloworld.c`)
21. Run tasks by `Ctrl + Shift + B`
22. ❗️ Make sure `helloworld.c` is not in the `.vscode` folder - only `.json` files should be in `.vscode` folder