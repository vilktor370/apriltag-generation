for f in data/TagCustom20h1/*.png; do
  convert ./"$f" -scale 2000% ./"${f%}"
done