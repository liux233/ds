
SVR_NAME := test_quicksort
INCPATH += \
		   -I../common/ \

USRLIBS += \
		  -L../common/ -lcommon \

OBJS := $(addsuffix .o, $(patsubst %.cpp, %, $(wildcard *.cpp)))

all: $(SVR_NAME)


$(SVR_NAME): $(OBJS)
	g++ -g $^ $(USRLIBS)-o $@ -lpthread



%.o:%.cpp
	g++ -g -c $< $(INCPATH)

clean:
	rm -frv $(OBJS) $(SVR_NAME)

