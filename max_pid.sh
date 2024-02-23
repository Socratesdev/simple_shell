#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Max pid value : $pid_max" 
