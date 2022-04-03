CROSS = 
CC = $(CROSS)gcc
CXX = $(CROSS)g++
DEBUG = -g -O2
CFLAGS = $(DEBUG) -Wall -c
RM = rm -rf

SRCS = $(wildcard ./*.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

HEADER_PATH = -I../include/
LIB_PATH = -L../lib/

LIBS = -lnotice_wake    
# LIBS = libdiv.a

VERSION = 1.0.0.1
TARGET = notice_wake_app.$(VERSION)

$(TARGET) : $(OBJS)
	$(CC) $^ -o $@ $(LIB_PATH) $(LIBS)

$(OBJS):%.o : %.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER_PATH)

clean:
	$(RM) $(TARGET) *.o 
