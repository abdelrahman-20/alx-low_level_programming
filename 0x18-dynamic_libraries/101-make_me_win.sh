#!/bin/bash
wget -P /tmp https://github.com/abdelrahman-20/alx-low_level_programming/raw/master/Dynamiv_Lib_Files/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
