#pragma once
#include "MyForm.h"
#include "classUser.h"

namespace Task5Railwayv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyLoaderForm
	/// </summary>
	public ref class MyLoaderForm : public System::Windows::Forms::Form
	{
		String^ fileName = "ActiveUsers.txt";
	public:	int xmove = 0;
	private: System::Windows::Forms::Button^ btnClose;
	public:
	private: System::Windows::Forms::Panel^ pnlUser;
	private: System::Windows::Forms::Panel^ pnlPass;
	private: System::Windows::Forms::TextBox^ Password;
	private: System::Windows::Forms::Button^ Sign_in;
	public:	int ymove = 0;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ RegPass;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Reglog;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	public:
		MyLoaderForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyLoaderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Autoriz;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ Pass;
	private: System::Windows::Forms::TextBox^ Login;
	protected:

	protected:



	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyLoaderForm::typeid));
			this->Autoriz = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->Pass = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->pnlUser = (gcnew System::Windows::Forms::Panel());
			this->pnlPass = (gcnew System::Windows::Forms::Panel());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->Sign_in = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RegPass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Reglog = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Autoriz
			// 
			this->Autoriz->AutoSize = true;
			this->Autoriz->BackColor = System::Drawing::Color::Transparent;
			this->Autoriz->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Autoriz->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Autoriz->Location = System::Drawing::Point(30, 89);
			this->Autoriz->Name = L"Autoriz";
			this->Autoriz->Size = System::Drawing::Size(205, 41);
			this->Autoriz->TabIndex = 0;
			this->Autoriz->Text = L"Авторизация";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->username->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->username->Location = System::Drawing::Point(58, 175);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(140, 20);
			this->username->TabIndex = 0;
			this->username->Text = L"Имя пользователя";
			// 
			// Pass
			// 
			this->Pass->AutoSize = true;
			this->Pass->BackColor = System::Drawing::Color::Transparent;
			this->Pass->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pass->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Pass->Location = System::Drawing::Point(59, 259);
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(62, 20);
			this->Pass->TabIndex = 0;
			this->Pass->Text = L"Пароль";
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Black;
			this->Login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login->ForeColor = System::Drawing::Color::White;
			this->Login->Location = System::Drawing::Point(63, 209);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(130, 16);
			this->Login->TabIndex = 1;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(849, -8);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(35, 35);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"╳";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyLoaderForm::button1_Click);
			// 
			// pnlUser
			// 
			this->pnlUser->Location = System::Drawing::Point(61, 226);
			this->pnlUser->Name = L"pnlUser";
			this->pnlUser->Size = System::Drawing::Size(130, 1);
			this->pnlUser->TabIndex = 3;
			// 
			// pnlPass
			// 
			this->pnlPass->Location = System::Drawing::Point(59, 309);
			this->pnlPass->Name = L"pnlPass";
			this->pnlPass->Size = System::Drawing::Size(130, 1);
			this->pnlPass->TabIndex = 5;
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::Black;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Location = System::Drawing::Point(61, 292);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(130, 16);
			this->Password->TabIndex = 4;
			// 
			// Sign_in
			// 
			this->Sign_in->BackColor = System::Drawing::Color::Plum;
			this->Sign_in->FlatAppearance->BorderSize = 0;
			this->Sign_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sign_in->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->Sign_in->Location = System::Drawing::Point(59, 336);
			this->Sign_in->Name = L"Sign_in";
			this->Sign_in->Size = System::Drawing::Size(132, 39);
			this->Sign_in->TabIndex = 6;
			this->Sign_in->Text = L"Вход";
			this->Sign_in->UseVisualStyleBackColor = false;
			this->Sign_in->Click += gcnew System::EventHandler(this, &MyLoaderForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->Sign_in);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pnlPass);
			this->panel1->Controls->Add(this->Autoriz);
			this->panel1->Controls->Add(this->Password);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->pnlUser);
			this->panel1->Controls->Add(this->Pass);
			this->panel1->Controls->Add(this->Login);
			this->panel1->Location = System::Drawing::Point(-3, -8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 446);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyLoaderForm::panel1_Paint);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyLoaderForm::MyForm_MouseMove1);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(62, 312);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(130, 2);
			this->panel6->TabIndex = 10;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(62, 229);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(130, 2);
			this->panel5->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Pink;
			this->label1->Location = System::Drawing::Point(82, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Нет аккаунта\?";
			this->label1->Click += gcnew System::EventHandler(this, &MyLoaderForm::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->Register);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->RegPass);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->Reglog);
			this->panel2->Location = System::Drawing::Point(-3, -8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(255, 446);
			this->panel2->TabIndex = 8;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyLoaderForm::panel2_Paint);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyLoaderForm::MyForm_MouseMove1);
			// 
			// Register
			// 
			this->Register->BackColor = System::Drawing::Color::Plum;
			this->Register->FlatAppearance->BorderSize = 0;
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->Register->Location = System::Drawing::Point(59, 336);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(132, 39);
			this->Register->TabIndex = 6;
			this->Register->Text = L"Создать";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &MyLoaderForm::Register_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Pink;
			this->label2->Location = System::Drawing::Point(82, 388);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Есть аккаунт\?";
			this->label2->Click += gcnew System::EventHandler(this, &MyLoaderForm::label2_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(59, 309);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(130, 1);
			this->panel3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(33, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 41);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Регистрация";
			// 
			// RegPass
			// 
			this->RegPass->BackColor = System::Drawing::Color::Black;
			this->RegPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegPass->ForeColor = System::Drawing::Color::White;
			this->RegPass->Location = System::Drawing::Point(61, 292);
			this->RegPass->Name = L"RegPass";
			this->RegPass->Size = System::Drawing::Size(130, 16);
			this->RegPass->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(58, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Имя пользователя";
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(61, 226);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(130, 1);
			this->panel4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(59, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Пароль";
			// 
			// Reglog
			// 
			this->Reglog->BackColor = System::Drawing::Color::Black;
			this->Reglog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Reglog->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Reglog->ForeColor = System::Drawing::Color::White;
			this->Reglog->Location = System::Drawing::Point(63, 209);
			this->Reglog->Name = L"Reglog";
			this->Reglog->Size = System::Drawing::Size(130, 16);
			this->Reglog->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(57, 304);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(132, 2);
			this->panel7->TabIndex = 12;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyLoaderForm::panel7_Paint);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(58, 221);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(132, 2);
			this->panel8->TabIndex = 11;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyLoaderForm::panel8_Paint);
			// 
			// MyLoaderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(880, 440);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyLoaderForm";
			this->Text = L"MyLoaderForm";
			this->Load += gcnew System::EventHandler(this, &MyLoaderForm::MyLoaderForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyLoaderForm::MyForm_Transperent45);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyLoaderForm::MyForm_MouseMove1);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyLoaderForm::MyForm_Transperent100);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyLoaderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_MouseMove1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button != System::Windows::Forms::MouseButtons::Left)
		{
			xmove = e->X;
			ymove = e->Y;
		}
		else
		{
			this->Left = this->Left + (e->X - xmove);
			this->Top = this->Top + (e->Y - ymove);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckUser(Reglog, RegPass)) { MessageBox::Show("   Такой пользователь существует!   "); }
		else {
			FileStream^ fs = gcnew FileStream(fileName, FileMode::Append);
			StreamWriter^ file = gcnew StreamWriter(fs);
			int sizeL = Reglog->Text->Length;
			int sizeP = RegPass->Text->Length;
			bool correct = true;
			if (sizeL == 0 || sizeP == 0) correct = false;
			for (int i = 0; i < sizeL; i++) { if (Reglog->Text[i] == ' ') correct = false; }
			for (int i = 0; i < sizeP; i++) { if (RegPass->Text[i] == ' ') correct = false; }
			if (correct) {
				file->WriteLine(Reglog->Text + " " + RegPass->Text);
				panel1->Visible = true;
				panel2->Visible = false;
				Login->Text = Reglog->Text;
			}
			else { MessageBox::Show("   Данные введены не правильно!   "); }
			file->Close();
		}
		Reglog->Text = "";
		RegPass->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckUser(Login, Password)) {
			MyForm^ form = gcnew MyForm();
			form->Show();
			this->Hide();
		}
		else { MessageBox::Show("   Неверный логин или пароль!   "); }
		
	}
	bool CheckUser(TextBox^ _log, TextBox^ _pass) {
		FileStream^ fs = gcnew FileStream(fileName, FileMode::OpenOrCreate);
		StreamReader^ file = gcnew StreamReader(fs);
		bool IsUserExist = false;
		String^ NotConvertLine;
		while ((NotConvertLine = file->ReadLine()) != nullptr) {
			_User^ user = gcnew _User(ConvertLineToUser(NotConvertLine));
			if (user->getLogin() == _log->Text && user->getPassword() == _pass->Text) { IsUserExist = true; }
		}
		file->Close();
		
		return IsUserExist;
	}
	ref class _User^ ConvertLineToUser(String^ %_line) {
		int lineSize = _line->Length;
		enum UserCredits { _login = 1, _password = 2 };
		String^ UserLogin = "";
		String^ UserPassword = "";
		for (int i = 0, _switch = _login; i < lineSize; i++) {
			if (_line[i] == ' ') { 
				_switch++;
				i++;
			}
			if (_switch == _login) { UserLogin += _line[i]; }
			else if (_switch == _password) { UserPassword += _line[i]; }
		}
		_User^ _user = gcnew _User(UserLogin, UserPassword);
		return _user;
	}
	private: System::Void MyForm_Transperent100(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		MyLoaderForm::Opacity = 1.0;
	}
	private: System::Void MyForm_Transperent45(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		MyLoaderForm::Opacity = 0.65;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = true;
		panel2->Visible = false;
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}