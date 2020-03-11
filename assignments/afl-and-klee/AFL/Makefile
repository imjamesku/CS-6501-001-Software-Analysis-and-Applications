# Enable debugging and suppress pesky warnings
CFLAGS ?= -g -w

all:	test-instr get_sign regexp buggy-regexp1 buggy-regexp2

clean:
	rm -f test-instr get_sign buggy-regexp1 buggy-regexp2

vulnerable: test-instr.c
	${CC} ${CFLAGS} test-instr.c -o test-instr

get_sign: get_sign.c
	${CC} ${CFLAGS} -o $@ $^

regexp: regexp.c
	${CC} ${CFLAGS} -o $@ $^

buggy-regexp1: buggy-regexp1.c
	${CC} ${CFLAGS} -o $@ $^
	
buggy-regexp2: buggy-regexp2.c
	${CC} ${CFLAGS} -o $@ $^