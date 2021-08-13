TESTCASE ?= c99_7_2_p1
WORKDIR  ?= work

ifndef SUITEDIR
  SUITEDIR ?= .
endif
SRCS     ?= c99/7/$(TESTCASE).c
TSRCS    = $(SRCS:%=$(SUITEDIR)/%)
TARGET   = $(WORKDIR)/$(TESTCASE)

CC       ?= clang
TCFLAGS  = $(CFLAGS) -std=c99 -I$(SUITEDIR)/util
TLDFLAGS = $(LDFLAGS) -lm

all: $(WORKDIR) $(TARGET)

$(WORKDIR):
	mkdir -p $@

$(TARGET): $(TSRCS) $(SUITEDIR)/util/testutil.c
	$(CC) $(TCFLAGS) $(TLDFLAGS) $^ -o $@

clean:
	$(RM) $(TARGET)

distclean:
	$(RM) -r $(WORKDIR)
