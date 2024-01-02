#!/bin/bash

NAME="./phoneBook"

ansi_nc="\e[0m"
ansi_error_color="\e[31m"
ansi_success_color="\e[32m"

echo -e "${ansi_success_color}_PHONE_BOOK TESTER_${ansi_nc}"

make -s
args_list=("")
for el_name in "${args_list[@]}"; do
	echo -n "$el_name : "
	$NAME "$el_name"
done
