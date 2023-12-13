#!/bin/bash

calculate() {
  bc -l <<< "$1"
}

if [ $# -eq 1 ]; then
  calculate "$1"
  exit 0
fi

while read -p "> " expression && [ -n "$expression" ]; do
  calculate "$expression"
done
echo "Exiting..."
