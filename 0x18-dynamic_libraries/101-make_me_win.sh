#!/bin/bash
wget -P /tmp/ https://github.com/0x41mujt4b4/alx-low_level_programming/blob/main/0x18-dynamic_libraries/winning_numbers.so
export LD_PRELOAD=/tmp/winning_numbers.so
