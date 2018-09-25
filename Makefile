

# This is a psuedo target rule with multiple executables - generate & thresh 
all: generate thresh

#the link to the below rule is obtained from the "all" psuedo target
generate: generate.o
	g++ -o generate generate.o

#the link to the below rule is obtained from the "all" psuedo target
thresh : thresh.o
	g++ -o thresh thresh.o

generate.o : generate.cc generate.h
	g++ -c -Wall generate.cc

thresh.o : thresh.cc thresh.h
	g++ -c -Wall thresh.cc

# clean is also a psuedo target which is used to remove all the executable file and object files
clean: 
	rm *.o generate thresh
