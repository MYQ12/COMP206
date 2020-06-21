# Title: TMA1Question5
# Author: Mohammad Yehya Qureshi

# DOCUMENTATION
# Program Purpose: Allows the user to type "make" for a production build of the program and "make debug" for a build of the program that includes debugging information
# Compile: make / make debug
# Execution: ./TMA1Q3

CPP = g++
OFLAG = -o
.SUFFIXES: .o .cpp
.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

TMA1Q3: TMA1Question3.o
	$(CPP) $(DEBUG) $(OFLAG) TMA1Q3 TMA1Question3.o

TMA1Question3.o: TMA1Question3.cpp

debug: DEBUG = -DDEBUG

debug: TMA1Q3