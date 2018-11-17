fill: clean
	g++ -o floodfill.o floodfill.cpp imagehelper.cpp
	./floodfill.o < $(t)

draw: clean
	g++ -o draw.o draw.cpp imagehelper.cpp
	./draw.o

clean:
	rm -f generate.o
	rm -f floodfill.o
	rm -f draw.o

clean-img:
	rm -f img/*-out.ppm
