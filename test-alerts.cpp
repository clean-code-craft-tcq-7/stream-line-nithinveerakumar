#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

#include "sender.h"



TEST_CASE("Test length Temperature sensor reading ") {
  REQUIRE(getTempSensorReading().size() == 50+1);
}


TEST_CASE("Test SOC sensor reading ") {
  REQUIRE(getSOCSensorReading().size() == 50+1);
}

TEST_CASE("sender") {
 
sender();


}
