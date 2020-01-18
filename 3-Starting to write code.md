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

### Creating the Workspace Directory
* Workspace - area you want to work in for different C projects
1. Create directory in Terminal using `mkdir projects` (creating folder called `projects`)
2. `cd projects` (going into `projects` folder)
3. `mkdir helloworld` (creating folder called `helloworld` inside `projects folder`)
4. `cd helloworld` (going into `helloworld`)
5. `code .` to start VS Code with a workspace directory as `helloworld`
    - Enable from the instructions [here](https://code.visualstudio.com/docs/setup/mac)

### Setting up the Compiler
1. Configure compiler path by `Ctrl + Shift + P`
2. Search for **C/C++: Edit Configurations (UI)**
3. Set **Compiler path** (can select from dropdown, tpyically in bin)
4.  Set **IntelliSense mode** as `gcc x64`
5. From Step 6, search for **Tasks: Configure Default Build Task**
6. Select **Create tasks.json file from template**
7. Select **Others** to create a default task
8. Change label to `build hello world`
9. Change command to `gcc`
10. Add
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

### Setting up the Debugger
1. From Step 6, search for **Debug: Open launch.json**
2. Select **C++ (GDB/LLDB)**
3. Change program to executable name (usually `helloworld`)
4. Make sure stopAtEntry is `true`
5. Create a source file to make sure everything works (`helloworld.c`)
    * 🌵 *Update: Download [CodeLLDB](https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb) extension in VS Code and follow the recommended configurations for debugger to work*
6. Run tasks by `Ctrl + Shift + B`
7. ❗️ Make sure `helloworld.c` is not in the `.vscode` folder - only `.json` files should be in `.vscode` folder
8. Type `./helloworld.exe` to execute

### Debugging
1. Set a breakpoint to stop the program (red dot on the left margin)
    * Set on `printf("Hello, World!");`
2. Click F5 to run (or Debug > Start Debugging)
3. Debug view will have call stack listen with breakpoints set (breakpoint will be highlighted)
4. Click step over and some things in debug view will change
5. Click play to exit

## Creating and running your first C program

1. Create a new project called SampleApp
2. Build (and run) the program
    * Download [CodeRunner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) and build by using `Control + Option + N`
    * Try building again but make an error in the code (remove semi-colon etc.)

## Writing a C program that displays your name

### Requirements
* Write a C program that displays first name as output
1. Create project in code::blocks
2. Delete `main.c` file that was auto-generated
3. Create new C source file (named `test.c`)
4. Copy source code into `test.c` program

```
#include <stdio.h>

int main()
{
    printf("Hi, my name is ...\n");
    return 0;
}
```

### Process
1. **Edit** - Modify source code to display your name
2. **Compile** - compile and link the source code
3. **Run** - run the program
4. **Analyse** - analyse output to confirm it is correct and displays your name

## Structure of a C Program

* Case-sensitive
* Line/indentation does not matter (unlike eg. Python)
    * 💡 But proper line spacing/indentation makes code more readable
* Lines end with semi-colon `;`

` int main()`
* Main function - entry point to the program
* Function as seen by parenthesis
* `int` - function will return an integer (can be `void`, so don't return anything)

`{}`
* Encloses a block of code

`printf(...);`
* Block of code for main function

`#include <stdio.h>`
* Importing a library to be used
