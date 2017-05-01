LDLIBS=-lglut  -lGLEW -lGL
all: triangle
triangle: shader_utils.o
clean:
	rm -f *.o triangle
.PHONY: all clean