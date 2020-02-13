CPP = reference.cpp article.cpp book.cpp textbook.cpp ref_man.cpp

all:main

main:
	g++ -o out_exe main.cpp $(CPP)
