#!/bin/bash

[ $# -eq 1 ] && { bc -l <<< "$1"; exit 0; }

while read -p "> " expression && [ -n "$expression" ]; do
  bc -l <<< "$expression"
done
echo "Exiting..."
