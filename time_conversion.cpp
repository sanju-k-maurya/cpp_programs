//This code converts time entered in AM/PM format to 24 hour format.
/*
Changes in new branch
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
*/
#include<iostream>
using namespace std;
int main()
{
	string input_time;
	cout<<"Enter time in HH:MM:SSAM/HH:MM:SSPM format: ";
	getline(cin,input_time);
	int hour;
	string hour_time;
	string change_hour;
	string hh,mm,ss;
	int ihh,imm,iss;
	hh=input_time.substr(0,2);
	mm=input_time.substr(3,2);
	ss=input_time.substr(6,2);
	ihh=stoi(hh);
	imm=stoi(mm);
	iss=stoi(ss);
	string output_time = input_time.substr(0,8);
	if(ihh>=01 && ihh<=12 && imm>=00 && imm<=59 && iss>=00 && iss<=59)
	{
		if(input_time.substr(8,2)=="PM" && input_time.substr(0,2)!="12")
		{
			hour_time = input_time.substr(0,2);
			hour = stoi(hour_time);
			hour=hour+12;
			change_hour= to_string(hour);
			output_time[0]=change_hour[0];
			output_time[1]=change_hour[1];


		}
		else if(input_time.substr(8,2)=="AM" && input_time.substr(0,2)=="12")
		{
			output_time[0]='0';
			output_time[1]='0';

		}

		
		cout<<"Time in 24 hour format is :";
		cout<<output_time<<endl;
	}

}
