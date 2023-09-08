cmake_minimum_required(VERSION 2.8)

project(RtmpDemo)

find_package(Qt5 REQUIRED Core Gui Widgets Multimedia MultimediaWidgets)

add_executable(RtmpDemo main.cpp)
target_link_libraries(RtmpDemo 
Qt5::Core 
Qt5::Gui
Qt5::Widgets
Qt5::Multimedia
Qt5::MultimediaWidgets)

