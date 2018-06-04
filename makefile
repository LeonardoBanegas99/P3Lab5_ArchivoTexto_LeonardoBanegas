exe:	main.o Bodega.o Cliente.o Platos.o Ingrediente.o
	g++ main.o Bodega.o Cliente.o Platos.o Ingrediente.o -o exe

main.o:	main.cpp Bodega.h Cliente.h Platos.h Ingrediente.h
	g++ -c main.cpp

Bodega.o:	Bodega.cpp Bodega.h Platos.h Ingrediente.h
	g++ -c Bodega.cpp

Cliente.o:	Cliente.cpp Cliente.h Platos.h
	g++ -c Cliente.cpp

Platos.o:	Platos.cpp Platos.h Ingrediente.h
	g++ -c Platos.cpp

Ingrediente.o:	Ingrediente.cpp Ingrediente.h
	g++ -c Ingrediente.cpp