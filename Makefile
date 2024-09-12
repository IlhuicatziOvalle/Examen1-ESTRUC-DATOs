banderas = -Wall -Werror -pedantic -std=c99
folders = -I./lib/h
# agregar su librearia -lsunombre
lib = -lLLS
libfolder = -L./lib/s

examen:
	gcc $(banderas) examen.c -o examen $(folders) $(libfolder) $(lib)
