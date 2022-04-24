#pragma once
//#pragma warning(disable:4484)
//#pragma warning(disable:3673)
#include <iostream>
#include <string>
#include <cliext/vector>
#include <vector>
//using namespace System;
//using namespace System::IO;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;
//using namespace System::Runtime::InteropServices;

//public ref class OrderedPanel : public System::Windows::Forms::Panel
//{
//public:
//	Panel^ _panel;
//	GroupBox^ _wagonTypeGB;
//	Label^ _wagonTypeLBL;
//	GroupBox^ _seatTypeGB;
//	Label^ _seatTypeLBL;
//	GroupBox^ _countPeopleGB;
//	Label^ _countPeopleLBL;
//	GroupBox^ _information;
//	Label^ _INFO_countSeat;
//	Label^ _INFO_time;
//	Label^ _INFO_trip;
//	Label^ _INFO_price;
//	Button^ delbtn;
//	Button^ _btnbuy;
//	DateTimePicker^ _dtp;
//
//	void CreateMyOrderedPanel(Panel^ pnl, int x, int y, int w, int h,
//		GroupBox^ wagonTypeGB, Label^ wagonTypeLBL, GroupBox^ seatTypeGB, Label^ seatTypeLBL,
//		GroupBox^ countPeopleGB, Label^ countPeopleLBL, GroupBox^ information, Label^ INFO_time, 
//		Label^ INFO_countSeat, Label^ INFO_trip, Label^ INFO_price, Button^ btndelete, 
//		Button^ btnbuy, DateTimePicker^ dtp, int index) {//, EventHandler^ evh) {
//
//		// Panel create
//		_panel = gcnew Panel();
//		_panel->Location = Point(x, y);
//		_panel->Size = System::Drawing::Size(w, h);
//		_panel->BackColor = Color::Azure;
//		_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
//		_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
//		_panel->AutoSizeMode = pnl->AutoSizeMode;
//		pnl->Controls->Add(_panel);
//
//		// wagonTypeGB create
//		_wagonTypeGB = gcnew GroupBox();
//		//_wagonTypeGB->Anchor = wagonTypeGB->Anchor;
//		_wagonTypeGB->Location = wagonTypeGB->Location;
//		_wagonTypeGB->Size = wagonTypeGB->Size;
//		_wagonTypeGB->BackColor = wagonTypeGB->BackColor;
//		_wagonTypeGB->Text = wagonTypeGB->Text;
//		_panel->Controls->Add(_wagonTypeGB);
//
//		// wagonTypeLBL create
//		_wagonTypeLBL = gcnew Label();
//		_wagonTypeLBL->Location = Point(8, 44);
//		_wagonTypeLBL->Text = "Вагон: " + wagonTypeLBL->Text;
//		_wagonTypeGB->Controls->Add(_wagonTypeLBL);
//
//		// seatTypeGB create
//		_seatTypeGB = gcnew GroupBox();
//		//_seatTypeGB->Anchor = seatTypeGB->Anchor;
//		_seatTypeGB->Location = seatTypeGB->Location;
//		_seatTypeGB->Size = seatTypeGB->Size;
//		_seatTypeGB->BackColor = seatTypeGB->BackColor;
//		_seatTypeGB->Text = seatTypeGB->Text;
//		_panel->Controls->Add(_seatTypeGB);
//
//		// seatTypeLBL create
//		_seatTypeLBL = gcnew Label();
//		_seatTypeLBL->Location = Point(8, 44);
//		_seatTypeLBL->Text = "Место: " + seatTypeLBL->Text;
//		_seatTypeGB->Controls->Add(_seatTypeLBL);
//
//		// countPeopleGB create
//		GroupBox^ _countPeopleGB = gcnew GroupBox();
//		//_countPeopleGB->Anchor = countPeopleGB->Anchor;
//		_countPeopleGB->Location = countPeopleGB->Location;
//		_countPeopleGB->Size = countPeopleGB->Size;
//		_countPeopleGB->BackColor = countPeopleGB->BackColor;
//		_countPeopleGB->Text = countPeopleGB->Text;
//		_panel->Controls->Add(_countPeopleGB);
//
//		// countPeopleLBL create
//		_countPeopleLBL = gcnew Label();
//		_countPeopleLBL->Location = Point(8, 44);
//		_countPeopleLBL->Text = "Кол-во: " + countPeopleLBL->Text;
//		_countPeopleGB->Controls->Add(_countPeopleLBL);
//
//		// information create
//		_information = gcnew GroupBox();
//		_information->Anchor = information->Anchor;
//		_information->Location = information->Location;
//		_information->Size = information->Size;
//		_information->BackColor = information->BackColor;
//		_information->Text = information->Text;
//		_panel->Controls->Add(_information);
//
//		_INFO_countSeat = gcnew Label();
//		_INFO_countSeat->AutoSize = true;
//		_INFO_countSeat->Location = INFO_countSeat->Location;
//		_INFO_countSeat->Text = INFO_countSeat->Text;
//
//		_INFO_time = gcnew Label();
//		_INFO_time->AutoSize = true;
//		_INFO_time->Location = INFO_time->Location;
//		_INFO_time->Text = INFO_time->Text;
//
//		_INFO_trip = gcnew Label();
//		_INFO_trip->AutoSize = true;
//		_INFO_trip->Location = INFO_trip->Location;
//		_INFO_trip->Text = INFO_trip->Text;
//
//		_INFO_price = gcnew Label();
//		_INFO_price->AutoSize = true;
//		_INFO_price->Location = INFO_price->Location;
//		_INFO_price->Text = INFO_price->Text;
//
//		_information->Controls->Add(_INFO_countSeat);
//		_information->Controls->Add(_INFO_time);
//		_information->Controls->Add(_INFO_trip);
//		_information->Controls->Add(_INFO_price);
//
//		// del btn create
//		delbtn = gcnew Button();
//		delbtn->Anchor = btndelete->Anchor;
//		delbtn->Location = btndelete->Location;
//		delbtn->Size = btndelete->Size;
//		delbtn->Text = "Удалить";
//		delbtn->FlatStyle = btndelete->FlatStyle;
//		delbtn->FlatAppearance->BorderSize = btndelete->FlatAppearance->BorderSize;
//		delbtn->BackColor = Color::PaleVioletRed;
//		//delbtn->Click += evh;
//		_panel->Controls->Add(delbtn);
//
//		// buy btn create
//		_btnbuy = gcnew Button();
//		_btnbuy->Anchor = btnbuy->Anchor;
//		_btnbuy->Location = btnbuy->Location;
//		_btnbuy->Size = btnbuy->Size;
//		_btnbuy->Text = btnbuy->Text;
//		_btnbuy->FlatStyle = btndelete->FlatStyle;
//		_btnbuy->FlatAppearance->BorderSize = btndelete->FlatAppearance->BorderSize;
//		_btnbuy->BackColor = btnbuy->BackColor;
//		_panel->Controls->Add(_btnbuy);
//
//		// dtp create
//		_dtp = gcnew DateTimePicker();
//		_dtp->Anchor = dtp->Anchor;
//		_dtp->Size = dtp->Size;
//		_dtp->Location = dtp->Location;
//		_dtp->Value = dtp->Value;
//		_dtp->Enabled = false;
//		_panel->Controls->Add(_dtp);
//	}
//	OrderedPanel(){};
//	~OrderedPanel(){};
//
//	void LocY(int y) {
//		_panel->Location = Point(15, y);
//	}
//	void Del(Panel^ ordpnl) {
//		ordpnl->Controls->Remove(_panel);
//	}
//
//	void AddEVH() {
//		delbtn->Click += gcnew System::EventHandler(this, &OrderedPanel::OnClick);
//	}
//private:
//
//	void OnClick(System::Object^ sender, System::EventArgs^ e);
//};
//
//void OrderedPanel::OnClick(System::Object^ sender, System::EventArgs^ e)
//{
//	//this->Visible = false;
//	MessageBox::Show("Удалил");
//	//cliext::vector<OrderedPanel^> Massive;
//	
//	//throw gcnew System::NotImplementedException();
//}
