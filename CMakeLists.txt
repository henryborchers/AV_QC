cmake_minimum_required(VERSION 3.2)
project(QC_AV)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp mainwindow.cpp ui_mainWindow.h)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

add_executable(QC_AV ${SOURCE_FILES} metadataWindow.h metadataWindow.cpp codecWindow.h codecWindow.cpp mediaInfo_data.h mediaInfo_data.cpp)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

target_link_libraries(QC_AV Qt5::Widgets)
target_link_libraries(QC_AV Qt5::Core)

if(${WIN32})
    # Release specific DLLS
    if (CMAKE_BUILD_TYPE MATCHES Debug)
        message("Debug mode")
            list( APPEND ExternalSharedLibraries ${CMAKE_SOURCE_DIR}/DLL/debug/)
                    if( DEFINED EXE_DIR )
                        set( exeDir "${EXE_DIR}" )
                    else()
                        set( exeDir "${CMAKE_CURRENT_BINARY_DIR}" )
                    endif()
                    message( INFO "\tCopying DEBUG shared libraries." )
                    file( COPY ${ExternalSharedLibraries} DESTINATION "${exeDir}" NO_SOURCE_PERMISSIONS )
    else()
        message("Release mode")
        list( APPEND ExternalSharedLibraries ${CMAKE_SOURCE_DIR}/DLL/release/)
                            if( DEFINED EXE_DIR )
                                set( exeDir "${EXE_DIR}" )
                            else()
                                set( exeDir "${CMAKE_CURRENT_BINARY_DIR}" )
                            endif()
                            message( INFO "\tCopying Release shared libraries." )
                            file( COPY ${ExternalSharedLibraries} DESTINATION "${exeDir}" NO_SOURCE_PERMISSIONS )
    endif (CMAKE_BUILD_TYPE MATCHES Debug)
    # General DLLS
    list( APPEND ExternalSharedLibraries ${CMAKE_SOURCE_DIR}/DLL/general/)
            # Where will the executables be located?
#                message(WARNING ${ExternalSharedLibraries})
            if( DEFINED EXE_DIR )
                set( exeDir "${EXE_DIR}" )
            else()
                set( exeDir "${CMAKE_CURRENT_BINARY_DIR}" )
            endif()
            message( INFO "\tCopying general shared libraries." )
            file( COPY ${ExternalSharedLibraries} DESTINATION "${exeDir}" NO_SOURCE_PERMISSIONS )

endif(${WIN32})