include	$(MK)/utils.mk

# Metadata
NAME			?= $(notdir $(CURDIR))

# Directories
prefix			?= $(CURDIR)
includedir		?= $(prefix)/include
libdir			?= $(prefix)/lib
bindir			?= $(prefix)/bin
srcdir			?= $(prefix)/src

INSTALLDIRS		:= $(includedir) $(libdir) $(bindir)
MAKEABLE_DIRS	:= $(INSTALLDIRS)
MKDIR_P			:= mkdir -p

LIBRARIES		:= $(RARIES:%=lib%)
LIBRARY_FILES	:= $(LIBRARIES:%=$(libdir)/%.a)
LINK_LIBRARIES	:= $(call reverse, $(LIBRARY_FILES))
xxx:
	@echo $(LINK_LIBRARIES)
HEADERS			:= $(LIBRARIES:%=$(includedir)/%.h)

# Rules
$(MAKEABLE_DIRS):%:
	$(MKDIR_P) $@

.SECONDEXPANSION:
$(HEADERS):$(includedir)/%.h: $(srcdir)/$$*/$$*.h $(includedir)
	cp $(srcdir)/$*/$*.h $(includedir)/$*.h

$(LIBRARY_FILES):$(libdir)/%.a: $(srcdir)/%/Makefile $(libdir) $(HEADERS)
	$(MAKE) -C $(dir $<) includedir=$(includedir)
	cp $(srcdir)/$*/$*.a $(libdir)/$*.a

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra
CPPFLAGS	:= -I$(includedir)
vpath %.a	$(libdir)

$(NAME)		:$(NAME).c $(LINK_LIBRARIES)
	@echo FUCK
	@echo $(LINK_LIBRARIES)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ $(LINK_LIBRARIES) -o $@

# Phonies
.PHONY: all
all:		$(NAME)

.PHONY: re
re:		fclean all


.PHONY: libraries
libraries: $(LIBRARY_FILES)

.PHONY: headers
headers: $(HEADERS)

.PHONY: clean
clean: ;

.PHONY: fclean
fclean: clean
	@for lib in $(LIBRARIES:%=$(srcdir)/%); do $(MAKE) -C $$lib fclean; done
	$(RM) -r $(includedir) $(libdir) $(bindir)
	$(RM) $(NAME)
