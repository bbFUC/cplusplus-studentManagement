#include "MyForm.h"
#include <iostream>

using namespace std;
using namespace Project9; // ʹ��MyForm.h�ж���������ռ�



[STAThread] // ���߳����ԣ���Щ���Ҫ���߳�

int WinMain() {

	Application::EnableVisualStyles(); // ���ÿ��ӻ�����
	Application::Run(gcnew MyForm());  // ����һ�����岢������Ϣѭ��

	return 0;
}

