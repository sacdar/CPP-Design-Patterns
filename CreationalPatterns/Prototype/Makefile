NAME := prototype
C_SRCS := $(wildcard *.c)
CXX_SRCS := $(wildcard *.cpp */*.cpp)
C_OBJS := ${C_SRCS:.c=.o}
CXX_OBJS := ${CXX_SRCS:.cpp=.o}
OBJS := $(C_OBJS) $(CXX_OBJS)

CPPFLAGS += -std=c++11 -IPrototype -IConcretePrototype

.PHONY: all clean distclean

all: $(NAME)

$(NAME): $(OBJS)
	$(LINK.cc) $(OBJS) -o $(NAME)

clean:
	@- $(RM) $(NAME)
	@- $(RM) $(OBJS)

distclean: clean

