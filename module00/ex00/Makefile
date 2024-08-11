# Colors
RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE    		= "\033[37m"    # White

# Compiler
EXEC			= megaphone
CXX				= g++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
MKDIR			= mkdir -p
RM				= rm -rf

# Sources
SRC_FILES		= megaphone.cpp

# Object files
OBJ_DIR			= objs
OBJ_FILES		= $(SRC_FILES:.cpp=.o)
OBJS			= $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

# Dependencies
DEPS			= $(OBJ_FILES:.o=.d)
-include		$(DEPS)

all : $(OBJ_DIR) $(EXEC)

$(OBJ_DIR) :
	@$(MKDIR) $(OBJ_DIR)

$(EXEC) : $(OBJS) Makefile
	@echo $(GREEN) " - Compiling $(EXEC)..." $(RESET)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)
	@echo $(YELLOW) " - Compiling FINISHED" $(RESET)

$(OBJ_DIR)/%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJ_DIR)
	@echo $(RED) " - Cleaned!" $(RESET)

fclean : clean
	@$(RM) $(EXEC)
	@echo $(RED) " - Full Cleaned!" $(RESET)

re: fclean all

.PHONY: all clean fclean re
