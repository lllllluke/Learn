# Introduction / Getting Started
## 0.1 — Introduction to these tutorials
## 0.2 — Introduction to programming
- A **computer program** (also commonly called an **application**) is a set of instructions that the computer can perform in order to perform some task. The process of creating a program is called **programming**.
-  Programmers typically create programs by producing **source code** (commonly shortened to **code**), which is a list of commands typed into one or more text files.
- The collection of physical computer parts that make up a computer and execute programs is called the hardware.
- When a computer program is loaded into memory and the hardware sequentially executes each instruction, this is called **running** or **executing** the program.
---
### Machine Language
- The limited set of instructions that a CPU can understand directly is called **machine code** (or **machine language** or an **instruction set**).
>[!example]- 
>Here is a sample machine language instruction: `10110000 01100001`
1. each instruction is composed of a sequence of 1s and 0s.
2. Each individual 0 or 1 is called a **binary digit**, or **bit** for short.
3. The number of bits that make up a single command varies.
	- Some CPUs process instructions that are always 32 bits long, whereas some other CPUs (such as the x86/x64 family, which you may be using) have instructions that can be a variable length.
4. Each set of binary digits is interpreted by the CPU into a command to do a very specific job.
- different CPUs have different instruction sets, instructions that were written for one CPU type could not be used on a CPU that didn’t share the same instruction set
	- Programs generally weren’t **portable** (usable without major rework) to different types of system, and had to be written all over again.
---
### Assembly Language
- Because machine language is so hard for humans to read and understand, assembly language was invented. In an assembly language, each instruction is identified by a short abbreviation (rather than a set of bits), and names and other numbers can be used.
>[!example]- 
>Here is the same instruction as above in assembly language: `mov al, 061h`
- The assembly program must be translated into machine language before it can be executed by the computer.
	- This is done by using a program called an **assembler**.
- Some downsides:
	1. Assembly languages still require a lot of instructions to do even simple tasks. 
		- While the individual instructions themselves are somewhat human readable, understanding what an entire program is doing can be challenging.
	2. Assembly language still isn’t very portable.
		- A program written in assembly for one CPU will likely not work on hardware that uses a different instruction set, and would have to be rewritten or extensively modified.
---
### High-level Languages
- These languages are called **high level languages** to address the readability and portability concerns
>[!example]-
>Here is the same instruction as above in C/C++: `a = 97;`
- Much like assembly programs, programs written in high level languages must be translated into a format the computer can understand before they can be run.
	- There are two primary ways this is done: compiling and interpreting.
- A **compiler** is a program (or collection of programs) that reads source code (typically written in a high-level language) and translates it into some other language (typically a low-level language, such as assembly or machine language, etc…).
	- Most often, these low-level language files are then combined into an executable file (containing machine language instructions) that can be run or distributed to others.
	- Running the executable file does not require the compiler to be installed.
	- A simplified representation of the compiling process:
		- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/Compiling-min.png?ezimgfmt=rs:521x161/rscb2/ng:webp/ngcb2)
- An **interpreter** is a program that directly executes the instructions in the source code without requiring them to be compiled into an executable first.
	-  Interpreters tend to be more flexible than compilers, but are less efficient when running programs because the interpreting process needs to be done every time the program is run.
	- This also means the interpreter must be installed on every machine where an interpreted program will be run.
	- A simplified representation of the interpretation process:
		- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/Interpreting-min.png?ezimgfmt=rs:573x48/rscb2/ng:webp/ngcb2)
- [Difference between compiled and interpreted languages?](https://stackoverflow.com/questions/38491212/difference-between-compiled-and-interpreted-languages/38491646?newreg=7b96676e0d9747ea863617bee9a89398)
- High level languages have many desirable properties
	1.  High level languages are much easier to read and write
	2. High level languages require fewer instructions to perform the same task as lower level languages
	3. Programs can be compiled (or interpreted) for many different systems.
		- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/Portability-min.png?ezimgfmt=rs:481x261/rscb2/ng:webp/ngcb2)
---
## 0.3 — Introduction to C/C++
### Before C++, there was C
- The C language was developed in 1972 by Dennis Ritchie at Bell Telephone laboratories, primarily as a systems programming language (a language to write operating systems with). Ritchie’s primary goals were to produce a minimalistic language that was easy to compile, allowed efficient access to memory, produced efficient code, and was self-contained (not reliant on other programs). For a high-level language, it was designed to give the programmer a lot of control, while still encouraging platform (hardware and operating system) independence (that is, the code didn’t have to be rewritten for each platform).
---
### C++
- C++ (pronounced “see plus plus”) was developed by Bjarne Stroustrup at Bell Labs as an extension to C, starting in 1979. C++ adds many new features to the C language, and is perhaps best thought of as a superset of C, though this is not strictly true (as C99 introduced a few features that do not exist in C++).
- C++’s claim to fame results primarily from the fact that it is an object-oriented language.
---
### C and C++’s philosophy
- The underlying design philosophy of C and C++ can be summed up as “trust the programmer” -- which is both wonderful and dangerous.
	- This is one of the primary reasons why knowing what you shouldn’t do in C/C++ is almost as important as knowing what you should do.
>[!faq]- What is C++ good at?
>C++ excels in situations where high performance and precise control over memory and other resources is needed.
>- Video games
>- Real-time systems (e.g. for transportation, manufacturing, etc…)
>- High-performance financial applications (e.g. high frequency trading)
>- Graphical applications and simulations
>- Productivity / office applications
>- Embedded software
>- Audio and video processing
>- Artificial intelligence and neural networks

---
## 0.4 — Introduction to C++ development
- A graphic outlining a simplistic approach:
	- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/Development-min.png?ezimgfmt=rs%3Adevice%2Frscb2-1)
---
### Step 1: Define the problem that you would like to solve
- This is the “what” step, where you figure out what problem you are intending to solve.
>[!example]-
>- “I want to write a program that will allow me to enter many numbers, then calculates the average.”
>- “I want to write a program that generates a 2d maze and lets the user navigate through it. The user wins if they reach the end.”
>- “I want to write a program that reads in a file of stock prices and predicts whether the stock will go up or down.”

---
### Step 2: Determine how you are going to solve the problem
- This is the “how” step, where you determine how you are going to solve the problem you came up with in step 1.
- Good solutions have the following characteristics:
	- They are straightforward (not overly complicated or confusing).
	- They are straightforward (not overly complicated or confusing).
	- They are built modularly, so parts can be reused or changed later without impacting other parts of the program.
	- They are robust, and can recover or give useful error messages when something unexpected happens.
---
### Step 3: Write the program
- In order to write the program, we need two things:
	1. Knowledge of a programming language
	2. A text editor to write and save our written programs
>[!todo]- Parctice
>Name your code files `something.cpp`, where `something` is a name of your choosing, and `.cpp` is the extension that indicates the file is a C++ source file.

---
## 0.5 — Introduction to the compiler, linker, and libraries
### Step 4: Compiling your source code
- The C++ compiler sequentially goes through each source code (.cpp) file in your program and does two important tasks:
	1. The compiler checks your C++ code to make sure it follows the rules of the C++ language.
	2. The compiler translates your C++ code into machine language instructions.
		- These instructions are stored in an intermediate file called an **object file**.
			- Object files are typically named _name.o_ or _name.obj_, where _name_ is the same name as the .cpp file it was produced from.
			- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/CompileSource-min.png?ezimgfmt=rs:421x161/rscb2/ng:webp/ngcb2)
		- The object file also contains metadata that is required or useful in subsequent steps.
---
### Step 5: Linking object files and libraries
- After the compiler has successfully finished, another program called the **linker** kicks in.
	- The linker’s job is to combine all of the object files and produce the desired output file (typically an executable file). This process is called **linking**.
		1. The linker reads in each of the object files generated by the compiler and makes sure they are valid.
		2. The linker ensures all cross-file dependencies are resolved properly.
			-  For example, if you define something in one .cpp file, and then use it in a different .cpp file, the linker connects the two together. If the linker is unable to connect a reference to something with its definition, you’ll get a linker error, and the linking process will abort.
		3. The linker also is capable of linking library files.
			- A **library file** is a collection of precompiled code that has been “packaged up” for reuse in other programs.
			- C++ comes with an extensive library called the **C++ Standard Library** (usually shortened to _standard library_) that provides a set of useful capabilities for use in your programs.
- ![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/LinkingObjects-min.png?ezimgfmt=rs:441x271/rscb2/ng:webp/ngcb2)
---
### Building
- The term **building** is often used to refer to the full process of converting source code files into an executable that can be run.
---
### Steps 6 & 7: Testing and Debugging
- Run your executable and see whether it produces the output you were expecting
---
### Integrated development environments (IDEs)
- an integrated development environment (IDE) bundles and integrates all of features together
	- editor
	- compiler
	- linker
	- debugger
	- ...
---
## 0.6 — Installing an Integrated Development Environment (IDE)
An **Integrated Development Environment (IDE)** is a piece of software designed to make it easy to develop, build, and debug your programs.
A typical modern IDE will include:
- Some way to easily load and save your code files.
- A code editor that has programming-friendly features, such as line numbering, syntax highlighting, integrated help, name completion, and automatic source code formatting.
- A basic build system that will allow you to compile and link your program into an executable, and then run it.
- An integrated debugger to make it easier to find and fix software defects.
- Some way to install plugins so you can modify the IDE or add capabilities such as version control.
---
## 0.7 — Compiling your first program
### Projects
 A **project** is a container that holds all of your source code files, images, data files, etc…
	 that are needed to produce an executable (or library, website, etc…)
	 that you can run or use
	 When you choose to compile your program, all of the .cpp files in the project will get compiled and linked.
Each project corresponds to one program.
- - -
### Console projects
A **console project** means that we are going to create programs that can be run from the Windows, Linux, or Mac console.
	By default, console applications have no graphical user interface (GUI)
	They print text to the console, read input from the keyboard, and are compiled into stand-alone executable files.
- - -
### Workspaces / solutions
 A workspace or solution is a container that can hold one or more related projects.
>[!example]- 
>If you were writing a game and wanted to have a separate executable for single player and multiplayer, you’d need to create two projects. It wouldn’t make sense for both of these projects to be completely independent -- after all, they are part of the same game. Most likely, each would be configured as a separate project within a single workspace/solution

---
### Creating a project
>[!faq]- What are precompiled headers and why are we turning them off?
>In large projects (those with many code files), precompiled headers can improve compilation speed by avoiding some redundant compilation that tends to occur in larger projects.
>However, precompiled headers require extra work to use, and for small projects (such as those you’ll create in our tutorials) make little to no difference in compilation times.
>For this reason, we recommend turning precompiled headers off initially, and only enabling them later if and when you find your compilation times suffering.

---
### Visual Studio Solution Explorer
On the left or right side of the window, you should see a window titled _Solution Explorer_.
	 Inside this window, Visual Studio has created a solution for you (_Solution ‘HelloWorld’_). Within that, with the name in bold, is your new project (_HelloWorld_).
	  Within the project, Visual Studio has created a number of files for you, including _HelloWorld.cpp_ (underneath the _Source Files_ tree item).
Select and delete all of the code, and type/copy the following into your IDE:
```cpp title:"Hello world"
#include <iostream>

int main()
{
	std::cout << "Hello, world!";
	return 0;
}
```
To compile your program, either press <kbd>F7</kbd> (if this doesn’t work, try <kbd>Ctrl-Shift-B</kbd>) or go to the _Build menu > Build Solution_.
	you should see the following appear in the Output window:
``` title:Output
Build started...
1>------ Build started: Project: HelloWorld, Configuration: Debug Win32 ------
1>HelloWorld.cpp
1>HelloWorld.vcxproj -> C:\Users\user\source\repos\HelloWorld\Debug\HelloWorld.exe
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```
To run your compiled program, press <kbd>Ctrl-F5</kbd>, or go to the _Debug menu_ and choose _Start Without Debugging_.
![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VC2005-Run-min.png?ezimgfmt=rs:573x289/rscb2/ng:webp/ngcb2)
- - -
> [!faq]- What is the difference between the compile, build, rebuild, clean, and run/start options in my IDE?
> - **Build** 
> 	 compiles all _modified_ code files in the project or workspace/solution, and then links the object files into an executable. If no code files have been modified since the last build, this option does nothing.
> - **Clean**
> 	removes all cached objects and executables so the next time the project is built, all files will be recompiled and a new executable produced.
>  - **Rebuild**
> 	does a “clean”, followed by a “build”.
>  - **Compile** 
> 	recompiles a single code file (regardless of whether it has been cached previously). This option does not invoke the linker or produce an executable.
> - **Run/start** 
> 	executes the executable from a prior build. Some IDEs (e.g. Visual Studio) will invoke a “build” before doing a “run” to ensure you are running the latest version of your code. Otherwise (e.g. Code::Blocks) will just execute the prior executable.

---
## 0.8 — A few common C++ problems
```cpp title:"When executing a program, the console window blinks and then closes immediately."
#include <iostream>
#include <limits>

int main()
{
	std::cout << "Hello, world!";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
	std::cin.get(); 
	// get one more char from the user (waits for user to press enter)
	return 0;
	/*
	This will cause your program to wait for the user to press enter before continuing (you may have to press enter twice)
	*/
}
```
......
## 0.9 — Configuring your compiler: Build configurations
A **build configuration** (also called a **build target**) is a collection of project settings that determines how your IDE will build your project.
- typically includes:
	- what the executable will be named
	- what directories the IDE will look in for other code and library files
	- whether to keep or strip out debugging information
	- how much to have the compiler optimize your program
	- etc...
	When you create a new project in your IDE, most IDEs will set up two different build configurations for you: a release configuration, and a debug configuration.
	The **debug configuration** is designed to help you debug your program, and is generally the one you will use when writing your programs.
	The **release configuration** is designed to be used when releasing your program to the public.
- - -
### Switching between build configurations
The easiest way is to set your selection directly from the _Solution Configurations_ dropdown in the _Standard Toolbar Options_:
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-BuildTarget-min.png?ezimgfmt=rs:541x41/rscb2/ng:webp/ngcb2)
You can also access the configuration manager dialog by selecting _Build menu > Configuration Manager_, and change the _active solution configuration_.
To the right of the _Solutions Configurations_ dropdown, Visual Studio also has a _Solutions Platform_ dropdown that allows you to switch between x86 (32-bit) and x64 (64-bit) platforms.
- - -
## 0.10 — Configuring your compiler: Compiler extensions
The C++ standard defines rules about how programs should behave in specific circumstances. And in most cases, compilers will follow these rules. However, many compilers implement their own changes to the language, often to enhance compatibility with other versions of the language (e.g. C99), or for historical reasons. These compiler-specific behaviors are called **compiler extensions**.
- - -
### Disabling compiler extensions
To disable compiler extensions, right click on your project name in the _Solution Explorer_ window, then choose _Properties_:
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-SolutionExplorerProperties-min.png?ezimgfmt=rs%3Adevice%2Frscb2-1)
From the _Project_ dialog, first make sure the _Configuration_ field is set to _All Configurations_.
Then, click _C/C++ > Language tab_, and set _Conformance mode_ to _Yes (/permissive-)_ (if it is not already set to that by default).
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-DisableExtensions-min.png?ezimgfmt=rs:541x374/rscb2/ng:webp/ngcb2)
>[!tip]-
>These settings are applied on a per-project basis. You need to set them every time you create a new project, or create a template project with those settings once and use that to create new projects


---
## 0.11 — Configuring your compiler: Warning and error levels
If you have done something that definitively violates the rules of the language, the compiler is required to emit a **diagnostic message** (often called a **diagnostic** for short).
If compilation cannot continue due to the violation, then the compiler will emit an **error**.
If compilation can continue despite the violation, the compiler may decide to emit either an error or a **warning**.
- - -
### Increasing your warning levels
To increase your warning levels, right click on your project name in the _Solution Explorer_ window, then choose _Properties_:
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-SolutionExplorerProperties-min.png?ezimgfmt=rs:520x711/rscb2/ng:webp/ngcb2)
From the _Project_ dialog, first make sure the _Configuration_ field is set to _All Configurations_.
Then select _C/C++ > General tab_ and set _Warning level_ to _Level4 (/W4)_:
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-EnableAllWarnings-min.png?ezimgfmt=rs:541x369/rscb2/ng:webp/ngcb2)
Visual Studio disables signed/unsigned conversion warnings by default, and those are useful, so if you are using Visual Studio 2019 or newer, let’s enable those:
	From _C/C++ > Command Line tab_, under _Additional Options_, add `/w44365`. This tells the compiler to enable signed/unsigned conversion warnings at warning level 4 (which you enabled above).
	From _C/C++ > External Includes tab_, set _External Header Warning Level_ to _Level3 (/external:W3)_. This tells the compiler to compile standard library headers at warning level 3 (instead of 4) so that compiling those headers doesn’t trigger this warning.
- - -
### Treat warnings as errors
To treat warnings as errors, right click on your project name in the _Solution Explorer_ window, then choose _Properties_:
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-SolutionExplorerProperties-min.png?ezimgfmt=rs:520x711/rscb2/ng:webp/ngcb2)
From the _Project_ dialog, first make sure the _Configuration_ field is set to _All Configurations_.
Then select _C/C++ > General tab_ and set _Treat Warnings As Errors_ to _Yes (/WX)_.
	![image.png](https://www.learncpp.com/images/CppTutorial/Chapter0/VS-WarningsAsErrors-min.png?ezimgfmt=rs:541x369/rscb2/ng:webp/ngcb2)
- - -
## 0.12 — Configuring your compiler: Choosing a language standard
### Code names for in-progress language standards
Here’s a mapping of code names to the finalized names:

| Code name | Finalized name                      |
| --------- | ----------------------------------- |
| C++0x     | C++11                               |
| C++1y     | C++14                               |
| C++1z     | C++17                               |
| C++2a     | C++20                               |
| C++2b     | C++23                               |
| C++2c     | C++26 (intended, not finalized yet) |
- - -
### Which language standard should you choose?
In professional environments, it’s common to choose a language standard that is one or two versions back from the latest standard (e.g. if C++20 were the latest version, that means C++14 or C++17).
For personal projects and while learning, we recommend choosing the latest finalized standard, as there is little downside to doing so.
- - -
### Setting a language standard in Visual Studio
To select a language standard, open your project, then go to _Project menu > (Your application’s Name)_ Properties, then open _Configuration Properties > C/C++ > Language_.
- - -
### Exporting your configuration
In Visual Studio, this option is available via Project -> Export Template. Select “Project template”, add a name and optional description (e.g. C++20 console application), and then click “Finish”.
Once you create a new project with this template, it may not open any files. You can open up your .cpp file in the Solution Explorer window by going to Solution -> (Project Name) -> Source Files -> (template name).cpp.
- - -
### Where can I view the C++ standards document?
Each C++ language standard is described by a **standards document**, which is a formal technical document that is the authoritative source for the rules and requirements of a given language standard. The standards document is not designed for learning -- rather, it’s designed for compiler writers to be able to implement new language standards accurately.
[C++ standards document](https://isocpp.org/std/the-standard)
[draft C++ standards documents](https://www.open-std.org/jtc1/sc22/wg21/docs/standards)
- - -
# C++ Basics
## 1.1 — Statements and the structure of a program
### Statements
A computer program is a sequence of instructions that tell the computer what to do. A **statement** is a type of instruction that causes the program to _perform some action_.
	Statements are by far the most common type of instruction in a C++ program. This is because they are the smallest independent unit of computation in the C++ language. 
	In that regard, they act much like sentences do in natural language.
Most (but not all) statements in C++ end in a semicolon.
In a high-level language such as C++, a single statement may compile into many machine language instructions.
>[!info]- There are many different kinds of statements in C++:
>
>- Declaration statements
>- Jump statements
>- Expression statements
>- Compound statements
>- Selection statements (conditionals)
>- Iteration statements (loops)
>- Try blocks

---
### Functions and the main function
In C++, statements are typically grouped into units called functions. A **function** is a collection of statements that get executed sequentially (in order, from top to bottom).
Programs typically terminate (finish running) after the last statement inside function `main` has been executed.
Functions are typically written to do a specific job or perform some useful action.
>[!info]- Nomenclature
>When discussing functions, it’s fairly common shorthand to append a pair of parenthesis to the end of the function’s name. For example, if you see the term `main()` or `doSomething()`, this is shorthand for functions named `main` or `doSomething` respectively. This helps differentiate functions from other things with names (such as variables) without having to write the word “function” each time.

---
### Dissecting Hello world!
```cpp title:"Hello world"
#include <iostream>

int main()
{
	std::cout << "Hello, world!";
	return 0;
}
```
Line 1 is a special type of line called a preprocessor directive.
	This preprocessor directive indicates that we would like to use the contents of the `iostream` library, which is the part of the C++ standard library that allows us to read and write text from/to the console.
	We need this line in order to use `std::cout` on line 5. Excluding this line would result in a compile error on line 5, as the compiler wouldn’t otherwise know what `std::cout` is.
Line 2 is blank, and is ignored by the compiler.
	 This line exists only to help make the program more readable to humans (by separating the `#include` preprocessor directive and the subsequent parts of the program).
Line 3 tells the compiler that we’re going to write (define) a function whose name (identifier) is `main`.
	Every C++ program must have a `main` function or it will fail to link.
Lines 4 and 7 tell the compiler which lines are part of the _main_ function.
	Everything between the opening curly brace on line 4 and the closing curly brace on line 7 is considered part of the `main` function. This is called the function body.
Line 5 is the first statement within function `main`, and is the first statement that will execute when we run our program.
	`std::cout` (which stands for “character output”) and the `<<` operator allow us to display information on the console.
	In this case, we’re displaying the text “Hello world!”. This statement creates the visible output of the program.
Line 6 is a return statement.
	When an executable program finishes running, the program sends a value back to the operating system in order to indicate whether it ran successfully or not.
	This particular return statement returns the value `0` to the operating system, which means “everything went okay!”. 
	This is the last statement in the program that executes.
- - -
### Syntax and syntax errors
The rules that govern how sentences are constructed in a language is called **syntax**.
	If you violate a rule, the compiler will complain when you try to compile your program, and issue you a **syntax error**.
- - -
## 1.2 — Comments
A **comment** is a programmer-readable note that is inserted directly into the source code of the program.
	Comments are ignored by the compiler and are for the programmer’s use only.
- - -
### Single-line comments
The `//` symbol begins a C++ single-line comment, which tells the compiler to ignore everything from the `//` symbol to the end of the line. 
```cpp title:example
std::cout << "Hello world!"; // Everything from here to the end of the line is ignored
```
Typically, the single-line comment is used to make a quick comment about a single line of code.
```cpp title:example
std::cout << "Hello world!\n"; // std::cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
std::cout << "Yeah!\n"; // especially when lines are different lengths
```
```cpp title:example
std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // this is much easier to read
std::cout << "Yeah!\n";                        // don't you think so?
```
```cpp title:example
// std::cout lives in the iostream library
std::cout << "Hello world!\n";

// this is much easier to read
std::cout << "It is very nice to meet you!\n";

// don't you think so?
std::cout << "Yeah!\n"
```
- - -
### Multi-line comments
The `/*` and `*/` pair of symbols denotes a C-style multi-line comment. Everything in between the symbols is ignored.
```cpp title:example
/* This is a multi-line comment.
   This line will be ignored.
   So will this one. */
```
```cpp title:example
/* This is a multi-line comment.
 * the matching asterisks to the left
 * can make this easier to read
 */
```
```cpp title:example
/* This is a multi-line /* comment */ this is not inside the comment */
// The above comment ends at the first */, not the second */
```
>[!warning]-
>Don’t use multi-line comments inside other multi-line comments. Wrapping single-line comments inside a multi-line comment is okay.

---
### Proper use of comments
Typically, comments should be used for three things. 
- What
	- First, for a given library, program, or function, comments are best used to describe _what_ the library, program, or function, does. These are typically placed at the top of the file or library, or immediately preceding the function.
- How
	- Second, _within_ a library, program, or function described above, comments can be used to describe _how_ the code is going to accomplish its goal.
- Why
	- Third, at the statement level, comments should be used to describe _why_ the code is doing something.
		A bad statement comment explains _what_ the code is doing. 
		If you ever write code that is so complex that needs a comment to explain _what_ a statement is doing, you probably need to rewrite your statement, not comment it.
```cpp title:"Bad comment"
// Set sight range to 0
sight = 0;
```
```cpp title:"Good comment"
// The player just drank a potion of blindness and can not see anything
sight = 0;
```
```cpp title:"Bad comment"
// Calculate the cost of the items
cost = quantity * 2 * storePrice;
```
```cpp title:"Good comment"
// We need to multiply quantity by 2 here because they are bought in pairs
cost = quantity * 2 * storePrice;
```
>[!todo]- Practice
>Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

---
### Commenting out code
Converting one or more lines of code into a comment is called **commenting out** your code.
	This provides a convenient way to (temporarily) exclude parts of your code from being included in your compiled program.
- - -
## 1.3 — Introduction to objects and variables
### Data and values
In computing, **data** is any information that can be moved, processed, or stored by a computer.
	Data on a computer is typically stored in a format that is efficient for storage or processing (and is thus not human readable).
>[!tip]-
>Programs are collections of instructions that manipulate data to produce a desired result.

A single piece of data is called a **value**. Common examples of values include letters (e.g. `a`), numbers (e.g. `5`), and text (e.g. `Hello`).
- - -
### Random Access Memory
The main memory in a computer is called **Random Access Memory** (often called **RAM** for short).
	When we run a program, the operating system loads the program into RAM.
	 Any data that is hardcoded into the program itself (e.g. text such as “Hello, world!”) is loaded at this point.
	 The operating system also reserves some additional RAM for the program to use or stores values calculated while the program is running (e.g. the sum of two values) so they can be used again later.
- - -
### Objects and variables
An **object** is a region of storage (usually memory) that can store a value, and has other associated properties.
	In C++, direct memory access is discouraged. Instead, we access memory indirectly through an object.
Although objects in C++ can be unnamed (anonymous), more often we name our objects using an identifier. An object with a name is called a **variable**.
>[!tip]-
>An object is used to store a value in memory. A variable is an object that has a name (identifier).

- - -
### Variable instantiation
In order to create a variable, we use a special kind of declaration statement called a **definition**.
```cpp title:"an example of defining a variable named x"
int x; // define a variable named x, of type int
```
When the program is run (called **runtime**), the variable will be instantiated. **Instantiation** is a fancy word that means the object will be created and assigned a memory address.
 An instantiated object is sometimes called an **instance**.
- - -
### Data types
 A **data type** (more commonly just called a **type**) tells the compiler what type of value (e.g. a number, a letter, text, etc…) the variable will store.
>[!example]-
>In the above example, our variable `x` was given type `int`, which means variable x will represent an integer value. An **integer** is a number that can be written without a fractional component, such as `4`, `27`, `0`, `-2`, or `-12`. For short, we can say that `x` is an `integer variable`.

- - -
### Defining multiple variables
It is possible to define multiple variables _of the same type_ in a single statement by separating the names with a comma.
```cpp title:example
int a, b;
```
- - -
### Summary
In C++, we use objects to access memory. A named object is called a variable. Variables have an identifier, a type, and a value (and some other attributes that aren’t relevant here). A variable’s type is used to determine how the value in memory should be interpreted.
- - -
## 1.4 — Variable assignment and initialization
### Variable assignment
After a variable has been defined, you can give it a value (in a separate statement) using the _= operator_. 
	This process is called **assignment**, and the _= operator_ is called the **assignment operator**.
```cpp title:"Variable assignment"
int width; // define an integer variable named width
width = 5; // assignment of value 5 into variable width

// variable width now has value 5
```
By default, assignment copies the value on the right-hand side of the _= operator_ to the variable on the left-hand side of the operator. This is called **copy assignment**.
```cpp title:"assignment twice"
#include <iostream>

int main()
{
	int width;
	width = 5; // copy assignment of value 5 into variable width

	std::cout << width; // prints 5

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

	return 0;
}
```
- - -
### Initialization
When an object is defined, you can optionally give it an initial value.
	The process of specifying an initial value for an object is called **initialization**, and the syntax used to initialize an object is called an **initializer**.
```cpp title:initializer
int width { 5 }; // define variable width and initialize with initial value 5

// variable width now has value 5
// In the above initialization of variable `width`, `{ 5 }` is the initializer, and `5` is the initial value.
```
- - -
### Different forms of initialization
```cpp title:"6 basic ways to initialize variables"
int a;         // no initializer (default initialization)
int b = 5;     // initial value after equals sign (copy initialization)
int c( 6 );    // initial value in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d { 7 };   // initial value in braces (direct list initialization)
int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
int f {};      // initializer is empty braces (value initialization)
```
- - -
### Default initialization
When no initializer is provided (such as for variable `a` above), this is called **default initialization**.
	In most cases, default initialization performs no initialization, and leaves a variable with an indeterminate value.
- - -
### Copy initialization
When an initial value is provided after an equals sign, this is called **copy initialization**.
	Copy initialization had fallen out of favor in modern C++ due to being less efficient than other forms of initialization for some complex types.
- - -
### Direct initialization
When an initial value is provided inside parenthesis, this is called **direct initialization**.
	 Just like copy initialization, direct initialization had fallen out of favor in modern C++, largely due to being superseded by list initialization.
```cpp title:" direct initialization makes it hard to differentiate variables from functions"
int x();  // forward declaration of function x
int x(0); // definition of variable x with initializer 0
```
- - -
### List initialization
The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. This is called **list initialization** (or **uniform initialization** or **brace initialization**).
```cpp title:"List initialization comes in three forms"
int width { 5 };    // direct list initialization of initial value 5 into variable width
int height = { 6 }; // copy list initialization of initial value 6 into variable height
int depth {};       // value initialization (see next section)
```
>[!tip]-
>Prior to the introduction of list initialization, some types of initialization required using copy initialization, and other types of initialization required using direct initialization. List initialization was introduced to provide a more consistent initialization syntax (which is why it is sometimes called “uniform initialization”) that works in most cases.
>Additionally, list initialization provides a way to initialize objects with a list of values (which is why it is called “list initialization”).

```cpp title:"if you try to brace initialize a variable using a value that the variable can not safely hold, the compiler is required to produce a diagnostic (usually an error)."
int width { 4.5 }; // error: a number with a fractional value can't fit into an int
```
>[!tip]-
>Prefer direct list initialization (or value initialization) for initializing your variables.

- - -
### Value initialization and zero initialization
When a variable is initialized using empty braces, **value initialization** takes place. In most cases, **value initialization** will initialize the variable to zero (or empty, if that’s more appropriate for a given type). In such cases where zeroing occurs, this is called **zero initialization**.
>[!faq]- Q: When should I initialize with { 0 } vs {}?
>Use an explicit initialization value if you’re actually using that value.
>```cpp
>int x { 0 };    // explicit initialization to value 0
>std::cout << x; // we're using that zero value
>```
>Use value initialization if the value is temporary and will be replaced.
>```cpp
>int x {};      // value initialization
>std::cin >> x; // we're immediately replacing that value
>```

- - -
### Initializing multiple variables
```cpp title:"You can initialize multiple variables defined on the same line"
int a = 5, b = 6;          // copy initialization
int c( 7 ), d( 8 );        // direct initialization
int e { 9 }, f { 10 };     // direct brace initialization
int g = { 9 }, h = { 10 }; // copy brace initialization
int i {}, j {};            // value initialization
```
```cpp title:"Unfortunately, there’s a common pitfall here that can occur when the programmer mistakenly tries to initialize both variables by using one initialization statement:"
int a, b = 5; // wrong (a is not initialized!)
int c, d( 5 );// wrong (c is not initialized!)
int e, f{ 5 };// wrong (e is not initialized!)

int g = 5, h = 5; // correct
```
- - -
### Unused initialized variables warnings
```cpp title:example
int main()
{
    int x { 5 }; // variable defined

    // but not used anywhere

    return 0;
}
```
- - -
### The `[[maybe_unused]]` attribute ==C++17==
```cpp title:example
#include <iostream>

int main()
{
    // Here's some math/physics values that we copy-pasted from elsewhere
    double pi { 3.14159 };
    double gravity { 9.8 };
    double phi { 1.61803 };

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // We're not using gravity in this program
    // The compiler will likely complain about gravity being defined but unused

    return 0;
}
```
```cpp title:"The following program should generate no warnings/errors"
int main()
{
    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}
```
the compiler will likely optimize these variables out of the program, so they have no performance impact
	The `[[maybe_unused]]` attribute should only be applied selectively to variables that have a specific and legitimate reason for being unused.

- - -
## 1.5 — Introduction to iostream: cout, cin, and endl
### The input/output library
The **input/output library** (io library) is part of the C++ standard library that deals with basic input and output.
```cpp title:"To use the functionality defined within the _iostream_ library, we need to include the _iostream_ header at the top of any code file that uses the content defined in _iostream_"
#include <iostream>

// rest of code that uses iostream functionality here
```
- - -
### std::cout
The _iostream_ library contains a few predefined variables for us to use. One of the most useful is **std::cout**, which allows us to send data to the console to be printed as text. ==_cout_ stands for “character output”.==
- - -
### Using `std::endl` to output a newline
If we want to print separate lines of output to the console, we need to tell the console to move the cursor to the next line. We can do that by outputting a newline. A **newline** is an OS-specific character or sequence of characters that moves the cursor to the start of the next line.
	One way to output a newline is to output `std::endl` (which stands for “end line”)
>[!tip]-
>Output a newline whenever a line of output is complete.

- - -
### std::cout is buffered
Statements in our program request that output be sent to the console. However, that output is typically not sent to the console immediately. Instead, the requested output “gets in line”, and is stored in a region of memory set aside to collect such requests (called a **buffer**). Periodically, the buffer is **flushed**, meaning all of the data collected in the buffer is transferred to its destination (in this case, the console).
>[!info]-
>The opposite of buffered output is unbuffered output. With unbuffered output, each individual output request is sent directly to the output device.
>Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase performance by batching multiple output requests together to minimize the number of times output has to be sent to the output device.

- - -
### `std::endl` vs `\n`
Using `std::endl` is often inefficient, as it actually does two jobs: it outputs a newline (moving the cursor to the next line of the console), and it flushes the buffer (which is slow).
`\n` moves the cursor to the next line of the console without causing a flush, so it will typically perform better. `\n` is also more concise to type and can be embedded into existing double-quoted text.
```cpp title:example
#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}
```
When `\n` is not being embedded into an existing line of double-quoted text (e.g. `"hello\n")`, it is conventionally single quoted (`'\n'`).
>[!tip]-
>In C++, we use single quotes to represent single characters (such as `'a'` or `'$'`), and double-quotes to represent text (zero or more characters).
>Single quotes should be preferred in non-output cases.

- - -
### std::cin
Whereas `std::cout` prints data to the console using the insertion operator (`<<`), `std::cin` (which stands for “character input”) reads input from keyboard using the **extraction operator (`>>`)**.The input must be stored in a variable to be used.
```cpp title:"example"
#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}
```
 Note that you don’t need to use ‘\n’ when accepting input, as the user will need to press the _enter_ key to have their input accepted, and this will move the cursor to the next line of the console.
 ```cpp title:" possible to input more than one value on a single line"
#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{}; // define variable x to hold user input (and value-initialize it)
    int y{}; // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
 ```
- - -
### Summary
>[!tip]- New programmers often mix up `std::cin`, `std::cout`, the insertion operator (`<<`) and the extraction operator (`>>`).
>- `std::cin` and `std::cout` always go on the left-hand side of the statement.
>- `std::cout` is used to output a value (cout = character output)
>- `std::cin` is used to get an input value (cin = character input)
>- `<<` is used with `std::cout`, and shows the direction that data is moving. `std::cout << 4` moves the value `4` to the console.
>- `>>` is used with `std::cin`, and shows the direction that data is moving. `std::cin >> x` moves the value the user entered from the keyboard into variable `x`.

- - -
## 1.6 — Uninitialized variables and undefined behavior
### Uninitialized variables
A variable that has not been given a known value (through initialization or assignment) is called an **uninitialized variable**.
>[!info]-
>- Initialized = The object is given a known value at the point of definition.
>- Assignment = The object is given a konwn value beyond the point of definition.
>- Uninitialized = The object has not been given a known value yet. 

```cpp title:"test"
#include<iostream>

int main ()
{
// define an integer variable named x
int x; // this variable is uninitialized because we haven't given it a value

// print the value of x to the screen
std::cout << x << '\n';

return 0;
}

/*
In this case, the computer will assign some unused memory to x.
It will then send the value residing in that memory location to std::cout, which will print the value (interpreted as an integer).
*/
```
---
### Undefined behavior
**Undefined behavior**(often abbreviated **UB**) is the result of executing code whose behavior is not well-defined by c++ language.
	Using the value from a uninitialized variable is our first example of undefined behavior.
>[!tip]-
>Take care to avoid all situations that result in undefined behavior.

---
### Implementation-defined behavior and unspecified behavior
**Implementation-defined behavior** means the behavior of some syntax is left up to the implementation(the compiler) to define.
	Such behaviors must be consistent and documented, but different compilers may produce different results.
**Unspecified behavior** is almost identical to implementation-defined behavior in that behavior is left up to the implementation, but the implementation is not required to document the behavior.
>[!tip]-
>Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementations.

---
## 1.7 — Keywords and naming identifiers
### Keywords
C++ reserves a set of 92 words(as of C++ 23) for its own use. These words are called **keywords**(or reserved words), and each of these keywords has a special meaning within the C++ language.
>[!info]- A list of all the C++ keyword(through C++23)
>- alignas
>- alignof 
>- and
>- and_eq
>- asm
>- auto
>- bitand
>- bitor
>- bool 
>- break
>- case
>- catch
>- char
>- char8_t(since C++20)
>- char16_t
>- char32_t
>- class
>- compl
>- concept(since C++20)
>- const
>- consteval(since C++20)
>- constexpr
>- constinit(since C++20)
>- const_cast
>- continue
>- co_await(since C++20)
>- co_return(since C++20)
>- co_yield(since C++20)
>- decltype
>- default
>- delete
>- do
>- double
>- dynamic_cast
>- else
>- enum
>- explicit
>- export
>- extern
>- false
>- float
>- for
>- friend
>- goto
>- if
>- inline
>- int
>- long
>- mutable
>- namespace
>- new
>- noexcept
>- not
>- not_eq
>- nullptr
>- operator
>- or
>- or_eq
>- private
>- protected
>- public
>- register
>- reinterpret_cast
>- requires(since C++20)
>- return
>- short
>- signed
>- sizeof
>- static
>- static_assert
>- static_cast
>- struct
>- switch
>- template
>- this
>- thread_loacl
>- throw
>- true
>- try
>- typedef
>- typeid
>- typename
>- union
>- unsigned
>- using 
>- virtual
>- void 
>- volatile
>- wchar_t
>- while
>- xor
>- xor_eq

C++ also defines special identifiers: _override, final, import,_ and _module._ These have a specific meaning when used in certain contexts but are not reserved otherwise.

---
### Identifier naming rules
- The identifier can not be a keyword. Keywords are reserved.
- The identifier can only be composed of letters(lower or upper case), numbers, and the underscore character. That means the name can not contain symbols(except the underscore) nor whitespace(spaces or tabs).
- The identifier must begin with a letter(lower or upper case) or an underscore. It can not start with a number.
- C++ is case sensitive, and thus distinguishes between lower and upper case letters. `nvalue` is different than `nValue` is different than `NVALUE`.
---
### Identifier naming best practices
1. It is a convention in C++ that variable names should begin with a lowercase letter.
2. Most often, function names are also start with a lowercase letter(though there's some disagreement on this point).
3. Identifier names that start with a capital letter are typically used for user-defined types(such as structs, class, and enumerations).
4. If the variable or function name is multi-word, there are two  common conventions: words separated by underscores(sometimes called snake_case), or intercapped(sometimes called camelCase, since the capital letters stick up like the humps on a camel). 
---
## 1.8 — Whitespace and basic formatting
**whitespace** is a term that refers to characters that are used for formatting purposes. 
	Whitespace in C++ is generally used for 3things:
1. separating certain language elements
2. inside text
3. formatting code
---
### Some language elements must be whitespace-separated
This mostly occurs when two keywords or identifiers must be placed consecutively, so the compiler can tell them apart.
```cpp title:"examples"
int x;

int main();
```
In certain cases, newlines are used as a separator. Single-line comments are terminated by a newline.
```cpp 
std::cout << "Hello world!"; // This is part of the comment and
this is not part of the comment
```
Preprocessor directives must be placed on separate lines.
```cpp 
#include <iostream>
#include <strong>
```
---
### Quoted text takes the amount of whitespace literally
Newlines are not allowed in quoted text.
Quoted text separated by nothing but whitespace(spaces, tabs, or newlines) will be concatenated.
```cpp
std::cout << "Hello world!";

std::cout << "Hello        world!" // Wrong

std::cout << "Hello 
    world!"; // Not allowed

std::cout << "Hello "
	"world!"; // Printd "Hello world!"
```
### Using whitespace to format
Whitespace is otherwise generally ignored. this means we can use whitespace wherever we like to format our code in order to make it easier to read.

---
### Basic formatting
### Automatic formatting
### Style guides
---
## 1.9 — Introduction to literals and operators
### Literals
A **literal**(also known as a **literal constant**) is a fixed value that has been inserted directly into the source code.
```cpp 
#include <iostream>

int main()
{
	std::cout << 5 << '\n'; // print the value of a literal 

	int x {5};
	std::cout << x << '\n'; //print the value of a variable 

	return 0;
}
```
---
### Operators 
The specific operation to be performed is denoted by a symbol an **operator**.
	In mathematics, an **operation** is a process involving zero or more input values(called **operands**) that produces a new value(called an _output_ value).
```cpp
#include <iostream>

int main()
{
	std::cout << 1 + 2 << '\n';

	return 0;
}
```
In C++, the output value of an operation is often called a **return value**.
The number of operands that an operator takes as input is called the operator's **arity**.
	**Unary** operators act on one operand.
		`-5`
	**Binary** operators act on two operands(often called _left_ and _right_).
		`3+4`
		`<<`
	**Ternary** operators act on three operands.
	**Nullary** operators act on zero operands.

---
### Return values and side effects
An operator(or function) that has some observable effect beyond producing a return value is said to have a **side effect**.
	`x= 5`
	`std::cout << 5`
Operators with side effects are usually called for the behavior of the side effect rather than for the return value(if any) those operators produce.

---
## 1.10 — Introduction to expressions
### Expressions
An **expression** is a non-empty sequence of literals, variables, operators, and function calls that calculates a single value.
The process of executing an expression is called **Evaluation**, and the single value produced is called the **result** of the expression.
```cpp
2 // 2 is a literal that evalutates to value 2
"Hello world!" // "Hello world!"is a literal that evaluates to text "Hello world!"
x // x id a variable that evaluates to the value of x
2 + 3 // operator+ uses oprands 2 and 3 to evaluate to valur 5 
five() // evaluates to the return value of function five()
x = 5 // x = 5 has side effect of assigning 5 to x,evaluates to x
x = 2 + 3 // has side effect of assigning to 5 to x, evaluates to x
std::cout << x // has side effect of printing value of x to console, evslustes to std::cout 
int x{2 + 3}; // 2 + 3 is an expression that has no semicolon -- the semicolon is at the end of the statement containing the expression
```
---
### Expression statements
An **expression statement** is a statement that consists of an expression followed by a semicolon.
when an expression is used in an expression statement, any return value generated by the expression is discard(because it is not used).

---
### Useless expression statements
```cpp
2 * 3;
x = 5;
```
---
### Subexpressions, full expressions, and compound expressions
A **subexpression** is an expression used as an operand.
	The subexpression of `x = 4 + 5` are `x` and `4 + 5`.
	The subexpression of `4 + 5` are `4` and `5`.
A **full expression** is an expression that is not a subexpression.
	All three expressions above(`2`, `2 + 3`, and `x = 4 + 5`) are full expressions.
A **compound expression** is an expression that contains two or more uses of operators.
	`x = 4 + 5`

---
## Developing your first program
### Multiply by 2 
```cpp
#include <iostream>

int main(){
std::cout << "Enter an interger: ";

int num{ };
std::cin >> num;

std::cout << "Doublr that number is: " << num * 2 << '\n';

return 0;
}
```
---
# C++ Basics: Functions and Files
## 2.1 — Introduction to functions
A **function** is a reusable sequence of statements designed to do a particular job.
Functions that you write yourself are called **user-defined functions**.
A **function call** is an expression that tells the CPU to interrupt the current function and **call**(execute) the named function.
	when the called function ends, the CPU returns back to the point and resumes execution.
The function initiating the function call is **caller**, and the function being called is the **callee** or **called** function.

---
### An example of a user-defined function
```cpp
returnType functionName() // This is the function heafer(tells the compiler about the existence of the function)
{
	// this is the function body(tells the compiler what the function does)
}
```
---
### Calling functions more than once
### Functions can call functions that call other functions
### Nested functions are  not supported
In C++, functions cannot be defined inside other functions.

---
## 2.2 — Function return values (value-returning functions)
### Return values
**Return type** is the type that is defined before the function's name.
Use a **return statement** to indicate **return value** being return to the caller.
**Return by value**
	When the return statement is executed, the function exits immediately, and the return value is copied from the function back to the caller.
```cpp
#include <iostream>

int getValueFromUser() 
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	
	retrun input; 
}

int main()
{
	int num{ getValueFromUser() };
	std::cout << num << " doubled is: " << num * 2 << '\n';
	
	return 0;
}
```
---
### Revisiting main()
C++ disallows calling the `main()` function explicitly.

---
### Status codes
The return value from `main()` is sometimes called a **status code**(also sometimes called a **exit code**, or rarely a **return code**).
	By definition, a status code of `0` means the program executed successfully.

---
### A value-returning function that does not return a value will produce undefined behavior
A function that returns a value is called a **value-returning function**.

---
### Function main will implicitly return 0 if no return statement is provided
### Functions can only return a single value
### The function author can decide what the return value means
### Reusing functions 
```cpp
#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	
	return input;
}

int main()
{
	int x { getValueFromUser() };
	int y { getValueFromUser() }; 
	
	std::cout << x << " + " << y << " = " << x + y << '\n';
	
	return 0;
}
```
---
### Conclusion
Return values provide a way for functions to return a single value back to the function's caller.
Functions provide a way to minimize redundancy in our programs.

---
## 2.3 — Void functions (non-value returning functions)
### Void return values
```cpp
#include <iostream>

// void means the function does not return a value to the caller 
void printHi()
{
	std::cout << "Hi" << '\n';
	
	// This function does not return a value so no return statement is needed
}

int main()
{
	printHi(); // okay:function printHi() is called, no value is returned
	
	return 0;
}
```
A function that does not return a value is called a **non-value returning function**(or a **void function**)

---
### Void functions don't need a return statement
```cpp
#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
	std::cout << "Hi" << '\n';
	
	return; // tell compiler to return to the caller -- this is redundant since the return will happen at the end of the function anyway!
} // function will return to caller here

int main()
{
	printHi();
	
	return 0;
}
```

---
### Void functions can't be used in expression that require a value
### Returning a value from a void function is a compiler error

---

## 2.3 — Introduction to function parameters and arguments
### Function parameters and arguments
A **function parameter** is a variable used in the header of a function.
	Function parameters are defined in the function header by placing them in between the parenthesis after the function name, with multiple parameters being separated by commas.
```cpp 
// This function takes no parameters 
// It does not rely on the caller fo anything
void doPrint()
{
	std::cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
	std::cout << x << '\n';
}

// This function has two integer parameters, on named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
	return x + y;
}
```
An **argument** is a value that is passed *from* the caller to the function  when a function call is made.
```cpp
doPrint(); // this call has no arguments
printValue(6); // 6 is the argument passed to function printValue()
add(2, 3); // 2 and 3 are the arguments passed to function add()
```

---
### How parameters and arguments work together
When a function is called, all of the parameters of the function are created as variables, and the value of each of the arguments is *copied* into the matching parameters (using copy initialization). This process is called **pass by value**.Function parameters that utilize pass by value are called **value parameters**.
```cpp 
#include <iosteam>

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
	std::cout << x << '\n';
	std::cout << y << '\n';
}

int main()
{
	printValue(6, 7); // This function call has two arguments, 6 and 7
	
	return 0;
}
```

---
### Fixing our challenge program
### Using return values as arguments
```cpp 
#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	
	return input;
}

void printDouble(int value)
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int mian()
{
	printDouble(getValueFromUser());
	
	return 0;
}
```

---
### How parameters and return values work together
![image.png](https://www.learncpp.com/images/CppTutorial/Chapter2/ParametersReturn.png?ezimgfmt=rs:441x251/rscb2/ng:webp/ngcb2)
### More examples
### Unreferenced parameters
In certain cases, you will encounter functions that have parameters that are not used in the body of the function. These are called **unreferenced parameters**.
```cpp 
 void doSomething(int count) // warning: unreferenced parameter count
 {
	 // This function used to do something with count but it is not used any longer
 }
int mian()
{
	doSomething(4);
	
	return 0;
}
```
A parameter without a name is called an **unnamed parameter**.
```cpp
void doSomething(int /*count*/)
{
}
```
>[!tip]- The unreferenced parameters most often happen in cases similar like this 
>1. Let’s say we have a function with a single parameter. Later, the function is updated in some way, and the value of the parameter is no longer needed. If the now-unused function parameter were simply removed, then every existing call to the function would break (because the function call would be supplying more arguments than the function could accept). This would require us to find every call to the function and remove the unneeded argument. This might be a lot of work (and require a lot of retesting). It also might not even be possible (in cases where we did not control all of the code calling the function). So instead, we might leave the parameter as it is, and just have it do nothing.
>2. Operators `++` and `--` have prefix and postfix variants (e.g. `++foo` vs `foo++`). An unreferenced function parameter is used to differentiate whether an overload of such an operator is for the prefix or postfix case.
>3. When we need to determine something from the type (rather than the value) of a type template parameter.

---
### Conclusion
Function parameters and return values are the key mechanisms by which functions can be written in a resuable way, as it allows us to write functions that can perform tasks and return retrieved or calculated results back to the caller without knowing what the specific inputs or outputs are ahead of time.

---
## 2.5 — Introduction to local scope