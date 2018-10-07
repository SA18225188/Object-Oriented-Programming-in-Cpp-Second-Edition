#include "TimeStamp.h" //*** for TimeStamp class
#include <iostream>
#include <ctime>     
#include <fstream>
#include <string>
using namespace std;
class Task {
public:
   // constructors-destructor
   Task( const string& ID ) {
      setID( ID );
      logFile = "log.dat";
      setST();
      ft = st; // no duration yet
   }
   Task( const char* ID ) {
      setID( ID );
      logFile = "log.dat";
      setST();
      ft = st; // no duration yet   
   }
   ~Task()    { logToFile();    }
   // set-get methods
   void setST( time_t ST = 0 ) { st.set( ST ); }
   time_t getST() const { return st.get(); }
   string getStrST() const { return st.getAsString(); }

   void setFT( time_t FT = 0 ) { ft.set( FT ); }
   time_t getFT() const { return ft.get(); }
   string getStrFT() const { return ft.getAsString(); }

   void setID( const string& ID ) { id = ID; }
   void setID( const char* ID ) { id = ID; }
   string getID() const { return id; }

   double getDU() const { return difftime( getFT(), getST() ); }

   void logToFile() {
      // set finish if duration still 0
      if ( getFT() == getST() ) 
        setFT();
      // log the Task's vital statistics
      ofstream outfile(logFile.c_str(),ios::app );   
      outfile << "\nID: " << id << '\n';
      outfile << "  ST: " << getStrST()<<endl;
      outfile << "  FT: " << getStrFT()<<endl;;
      outfile << "  DU: " << getDU(); 
      outfile << '\n';
      outfile.close(); //*** just to be safe!
	  
	  //Output cout
	  cout << "\nID: " << id << '\n';
      cout << "  ST: " << getStrST()<<endl;
      cout << "  FT: " << getStrFT()<<endl;;
      cout << "  DU: " << getDU(); 
      cout << '\n';
   }      
private:
   Task(); // default constructor explicitly hidden
   TimeStamp  st;
   TimeStamp  ft;
   string     id;
   string     logFile;
};

