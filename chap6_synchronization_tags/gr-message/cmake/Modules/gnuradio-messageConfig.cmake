find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_MESSAGE gnuradio-message)

FIND_PATH(
    GR_MESSAGE_INCLUDE_DIRS
    NAMES gnuradio/message/api.h
    HINTS $ENV{MESSAGE_DIR}/include
        ${PC_MESSAGE_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_MESSAGE_LIBRARIES
    NAMES gnuradio-message
    HINTS $ENV{MESSAGE_DIR}/lib
        ${PC_MESSAGE_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-messageTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_MESSAGE DEFAULT_MSG GR_MESSAGE_LIBRARIES GR_MESSAGE_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_MESSAGE_LIBRARIES GR_MESSAGE_INCLUDE_DIRS)
