CC 		= 	g++

SRC		=	src/main.cpp	\
			src/glad.c

NAME	= 3D

LFLAGS 	= 	-Llib -lglfw3dll -lopengl32

CFLAGS	= 	-Iinclude

all:	$(SRC)
	$(CC) $(SRC) -o bin/$(NAME).exe $(CFLAGS) $(LFLAGS)

clean:
	rm -f bin/$(NAME).exe

re: clean all

run: re
	.\bin\$(NAME).exe