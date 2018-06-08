BUILD_CPP =$(wildcard *.cpp)
OBJECTS=$(BUILD_CPP:.cpp=.o)
CC=g++
MKDIR= -mkdir bin/
# LIBS = -lpthread
LFLAGS = -g
CFLAGS = -c

test: $(OBJECTS)
	$(MKDIR)
	$(CC) $(LFLAGS) $(OBJECTS) $(LIBS) -o bin/Factory

%.o: %.cpp
	$(CC) $(CFLAGS) $(BUILD_CPP)

clean:
	-rm -r -f $(OBJECTS) bin/
