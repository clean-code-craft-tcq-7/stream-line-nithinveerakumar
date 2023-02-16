#include <iostream>
#include <list>
#include <map>
#include <cstring>
#include <sstream>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define TEMP_MIN_LIMIT 0
#define TEMP_MAX_LIMIT 45
#define SOC_MIN_LIMIT 20
#define SOC_MAX_LIMIT 80
#define READING_COUNT 50

list<string> getTempSensorReading();
list<string> getSOCSensorReading();
string formatToCSV(list<string> input);
void sender();