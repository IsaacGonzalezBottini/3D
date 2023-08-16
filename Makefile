CC 		= 	g++

SRC		=	src/main.cpp

NAME	= 3D

LFLAGS 	= 	-Llib -lglfw3dll -lglew32 -lopengl32

CFLAGS	= 	-Iinclude

all:	$(SRC)
	$(CC) $(SRC) -o bin/$(NAME).exe $(CFLAGS) $(LFLAGS)

clean:
	rm bin/$(NAME).exe

re: clean all

run: re
	.\bin\$(NAME).exe