KERN=$(shell uname -s)

CC=gcc
CFLAGS=-g -O2 -mfpmath=sse -msse -mmmx -Wall -ffast-math

ALL_OBJS=tower.o bullet.o kgtd.o noob.o damage.o grid.o state.o controls.o \
         attr.o path.o graphics.o level.o level_data.o

ifeq ($(strip $(KERN)),Darwin)
ARCH_OBJS=SDLMain_osx.o 
LIBS=-framework OpenGL -framework SDL -framework Cocoa
else ifeq ($strip($(KERN)),linux)
ARCH_OBJS=
LIBS=-lSDL -lGL
else
$(error I couldn't figure out your architecture; that means I hate you)
endif


all: kgtd

clean:
	rm -f kgtd *.o *~

depend:
	$(CC) -MM *.c > .depend
	
kgtd: $(ALL_OBJS) $(ARCH_OBJS)
	$(CC) -o kgtd $(LIBS) $(ALL_OBJS) $(ARCH_OBJS)

-include .depend
