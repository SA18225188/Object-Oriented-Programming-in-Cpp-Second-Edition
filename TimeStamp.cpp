#include "TimeStamp.h"
void TimeStamp::set(long time_String){//set a default value
	if(time_String <= 0)
		stamp=time(0);
	else 
		stamp=time_String;
}
time_t TimeStamp::get() const{
	return stamp;
}
string TimeStamp::getString() const{
	return extract(0,24);
}
string TimeStamp::getYear() const{
	return extract(20, 4);
}
string TimeStamp::getMonth() const{
	return extract(4, 3);
}
string TimeStamp::getDay() const{
	return extract(8, 2);
}
string TimeStamp::getHour() const{
	return extract(11, 2);
}
string TimeStamp::getMinute() const{
	return extract(14, 2);
}
string TimeStamp::getSecond() const{
	return extract(17, 2); 
}
string TimeStamp::extract(int stringStart, int length) const{
	string timeString=ctime(&stamp);
	return timeString.substr(stringStart, length);
}
