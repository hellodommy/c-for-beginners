# Section 2: Installing Required Software

Mac
* C compiler (developer tools in XCode)
* IDEs (not Codeblocks, use Visual Studio or XCode)

1. Installing the compiler
   * Check to see if XCode (*an IDE, but not recommended for this class*) is installed, or 
   * Install Developer Tools in Terminal
      * Check by typing `gcc --version` (*will be prompted to install if you do not have*)
2. How to test
   * In Terminal, type `vi test.c`
  
```
#include <stdio.h>
int main() {
printf("Hello World\n");
}
```

*`Then `gcc test.c`
  * `./a.out`