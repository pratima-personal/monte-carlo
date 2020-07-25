#!/bin/bash --login

templist=$(seq 350.0 5 400.0)

for temp in ${templist}
do
    echo ${temp} $(./do_mc.o -t ${temp} -bc_on 0 | grep Average | awk '{print $7}')
done
