#pragma once  //______________________________________ Connee.h  
#include "Resource.h"
class Connee: public Win::Dialog
{
public:
	Connee()
	{
	}
	~Connee()
	{
	}
	void Line(int pregunta);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNumero;
	Win::Button btClick;
	Win::Textbox tbx2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.86354);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(7.35542);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Connee";
		lb1.CreateX(NULL, L"Count", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.52917, 0.34396, 1.87854, 0.60854, hWnd, 1000);
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.85750, 0.42333, 2.85750, 0.60854, hWnd, 1001);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.45583, 0.55563, 2.22250, 0.68792, hWnd, 1002);
		tbx2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 0.68792, 1.56104, 7.80521, 5.60917, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxNumero.Font = fontArial009A;
		btClick.Font = fontArial009A;
		tbx2.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
