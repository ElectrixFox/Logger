CXX = gcc
CXXFLAGS = -I.

LIBS = -L. -lLCStr

APPNAME = main

SRCFILES := $(wildcard *.c)
OBJFILES := $(addprefix obj/, $(patsubst %.c, %.o, $(SRCFILES)))

obj/%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $^

all: $(OBJFILES)
	$(CXX) $(CXXFLAGS) $^ -o $(APPNAME) $(LIBS)