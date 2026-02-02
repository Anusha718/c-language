#!/bin/bash

set -e
#set -x
set -o pipefail

word="missiccipssssspi"

echo $word|grep -o "s" | wc -l

