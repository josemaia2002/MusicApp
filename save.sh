#!/bin/bash


rm -rf build
rm run.sh

git status
git add -A
git commit
git push
