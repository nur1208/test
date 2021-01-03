#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include <thread>
using namespace std;

class Clock{
    int mHours, mMinutes, mSecond;
    public:
        Clock(int newSecond = 0, int newMinute = 0,int newHour = 0):mHours(newHour), mMinutes(newMinute), mSecond(newSecond){};
        ~Clock(){};
        void setSecond(int const newSecond){if( newSecond >= 0 && newSecond <23)mSecond = newSecond;};
        void setMinute(int const newMinute){
            if ( newMinute >= 0 && newMinute < 60) {
                mMinutes = newMinute;
            } 
        };
        void setHour(int const newHour){
            if ( newHour >= 0 && newHour <23) { 
			    mHours = newHour;
		    } 
        };

        const int getSecond() const {return mSecond;}
        const int getMinute() const {return mMinutes;}
        const int getHour() const {return mHours;}

        void reset(){mSecond = 0; mMinutes= 0; mHours= 0;}

        void tick();
        void show();
};

void Clock::tick(){
    mSecond++;
    if(mSecond >=60){
        mMinutes++;
        mSecond = 0;
        if(mMinutes >=60){
            mHours++;
            mMinutes = 0;
            if(mHours >=12){
                mHours = 0;
            }
        }
    }
}

void Clock::show(){
    cout << mSecond << " " << mMinutes << " " << mHours << endl;
}

int main()
{
    Clock c(55,59,11);

    std::thread([&]
    {
        while(true)
        {
            // Wait 5 minutes
            std::this_thread::sleep_for(std::chrono::seconds(1));
            // Call our method
            c.tick();
            c.show();
        }
    }).detach();

    // Execution continues ...
    std::cin.get();
}