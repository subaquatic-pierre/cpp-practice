CXX = $(shell wx-config --cxx)
PROGRAM = yourproject
# wx-config --libs
WX_LIBS = $(shell wx-config --libs)
# wx-config --cxxflags
WX_CXXFLAGS = $(shell wx-config --cxxflags)

OBJECTS = $(PROGRAM).o

# implementation

.SUFFIXES:      .o .cpp

.cpp.o :
	$(CXX) $(WX_CXXFLAGS) -c  -o $@ $<

all:	$(PROGRAM)

$(PROGRAM):$(OBJECTS)
	$(CXX) $(WX_LIBS) -o $(PROGRAM) $(OBJECTS)