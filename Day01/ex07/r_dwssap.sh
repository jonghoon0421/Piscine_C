cat /etc/passwd | grep -v "#" | sed -n 'g;n;p' | cut -d : -f1 | rev | sort -rf | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | rev | sed 's/\,/\./1' | rev
