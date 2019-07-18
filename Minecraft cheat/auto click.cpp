#include <iostream>
#include <Windows.h>
#include <string>
using std::string;
using namespace std;

int main() 
{

string GetActiveWindowTitle()
{
 char wnd_title[256];
 HWND hwnd=GetForegroundWindow(); 
 GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
 return wnd_title;
}
	DWORD NumToSleep = 1000;
	int TimeToSleep = 1000;
	bool click = false;

	cout << "Minecraft Auto-Clicker" << endl;

	cout << "----------------------------------";
	cout << endl << "Aperte G para ativar" << endl;
	cout << endl << "Aperte F para desativar" << endl;
	cout << endl << "Aperte UP para aumentar o delay" << endl;
	cout << endl << "Aperte DOWN para diminuir o delay" << endl;
	cout << "----------------------------------" << endl;

	while (1 || GetActiveWindowTitle = "Minecraft 1.14") 
	{

		if (GetAsyncKeyState('F')) 
		{
			click = true;
		}
		else if (GetAsyncKeyState('G'))
		{
			click = false;
		}
		else if (click == false)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		else if (GetAsyncKeyState(VK_UP) & 0) 
		{
			NumToSleep += TimeToSleep;
			cout << "Valor do delay: " << NumToSleep;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0)
		{
			NumToSleep -= TimeToSleep;
			cout << "Valor do delay: " << NumToSleep;
		}

		Sleep(NumToSleep);
	}

	system("pause");
	return 0;
}
