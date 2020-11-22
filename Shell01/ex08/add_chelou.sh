#!/bin/sh
BASE_NBR1='’\"?!'
BASE_NBR2='mrdoc'
BASE_RSLT='gtaio luSnemf'

NBR1=$(echo "obase=012345;ibase=$BASE_NBR1;$FT_NBR1" | bc)
NBR2=$(echo "obase=012345;ibase=$BASE_NBR2;$FT_NBR2" | bc)
