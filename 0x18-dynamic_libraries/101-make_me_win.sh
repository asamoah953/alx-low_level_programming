#!/bin/bash
wget .. -P https://raw.githubusercontent.com/asamoah953/alx-low_level_programming/master/0x18-dynamic_libraries
export LD_PRELOAD="$PWD/../libhack.so"
