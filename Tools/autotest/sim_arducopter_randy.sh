#!/bin/bash

killall -q ArduCopter.elf
pkill -f sim_multicopter.py

set -e
set -x

target=sitl
frame="X"

echo "Building with target $target for frame $frame"

autotest=$(dirname $(readlink -e $0))
pushd $autotest/../../ArduCopter
make $target EXTRAFLAGS=-DGCS_IP='\"10.0.2.2\"'

tfile=$(mktemp)
echo r > $tfile
#gnome-terminal -e "gdb -x $tfile --args /tmp/ArduCopter.build/ArduCopter.elf"
gnome-terminal -e /tmp/ArduCopter.build/ArduCopter.elf &
#gnome-terminal -e "valgrind -q /tmp/ArduCopter.build/ArduCopter.elf"
sleep 2
rm -f $tfile
gnome-terminal -e "socat -d -d udp-l:14550 tcp-l:5555,fork" &
sleep 2
popd
mavproxy.py --master tcp:127.0.0.1:5760 --sitl 127.0.0.1:5501 --out 127.0.0.1:14550 --out 10.0.2.2:14551 --console --aircraft test --quadcopter $*
