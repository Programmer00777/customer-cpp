cmake_minimum_required(VERSION 3.23)
project(lb3)

set(CMAKE_CXX_STANDARD 14)

add_executable(lb3 main.cpp model/Customer.h model/OnlineCustomer.h model/OfflineCustomer.h model/BasicOnlineCustomer.h model/PremiumOnlineCustomer.h utils/CustomerReader.h)
