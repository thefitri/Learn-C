CFLAGS =-Wall -g
SRC_FILES=$(wildcard code/*.c)
SRC=$(basename $(SRC_FILES))
OBJECT= $(SRC:code/%=%)

all: $(OBJECT)

$(OBJECT): %: code/%.c
	cc $(CFLAGS) -o $@ $<

clean:
	-rm $(SRC:code/%=%) || true
