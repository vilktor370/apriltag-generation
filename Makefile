OUTPUT_DIR = data
SRC = src/april/tag/
CUSTOM = ddddddbbbddbwbddbbbdddddd
MIN_DIS = 2
NUM_BITS = 16
FILENAME = TagCustom$(NUM_BITS)h$(MIN_DIS)
all:
	java -cp april.jar april.tag.TagToC $(FILENAME)
	mv *.c data/
	mv *.h data/
	java -cp april.jar april.tag.GenerateTags $(FILENAME) $(OUTPUT_DIR)

custom:
	java -cp april.jar april.tag.TagFamilyGenerator custom_$(CUSTOM) $(MIN_DIS) > $(SRC)$(FILENAME).java
	@echo $(FILENAME) is added in $(SRC)
	ant
	java -cp april.jar april.tag.GenerateTags april.tag.$(FILENAME) $(OUTPUT_DIR)

	

c:
	java -cp april.jar april.tag.TagToC $(FILENAME)
png:
	java -cp april.jar april.tag.GenerateTags $(FILENAME) $(OUTPUT_DIR)

clean:
	rm $(SRC)/$(FILENAME)
