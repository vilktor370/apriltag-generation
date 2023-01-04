for f in data/Tag16h1_counting/*.png; do
  convert ./"$f" -scale 2000% ./"${f%}"
done