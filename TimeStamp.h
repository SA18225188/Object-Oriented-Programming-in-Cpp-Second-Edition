#include <ctime>
#include <string>
using namespace std;
class TimeStamp{
	public:
		void set(long time_String);
		time_t get() const;
		string getString() const;
		string getYear() const;
		string getMonth() const;
		string getDay() const;
		string getHour() const;
		string getMinute() const;
		string getSecond() const;
	private:
		string extract( int string_Start, int length) const;
		time_t stamp;
};
