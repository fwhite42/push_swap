# Default library path
MK	?= mk

NAME	:= push_swap

define RARIES
	ft
	ftprintf
	error
	test
	arr
	game
endef

define REQ_TEST
	arr
endef

include $(MK)/core.mk
include $(MK)/test.mk
