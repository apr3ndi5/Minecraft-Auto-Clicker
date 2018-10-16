#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

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

	while (1) {

		if (GetAsyncKeyState('F')) {
			click = true;
		}
		if (GetAsyncKeyState('G')) {
			click = false;
		}
		if (click == false) {
			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		if (GetAsyncKeyState(VK_UP) & 0) {
			NumToSleep += TimeToSleep;
			cout << "Valor do delay: " << NumToSleep;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0) {
			NumToSleep -= TimeToSleep;
			cout << "Valor do delay: " << NumToSleep;
		}

		Sleep(NumToSleep);
	}

	system("PAUSE");
	return 0;
}