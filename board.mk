BOARDINC += $(BOARD_DIR)/generated/controllers/generated

BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp \
    $(BOARD_DIR)/default_tune.cpp \



# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# one day when we are grown ups and can coordinate a real life test we shall revisit https://github.com/rusefi/rusefi/issues/6008
DDEFS += -DDISABLE_PIN_STATE_VALIDATION=TRUE

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# assign critical LED to a non-existent pin
DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15

# MAJOR HACK? SOMETHING IS FUNNY HERE?!
DDEFS += -DDISABLE_PIN_STATE_VALIDATION=TRUE

# temporary or not? (pps noise stuff)
DDEFS += -DETB_INTERMITTENT_LIMIT=60001
