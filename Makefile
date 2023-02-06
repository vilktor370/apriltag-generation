OUTPUT_DIR = data
SRC = src/april/tag/
# SCHEME = custom_ddddddwwwddwbwddwwwdddddd
# custom_wwwwwwwwwbbbbbbwwbddddbwwbddddbwwbddddbwwbddddbwwbbbbbbwwwwwwwww
# java -cp april.jar april.tag.TagFamilyGenerator custom_bbwwbwwwbwwwwwwbwwwbwwwwwwwwwwwwwbbbbwwwbwwbddbwbwwbwbddbwwbwwwbbbbwwwwwwwwwwwwwbwwwbwwwwwwbwwwbwwbb 1 > src/april/tag/TagCustom16h1.java
# 	ant
# 	java -cp april.jar april.tag.TagToC april.tag.TagCustom16h1
# 	java -cp april.jar april.tag.GenerateTags april.tag.TagCustom16h1 data/TagCustom16h1 
SCHEME = circle_9
MIN_DIS = 5
NUM_BITS = 16
FILENAME = TagCustom$(NUM_BITS)h$(MIN_DIS)

test:
	ant
	java -cp april.jar april.tag.TagFamilyGenerator custom_bbwwbwwwbwwwwwwbwwwbwwddddddwwwwdbbbbdwwbwdbwwbdbwwbdbwwbdwbwwdbbbbdwwwwddddddwwbwwwbwwwwwwbwwwbwwbb 1 > src/april/tag/TagCustom20h1.java

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
