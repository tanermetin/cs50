 #include <stdio.h>

 fread(data, size, number, inptr)
     data: pointer to struct that willl contain the bytes you    are reading
     size: size of each element to read
     number: number of elements to read
     inputr: FILE * to read from
 fread( buffer, 1, 512, )

 JPEG?
  if ....
  .....
  ....
fwrite(data, size, number, outputr);

data : pointer ti struct

nexr step is to figure out when to stop

512 bytes at a time until we reach a new jpeg file


fread( buffer, 1, 512, raw_file);


//
# open card file
# repeat until end of card
#start of a new JPEG
##yes -->
##no-->
#already found a jpeg
##yes-->
##no-->
#close any remaining file


//