BOARDINC += $(BOARD_DIR)/generated/controllers/generated

BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# assign critical LED to a non-existent pin
DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15

# MAJOR HACK? SOMETHING IS FUNNY HERE?!
DDEFS += -DDISABLE_PIN_STATE_VALIDATION=TRUE
