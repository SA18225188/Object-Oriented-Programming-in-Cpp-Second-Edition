#include "TimeStamp.h"
void TimeStamp::set( long s ) {
	if( s <= 0 )
		stamp = time(0);
	else
		stamp = s;
}
time_t TimeStamp::get() const { return stamp; }
string TimeStamp::getAsString() const { 
	return extract(0, 24); }
string TimeStamp::getYear() const { 
	return extract(20, 4); }
string TimeStamp::getMonth() const { 
	return extract(4, 3); }
string TimeStamp::getDay() const { 
	return extract(8, 2); }
string TimeStamp::getHour() const { 
	return extract(11, 2); }
string TimeStamp::getMinute() const { 
	return extract(14, 2); }
string TimeStamp::getSecond() const { 
	return extract(17, 2); }
string TimeStamp::extract( int offset, int count ) const {
	string timeString = ctime( &stamp );
	return timeString.substr( offset, count );
}
