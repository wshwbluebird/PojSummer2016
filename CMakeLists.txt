cmake_minimum_required(VERSION 3.5)
project(POjsummer16)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 1753FlipGame.cpp 2965ThePilotsBrothersrefrigerator.cpp 1328RadarInstallation.cpp 2109PowerofCryptography.cpp 2586Y2KAccountingBug.cpp 1860CurrencyExchange.cpp 3259Wormholes.cpp 3259Wormholes2.cpp 1062昂贵的聘礼.cpp 2253Frogger.cpp 1125StockbrokerGrapevine.cpp 2240Arbitrage.cpp 1789TruckHistory.cpp)
add_executable(POjsummer16 ${SOURCE_FILES})