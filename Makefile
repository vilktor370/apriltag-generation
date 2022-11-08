FILENAME = april.tag.Tag16h10
OUTPUT_DIR = data

all:
	java -cp april.jar april.tag.TagToC $(FILENAME)
	mv *.c data/
	mv *.h data/
	java -cp april.jar april.tag.GenerateTags $(FILENAME) $(OUTPUT_DIR)

c:
	java -cp april.jar april.tag.TagToC $(FILENAME)
png:
	java -cp april.jar april.tag.GenerateTags $(FILENAME) $(OUTPUT_DIR)

clean:
	rm data/*
