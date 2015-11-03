IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lgmp -lcrypto

_DEPS = meth.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o init.o printing.o methodTrialDiv.o methodPollardsRho.o methodShankSquares.o methodOpenSSLGen.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lazyfact: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o