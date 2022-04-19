#pragma once
#include "ThemeColor.h"

namespace Task5Railway {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//Fields
		/*[DllImport("user32.DLL", EntryPoint = "ReleaseCapture")]
		void ReleaseCapture();

		[DllImport("user32.DLL", EntryPoint = "SendMessage")]
		void SendMessage(System::IntPtr hWnd, int wMsg, int wParam, int lParam);*/
	private: 
		Button^ correntButton;
		//Random random;
		int tempIndex;
		int xmove = 0;
		bool back = false;
	private: System::Windows::Forms::Panel^ panelCloseBar;
	private: System::Windows::Forms::PictureBox^ pictureBoxWellcome;
	private: System::Windows::Forms::Panel^ panelFaster;
	private: System::Windows::Forms::Panel^ activePanelFast_1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;










		   int ymove = 0;
		//constructor
	public:
		MyForm(void)
		{
			srand(time(NULL));
			InitializeComponent();
			//monthCalendarFaster->MinDate = new DateTime(monthCalendarFaster->MinDate);
			/*monthCalendarFaster->MinDate = DateTime::Today;
			monthCalendarFaster->MaxDate = DateTime::Today.AddMonths(1);*/
			//dateTimePickerFaster->MinDate = DateTime::Today;
			//dateTimePickerFaster->MaxDate = DateTime::Today.AddMonths(1);
			//random = new Random();
			this->Text = System::String::Empty;
			this->ControlBox = false;
			//
			//TODO: добавьте код конструктора
			//
			//lblDateFaster->Scale(20, 10);
		}
		
		//methods
	private:
		Color SelectThemeColor() {
			std::vector<std::string> colors{ 
						"#3F51B5",
						"#009688",
						"#FF5722",
						"#607D8B",
						"#FF9800",
						"#9C27B0",
						"#2196F3",
						"#EA676C",
						"#E41A4A",
						"#5978BB",
						"#018790",
						"#0E3441",
						"#00B0AD",
						"#721D47",
						"#EA4833",
						"#EF937E",
						"#F37521",
						"#A12059",
						"#126881",
						"#8BC240",
						"#364D5B",
						"#C7DC5B",
						"#0094BC",
						"#E4126B",
						"#43B76E",
						"#7BCFE9",
						"#B71C46" };
			//int index = random.Next(colors.size() - 1);
			int index = rand() % colors.size();
			while (tempIndex == index) {
				index = rand() % colors.size();
				//random.Next(colors.size() - 1);
			}
			tempIndex = index;
			std::string color = colors[index];
			String^ s = gcnew String(colors[index].c_str());
			return ColorTranslator::FromHtml(s);
		}

	private:
		void ActivateButton(System::Object^ btnSender) {
			if (btnSender != NULL) {
				if (correntButton != safe_cast<Button^>(btnSender) || back == true) {
					if (safe_cast<Button^>(btnSender)->Name == "btnLastochka" ||
						safe_cast<Button^>(btnSender)->Name == "btnBranded" ||
						safe_cast<Button^>(btnSender)->Name == "btnFast" ||
						safe_cast<Button^>(btnSender)->Name == "btnOrdered" ||
						safe_cast<Button^>(btnSender)->Name == "btnIssued" ||
						safe_cast<Button^>(btnSender)->Name == "btnSettings" ) 
					{
						back = false;
						backHome();
						pictureBoxWellcome->Visible = false;
						Color color = SelectThemeColor();
						correntButton = safe_cast<Button^>(btnSender);   /////////////

						correntButton->ImageAlign = ContentAlignment::MiddleCenter;
						correntButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(204)));
						correntButton->BackColor = color;
						correntButton->ForeColor = Color::White;
						panelTitleBar->BackColor = color;
						panelLogo->BackColor = ChangeColorBrightness(color, -0.45);
						/*btnClose->BackColor = ChangeColorBrightness(color, -0.01);
						btnMinimaze->BackColor = ChangeColorBrightness(color, -0.01);
						btnMaximize->BackColor = ChangeColorBrightness(color, -0.01);*/
					}
				}
			}
		}
		void backHome() {
			btnLastochka->ImageAlign = ContentAlignment::MiddleLeft;
			btnLastochka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnLastochka->BackColor = Color::FromArgb(51, 51, 76);
			btnLastochka->ForeColor = Color::Gainsboro;
			btnBranded->ImageAlign = ContentAlignment::MiddleLeft;
			btnBranded->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnBranded->BackColor = Color::FromArgb(51, 51, 76);
			btnBranded->ForeColor = Color::Gainsboro;
			btnFast->ImageAlign = ContentAlignment::MiddleLeft;
			btnFast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnFast->BackColor = Color::FromArgb(51, 51, 76);
			btnFast->ForeColor = Color::Gainsboro;
			btnOrdered->ImageAlign = ContentAlignment::MiddleLeft;
			btnOrdered->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnOrdered->BackColor = Color::FromArgb(51, 51, 76);
			btnOrdered->ForeColor = Color::Gainsboro;
			btnIssued->ImageAlign = ContentAlignment::MiddleLeft;
			btnIssued->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnIssued->BackColor = Color::FromArgb(51, 51, 76);
			btnIssued->ForeColor = Color::Gainsboro;
			btnSettings->ImageAlign = ContentAlignment::MiddleLeft;
			btnSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			btnSettings->BackColor = Color::FromArgb(51, 51, 76);
			btnSettings->ForeColor = Color::Gainsboro;
			panelTitleBar->BackColor = Color::FromArgb(0, 150, 136);
			panelLogo->BackColor = Color::FromArgb(39, 39, 58);
			pictureBoxWellcome->Visible = true;
			panelFaster->Visible = false;
		}
		Color ChangeColorBrightness(Color color, double correctionFactor) {
			double red = color.R;
			double green = color.G;
			double blue = color.B;

			if (correctionFactor < 0) {
				correctionFactor = 1 + correctionFactor;
				red *= correctionFactor;
				green *= correctionFactor;
				blue *= correctionFactor;
			}
			else {
				red = (255 - red) * correctionFactor + red;
				green = (255 - green) * correctionFactor + green;
				blue = (255 - blue) * correctionFactor + blue;
			}

			return Color::FromArgb(color.A, static_cast<System::Byte>(red), static_cast<System::Byte>(green), static_cast<System::Byte>(blue));
		}
		//void DisableButton() {
		//	//Panel panelMenu->Control;
		//	if(){
		//		if (previousBtn.GetType() == typeof(Button)) {
		//			previousBtn.BackColor = Color.FromArgb(51, 51, 76);
		//			previousBtn.ForeColor = Color.Gainsboro;
		//		}
		//	}
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	protected:
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Button^ btnIssued;
	private: System::Windows::Forms::Button^ btnOrdered;
	private: System::Windows::Forms::Button^ btnFast;
	private: System::Windows::Forms::Button^ btnBranded;
	private: System::Windows::Forms::Button^ btnLastochka;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelDesktopPanel;
	private: System::Windows::Forms::Button^ btnMaximize;
	private: System::Windows::Forms::Button^ btnMinimaze;




	private: System::Windows::Forms::Button^ btnClose;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnIssued = (gcnew System::Windows::Forms::Button());
			this->btnOrdered = (gcnew System::Windows::Forms::Button());
			this->btnFast = (gcnew System::Windows::Forms::Button());
			this->btnBranded = (gcnew System::Windows::Forms::Button());
			this->btnLastochka = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelCloseBar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->btnMinimaze = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->panelDesktopPanel = (gcnew System::Windows::Forms::Panel());
			this->panelFaster = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxWellcome = (gcnew System::Windows::Forms::PictureBox());
			this->activePanelFast_1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			this->panelDesktopPanel->SuspendLayout();
			this->panelFaster->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWellcome))->BeginInit();
			this->activePanelFast_1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMenu->Controls->Add(this->btnSettings);
			this->panelMenu->Controls->Add(this->btnIssued);
			this->panelMenu->Controls->Add(this->btnOrdered);
			this->panelMenu->Controls->Add(this->btnFast);
			this->panelMenu->Controls->Add(this->btnBranded);
			this->panelMenu->Controls->Add(this->btnLastochka);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(219, 440);
			this->panelMenu->TabIndex = 0;
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettings.Image")));
			this->btnSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->Location = System::Drawing::Point(0, 380);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnSettings->Size = System::Drawing::Size(219, 60);
			this->btnSettings->TabIndex = 6;
			this->btnSettings->Text = L"    Настройки";
			this->btnSettings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &MyForm::btnSettings_Click);
			// 
			// btnIssued
			// 
			this->btnIssued->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnIssued->FlatAppearance->BorderSize = 0;
			this->btnIssued->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIssued->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnIssued->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIssued.Image")));
			this->btnIssued->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIssued->Location = System::Drawing::Point(0, 320);
			this->btnIssued->Name = L"btnIssued";
			this->btnIssued->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnIssued->Size = System::Drawing::Size(219, 60);
			this->btnIssued->TabIndex = 5;
			this->btnIssued->Text = L"    Выданные";
			this->btnIssued->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIssued->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnIssued->UseVisualStyleBackColor = true;
			this->btnIssued->Click += gcnew System::EventHandler(this, &MyForm::btnIssued_Click);
			// 
			// btnOrdered
			// 
			this->btnOrdered->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOrdered->FlatAppearance->BorderSize = 0;
			this->btnOrdered->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOrdered->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnOrdered->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOrdered.Image")));
			this->btnOrdered->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrdered->Location = System::Drawing::Point(0, 260);
			this->btnOrdered->Name = L"btnOrdered";
			this->btnOrdered->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnOrdered->Size = System::Drawing::Size(219, 60);
			this->btnOrdered->TabIndex = 4;
			this->btnOrdered->Text = L"    Заказанные";
			this->btnOrdered->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOrdered->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnOrdered->UseVisualStyleBackColor = true;
			this->btnOrdered->Click += gcnew System::EventHandler(this, &MyForm::btnOrdered_Click);
			// 
			// btnFast
			// 
			this->btnFast->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFast->FlatAppearance->BorderSize = 0;
			this->btnFast->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFast->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnFast->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFast.Image")));
			this->btnFast->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFast->Location = System::Drawing::Point(0, 200);
			this->btnFast->Name = L"btnFast";
			this->btnFast->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnFast->Size = System::Drawing::Size(219, 60);
			this->btnFast->TabIndex = 3;
			this->btnFast->Text = L"    Скорый";
			this->btnFast->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFast->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFast->UseVisualStyleBackColor = true;
			this->btnFast->Click += gcnew System::EventHandler(this, &MyForm::btnFast_Click);
			// 
			// btnBranded
			// 
			this->btnBranded->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnBranded->FlatAppearance->BorderSize = 0;
			this->btnBranded->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBranded->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnBranded->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBranded.Image")));
			this->btnBranded->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBranded->Location = System::Drawing::Point(0, 140);
			this->btnBranded->Name = L"btnBranded";
			this->btnBranded->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnBranded->Size = System::Drawing::Size(219, 60);
			this->btnBranded->TabIndex = 2;
			this->btnBranded->Text = L"    Фирменный";
			this->btnBranded->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBranded->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnBranded->UseVisualStyleBackColor = true;
			this->btnBranded->Click += gcnew System::EventHandler(this, &MyForm::btnBranded_Click);
			// 
			// btnLastochka
			// 
			this->btnLastochka->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLastochka->FlatAppearance->BorderSize = 0;
			this->btnLastochka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLastochka->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnLastochka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLastochka.Image")));
			this->btnLastochka->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLastochka->Location = System::Drawing::Point(0, 80);
			this->btnLastochka->Name = L"btnLastochka";
			this->btnLastochka->Padding = System::Windows::Forms::Padding(11, 0, 0, 0);
			this->btnLastochka->Size = System::Drawing::Size(219, 60);
			this->btnLastochka->TabIndex = 1;
			this->btnLastochka->Text = L"    Ласточка";
			this->btnLastochka->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLastochka->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLastochka->UseVisualStyleBackColor = true;
			this->btnLastochka->Click += gcnew System::EventHandler(this, &MyForm::btnLastochka_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->Controls->Add(this->panelCloseBar);
			this->panelLogo->Controls->Add(this->label1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(219, 80);
			this->panelLogo->TabIndex = 0;
			this->panelLogo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelLogo_Paint);
			this->panelLogo->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Home);
			// 
			// panelCloseBar
			// 
			this->panelCloseBar->Location = System::Drawing::Point(219, 0);
			this->panelCloseBar->Name = L"panelCloseBar";
			this->panelCloseBar->Size = System::Drawing::Size(79, 80);
			this->panelCloseBar->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(27, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gorky Railway";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panelTitleBar->Controls->Add(this->btnMinimaze);
			this->panelTitleBar->Controls->Add(this->btnClose);
			this->panelTitleBar->Controls->Add(this->btnMaximize);
			this->panelTitleBar->Controls->Add(this->lblTitle);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(219, 0);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(661, 80);
			this->panelTitleBar->TabIndex = 1;
			this->panelTitleBar->DoubleClick += gcnew System::EventHandler(this, &MyForm::btnMaximize_Click);
			this->panelTitleBar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			// 
			// btnMinimaze
			// 
			this->btnMinimaze->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimaze->FlatAppearance->BorderSize = 0;
			this->btnMinimaze->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimaze->Font = (gcnew System::Drawing::Font(L"NEON GLOW", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinimaze->ForeColor = System::Drawing::Color::Goldenrod;
			this->btnMinimaze->Location = System::Drawing::Point(573, -2);
			this->btnMinimaze->Name = L"btnMinimaze";
			this->btnMinimaze->Size = System::Drawing::Size(30, 30);
			this->btnMinimaze->TabIndex = 5;
			this->btnMinimaze->Text = L"●";
			this->btnMinimaze->UseVisualStyleBackColor = true;
			this->btnMinimaze->Click += gcnew System::EventHandler(this, &MyForm::btnMinimaze_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"NEON GLOW", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::Crimson;
			this->btnClose->Location = System::Drawing::Point(633, -2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"●";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnMaximize
			// 
			this->btnMaximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaximize->FlatAppearance->BorderSize = 0;
			this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximize->Font = (gcnew System::Drawing::Font(L"NEON GLOW", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaximize->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnMaximize->Location = System::Drawing::Point(603, -2);
			this->btnMaximize->Name = L"btnMaximize";
			this->btnMaximize->Size = System::Drawing::Size(30, 30);
			this->btnMaximize->TabIndex = 2;
			this->btnMaximize->Text = L"●";
			this->btnMaximize->UseVisualStyleBackColor = true;
			this->btnMaximize->Click += gcnew System::EventHandler(this, &MyForm::btnMaximize_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(286, 21);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(148, 38);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Wellcome";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelDesktopPanel
			// 
			this->panelDesktopPanel->Controls->Add(this->panelFaster);
			this->panelDesktopPanel->Controls->Add(this->pictureBoxWellcome);
			this->panelDesktopPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Location = System::Drawing::Point(219, 80);
			this->panelDesktopPanel->Name = L"panelDesktopPanel";
			this->panelDesktopPanel->Size = System::Drawing::Size(661, 360);
			this->panelDesktopPanel->TabIndex = 2;
			// 
			// panelFaster
			// 
			this->panelFaster->BackColor = System::Drawing::Color::SlateGray;
			this->panelFaster->Controls->Add(this->activePanelFast_1);
			this->panelFaster->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelFaster->Location = System::Drawing::Point(0, 0);
			this->panelFaster->Name = L"panelFaster";
			this->panelFaster->Size = System::Drawing::Size(661, 360);
			this->panelFaster->TabIndex = 1;
			this->panelFaster->Visible = false;
			// 
			// pictureBoxWellcome
			// 
			this->pictureBoxWellcome->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxWellcome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxWellcome.Image")));
			this->pictureBoxWellcome->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxWellcome.InitialImage")));
			this->pictureBoxWellcome->Location = System::Drawing::Point(0, 0);
			this->pictureBoxWellcome->Name = L"pictureBoxWellcome";
			this->pictureBoxWellcome->Size = System::Drawing::Size(661, 360);
			this->pictureBoxWellcome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxWellcome->TabIndex = 0;
			this->pictureBoxWellcome->TabStop = false;
			// 
			// activePanelFast_1
			// 
			this->activePanelFast_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->activePanelFast_1->BackColor = System::Drawing::Color::SlateGray;
			this->activePanelFast_1->Controls->Add(this->dateTimePicker1);
			this->activePanelFast_1->Location = System::Drawing::Point(0, 0);
			this->activePanelFast_1->Name = L"activePanelFast_1";
			this->activePanelFast_1->Size = System::Drawing::Size(661, 120);
			this->activePanelFast_1->TabIndex = 0;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(519, 98);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(142, 22);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(880, 440);
			this->Controls->Add(this->panelDesktopPanel);
			this->Controls->Add(this->panelTitleBar);
			this->Controls->Add(this->panelMenu);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panelTitleBar->ResumeLayout(false);
			this->panelTitleBar->PerformLayout();
			this->panelDesktopPanel->ResumeLayout(false);
			this->panelFaster->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWellcome))->EndInit();
			this->activePanelFast_1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::Application::Exit();
		}
		private: System::Void btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WindowState == System::Windows::Forms::FormWindowState::Normal) {
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			}
			else {
				this->WindowState = FormWindowState::Normal;
			}
		}
		private: System::Void btnMinimaze_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
		}
		private: System::Void panelTitleBar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		}

		private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
		private: System::Void MyForm_Home(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (!back) {
				backHome();
			}
			back = true;
			lblTitle->Text = "Wellcome";
		}
		private: System::Void btnFast_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Faster";
			panelFaster->Visible = true;
		}
		private: System::Void btnLastochka_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Lastochka";
		}
		private: System::Void btnBranded_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Branded";
		}
		private: System::Void btnOrdered_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Ordered";
		}
		private: System::Void btnIssued_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Issued";
		}
		private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Settings";
		}
		private: System::Void panelLogo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!back) { 
				backHome(); 
			}
			back = true;
			lblTitle->Text = "Wellcome";
		}
};
}

