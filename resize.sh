for f in data/Tag25h3_counting/*.png; do
  convert ./"$f" -scale 2000% ./"${f%}"
done