#!/bin/bash
### テストデータのダウンロードはできてない
WORKDIR="/atcoder"
CONTEST_DIR=/atcoder/contest/other/typical90

TEMPLATE="${WORKDIR}/templates/atcoder.cpp"

for ((i=0; i < 100; i++)); do
    num=$(printf "%03d\n" "${i}")
    mkdir $CONTEST_DIR/$num/

    cp -n $TEMPLATE $CONTEST_DIR/$num/$num.cpp
    
done