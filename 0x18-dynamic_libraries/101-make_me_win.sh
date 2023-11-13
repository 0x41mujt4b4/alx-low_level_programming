#!/bin/bash
wget -P /tmp/ https://raw.github.com/0x41mujt4b4/alx-low_level_programming/master/0x18-dynamic_libraries/wining_numbers.so
export LD_PRELOAD=/tmp/winning_numbers.so
