#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

public ref class OrderedPanel : public System::Windows::Forms::Panel
{
public:
	void CreateMyOrderedPanel(Panel^ pnl, int x, int y, int w, int h,
		GroupBox^ wagonTypeGB, Label^ wagonTypeLBL, GroupBox^ seatTypeGB, Label^ seatTypeLBL,
		GroupBox^ countPeopleGB, Label^ countPeopleLBL, GroupBox^ information, Label^ INFO_time, 
		Label^ INFO_countSeat, Label^ INFO_trip, Label^ INFO_price, Button^ btndelete, 
		Button^ btnbuy, DateTimePicker^ dtp) {

		// Panel create
		Panel^ _panel = gcnew Panel();
		_panel->Location = Point(x, y);
		_panel->Size = System::Drawing::Size(w, h);
		_panel->BackColor = Color::Azure;
		_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));;
		_panel->AutoSizeMode = pnl->AutoSizeMode;
		pnl->Controls->Add(_panel);

		// wagonTypeGB create
		GroupBox^ _wagonTypeGB = gcnew GroupBox();
		//_wagonTypeGB->Anchor = wagonTypeGB->Anchor;
		_wagonTypeGB->Location = wagonTypeGB->Location;
		_wagonTypeGB->Size = wagonTypeGB->Size;
		_wagonTypeGB->BackColor = wagonTypeGB->BackColor;
		_wagonTypeGB->Text = wagonTypeGB->Text;
		_panel->Controls->Add(_wagonTypeGB);

		// wagonTypeLBL create
		Label^ _wagonTypeLBL = gcnew Label();
		_wagonTypeLBL->Location = Point(8, 44);
		_wagonTypeLBL->Text = "Вагон: " + wagonTypeLBL->Text;
		_wagonTypeGB->Controls->Add(_wagonTypeLBL);

		// seatTypeGB create
		GroupBox^ _seatTypeGB = gcnew GroupBox();
		//_seatTypeGB->Anchor = seatTypeGB->Anchor;
		_seatTypeGB->Location = seatTypeGB->Location;
		_seatTypeGB->Size = seatTypeGB->Size;
		_seatTypeGB->BackColor = seatTypeGB->BackColor;
		_seatTypeGB->Text = seatTypeGB->Text;
		_panel->Controls->Add(_seatTypeGB);

		// seatTypeLBL create
		Label^ _seatTypeLBL = gcnew Label();
		_seatTypeLBL->Location = Point(8, 44);
		_seatTypeLBL->Text = "Место: " + seatTypeLBL->Text;
		_seatTypeGB->Controls->Add(_seatTypeLBL);

		// countPeopleGB create
		GroupBox^ _countPeopleGB = gcnew GroupBox();
		//_countPeopleGB->Anchor = countPeopleGB->Anchor;
		_countPeopleGB->Location = countPeopleGB->Location;
		_countPeopleGB->Size = countPeopleGB->Size;
		_countPeopleGB->BackColor = countPeopleGB->BackColor;
		_countPeopleGB->Text = countPeopleGB->Text;
		_panel->Controls->Add(_countPeopleGB);

		// countPeopleLBL create
		Label^ _countPeopleLBL = gcnew Label();
		_countPeopleLBL->Location = Point(8, 44);
		_countPeopleLBL->Text = "Кол-во: " + countPeopleLBL->Text;
		_countPeopleGB->Controls->Add(_countPeopleLBL);

		// information create
		GroupBox^ _information = gcnew GroupBox();
		_information->Anchor = information->Anchor;
		_information->Location = information->Location;
		_information->Size = information->Size;
		_information->BackColor = information->BackColor;
		_information->Text = information->Text;
		_panel->Controls->Add(_information);

		Label^ _INFO_countSeat = gcnew Label();
		_INFO_countSeat->AutoSize = true;
		_INFO_countSeat->Location = INFO_countSeat->Location;
		_INFO_countSeat->Text = INFO_countSeat->Text;

		Label^ _INFO_time = gcnew Label();
		_INFO_time->AutoSize = true;
		_INFO_time->Location = INFO_time->Location;
		_INFO_time->Text = INFO_time->Text;

		Label^ _INFO_trip = gcnew Label();
		_INFO_trip->AutoSize = true;
		_INFO_trip->Location = INFO_trip->Location;
		_INFO_trip->Text = INFO_trip->Text;

		Label^ _INFO_price = gcnew Label();
		_INFO_price->AutoSize = true;
		_INFO_price->Location = INFO_price->Location;
		_INFO_price->Text = INFO_price->Text;

		_information->Controls->Add(_INFO_countSeat);
		_information->Controls->Add(_INFO_time);
		_information->Controls->Add(_INFO_trip);
		_information->Controls->Add(_INFO_price);

		// del btn create
		Button^ delbtn = gcnew Button();
		delbtn->Anchor = btndelete->Anchor;
		delbtn->Location = btndelete->Location;
		delbtn->Size = btndelete->Size;
		delbtn->Text = "Удалить";
		delbtn->FlatStyle = btndelete->FlatStyle;
		delbtn->FlatAppearance->BorderSize = btndelete->FlatAppearance->BorderSize;
		delbtn->BackColor = Color::PaleVioletRed;
		_panel->Controls->Add(delbtn);

		// buy btn create
		Button^ _btnbuy = gcnew Button();
		_btnbuy->Anchor = btnbuy->Anchor;
		_btnbuy->Location = btnbuy->Location;
		_btnbuy->Size = btnbuy->Size;
		_btnbuy->Text = btnbuy->Text;
		_btnbuy->FlatStyle = btndelete->FlatStyle;
		_btnbuy->FlatAppearance->BorderSize = btndelete->FlatAppearance->BorderSize;
		_btnbuy->BackColor = btnbuy->BackColor;
		_panel->Controls->Add(_btnbuy);

		// dtp create
		DateTimePicker^ _dtp = gcnew DateTimePicker();
		_dtp->Anchor = dtp->Anchor;
		_dtp->Size = dtp->Size;
		_dtp->Location = dtp->Location;
		_dtp->Value = dtp->Value;
		_dtp->Enabled = false;
		_panel->Controls->Add(_dtp);
	}
	OrderedPanel(){};
	~OrderedPanel(){};

private:

};
//_wagonTypeLBL->AutoSize = true;
		//_wagonTypeLBL->BackColor = Color::Azure;
		//_wagonTypeLBL->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		//_wagonTypeLBL->ForeColor = Color::LightGray;