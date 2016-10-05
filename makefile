
CC = g++
CFLAGS = -Wall -std=c++11
TARGET = etsp

all: main.cpp 
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean: 
	$(RM) *.o $(TARGET)

























