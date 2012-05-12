CC=gcc
CFLAGS=-Wall -O0
LDFLAGS=

TARGET=helloworld
OBJECTS=main.o fifo.o filo.o

ALL=$(TARGET)

all: $(ALL)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)
