CC=gcc
CFLAGS=-Wall -lm
EXEC=haversine_sample

OBJ=../haversine.o

.PHONY: all clean

all: $(EXEC)

clean:
	rm -f $(OBJ)
	rm -f $(EXEC)
	rm -f *.o
	rm -f *~

.c.o:
	$(CC) -o $@ -c $< $(CFLAGS)

$(EXEC): $(EXEC).o $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
