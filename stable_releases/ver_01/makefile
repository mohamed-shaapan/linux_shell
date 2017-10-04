
output: main.o single_command_handler.o command_parser.o command_execution.o
	g++ main.o single_command_handler.o command_parser.o command_execution.o -o output

main.o: main.c
	g++ -c main.c

single_command_handler.o: single_command_handler.c
	g++ -c single_command_handler.c

command_parser.o: command_parser.c
	g++ -c command_parser.c

command_execution.o: command_execution.c
	g++ -c command_execution.c

main.o: main.c
	g++ -c main.c

clean:
	rm *.o output