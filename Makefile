TESTCASE ?= c99_7_2_p1
WORKDIR  ?= work

SRCS     ?= c99/7/$(TESTCASE).c
TARGET    = $(WORKDIR)/$(TESTCASE)

CC       ?= clang
CFLAGS    += -std=c99 -I./include
LDFLAGS   += -lm

all: $(WORKDIR) $(TARGET)
	$(shell ./$(TARGET))
#	@echo $(.SHELLSTATUS)

$(WORKDIR):
	mkdir -p $@

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

clean:
	$(RM) $(TARGET)

distclean:
	$(RM) -r $(WORKDIR)
