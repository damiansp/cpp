# examples only

all:
	clang++ -std=c++11 -Wall -Wextra -Wpedantic -Werror file1.cpp file2.cpp -o outfile.exe


# more complex file hierarchy
#      <iostream>\
#                 SimpleClasse.cpp -> SimpleClasses.obj-\
#       Account.h/                                       \
#         |      \                                        \
# Transaction.h - Account.cpp      -> Account.obj ----------> Simple.exe
#              \                                          /
#               Transaction.cpp    -> Transaction.obj----/


all: Simple

Simple: Account.o Transaction.o SimpleClasses.o
	clang++ Account.o Transaction.o SimpleClasses.o -o Simple

Account.o: Account.cpp Account.h Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic -Werror Account.cpp

Transaction.o: Transaction.cpp Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic -Werror Transaction.cpp

SimpleClasses.o: SimpleClasses.cpp Account.h
	clang++ -c -std=c__11 -Wall -Wextra -Wpedantic -Werror SimpleClasses.cpp
