CC = gcc 
CFLAGS = -Wall -g -O -fPIC
CXXFLAGS = 
INCLUDE  =  ./inc 
TARGET   = libnotice_wake.so
LIBPATH  = ./libs/
 
vpath %.h ./inc
 
OBJS = libnotice_wake.o 
SRCS = libnotice_wake.c 
 
 
 
all:$(TARGET) $(OBJS)
$(OBJS):$(SRCS) 
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $^
 
$(TARGET):$(OBJS)
	$(CC)  $(OBJS) -shared -fPIC -o $(TARGET)
	mv $(TARGET) $(LIBPATH)
 
 
 
clean:
	rm -f *.o
	rm -f $(LIBPATH)*
