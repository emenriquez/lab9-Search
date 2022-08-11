all: a.out

a.out: tests.cpp Search.h
	g++ -std=c++11 tests.cpp

test: a.out
	./a.out "$(try)"

clean:
	rm -f a.out
	rm -f b.out

b.out: demo.cpp Search.h
	g++ -std=c++11 demo.cpp -o b.out

demo: b.out
	./b.out


