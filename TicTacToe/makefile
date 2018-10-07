TARGET = ticTacToe 

RM = rm -f

FILES = main.cpp player.cpp board.cpp

OBJS = $(FILES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $^ -o $@

%.o: %.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
