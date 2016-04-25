# Define required macros here
SHELL = /bin/sh

OBJS =  diffie_hellmanTest.c diffie_hellman.c
CFLAG = -Wall -g
CC = gcc
INCLUDE =
LIBS = -lm

diffie:${OBJ}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f *.o core *.core

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
