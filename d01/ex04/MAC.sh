#!/bin/sh
ifconfig | grep -Eo "(\w{2}:){5}\w{2}" 
