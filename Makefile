CC=gcc
CFLAGS=-std=c99 -pedantic -Wall
SOURCES=bsearch.c test_bsearch.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test_bsearch
HEADERS=bsearch.h 

all: $(OBJECTS)
	$(CC) -o $(EXECUTABLE) $(OBJECTS)

.c:$(OBJECTS)
	$(CC) $(CFLAGS) -c
	
$(OBJECTS):$(HEADERS)

clear:
	rm -rf  $(EXECUTABLE) $(OBJECTS)
distclear:
	rm -rf $(OBJECTS)
