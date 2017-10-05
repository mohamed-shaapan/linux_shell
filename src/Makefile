
shell: main.o environment_variables.o interactive_mode_module.o batch_mode_module.o single_command_handler.o basic_command_execution.o special_command_execution.o command_parser.o file_handler.o command_history_handler.o display_handler.o
	gcc main.o environment_variables.o interactive_mode_module.o batch_mode_module.o single_command_handler.o basic_command_execution.o special_command_execution.o command_parser.o file_handler.o command_history_handler.o display_handler.o -o shell

main.o: main.c
	gcc -c main.c

environment_variables.o: operating_environment/environment_variables.c
	gcc -c operating_environment/environment_variables.c

interactive_mode_module.o: operating_environment/interactive_mode_module.c
	gcc -c operating_environment/interactive_mode_module.c

batch_mode_module.o: operating_environment/batch_mode_module.c
	gcc -c operating_environment/batch_mode_module.c

single_command_handler.o: command_handling/single_command_handler.c
	gcc -c command_handling/single_command_handler.c

basic_command_execution.o: command_handling/basic_command_execution.c
	gcc -c command_handling/basic_command_execution.c

special_command_execution.o: command_handling/special_command_execution.c
	gcc -c command_handling/special_command_execution.c

command_parser.o: utilities/command_parser.c
	gcc -c utilities/command_parser.c

file_handler.o: utilities/file_handler.c
	gcc -c utilities/file_handler.c

command_history_handler.o: utilities/command_history_handler.c
	gcc -c utilities/command_history_handler.c

display_handler.o: utilities/display_handler.c
	gcc -c utilities/display_handler.c

clean:
	rm *.o shell