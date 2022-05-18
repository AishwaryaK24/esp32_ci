#!/usr/bin/env bash
set -e

CODE_PATH="$1"
. $IDF_PATH/export.sh

cd "${CODE_PATH}"
idf.py build
# build_output=$(idf.py build)
# build_output="${build_output//'%'/'%25'}"
# build_output="${build_output//$'\n'/'%0A'}"
# build_output="${build_output//$'\r'/'%0D'}"
# echo "::set-output name=build_output::$build_output"