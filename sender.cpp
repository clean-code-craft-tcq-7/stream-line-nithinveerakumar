#include "sender.h"

int random_number_generator(int min, int max)
{
    return rand()%(max-min)+min;
}

list<string> getTempSensorReading()
{
    int count= READING_COUNT;
    list<string> temp_reading;
    temp_reading.push_back("Temperature");
    while(count--)
    {
         temp_reading.push_back(to_string(random_number_generator(TEMP_MIN_LIMIT,TEMP_MAX_LIMIT)));
    }
    return temp_reading;
}

list<string> getSOCSensorReading()
{
    int count= READING_COUNT;
    list<string> temp_reading;
    temp_reading.push_back("SOC");
    while(count--)
    {
         temp_reading.push_back(to_string(random_number_generator(SOC_MIN_LIMIT,SOC_MAX_LIMIT)));
    }
    return temp_reading;
}

string formatToCSV(list<string> input)
{
    string output="";
    for(auto& itr:input)
    {
        output+=itr;
        output+=",";
    }
    return output;
}

void sender()
{
    string TempSensorReading = formatToCSV(getTempSensorReading());
    string SOCSensorReading = formatToCSV(getSOCSensorReading());
    cout<<TempSensorReading<<endl<<SOCSensorReading<<endl;
}