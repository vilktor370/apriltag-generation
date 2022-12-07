for f in data/*.png; do
  convert ./"$f" -scale 2000% ./"${f%}"
done