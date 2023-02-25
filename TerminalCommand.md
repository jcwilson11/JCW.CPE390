How to use lldb:
- b main: set a breakpoint at main
- run: run the program
- ni: next instruction
si: step instruction
- register read: read the registers


Key terminal commands:
- " g++ -O2 -S CPE390.Lab6Partmain.cc " to generate assembly code


Makefile code:

CXX	:=	g++ --std=c++11 -g -O2
all: (name of make file)
part1:  (C++ file).cc (Assembly file).s
	$(CXX) (C++ file).cc (Assembly file).s -o part1  
clean:
	rm part1 *.o
