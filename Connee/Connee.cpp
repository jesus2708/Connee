#include "stdafx.h"  //________________________________________ Connee.cpp
#include "Connee.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Connee app;
	return app.BeginDialog(IDI_Connee, hInstance);
}

void Connee::Window_Open(Win::Event& e)
{
}
void Connee::Line(int Pregunta)
{
	for (int j = 0; j < tbxNumero.IntValue; j++)
	{
		for (int i = 0; i < Pregunta; i++)
		{
			tbx2.Text += L"*";
		}
		tbx2.Text += L"\r\n";
		Pregunta--;
	}
}
void Connee::btClick_Click(Win::Event& e)
{
	int r = tbxNumero.IntValue;
	Line(r);
}

