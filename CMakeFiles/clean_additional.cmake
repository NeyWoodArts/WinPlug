# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "src\\ui\\CMakeFiles\\plug-ui_autogen.dir\\AutogenUsed.txt"
  "src\\ui\\CMakeFiles\\plug-ui_autogen.dir\\ParseCache.txt"
  "src\\ui\\plug-ui_autogen"
  )
endif()
