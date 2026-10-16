here i'll write notes, thoughts, and any other information I pick up from *C Programming: A Modern Approach*, the book i'm studying :))

----------

### Chapter 01: Introducting C

- a widely used programming language, developed in the early 1970s, at Bell Laboratories
- C based languages: 
    - C++, adds classes and other features to support object-oriented programming
    - Java, a C++ based language, therefore inherits many C features
    - C#, derived from Java and C++
    - Perl
- considering the popularity of these newer languages, yes it's worth the trouble to learn C:
    - C give you greater insight into the features of C-based languages
    - there are a lot of older C programs around
    - C is still a widely used for developing new software, especially in situations where memory or processing power is limited or where the simplicity of C is desired
    - many of the features of C can be found in the other C-based languages as well, so it's easy later to tackle to C++ or java or other languages
- C is a low-level language, it provides access to machine-level concepts (bytes and addresses, etc)
- C is a small language
- C is a permissive language, which means that C trusts you and doesn’t stop you from doing risky or wrong things
- strenghts of C: 
    - *efficiency*, because C was intended for applications where assembly language had traditionally been used, it was crucial that C programs could run quickly and in limited amounts of memory
    - *portability*
    - *power*, C's large collection of data types and operators help make it a powerful language 
    - *flexibility*, although C was originally designed for systems programming, now it's used everywhere
    - *standard library*, which contains hundreds of functions for input/output, string handling, storage allocation, and other useful operations
    - *integration with UNIX*
- weaknesses of C: 
    - C programs can be error-prone, C is a lot like assembly language, wher emost errors aren't detected until the program is run
    - C programs can be difficult to understand
    - C programs can be difficult to modify, that happens when the programs haven't been designed with maintenance in mind
- obfuscated C: 
    - C can be super confusing
    - https://www.ioccc.org/
- effective use of C: 
    - learn how to avoid C pitfalls
    - use software tools to make programs more reliable, use stuff like debugers, lint, etc
    - take advantage of existing code libraries
    - adopt a sensible set of coding conentions, which's a style rule that a programmer has decided to adpt even though it's not enforced by the language
    - avoid "tricks" and overly complex code
    - stick to the standard

----------

### Chapter 02: C Fundamentals

- let's say we got ch01/pun.c, we've got to convert the progam to a form that the machine can execute, in C it's usually three steps:
    - *preprocessing*: the program is given to a preprocessor (which is usually integrated with the copiler below), which obeys commands that begin with # (knows as directives). a preprocessor is a bit like an editor: it can add/edit things to the program
    - *compiling*: the modified program now goes to a compilter, which translates it into machine instructions (object code). the program isn't quite ready to run yet
    - *linking*: a linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program. this additional code includes library functions (like `printf`) that are used in the program
- an example of a simple C program template:
 `directives`
 `function {`
    `statement`
 `}`
- directives
    - before a C program is compilted, it is first edited by a preprocessor
    - commands intended for the preprocessor are called directives 
    - an example is the `#include` directive
    - the directive states that the information in `<studio.h>` is to be "included" into the program before it is compiled, `<studio.h>` contains information about C's standard I/O library
    - C has no built in "read" and "write" commands, that's why we `#include <studio.h>`, so the ability to perform input and output is provided instead by functions in the standard library
    - directives always begin with # character, one line long, no semicolon or other special marker at the end of it
- functions:
    - they're like "procedures" or "subroutines" in other programming languages
    - the building blocks from which programs are constructed
    - a C program is a little more than a collection of function
    - two types of functions: 
        - those written by the programmer 
        - and those provded as part of the C implementation
    - the term "function" comes from mathematics
    - a function that computes a value uses the `return` statement to specify what value it "returns"
    - the `main` function is mandatory, it's special, it gets called automatically when the program is executed
    - if there's no return statement at the end of the main function (e.g. our ch01/pun.c), the program will still terminate, however, many compilers will produce a warning message (because the function was supposed to return an integer but failed to)
- statements: 
    - is a command to be executed when the program runs
    - C requires that each statement end with a semicolon, it shows the compiler where the statement ends, directives on the other hand, are normally one line long, and they don't end with a semicolon
    - "\n" is the new-line character
    - /* this is 
    a multi-line 
    commeeeeennnntttt */
- variables is the way to store data temporarily during program execution 
- every variable must have a type, which specifies what kind of data it will hold, two of these types are: int and float
- arithmetic on float numbers may be slower than arithmetic on int 
- the value of a float variable is often just an approximation of the number that was stored in it. if we store 0.1 in a float variable, we may later find that the variable has a value such as 0.99999999987, thanks to rounding error
- declarations: 
    - vars must be declared (described for the benefit of the compiler) before they can be used
    - to declare a var:
        1. specify the type of it
        2. then its name
        examples: 
            `int height;`
            `float profit;`
            `int height, length, width, volume;`
            `float profit, loss;`
    - our program with declarations: 
        `int main(void)`
        `{`
            `declarations`
            `statements`
        `}`
    - it's good to have a blank line between the declarations and the stetements
- assignment: 
    - a variable can be given a value by means of assignment, we declare first then we assign
    - `profit = 2150.45f`
    - `int height;`
      `height = 8;`
    BUT NOT: 
      `height = 8;`
      `int height;`
    - mixing types (such as assigning an int value to a float variabl or assigning a float value to an int variable) is possible but not always safe
- to print the value of a variable, we use %d for int and %f for float, as placeholders when it'll be filled with the variable value