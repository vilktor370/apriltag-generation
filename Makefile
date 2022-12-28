OUTPUT_DIR = data
SRC = src/april/tag/
# SCHEME = custom_ddddddwwwddwbwddwwwdddddd
SCHEME = circle_9
MIN_DIS = 5
NUM_BITS = 16
FILENAME = TagCustom$(NUM_BITS)h$(MIN_DIS)

tag:
	java -cp april.jar april.tag.TagFamilyGenerator $(SCHEME) $(MIN_DIS) > $(SRC)$(FILENAME).java
	@echo $(FILENAME) is added in $(SRC)
	ant
	java -cp april.jar april.tag.GenerateTags april.tag.$(FILENAME) $(OUTPUT_DIR)
c:
	java -cp april.jar april.tag.TagToC april.tag.$(FILENAME)
png:
	java -cp april.jar april.tag.GenerateTags $(FILENAME) $(OUTPUT_DIR)

clean:
	rm $(SRC)$(FILENAME).java
	rm data/*
