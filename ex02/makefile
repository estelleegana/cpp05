#nom de l'executable
NAME = ex02

#compilateur
CC = c++

#flags
FLAGS = -Wall -Wextra -Werror -std=c++98

#fichiers sources
SRCS = AForm.cpp \
	Bureaucrat.cpp \
	main.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \

#creation d'objets a partir des fichiers sources
OBJS = $(SRCS:.cpp=.o)

#generer .o a partir des .cpp
#c++ -Wall -Wextra -Werror -std=c++98 -c (compiler sans lier) .cpp -o (output) .o
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

#compilations
all: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	rm -rf *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all