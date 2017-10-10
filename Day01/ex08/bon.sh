ldapsearch -Q sn="*bon*" | grep "search: " | cut -d : -f2 | sed 's/ //g'
