define GETTERS
	data:void**
	length:int
	maxsize:int
	stepsize:int
endef

define SETTERS
	bind_data:void**
	set_length:int
	set_maxsize:int
	set_stepsize:int
endef

define	CONSTRUCTORS
	create_null
	create
	create_default
	copy
endef

define	ITERATORS
	foreach
	zip
	zip_int
	morph
endef

define	ACCESSORS
	write_at
	read_at
	read_int_at
endef

define	MEMORY_MANAGMENT
	increase_max_size
	skim
endef

define	PUSHSWAP
	swap
	rev_rotate
	rotate
endef

define INTEGERS
	sort
endef

define PRINTERS
	print
	printf
endef

define METHODS
	$(CONSTRUCTORS)
	$(ITERATORS)
	$(ACCESSORS)
	$(MEMORY_MANAGMENT)
	$(PUSHSWAP)
	$(INTEGERS)
	$(PRINTERS)
	destroy
	pop
	push
	push_int
	copy_data
	strchr
	reverse
endef

include ../Makefile
