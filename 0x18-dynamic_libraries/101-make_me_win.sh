#!/bin/bash
wget -P /tmp/ https://github.com/Fatima20027/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/tmp/lib.so