fill: clean
	javac ImageHelper.java
	javac FloodFill.java
	java -Xss4m FloodFill < $(t)

draw: clean
	javac ImageHelper.java
	javac Draw.java
	java Draw

clean:
	rm -f *.class

clean-img:
	rm -f img/*-out.ppm
