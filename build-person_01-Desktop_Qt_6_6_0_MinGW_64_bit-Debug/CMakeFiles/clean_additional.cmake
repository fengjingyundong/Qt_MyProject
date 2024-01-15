# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\person_01_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\person_01_autogen.dir\\ParseCache.txt"
  "person_01_autogen"
  )
endif()
