#pragma once
#include "ThemeColor.h"
#include "Orderedclass.h"
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
	public:
		Button^ correntButton;
		//Random random;
		int tempIndex;
		int xmove = 0;
		int countOrdered = 0;
		int index = 0;
		bool back = false;
		int Y;
		cliext::vector<Panel^> pnlsOrdered;
	public: System::Windows::Forms::Panel^ panelCloseBar;
	public: System::Windows::Forms::PictureBox^ pictureBoxWellcome;
	public: System::Windows::Forms::Panel^ panelFaster;
	public: System::Windows::Forms::Panel^ activePanelFast_1;

	public: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	public: System::Windows::Forms::DateTimePicker^ dateTimePickerFast_1;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	public: System::Windows::Forms::Button^ FastButton_1_2;
	public: System::Windows::Forms::Button^ FastButton_1_1;
	public: System::Windows::Forms::GroupBox^ groupBoxFast_1_1;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_2;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_1;
	public: System::Windows::Forms::GroupBox^ groupBoxFast_1_2;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_4;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_3;
	public: System::Windows::Forms::GroupBox^ groupBoxFast_1_3;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_8;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_7;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_6;
	public: System::Windows::Forms::RadioButton^ radioButtonFast_1_5;
	public: System::Windows::Forms::GroupBox^ groupBoxFast_1_4;
	public: System::Windows::Forms::Label^ lblFastPrice_1;
	public: System::Windows::Forms::Label^ lblFastTrip_1;
	public: System::Windows::Forms::Label^ lblFastTime_1;
	public: System::Windows::Forms::Label^ lblFastCount_1;
	public: System::Windows::Forms::Panel^ activePanelFast_3;
	public: System::Windows::Forms::GroupBox^ groupBoxFast_3_4;
	public: System::Windows::Forms::Label^ lblFastCount_3;
	public: System::Windows::Forms::Label^ lblFastPrice_3;




	private: System::Windows::Forms::Label^ lblFastTrip_3;

	private: System::Windows::Forms::Label^ lblFastTime_3;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_3_3;
	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_8;


	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_7;

	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_6;

	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_5;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_3_2;
	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_4;


	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_3;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_3_1;
	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_2;


	private: System::Windows::Forms::RadioButton^ radioButtonFast_3_1;

	private: System::Windows::Forms::Button^ FastButton_3_2;


	private: System::Windows::Forms::Button^ FastButton_3_1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFast_3;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::Panel^ activePanelFast_2;
	private: System::Windows::Forms::GroupBox^ groupBoxFast_2_4;
private: System::Windows::Forms::Label^ lblFastCount_2;
private: System::Windows::Forms::Label^ lblFastPrice_2;





private: System::Windows::Forms::Label^ lblFastTrip_2;


private: System::Windows::Forms::Label^ lblFastTime_2;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_2_3;
private: System::Windows::Forms::RadioButton^ radioButtonFast_2_8;


private: System::Windows::Forms::RadioButton^ radioButtonFast_2_7;



private: System::Windows::Forms::RadioButton^ radioButtonFast_2_6;



private: System::Windows::Forms::RadioButton^ radioButtonFast_2_5;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_2_2;
private: System::Windows::Forms::RadioButton^ radioButtonFast_2_4;


private: System::Windows::Forms::RadioButton^ radioButtonFast_2_3;

	private: System::Windows::Forms::GroupBox^ groupBoxFast_2_1;
private: System::Windows::Forms::RadioButton^ radioButtonFast_2_2;


private: System::Windows::Forms::RadioButton^ radioButtonFast_2_1;

private: System::Windows::Forms::Button^ FastButton_2_2;

private: System::Windows::Forms::Button^ FastButton_2_1;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerFast_2;


	public: System::Windows::Forms::DateTimePicker^ dateTimePicker8;
public: System::Windows::Forms::Panel^ panelOrdered;

public:

public:
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
			//dateTimePicker3->Value;
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
			panelOrdered->Visible = false;
			panelOrdered->AutoScroll = false;
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
	public:
		void newOrdered(System::Object^ sender, System::EventArgs^ e, 
			RadioButton^ radioBTN1, RadioButton^ radioBTN2,
			RadioButton^ radioBTN3, RadioButton^ radioBTN4,
			RadioButton^ radioBTN5, RadioButton^ radioBTN6,
			RadioButton^ radioBTN7, RadioButton^ radioBTN8,
			GroupBox^ _panelGB1, GroupBox^ _panelGB2,
			GroupBox^ _panelGB3, GroupBox^ _panelGB4,
			Label^ info1, Label^ info2, Label^ info3, Label^ info4,
			Button^ btn1, Button^ btn2, DateTimePicker^ dtp, int countOrdered) {

			Label^ checkedButton1 = gcnew Label();
			if (radioBTN1->Checked == true) {
				checkedButton1->Text = radioBTN1->Text;
			}
			else if (radioBTN2->Checked == true) {
				checkedButton1->Text = radioBTN2->Text;
			}

			Label^ checkedButton2 = gcnew Label();
			if (radioBTN3->Checked == true) {
				checkedButton2->Text = radioBTN3->Text;
			}
			else if (radioBTN4->Checked == true) {
				checkedButton2->Text = radioBTN4->Text;
			}

			Label^ checkedButton3 = gcnew Label();
			if (radioBTN5->Checked == true) {
				checkedButton3->Text = radioBTN5->Text;
			}
			else if (radioBTN6->Checked == true) {
				checkedButton3->Text = radioBTN6->Text;
			}
			else if (radioBTN7->Checked == true) {
				checkedButton3->Text = radioBTN7->Text;
			}
			else if (radioBTN8->Checked == true) {
				checkedButton3->Text = radioBTN8->Text;
			}
			Panel^ panel = gcnew Panel();
			Y = panelDesktopPanel->System::Windows::Forms::Panel::Control::Width;
			panel = CreateMyOrderedPanel(panelOrdered, 15, 10 + 120 * countOrdered, Y - 32, 100, _panelGB1, checkedButton1, //631
				_panelGB2, checkedButton2, _panelGB3, checkedButton3, _panelGB4,
				info1, info2, info3, info4, btn2, btn1, dtp, index, pnlsOrdered);//, ClickDelButton);
			//pnlsOrdered.push_back(panel);
			//panel->AddEVH();
		}
		
		/*System::Void ClickDelButton(System::Object^ sender, System::EventArgs^ e) {
			pnlsOrdered[0]->Del(panelOrdered);
			pnlsOrdered.erase(pnlsOrdered.begin());
		}*/
		
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnMinimaze = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->panelDesktopPanel = (gcnew System::Windows::Forms::Panel());
			this->panelFaster = (gcnew System::Windows::Forms::Panel());
			this->activePanelFast_3 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxFast_3_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblFastCount_3 = (gcnew System::Windows::Forms::Label());
			this->lblFastPrice_3 = (gcnew System::Windows::Forms::Label());
			this->lblFastTrip_3 = (gcnew System::Windows::Forms::Label());
			this->lblFastTime_3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxFast_3_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_3_8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_3_7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_3_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_3_5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_3_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_3_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_3_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_3_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_3_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_3_1 = (gcnew System::Windows::Forms::RadioButton());
			this->FastButton_3_2 = (gcnew System::Windows::Forms::Button());
			this->FastButton_3_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerFast_3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->activePanelFast_2 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxFast_2_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblFastCount_2 = (gcnew System::Windows::Forms::Label());
			this->lblFastPrice_2 = (gcnew System::Windows::Forms::Label());
			this->lblFastTrip_2 = (gcnew System::Windows::Forms::Label());
			this->lblFastTime_2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxFast_2_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_2_8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_2_7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_2_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_2_5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_2_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_2_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_2_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_2_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_2_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_2_1 = (gcnew System::Windows::Forms::RadioButton());
			this->FastButton_2_2 = (gcnew System::Windows::Forms::Button());
			this->FastButton_2_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerFast_2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker8 = (gcnew System::Windows::Forms::DateTimePicker());
			this->activePanelFast_1 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxFast_1_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblFastCount_1 = (gcnew System::Windows::Forms::Label());
			this->lblFastPrice_1 = (gcnew System::Windows::Forms::Label());
			this->lblFastTrip_1 = (gcnew System::Windows::Forms::Label());
			this->lblFastTime_1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxFast_1_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_1_8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_1_7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_1_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_1_5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_1_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_1_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_1_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxFast_1_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonFast_1_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFast_1_1 = (gcnew System::Windows::Forms::RadioButton());
			this->FastButton_1_2 = (gcnew System::Windows::Forms::Button());
			this->FastButton_1_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerFast_1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBoxWellcome = (gcnew System::Windows::Forms::PictureBox());
			this->panelOrdered = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelDesktopPanel->SuspendLayout();
			this->panelFaster->SuspendLayout();
			this->activePanelFast_3->SuspendLayout();
			this->groupBoxFast_3_4->SuspendLayout();
			this->groupBoxFast_3_3->SuspendLayout();
			this->groupBoxFast_3_2->SuspendLayout();
			this->groupBoxFast_3_1->SuspendLayout();
			this->activePanelFast_2->SuspendLayout();
			this->groupBoxFast_2_4->SuspendLayout();
			this->groupBoxFast_2_3->SuspendLayout();
			this->groupBoxFast_2_2->SuspendLayout();
			this->groupBoxFast_2_1->SuspendLayout();
			this->activePanelFast_1->SuspendLayout();
			this->groupBoxFast_1_4->SuspendLayout();
			this->groupBoxFast_1_3->SuspendLayout();
			this->groupBoxFast_1_2->SuspendLayout();
			this->groupBoxFast_1_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWellcome))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(163, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gorky Railway";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panelTitleBar->Controls->Add(this->panel1);
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
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Location = System::Drawing::Point(0, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(661, 120);
			this->panel1->TabIndex = 1;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker2->TabIndex = 0;
			// 
			// btnMinimaze
			// 
			this->btnMinimaze->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimaze->FlatAppearance->BorderSize = 0;
			this->btnMinimaze->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimaze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->btnMaximize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->lblTitle->Size = System::Drawing::Size(116, 30);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Wellcome";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelDesktopPanel
			// 
			this->panelDesktopPanel->Controls->Add(this->panelFaster);
			this->panelDesktopPanel->Controls->Add(this->pictureBoxWellcome);
			this->panelDesktopPanel->Controls->Add(this->panelOrdered);
			this->panelDesktopPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Location = System::Drawing::Point(219, 80);
			this->panelDesktopPanel->Name = L"panelDesktopPanel";
			this->panelDesktopPanel->Size = System::Drawing::Size(661, 360);
			this->panelDesktopPanel->TabIndex = 2;
			// 
			// panelFaster
			// 
			this->panelFaster->AutoScroll = true;
			this->panelFaster->BackColor = System::Drawing::Color::LightBlue;
			this->panelFaster->Controls->Add(this->activePanelFast_3);
			this->panelFaster->Controls->Add(this->activePanelFast_2);
			this->panelFaster->Controls->Add(this->activePanelFast_1);
			this->panelFaster->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelFaster->Location = System::Drawing::Point(0, 0);
			this->panelFaster->Name = L"panelFaster";
			this->panelFaster->Size = System::Drawing::Size(661, 360);
			this->panelFaster->TabIndex = 1;
			this->panelFaster->Visible = false;
			// 
			// activePanelFast_3
			// 
			this->activePanelFast_3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->activePanelFast_3->BackColor = System::Drawing::Color::Azure;
			this->activePanelFast_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->activePanelFast_3->Controls->Add(this->groupBoxFast_3_4);
			this->activePanelFast_3->Controls->Add(this->groupBoxFast_3_3);
			this->activePanelFast_3->Controls->Add(this->groupBoxFast_3_2);
			this->activePanelFast_3->Controls->Add(this->groupBoxFast_3_1);
			this->activePanelFast_3->Controls->Add(this->FastButton_3_2);
			this->activePanelFast_3->Controls->Add(this->FastButton_3_1);
			this->activePanelFast_3->Controls->Add(this->dateTimePickerFast_3);
			this->activePanelFast_3->Controls->Add(this->dateTimePicker5);
			this->activePanelFast_3->Location = System::Drawing::Point(15, 250);
			this->activePanelFast_3->Name = L"activePanelFast_3";
			this->activePanelFast_3->Size = System::Drawing::Size(631, 100);
			this->activePanelFast_3->TabIndex = 12;
			// 
			// groupBoxFast_3_4
			// 
			this->groupBoxFast_3_4->Controls->Add(this->lblFastCount_3);
			this->groupBoxFast_3_4->Controls->Add(this->lblFastPrice_3);
			this->groupBoxFast_3_4->Controls->Add(this->lblFastTrip_3);
			this->groupBoxFast_3_4->Controls->Add(this->lblFastTime_3);
			this->groupBoxFast_3_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxFast_3_4->Name = L"groupBoxFast_3_4";
			this->groupBoxFast_3_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxFast_3_4->TabIndex = 10;
			this->groupBoxFast_3_4->TabStop = false;
			this->groupBoxFast_3_4->Text = L"Информация:";
			// 
			// lblFastCount_3
			// 
			this->lblFastCount_3->AutoSize = true;
			this->lblFastCount_3->Location = System::Drawing::Point(7, 39);
			this->lblFastCount_3->Name = L"lblFastCount_3";
			this->lblFastCount_3->Size = System::Drawing::Size(51, 13);
			this->lblFastCount_3->TabIndex = 3;
			this->lblFastCount_3->Text = L"Мест: 12";
			// 
			// lblFastPrice_3
			// 
			this->lblFastPrice_3->AutoSize = true;
			this->lblFastPrice_3->Location = System::Drawing::Point(7, 74);
			this->lblFastPrice_3->Name = L"lblFastPrice_3";
			this->lblFastPrice_3->Size = System::Drawing::Size(68, 13);
			this->lblFastPrice_3->TabIndex = 2;
			this->lblFastPrice_3->Text = L"Стоимость: ";
			// 
			// lblFastTrip_3
			// 
			this->lblFastTrip_3->AutoSize = true;
			this->lblFastTrip_3->Location = System::Drawing::Point(7, 57);
			this->lblFastTrip_3->Name = L"lblFastTrip_3";
			this->lblFastTrip_3->Size = System::Drawing::Size(101, 13);
			this->lblFastTrip_3->TabIndex = 1;
			this->lblFastTrip_3->Text = L"Путь: НН - Москва";
			// 
			// lblFastTime_3
			// 
			this->lblFastTime_3->AutoSize = true;
			this->lblFastTime_3->Location = System::Drawing::Point(7, 21);
			this->lblFastTime_3->Name = L"lblFastTime_3";
			this->lblFastTime_3->Size = System::Drawing::Size(109, 13);
			this->lblFastTime_3->TabIndex = 0;
			this->lblFastTime_3->Text = L"Время: 14:10 - 18:20";
			// 
			// groupBoxFast_3_3
			// 
			this->groupBoxFast_3_3->Controls->Add(this->radioButtonFast_3_8);
			this->groupBoxFast_3_3->Controls->Add(this->radioButtonFast_3_7);
			this->groupBoxFast_3_3->Controls->Add(this->radioButtonFast_3_6);
			this->groupBoxFast_3_3->Controls->Add(this->radioButtonFast_3_5);
			this->groupBoxFast_3_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxFast_3_3->Name = L"groupBoxFast_3_3";
			this->groupBoxFast_3_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxFast_3_3->TabIndex = 9;
			this->groupBoxFast_3_3->TabStop = false;
			this->groupBoxFast_3_3->Text = L"Кол-во человек:";
			// 
			// radioButtonFast_3_8
			// 
			this->radioButtonFast_3_8->AutoSize = true;
			this->radioButtonFast_3_8->Location = System::Drawing::Point(8, 72);
			this->radioButtonFast_3_8->Name = L"radioButtonFast_3_8";
			this->radioButtonFast_3_8->Size = System::Drawing::Size(64, 17);
			this->radioButtonFast_3_8->TabIndex = 9;
			this->radioButtonFast_3_8->TabStop = true;
			this->radioButtonFast_3_8->Text = L"Четыре";
			this->radioButtonFast_3_8->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_3_7
			// 
			this->radioButtonFast_3_7->AutoSize = true;
			this->radioButtonFast_3_7->Location = System::Drawing::Point(8, 54);
			this->radioButtonFast_3_7->Name = L"radioButtonFast_3_7";
			this->radioButtonFast_3_7->Size = System::Drawing::Size(44, 17);
			this->radioButtonFast_3_7->TabIndex = 8;
			this->radioButtonFast_3_7->TabStop = true;
			this->radioButtonFast_3_7->Text = L"Три";
			this->radioButtonFast_3_7->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_3_6
			// 
			this->radioButtonFast_3_6->AutoSize = true;
			this->radioButtonFast_3_6->Location = System::Drawing::Point(8, 36);
			this->radioButtonFast_3_6->Name = L"radioButtonFast_3_6";
			this->radioButtonFast_3_6->Size = System::Drawing::Size(46, 17);
			this->radioButtonFast_3_6->TabIndex = 7;
			this->radioButtonFast_3_6->TabStop = true;
			this->radioButtonFast_3_6->Text = L"Два";
			this->radioButtonFast_3_6->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_3_5
			// 
			this->radioButtonFast_3_5->AutoSize = true;
			this->radioButtonFast_3_5->Checked = true;
			this->radioButtonFast_3_5->Location = System::Drawing::Point(8, 18);
			this->radioButtonFast_3_5->Name = L"radioButtonFast_3_5";
			this->radioButtonFast_3_5->Size = System::Drawing::Size(51, 17);
			this->radioButtonFast_3_5->TabIndex = 5;
			this->radioButtonFast_3_5->TabStop = true;
			this->radioButtonFast_3_5->Text = L"Один";
			this->radioButtonFast_3_5->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_3_2
			// 
			this->groupBoxFast_3_2->Controls->Add(this->radioButtonFast_3_4);
			this->groupBoxFast_3_2->Controls->Add(this->radioButtonFast_3_3);
			this->groupBoxFast_3_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxFast_3_2->Name = L"groupBoxFast_3_2";
			this->groupBoxFast_3_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_3_2->TabIndex = 8;
			this->groupBoxFast_3_2->TabStop = false;
			this->groupBoxFast_3_2->Text = L"Тип места:";
			// 
			// radioButtonFast_3_4
			// 
			this->radioButtonFast_3_4->AutoSize = true;
			this->radioButtonFast_3_4->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_3_4->Name = L"radioButtonFast_3_4";
			this->radioButtonFast_3_4->Size = System::Drawing::Size(67, 17);
			this->radioButtonFast_3_4->TabIndex = 7;
			this->radioButtonFast_3_4->TabStop = true;
			this->radioButtonFast_3_4->Text = L"Верхнее";
			this->radioButtonFast_3_4->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_3_3
			// 
			this->radioButtonFast_3_3->AutoSize = true;
			this->radioButtonFast_3_3->Checked = true;
			this->radioButtonFast_3_3->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_3_3->Name = L"radioButtonFast_3_3";
			this->radioButtonFast_3_3->Size = System::Drawing::Size(65, 17);
			this->radioButtonFast_3_3->TabIndex = 5;
			this->radioButtonFast_3_3->TabStop = true;
			this->radioButtonFast_3_3->Text = L"Нижнее";
			this->radioButtonFast_3_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_3_1
			// 
			this->groupBoxFast_3_1->Controls->Add(this->radioButtonFast_3_2);
			this->groupBoxFast_3_1->Controls->Add(this->radioButtonFast_3_1);
			this->groupBoxFast_3_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxFast_3_1->Name = L"groupBoxFast_3_1";
			this->groupBoxFast_3_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_3_1->TabIndex = 7;
			this->groupBoxFast_3_1->TabStop = false;
			this->groupBoxFast_3_1->Text = L"Тип вагона:";
			// 
			// radioButtonFast_3_2
			// 
			this->radioButtonFast_3_2->AutoSize = true;
			this->radioButtonFast_3_2->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_3_2->Name = L"radioButtonFast_3_2";
			this->radioButtonFast_3_2->Size = System::Drawing::Size(74, 17);
			this->radioButtonFast_3_2->TabIndex = 7;
			this->radioButtonFast_3_2->TabStop = true;
			this->radioButtonFast_3_2->Text = L"Плацкарт";
			this->radioButtonFast_3_2->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_3_1
			// 
			this->radioButtonFast_3_1->AutoSize = true;
			this->radioButtonFast_3_1->Checked = true;
			this->radioButtonFast_3_1->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_3_1->Name = L"radioButtonFast_3_1";
			this->radioButtonFast_3_1->Size = System::Drawing::Size(49, 17);
			this->radioButtonFast_3_1->TabIndex = 5;
			this->radioButtonFast_3_1->TabStop = true;
			this->radioButtonFast_3_1->Text = L"Купе";
			this->radioButtonFast_3_1->UseVisualStyleBackColor = true;
			// 
			// FastButton_3_2
			// 
			this->FastButton_3_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_3_2->BackColor = System::Drawing::Color::Gold;
			this->FastButton_3_2->FlatAppearance->BorderSize = 0;
			this->FastButton_3_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_3_2->Location = System::Drawing::Point(523, 0);
			this->FastButton_3_2->Name = L"FastButton_3_2";
			this->FastButton_3_2->Size = System::Drawing::Size(106, 41);
			this->FastButton_3_2->TabIndex = 3;
			this->FastButton_3_2->Text = L"Заказать";
			this->FastButton_3_2->UseVisualStyleBackColor = false;
			// 
			// FastButton_3_1
			// 
			this->FastButton_3_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_3_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->FastButton_3_1->FlatAppearance->BorderSize = 0;
			this->FastButton_3_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_3_1->Location = System::Drawing::Point(524, 41);
			this->FastButton_3_1->Name = L"FastButton_3_1";
			this->FastButton_3_1->Size = System::Drawing::Size(105, 40);
			this->FastButton_3_1->TabIndex = 2;
			this->FastButton_3_1->Text = L"Купить";
			this->FastButton_3_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerFast_3
			// 
			this->dateTimePickerFast_3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerFast_3->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerFast_3->Location = System::Drawing::Point(524, 80);
			this->dateTimePickerFast_3->Name = L"dateTimePickerFast_3";
			this->dateTimePickerFast_3->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerFast_3->TabIndex = 1;
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker5->TabIndex = 0;
			// 
			// activePanelFast_2
			// 
			this->activePanelFast_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->activePanelFast_2->BackColor = System::Drawing::Color::Azure;
			this->activePanelFast_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->activePanelFast_2->Controls->Add(this->groupBoxFast_2_4);
			this->activePanelFast_2->Controls->Add(this->groupBoxFast_2_3);
			this->activePanelFast_2->Controls->Add(this->groupBoxFast_2_2);
			this->activePanelFast_2->Controls->Add(this->groupBoxFast_2_1);
			this->activePanelFast_2->Controls->Add(this->FastButton_2_2);
			this->activePanelFast_2->Controls->Add(this->FastButton_2_1);
			this->activePanelFast_2->Controls->Add(this->dateTimePickerFast_2);
			this->activePanelFast_2->Controls->Add(this->dateTimePicker8);
			this->activePanelFast_2->Location = System::Drawing::Point(15, 130);
			this->activePanelFast_2->Name = L"activePanelFast_2";
			this->activePanelFast_2->Size = System::Drawing::Size(631, 100);
			this->activePanelFast_2->TabIndex = 11;
			// 
			// groupBoxFast_2_4
			// 
			this->groupBoxFast_2_4->Controls->Add(this->lblFastCount_2);
			this->groupBoxFast_2_4->Controls->Add(this->lblFastPrice_2);
			this->groupBoxFast_2_4->Controls->Add(this->lblFastTrip_2);
			this->groupBoxFast_2_4->Controls->Add(this->lblFastTime_2);
			this->groupBoxFast_2_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxFast_2_4->Name = L"groupBoxFast_2_4";
			this->groupBoxFast_2_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxFast_2_4->TabIndex = 10;
			this->groupBoxFast_2_4->TabStop = false;
			this->groupBoxFast_2_4->Text = L"Информация:";
			// 
			// lblFastCount_2
			// 
			this->lblFastCount_2->AutoSize = true;
			this->lblFastCount_2->Location = System::Drawing::Point(7, 39);
			this->lblFastCount_2->Name = L"lblFastCount_2";
			this->lblFastCount_2->Size = System::Drawing::Size(51, 13);
			this->lblFastCount_2->TabIndex = 3;
			this->lblFastCount_2->Text = L"Мест: 22";
			// 
			// lblFastPrice_2
			// 
			this->lblFastPrice_2->AutoSize = true;
			this->lblFastPrice_2->Location = System::Drawing::Point(7, 74);
			this->lblFastPrice_2->Name = L"lblFastPrice_2";
			this->lblFastPrice_2->Size = System::Drawing::Size(68, 13);
			this->lblFastPrice_2->TabIndex = 2;
			this->lblFastPrice_2->Text = L"Стоимость: ";
			// 
			// lblFastTrip_2
			// 
			this->lblFastTrip_2->AutoSize = true;
			this->lblFastTrip_2->Location = System::Drawing::Point(7, 57);
			this->lblFastTrip_2->Name = L"lblFastTrip_2";
			this->lblFastTrip_2->Size = System::Drawing::Size(101, 13);
			this->lblFastTrip_2->TabIndex = 1;
			this->lblFastTrip_2->Text = L"Путь: НН - Москва";
			// 
			// lblFastTime_2
			// 
			this->lblFastTime_2->AutoSize = true;
			this->lblFastTime_2->Location = System::Drawing::Point(7, 21);
			this->lblFastTime_2->Name = L"lblFastTime_2";
			this->lblFastTime_2->Size = System::Drawing::Size(109, 13);
			this->lblFastTime_2->TabIndex = 0;
			this->lblFastTime_2->Text = L"Время: 10:45 - 14:00";
			// 
			// groupBoxFast_2_3
			// 
			this->groupBoxFast_2_3->Controls->Add(this->radioButtonFast_2_8);
			this->groupBoxFast_2_3->Controls->Add(this->radioButtonFast_2_7);
			this->groupBoxFast_2_3->Controls->Add(this->radioButtonFast_2_6);
			this->groupBoxFast_2_3->Controls->Add(this->radioButtonFast_2_5);
			this->groupBoxFast_2_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxFast_2_3->Name = L"groupBoxFast_2_3";
			this->groupBoxFast_2_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxFast_2_3->TabIndex = 9;
			this->groupBoxFast_2_3->TabStop = false;
			this->groupBoxFast_2_3->Text = L"Кол-во человек:";
			// 
			// radioButtonFast_2_8
			// 
			this->radioButtonFast_2_8->AutoSize = true;
			this->radioButtonFast_2_8->Location = System::Drawing::Point(8, 72);
			this->radioButtonFast_2_8->Name = L"radioButtonFast_2_8";
			this->radioButtonFast_2_8->Size = System::Drawing::Size(64, 17);
			this->radioButtonFast_2_8->TabIndex = 9;
			this->radioButtonFast_2_8->TabStop = true;
			this->radioButtonFast_2_8->Text = L"Четыре";
			this->radioButtonFast_2_8->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_2_7
			// 
			this->radioButtonFast_2_7->AutoSize = true;
			this->radioButtonFast_2_7->Location = System::Drawing::Point(8, 54);
			this->radioButtonFast_2_7->Name = L"radioButtonFast_2_7";
			this->radioButtonFast_2_7->Size = System::Drawing::Size(44, 17);
			this->radioButtonFast_2_7->TabIndex = 8;
			this->radioButtonFast_2_7->TabStop = true;
			this->radioButtonFast_2_7->Text = L"Три";
			this->radioButtonFast_2_7->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_2_6
			// 
			this->radioButtonFast_2_6->AutoSize = true;
			this->radioButtonFast_2_6->Location = System::Drawing::Point(8, 36);
			this->radioButtonFast_2_6->Name = L"radioButtonFast_2_6";
			this->radioButtonFast_2_6->Size = System::Drawing::Size(46, 17);
			this->radioButtonFast_2_6->TabIndex = 7;
			this->radioButtonFast_2_6->TabStop = true;
			this->radioButtonFast_2_6->Text = L"Два";
			this->radioButtonFast_2_6->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_2_5
			// 
			this->radioButtonFast_2_5->AutoSize = true;
			this->radioButtonFast_2_5->Checked = true;
			this->radioButtonFast_2_5->Location = System::Drawing::Point(8, 18);
			this->radioButtonFast_2_5->Name = L"radioButtonFast_2_5";
			this->radioButtonFast_2_5->Size = System::Drawing::Size(51, 17);
			this->radioButtonFast_2_5->TabIndex = 5;
			this->radioButtonFast_2_5->TabStop = true;
			this->radioButtonFast_2_5->Text = L"Один";
			this->radioButtonFast_2_5->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_2_2
			// 
			this->groupBoxFast_2_2->Controls->Add(this->radioButtonFast_2_4);
			this->groupBoxFast_2_2->Controls->Add(this->radioButtonFast_2_3);
			this->groupBoxFast_2_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxFast_2_2->Name = L"groupBoxFast_2_2";
			this->groupBoxFast_2_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_2_2->TabIndex = 8;
			this->groupBoxFast_2_2->TabStop = false;
			this->groupBoxFast_2_2->Text = L"Тип места:";
			// 
			// radioButtonFast_2_4
			// 
			this->radioButtonFast_2_4->AutoSize = true;
			this->radioButtonFast_2_4->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_2_4->Name = L"radioButtonFast_2_4";
			this->radioButtonFast_2_4->Size = System::Drawing::Size(67, 17);
			this->radioButtonFast_2_4->TabIndex = 7;
			this->radioButtonFast_2_4->TabStop = true;
			this->radioButtonFast_2_4->Text = L"Верхнее";
			this->radioButtonFast_2_4->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_2_3
			// 
			this->radioButtonFast_2_3->AutoSize = true;
			this->radioButtonFast_2_3->Checked = true;
			this->radioButtonFast_2_3->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_2_3->Name = L"radioButtonFast_2_3";
			this->radioButtonFast_2_3->Size = System::Drawing::Size(65, 17);
			this->radioButtonFast_2_3->TabIndex = 5;
			this->radioButtonFast_2_3->TabStop = true;
			this->radioButtonFast_2_3->Text = L"Нижнее";
			this->radioButtonFast_2_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_2_1
			// 
			this->groupBoxFast_2_1->Controls->Add(this->radioButtonFast_2_2);
			this->groupBoxFast_2_1->Controls->Add(this->radioButtonFast_2_1);
			this->groupBoxFast_2_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxFast_2_1->Name = L"groupBoxFast_2_1";
			this->groupBoxFast_2_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_2_1->TabIndex = 7;
			this->groupBoxFast_2_1->TabStop = false;
			this->groupBoxFast_2_1->Text = L"Тип вагона:";
			// 
			// radioButtonFast_2_2
			// 
			this->radioButtonFast_2_2->AutoSize = true;
			this->radioButtonFast_2_2->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_2_2->Name = L"radioButtonFast_2_2";
			this->radioButtonFast_2_2->Size = System::Drawing::Size(74, 17);
			this->radioButtonFast_2_2->TabIndex = 7;
			this->radioButtonFast_2_2->TabStop = true;
			this->radioButtonFast_2_2->Text = L"Плацкарт";
			this->radioButtonFast_2_2->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_2_1
			// 
			this->radioButtonFast_2_1->AutoSize = true;
			this->radioButtonFast_2_1->Checked = true;
			this->radioButtonFast_2_1->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_2_1->Name = L"radioButtonFast_2_1";
			this->radioButtonFast_2_1->Size = System::Drawing::Size(49, 17);
			this->radioButtonFast_2_1->TabIndex = 5;
			this->radioButtonFast_2_1->TabStop = true;
			this->radioButtonFast_2_1->Text = L"Купе";
			this->radioButtonFast_2_1->UseVisualStyleBackColor = true;
			// 
			// FastButton_2_2
			// 
			this->FastButton_2_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_2_2->BackColor = System::Drawing::Color::Gold;
			this->FastButton_2_2->FlatAppearance->BorderSize = 0;
			this->FastButton_2_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_2_2->Location = System::Drawing::Point(524, 0);
			this->FastButton_2_2->Name = L"FastButton_2_2";
			this->FastButton_2_2->Size = System::Drawing::Size(105, 41);
			this->FastButton_2_2->TabIndex = 3;
			this->FastButton_2_2->Text = L"Заказать";
			this->FastButton_2_2->UseVisualStyleBackColor = false;
			// 
			// FastButton_2_1
			// 
			this->FastButton_2_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_2_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->FastButton_2_1->FlatAppearance->BorderSize = 0;
			this->FastButton_2_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_2_1->Location = System::Drawing::Point(524, 41);
			this->FastButton_2_1->Name = L"FastButton_2_1";
			this->FastButton_2_1->Size = System::Drawing::Size(105, 40);
			this->FastButton_2_1->TabIndex = 2;
			this->FastButton_2_1->Text = L"Купить";
			this->FastButton_2_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerFast_2
			// 
			this->dateTimePickerFast_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerFast_2->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerFast_2->Location = System::Drawing::Point(524, 81);
			this->dateTimePickerFast_2->Name = L"dateTimePickerFast_2";
			this->dateTimePickerFast_2->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerFast_2->TabIndex = 1;
			// 
			// dateTimePicker8
			// 
			this->dateTimePicker8->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker8->Name = L"dateTimePicker8";
			this->dateTimePicker8->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker8->TabIndex = 0;
			// 
			// activePanelFast_1
			// 
			this->activePanelFast_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->activePanelFast_1->BackColor = System::Drawing::Color::Azure;
			this->activePanelFast_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->activePanelFast_1->Controls->Add(this->groupBoxFast_1_4);
			this->activePanelFast_1->Controls->Add(this->groupBoxFast_1_3);
			this->activePanelFast_1->Controls->Add(this->groupBoxFast_1_2);
			this->activePanelFast_1->Controls->Add(this->groupBoxFast_1_1);
			this->activePanelFast_1->Controls->Add(this->FastButton_1_2);
			this->activePanelFast_1->Controls->Add(this->FastButton_1_1);
			this->activePanelFast_1->Controls->Add(this->dateTimePickerFast_1);
			this->activePanelFast_1->Controls->Add(this->dateTimePicker1);
			this->activePanelFast_1->Location = System::Drawing::Point(15, 10);
			this->activePanelFast_1->Name = L"activePanelFast_1";
			this->activePanelFast_1->Size = System::Drawing::Size(631, 100);
			this->activePanelFast_1->TabIndex = 0;
			// 
			// groupBoxFast_1_4
			// 
			this->groupBoxFast_1_4->Controls->Add(this->lblFastCount_1);
			this->groupBoxFast_1_4->Controls->Add(this->lblFastPrice_1);
			this->groupBoxFast_1_4->Controls->Add(this->lblFastTrip_1);
			this->groupBoxFast_1_4->Controls->Add(this->lblFastTime_1);
			this->groupBoxFast_1_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxFast_1_4->Name = L"groupBoxFast_1_4";
			this->groupBoxFast_1_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxFast_1_4->TabIndex = 10;
			this->groupBoxFast_1_4->TabStop = false;
			this->groupBoxFast_1_4->Text = L"Информация:";
			// 
			// lblFastCount_1
			// 
			this->lblFastCount_1->AutoSize = true;
			this->lblFastCount_1->Location = System::Drawing::Point(7, 39);
			this->lblFastCount_1->Name = L"lblFastCount_1";
			this->lblFastCount_1->Size = System::Drawing::Size(51, 13);
			this->lblFastCount_1->TabIndex = 3;
			this->lblFastCount_1->Text = L"Мест: 48";
			// 
			// lblFastPrice_1
			// 
			this->lblFastPrice_1->AutoSize = true;
			this->lblFastPrice_1->Location = System::Drawing::Point(7, 74);
			this->lblFastPrice_1->Name = L"lblFastPrice_1";
			this->lblFastPrice_1->Size = System::Drawing::Size(68, 13);
			this->lblFastPrice_1->TabIndex = 2;
			this->lblFastPrice_1->Text = L"Стоимость: ";
			// 
			// lblFastTrip_1
			// 
			this->lblFastTrip_1->AutoSize = true;
			this->lblFastTrip_1->Location = System::Drawing::Point(7, 57);
			this->lblFastTrip_1->Name = L"lblFastTrip_1";
			this->lblFastTrip_1->Size = System::Drawing::Size(101, 13);
			this->lblFastTrip_1->TabIndex = 1;
			this->lblFastTrip_1->Text = L"Путь: НН - Москва";
			// 
			// lblFastTime_1
			// 
			this->lblFastTime_1->AutoSize = true;
			this->lblFastTime_1->Location = System::Drawing::Point(7, 21);
			this->lblFastTime_1->Name = L"lblFastTime_1";
			this->lblFastTime_1->Size = System::Drawing::Size(97, 13);
			this->lblFastTime_1->TabIndex = 0;
			this->lblFastTime_1->Text = L"Время: 2:40 - 5:35";
			// 
			// groupBoxFast_1_3
			// 
			this->groupBoxFast_1_3->Controls->Add(this->radioButtonFast_1_8);
			this->groupBoxFast_1_3->Controls->Add(this->radioButtonFast_1_7);
			this->groupBoxFast_1_3->Controls->Add(this->radioButtonFast_1_6);
			this->groupBoxFast_1_3->Controls->Add(this->radioButtonFast_1_5);
			this->groupBoxFast_1_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxFast_1_3->Name = L"groupBoxFast_1_3";
			this->groupBoxFast_1_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxFast_1_3->TabIndex = 9;
			this->groupBoxFast_1_3->TabStop = false;
			this->groupBoxFast_1_3->Text = L"Кол-во человек:";
			// 
			// radioButtonFast_1_8
			// 
			this->radioButtonFast_1_8->AutoSize = true;
			this->radioButtonFast_1_8->Location = System::Drawing::Point(8, 72);
			this->radioButtonFast_1_8->Name = L"radioButtonFast_1_8";
			this->radioButtonFast_1_8->Size = System::Drawing::Size(64, 17);
			this->radioButtonFast_1_8->TabIndex = 9;
			this->radioButtonFast_1_8->TabStop = true;
			this->radioButtonFast_1_8->Text = L"Четыре";
			this->radioButtonFast_1_8->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_1_7
			// 
			this->radioButtonFast_1_7->AutoSize = true;
			this->radioButtonFast_1_7->Location = System::Drawing::Point(8, 54);
			this->radioButtonFast_1_7->Name = L"radioButtonFast_1_7";
			this->radioButtonFast_1_7->Size = System::Drawing::Size(44, 17);
			this->radioButtonFast_1_7->TabIndex = 8;
			this->radioButtonFast_1_7->TabStop = true;
			this->radioButtonFast_1_7->Text = L"Три";
			this->radioButtonFast_1_7->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_1_6
			// 
			this->radioButtonFast_1_6->AutoSize = true;
			this->radioButtonFast_1_6->Location = System::Drawing::Point(8, 36);
			this->radioButtonFast_1_6->Name = L"radioButtonFast_1_6";
			this->radioButtonFast_1_6->Size = System::Drawing::Size(46, 17);
			this->radioButtonFast_1_6->TabIndex = 7;
			this->radioButtonFast_1_6->TabStop = true;
			this->radioButtonFast_1_6->Text = L"Два";
			this->radioButtonFast_1_6->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_1_5
			// 
			this->radioButtonFast_1_5->AutoSize = true;
			this->radioButtonFast_1_5->Checked = true;
			this->radioButtonFast_1_5->Location = System::Drawing::Point(8, 18);
			this->radioButtonFast_1_5->Name = L"radioButtonFast_1_5";
			this->radioButtonFast_1_5->Size = System::Drawing::Size(51, 17);
			this->radioButtonFast_1_5->TabIndex = 5;
			this->radioButtonFast_1_5->TabStop = true;
			this->radioButtonFast_1_5->Text = L"Один";
			this->radioButtonFast_1_5->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_1_2
			// 
			this->groupBoxFast_1_2->Controls->Add(this->radioButtonFast_1_4);
			this->groupBoxFast_1_2->Controls->Add(this->radioButtonFast_1_3);
			this->groupBoxFast_1_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxFast_1_2->Name = L"groupBoxFast_1_2";
			this->groupBoxFast_1_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_1_2->TabIndex = 8;
			this->groupBoxFast_1_2->TabStop = false;
			this->groupBoxFast_1_2->Text = L"Тип места:";
			// 
			// radioButtonFast_1_4
			// 
			this->radioButtonFast_1_4->AutoSize = true;
			this->radioButtonFast_1_4->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_1_4->Name = L"radioButtonFast_1_4";
			this->radioButtonFast_1_4->Size = System::Drawing::Size(67, 17);
			this->radioButtonFast_1_4->TabIndex = 7;
			this->radioButtonFast_1_4->TabStop = true;
			this->radioButtonFast_1_4->Text = L"Верхнее";
			this->radioButtonFast_1_4->UseVisualStyleBackColor = true;
			// 
			// radioButtonFast_1_3
			// 
			this->radioButtonFast_1_3->AutoSize = true;
			this->radioButtonFast_1_3->Checked = true;
			this->radioButtonFast_1_3->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_1_3->Name = L"radioButtonFast_1_3";
			this->radioButtonFast_1_3->Size = System::Drawing::Size(65, 17);
			this->radioButtonFast_1_3->TabIndex = 5;
			this->radioButtonFast_1_3->TabStop = true;
			this->radioButtonFast_1_3->Text = L"Нижнее";
			this->radioButtonFast_1_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxFast_1_1
			// 
			this->groupBoxFast_1_1->Controls->Add(this->radioButtonFast_1_2);
			this->groupBoxFast_1_1->Controls->Add(this->radioButtonFast_1_1);
			this->groupBoxFast_1_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxFast_1_1->Name = L"groupBoxFast_1_1";
			this->groupBoxFast_1_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxFast_1_1->TabIndex = 7;
			this->groupBoxFast_1_1->TabStop = false;
			this->groupBoxFast_1_1->Text = L"Тип вагона:";
			// 
			// radioButtonFast_1_2
			// 
			this->radioButtonFast_1_2->AutoSize = true;
			this->radioButtonFast_1_2->Location = System::Drawing::Point(8, 63);
			this->radioButtonFast_1_2->Name = L"radioButtonFast_1_2";
			this->radioButtonFast_1_2->Size = System::Drawing::Size(74, 17);
			this->radioButtonFast_1_2->TabIndex = 7;
			this->radioButtonFast_1_2->TabStop = true;
			this->radioButtonFast_1_2->Text = L"Плацкарт";
			this->radioButtonFast_1_2->UseVisualStyleBackColor = true;
			this->radioButtonFast_1_2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButtonFast_1_1
			// 
			this->radioButtonFast_1_1->AutoSize = true;
			this->radioButtonFast_1_1->Checked = true;
			this->radioButtonFast_1_1->Location = System::Drawing::Point(8, 27);
			this->radioButtonFast_1_1->Name = L"radioButtonFast_1_1";
			this->radioButtonFast_1_1->Size = System::Drawing::Size(49, 17);
			this->radioButtonFast_1_1->TabIndex = 5;
			this->radioButtonFast_1_1->TabStop = true;
			this->radioButtonFast_1_1->Text = L"Купе";
			this->radioButtonFast_1_1->UseVisualStyleBackColor = true;
			// 
			// FastButton_1_2
			// 
			this->FastButton_1_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_1_2->BackColor = System::Drawing::Color::Gold;
			this->FastButton_1_2->FlatAppearance->BorderSize = 0;
			this->FastButton_1_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_1_2->Location = System::Drawing::Point(524, 0);
			this->FastButton_1_2->Name = L"FastButton_1_2";
			this->FastButton_1_2->Size = System::Drawing::Size(105, 41);
			this->FastButton_1_2->TabIndex = 3;
			this->FastButton_1_2->Text = L"Заказать";
			this->FastButton_1_2->UseVisualStyleBackColor = false;
			this->FastButton_1_2->Click += gcnew System::EventHandler(this, &MyForm::FastButton_1_2_Click);
			// 
			// FastButton_1_1
			// 
			this->FastButton_1_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FastButton_1_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->FastButton_1_1->FlatAppearance->BorderSize = 0;
			this->FastButton_1_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FastButton_1_1->Location = System::Drawing::Point(524, 41);
			this->FastButton_1_1->Name = L"FastButton_1_1";
			this->FastButton_1_1->Size = System::Drawing::Size(105, 40);
			this->FastButton_1_1->TabIndex = 2;
			this->FastButton_1_1->Text = L"Купить";
			this->FastButton_1_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerFast_1
			// 
			this->dateTimePickerFast_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerFast_1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerFast_1->Location = System::Drawing::Point(524, 81);
			this->dateTimePickerFast_1->Name = L"dateTimePickerFast_1";
			this->dateTimePickerFast_1->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerFast_1->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker1->TabIndex = 0;
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
			// panelOrdered
			// 
			this->panelOrdered->BackColor = System::Drawing::Color::LightBlue;
			this->panelOrdered->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelOrdered->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panelOrdered->Location = System::Drawing::Point(0, 0);
			this->panelOrdered->Name = L"panelOrdered";
			this->panelOrdered->Size = System::Drawing::Size(661, 360);
			this->panelOrdered->TabIndex = 2;
			this->panelOrdered->Visible = false;
			this->panelOrdered->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelOrdered_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
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
			this->panel1->ResumeLayout(false);
			this->panelDesktopPanel->ResumeLayout(false);
			this->panelFaster->ResumeLayout(false);
			this->activePanelFast_3->ResumeLayout(false);
			this->groupBoxFast_3_4->ResumeLayout(false);
			this->groupBoxFast_3_4->PerformLayout();
			this->groupBoxFast_3_3->ResumeLayout(false);
			this->groupBoxFast_3_3->PerformLayout();
			this->groupBoxFast_3_2->ResumeLayout(false);
			this->groupBoxFast_3_2->PerformLayout();
			this->groupBoxFast_3_1->ResumeLayout(false);
			this->groupBoxFast_3_1->PerformLayout();
			this->activePanelFast_2->ResumeLayout(false);
			this->groupBoxFast_2_4->ResumeLayout(false);
			this->groupBoxFast_2_4->PerformLayout();
			this->groupBoxFast_2_3->ResumeLayout(false);
			this->groupBoxFast_2_3->PerformLayout();
			this->groupBoxFast_2_2->ResumeLayout(false);
			this->groupBoxFast_2_2->PerformLayout();
			this->groupBoxFast_2_1->ResumeLayout(false);
			this->groupBoxFast_2_1->PerformLayout();
			this->activePanelFast_1->ResumeLayout(false);
			this->groupBoxFast_1_4->ResumeLayout(false);
			this->groupBoxFast_1_4->PerformLayout();
			this->groupBoxFast_1_3->ResumeLayout(false);
			this->groupBoxFast_1_3->PerformLayout();
			this->groupBoxFast_1_2->ResumeLayout(false);
			this->groupBoxFast_1_2->PerformLayout();
			this->groupBoxFast_1_1->ResumeLayout(false);
			this->groupBoxFast_1_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWellcome))->EndInit();
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
			panelOrdered->AutoScroll = true;
			panelOrdered->Visible = true;
		}
		private: System::Void btnIssued_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Issued";
		}
		private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(sender);
			lblTitle->Text = "Settings";
			//pnlsOrdered[0]->Del(panelOrdered);
			//pnlsOrdered.erase(pnlsOrdered.begin());
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
		private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void FastButton_1_2_Click(System::Object^ sender, System::EventArgs^ e) {
			newOrdered(sender, e, radioButtonFast_1_1, radioButtonFast_1_2, radioButtonFast_1_3, radioButtonFast_1_4,
				radioButtonFast_1_5, radioButtonFast_1_6, radioButtonFast_1_7, radioButtonFast_1_8,
				groupBoxFast_1_1, groupBoxFast_1_2, groupBoxFast_1_3, groupBoxFast_1_4, 
				lblFastTime_1, lblFastCount_1, lblFastTrip_1, lblFastPrice_1,
				FastButton_1_1, FastButton_1_2, dateTimePickerFast_1, countOrdered);
			countOrdered++;
			index++;


		}
		public: cliext::vector<Panel^> GetArray() {
			return pnlsOrdered;
		}
////#pragma warning(default:4716)
//		/*public: System::EventHandler^ ClickDelButton(System::Object^ sender, System::EventArgs^ e) {
//			pnlsOrdered[0]->Del(panelOrdered);
//			pnlsOrdered.erase(pnlsOrdered.begin());
//		}*/
		private: System::Void panelOrdered_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		public:
			   Panel^ CreateMyOrderedPanel(Panel^ pnl, int x, int y, int w, int h,
				   GroupBox^ wagonTypeGB, Label^ wagonTypeLBL, GroupBox^ seatTypeGB, Label^ seatTypeLBL,
				   GroupBox^ countPeopleGB, Label^ countPeopleLBL, GroupBox^ information, Label^ INFO_time,
				   Label^ INFO_countSeat, Label^ INFO_trip, Label^ INFO_price, Button^ btndelete,
				   Button^ btnbuy, DateTimePicker^ dtp, int index, cliext::vector<Panel^> %pnls) {//, EventHandler^ evh) {

				   // Panel create
				   Panel^ _panel = gcnew Panel();
				   _panel->Location = Point(x, y);
				   _panel->Size = System::Drawing::Size(w, h);
				   _panel->BackColor = Color::Azure;
				   _panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				   _panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
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
				   //delbtn->Click += evh;
				   delbtn->Name = "btndel" + index;
				   delbtn->Click += gcnew System::EventHandler(this, &MyForm::OnClick);
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

				   pnlsOrdered.push_back(_panel);

				   return _panel;
			   }
			   void OnClick(System::Object^ sender, System::EventArgs^ e);
			   
};
void MyForm::OnClick(System::Object^ sender, System::EventArgs^ e)
{
	bool test = false;
	int index = 0;
	Button^ newbtn;
	Panel^ newpnl = (Panel^)(newbtn = (Button^)sender)->Parent;
	//Panel^ newpnl = (Panel^)(newbtn->Parent);
	for (int j = 0; j < pnlsOrdered.size() && test != true; j++) { 
		if (newpnl == pnlsOrdered[j]) {
		//if (sender->ReferenceEquals(sender, pnlsOrdered[j]->GetChildAtPoint(Point(522, 0)))) {
			test = true; 
			index = j;
		} 
	}
	/*if (sender == pnlsOrdered[0]->GetChildAtPoint(Point(522, 0))) {
		test = true;
	};*/
	MessageBox::Show("Del");
	panelOrdered->Controls->Remove(pnlsOrdered[index]);
	pnlsOrdered.erase(pnlsOrdered.begin() + index);
	for (int i = index; i < pnlsOrdered.size(); i++) {
		pnlsOrdered[i]->Location = Point(pnlsOrdered[i]->Location.X, pnlsOrdered[i]->Location.Y - 120);
	}
	countOrdered--;
}
}
