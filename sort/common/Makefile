
LIBNAME = libcommon.a
OBJS := $(addsuffix .o, $(patsubst %.cpp, %, $(wildcard *.cpp)))

all : $(LIBNAME)

$(LIBNAME) : $(OBJS)
	ar cr $@ $(OBJS)

%.o : %.cpp
	g++ -g -c $<

clean:
	rm $(OBJS) $(LIBNAME)
