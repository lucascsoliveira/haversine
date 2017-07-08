CC=gcc
CFLAGS=-Wall -lm
LIB=haversine

.PHONY: all clean

all: $(LIB)

clean:
	rm -f $(LIB)
	rm -f *.o
	rm -f *~

.c.o:
	$(CC) -o $@ -c $< $(CFLAGS)

$(LIB): $(LIB).o
	
