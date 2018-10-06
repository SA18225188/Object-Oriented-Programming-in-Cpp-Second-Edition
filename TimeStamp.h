#include <ctime>
#include <string>
using namespace std;
class TimeStamp {
public:
	void set( long s = 0 );
	time_t get() const;
	string getAsString() const;
	string getYear() const;
	string getMonth() const;
	string getDay() const;
	string getHour() const;
	string getMinute() const;
	string getSecond() const;
private:
	string extract( int offset, int count ) const;
	time_t stamp;
};
