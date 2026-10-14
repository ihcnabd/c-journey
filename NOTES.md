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
    - efficiency, because C was intended for applications where assembly language had traditionally been used, it was crucial that C programs could run quickly and in limited amounts of memory
    - portability
    - power, C's large collection of data types and operators help make it a powerful language 
    - flexibility, although C was originally designed for systems programming, now it's used everywhere
    - standar library, which contains hundreds of functions for input/output, string handling, storage allocation, and other useful operations
    - integration with UNIX
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
    