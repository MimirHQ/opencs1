cipher: clean
	g++ -o cipher.o cipher.cpp imagehelper.cpp
	./cipher.o < $(t)

clean:
	rm -f cipher.o

clean-img:
	rm -f img/*-out.ppm
