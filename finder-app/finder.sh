#!/bin/bash

if [[ $# -lt 2 ]]; then
    echo "Please use the script with 2 arguments"
    echo "Arg 1: A file system directory(filesdir)" 
    echo "Arg 2: Search string(searchstr)"
    exit 1
fi

filesdir=$1
searchstr=$2
if [ ! -d $filesdir ]; then
  echo "$filesdir does not exists or not a directory"
  exit 1
fi
files=`find $filesdir -type f`

#echo "files : $files"
file_ount=0
matching_line_count=0
for file in $files
do
	((file_count+=1))
   	((matching_line_count+=$(grep "$searchstr" $file | wc -l)))
done

echo "The number of files are $file_count and the number of matching lines are $matching_line_count"
