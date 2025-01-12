@echo off

rem Generate parser code from script.y using Bison
bison -d parser.y

rem Generate lexer code from script.l using Flex
flex flex.l

rem Compile the generated code and link everything
gcc lex.yy.c parser.tab.c -o runner

rem Run the parser with input and output files
runner.exe 

