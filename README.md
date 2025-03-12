# MiniCompiler-2024
This project is a basic compiler built using **Flex** and **Bison** to perform **lexical, syntactic, and semantic analysis** for a custom language (defined in the provided PDF).  

## Requirements  
- GCC  
- Flex  
- Bison  

## How to Run  

1️⃣ **Generate the Lexer**  
lex lex.l
This command generates lex.yy.c, the lexical analyzer from lex.l.

2️⃣ **Generate the Parser**  
bison -d synta.y
This creates synta.tab.c (the parser) and synta.tab.h (the header file).

3️⃣ **Compile Everything**  
gcc lex.yy.c synta.tab.c -lfl -ly -o comp.exe
This compiles the generated files into an executable comp.

4️⃣ **Run the Compiler**  
./comp.exe < synta1.txt
This processes synta1.txt as input using the compiled compiler.
