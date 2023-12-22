#!/bin/bash
wget -P .. https://raw.githubusercontent.com/alx-tools/0x18.c/main/gm
export LD_PRELOAD="$PWD/../libgiga.so"
