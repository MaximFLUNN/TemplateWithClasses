#pragma once
#include <iostream>
#include <string>
#include <cliext/vector>
#include <vector>
namespace Task5Railwayv2 {
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
	public:
		Button^ correntButton;
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
public: System::Windows::Forms::Panel^ panelBranded;
public: System::Windows::Forms::Panel^ panel3;
public: System::Windows::Forms::GroupBox^ groupBox4;
public: System::Windows::Forms::RadioButton^ radioButton7;
public: System::Windows::Forms::RadioButton^ radioButton8;
public: System::Windows::Forms::RadioButton^ radioButton27;
public: System::Windows::Forms::GroupBox^ groupBox1;
public: System::Windows::Forms::Label^ label2;
public: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
public:
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
private: System::Windows::Forms::Panel^ panel4;
public: System::Windows::Forms::GroupBox^ groupBox8;
private:
public: System::Windows::Forms::RadioButton^ radioButton15;
public: System::Windows::Forms::RadioButton^ radioButton16;
public: System::Windows::Forms::RadioButton^ radioButton26;
private: System::Windows::Forms::GroupBox^ groupBox5;
public:
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::RadioButton^ radioButton11;
private: System::Windows::Forms::RadioButton^ radioButton12;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker6;
public: System::Windows::Forms::DateTimePicker^ dateTimePicker7;
private:
public: System::Windows::Forms::Panel^ panel5;
public: System::Windows::Forms::GroupBox^ groupBox9;
public: System::Windows::Forms::Label^ label10;
public: System::Windows::Forms::Label^ label11;
public: System::Windows::Forms::Label^ label12;
public: System::Windows::Forms::Label^ label13;
public: System::Windows::Forms::GroupBox^ groupBox10;
public: System::Windows::Forms::RadioButton^ radioButton17;
public: System::Windows::Forms::RadioButton^ radioButton18;
public: System::Windows::Forms::RadioButton^ radioButton19;
public: System::Windows::Forms::RadioButton^ radioButton20;
public: System::Windows::Forms::GroupBox^ groupBox11;
public: System::Windows::Forms::RadioButton^ radioButton21;
public: System::Windows::Forms::RadioButton^ radioButton22;
public: System::Windows::Forms::GroupBox^ groupBox12;
public: System::Windows::Forms::RadioButton^ radioButton25;
public: System::Windows::Forms::RadioButton^ radioButton23;
public: System::Windows::Forms::RadioButton^ radioButton24;
public: System::Windows::Forms::Button^ button5;
public: System::Windows::Forms::Button^ button6;
public: System::Windows::Forms::DateTimePicker^ dateTimePicker9;
public: System::Windows::Forms::DateTimePicker^ dateTimePicker10;
public: System::Windows::Forms::Panel^ panelLastochka;
public: System::Windows::Forms::Panel^ panel6;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka3_1;

public: System::Windows::Forms::RadioButton^ radioLastochka3_1;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka3_4;
public: System::Windows::Forms::Label^ lblLastochka3_2;
public: System::Windows::Forms::Label^ lblLastochka3_4;




private: System::Windows::Forms::Label^ lblLastochka3_3;
public:

private: System::Windows::Forms::Label^ lblLastochka3_1;
public:

private: System::Windows::Forms::GroupBox^ groupBoxLastochka3_3;

private: System::Windows::Forms::RadioButton^ radioLastochka3_6;

private: System::Windows::Forms::RadioButton^ radioLastochka3_5;

private: System::Windows::Forms::RadioButton^ radioLastochka3_4;

private: System::Windows::Forms::RadioButton^ radioLastochka3_3;
private: System::Windows::Forms::GroupBox^ groupBoxLastochka3_2;


private: System::Windows::Forms::RadioButton^ radioLastochka3_2;
private: System::Windows::Forms::Button^ LastochkaButton3_2;
private: System::Windows::Forms::Button^ LastochkaButton3_1;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerLastochka3;




private: System::Windows::Forms::DateTimePicker^ dateTimePicker12;
private: System::Windows::Forms::Panel^ panel7;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka2_1;
private:

public: System::Windows::Forms::RadioButton^ radioLastochka2_1;
private: System::Windows::Forms::GroupBox^ groupBoxLastochka2_4;
private: System::Windows::Forms::Label^ lblLastochka2_2;
private: System::Windows::Forms::Label^ lblLastochka2_4;
public:
private:


public:


private: System::Windows::Forms::Label^ lblLastochka2_3;

private: System::Windows::Forms::Label^ lblLastochka2_1;

private: System::Windows::Forms::GroupBox^ groupBoxLastochka2_3;

private: System::Windows::Forms::RadioButton^ radioLastochka2_6;

private: System::Windows::Forms::RadioButton^ radioLastochka2_5;

private: System::Windows::Forms::RadioButton^ radioLastochka2_4;

private: System::Windows::Forms::RadioButton^ radioLastochka2_3;
private: System::Windows::Forms::GroupBox^ groupBoxLastochka2_2;


private: System::Windows::Forms::RadioButton^ radioLastochka2_2;
private: System::Windows::Forms::Button^ LastochkaButton2_2;
private: System::Windows::Forms::Button^ LastochkaButton2_1;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerLastochka2;




public: System::Windows::Forms::DateTimePicker^ dateTimePicker14;
private:
public: System::Windows::Forms::Panel^ panel8;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka1_4;
public: System::Windows::Forms::Label^ lblLastochka1_2;
public: System::Windows::Forms::Label^ lblLastochka1_4;



public: System::Windows::Forms::Label^ lblLastochka1_3;

public: System::Windows::Forms::Label^ lblLastochka1_1;

public: System::Windows::Forms::GroupBox^ groupBoxLastochka1_3;

public: System::Windows::Forms::RadioButton^ radioLastochka1_6;

public: System::Windows::Forms::RadioButton^ radioLastochka1_5;

public: System::Windows::Forms::RadioButton^ radioLastochka1_4;

public: System::Windows::Forms::RadioButton^ radioLastochka1_3;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka1_2;


public: System::Windows::Forms::RadioButton^ radioLastochka1_2;
public: System::Windows::Forms::GroupBox^ groupBoxLastochka1_1;


public: System::Windows::Forms::RadioButton^ radioLastochka1_1;
public: System::Windows::Forms::Button^ LastochkaButton1_2;
public: System::Windows::Forms::Button^ LastochkaButton1_1;
public: System::Windows::Forms::DateTimePicker^ dateTimePickerLastochka1;





public: System::Windows::Forms::DateTimePicker^ dateTimePicker16;










public:















private:




public:
















private:
























	public:

	public:
		int ymove = 0;
	public:
		MyForm(void)
		{
			srand(time(NULL));
			InitializeComponent();
			this->Text = System::String::Empty;
			this->ControlBox = false;
			//
			//TODO: добавьте код конструктора
			//
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
			int index = rand() % colors.size();
			while (tempIndex == index) {
				index = rand() % colors.size();
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
						safe_cast<Button^>(btnSender)->Name == "btnSettings")
					{
						back = false;
						backHome();
						pictureBoxWellcome->Visible = false;
						Color color = SelectThemeColor();
						correntButton = safe_cast<Button^>(btnSender); 

						correntButton->ImageAlign = ContentAlignment::MiddleCenter;
						correntButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(204)));
						correntButton->BackColor = color;
						correntButton->ForeColor = Color::White;
						panelTitleBar->BackColor = color;
						panelLogo->BackColor = ChangeColorBrightness(color, -0.45);
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
			panelBranded->Visible = false;
			panelLastochka->Visible = false;
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
		System::ComponentModel::Container^ components;
	public:
		void newOrdered(Label^ radioBTN1, Label^ radioBTN2,
			Label^ radioBTN3,	GroupBox^ _panelGB1, GroupBox^ _panelGB2,
			GroupBox^ _panelGB3, GroupBox^ _panelGB4,
			Label^ info1, Label^ info2, Label^ info3, Label^ info4,
			Button^ btn1, Button^ btn2, DateTimePicker^ dtp, int type) {

			Panel^ panel = gcnew Panel();
			Y = panelDesktopPanel->System::Windows::Forms::Panel::Control::Width;
			panel = CreateMyOrderedPanel(panelOrdered, 15, 10 + 120 * countOrdered, Y - 32, 100, _panelGB1, radioBTN1,
				_panelGB2, radioBTN2, _panelGB3, radioBTN3, _panelGB4,
				info1, info2, info3, info4, btn2, btn1, dtp, index, type);
		}

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
			this->panelLastochka = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxLastochka3_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka3_1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka3_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblLastochka3_2 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka3_4 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka3_3 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka3_1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxLastochka3_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka3_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka3_5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka3_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka3_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka3_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka3_2 = (gcnew System::Windows::Forms::RadioButton());
			this->LastochkaButton3_2 = (gcnew System::Windows::Forms::Button());
			this->LastochkaButton3_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerLastochka3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker12 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxLastochka2_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka2_1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka2_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblLastochka2_2 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka2_4 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka2_3 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka2_1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxLastochka2_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka2_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka2_5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka2_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka2_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka2_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka2_2 = (gcnew System::Windows::Forms::RadioButton());
			this->LastochkaButton2_2 = (gcnew System::Windows::Forms::Button());
			this->LastochkaButton2_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerLastochka2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker14 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxLastochka1_4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblLastochka1_2 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka1_4 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka1_3 = (gcnew System::Windows::Forms::Label());
			this->lblLastochka1_1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxLastochka1_3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka1_6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka1_5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka1_4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioLastochka1_3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka1_2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka1_2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxLastochka1_1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioLastochka1_1 = (gcnew System::Windows::Forms::RadioButton());
			this->LastochkaButton1_2 = (gcnew System::Windows::Forms::Button());
			this->LastochkaButton1_1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerLastochka1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker16 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelBranded = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker7 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker9 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker10 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelOrdered = (gcnew System::Windows::Forms::Panel());
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
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelDesktopPanel->SuspendLayout();
			this->panelLastochka->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBoxLastochka3_1->SuspendLayout();
			this->groupBoxLastochka3_4->SuspendLayout();
			this->groupBoxLastochka3_3->SuspendLayout();
			this->groupBoxLastochka3_2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->groupBoxLastochka2_1->SuspendLayout();
			this->groupBoxLastochka2_4->SuspendLayout();
			this->groupBoxLastochka2_3->SuspendLayout();
			this->groupBoxLastochka2_2->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBoxLastochka1_4->SuspendLayout();
			this->groupBoxLastochka1_3->SuspendLayout();
			this->groupBoxLastochka1_2->SuspendLayout();
			this->groupBoxLastochka1_1->SuspendLayout();
			this->panelBranded->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
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
			this->panelDesktopPanel->Controls->Add(this->panelLastochka);
			this->panelDesktopPanel->Controls->Add(this->panelBranded);
			this->panelDesktopPanel->Controls->Add(this->panelOrdered);
			this->panelDesktopPanel->Controls->Add(this->panelFaster);
			this->panelDesktopPanel->Controls->Add(this->pictureBoxWellcome);
			this->panelDesktopPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Location = System::Drawing::Point(219, 80);
			this->panelDesktopPanel->Name = L"panelDesktopPanel";
			this->panelDesktopPanel->Size = System::Drawing::Size(661, 360);
			this->panelDesktopPanel->TabIndex = 2;
			// 
			// panelLastochka
			// 
			this->panelLastochka->AutoScroll = true;
			this->panelLastochka->BackColor = System::Drawing::Color::LightBlue;
			this->panelLastochka->Controls->Add(this->panel6);
			this->panelLastochka->Controls->Add(this->panel7);
			this->panelLastochka->Controls->Add(this->panel8);
			this->panelLastochka->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelLastochka->Location = System::Drawing::Point(0, 0);
			this->panelLastochka->Name = L"panelLastochka";
			this->panelLastochka->Size = System::Drawing::Size(661, 360);
			this->panelLastochka->TabIndex = 15;
			this->panelLastochka->Visible = false;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BackColor = System::Drawing::Color::Azure;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->groupBoxLastochka3_1);
			this->panel6->Controls->Add(this->groupBoxLastochka3_4);
			this->panel6->Controls->Add(this->groupBoxLastochka3_3);
			this->panel6->Controls->Add(this->groupBoxLastochka3_2);
			this->panel6->Controls->Add(this->LastochkaButton3_2);
			this->panel6->Controls->Add(this->LastochkaButton3_1);
			this->panel6->Controls->Add(this->dateTimePickerLastochka3);
			this->panel6->Controls->Add(this->dateTimePicker12);
			this->panel6->Location = System::Drawing::Point(15, 250);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(631, 100);
			this->panel6->TabIndex = 12;
			// 
			// groupBoxLastochka3_1
			// 
			this->groupBoxLastochka3_1->Controls->Add(this->radioLastochka3_1);
			this->groupBoxLastochka3_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxLastochka3_1->Name = L"groupBoxLastochka3_1";
			this->groupBoxLastochka3_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka3_1->TabIndex = 8;
			this->groupBoxLastochka3_1->TabStop = false;
			this->groupBoxLastochka3_1->Text = L"Тип вагона:";
			// 
			// radioLastochka3_1
			// 
			this->radioLastochka3_1->AutoSize = true;
			this->radioLastochka3_1->Checked = true;
			this->radioLastochka3_1->Location = System::Drawing::Point(6, 50);
			this->radioLastochka3_1->Name = L"radioLastochka3_1";
			this->radioLastochka3_1->Size = System::Drawing::Size(49, 17);
			this->radioLastochka3_1->TabIndex = 5;
			this->radioLastochka3_1->TabStop = true;
			this->radioLastochka3_1->Text = L"Купе";
			this->radioLastochka3_1->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka3_4
			// 
			this->groupBoxLastochka3_4->Controls->Add(this->lblLastochka3_2);
			this->groupBoxLastochka3_4->Controls->Add(this->lblLastochka3_4);
			this->groupBoxLastochka3_4->Controls->Add(this->lblLastochka3_3);
			this->groupBoxLastochka3_4->Controls->Add(this->lblLastochka3_1);
			this->groupBoxLastochka3_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxLastochka3_4->Name = L"groupBoxLastochka3_4";
			this->groupBoxLastochka3_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxLastochka3_4->TabIndex = 10;
			this->groupBoxLastochka3_4->TabStop = false;
			this->groupBoxLastochka3_4->Text = L"Информация:";
			// 
			// lblLastochka3_2
			// 
			this->lblLastochka3_2->AutoSize = true;
			this->lblLastochka3_2->Location = System::Drawing::Point(7, 39);
			this->lblLastochka3_2->Name = L"lblLastochka3_2";
			this->lblLastochka3_2->Size = System::Drawing::Size(51, 13);
			this->lblLastochka3_2->TabIndex = 3;
			this->lblLastochka3_2->Text = L"Мест: 12";
			// 
			// lblLastochka3_4
			// 
			this->lblLastochka3_4->AutoSize = true;
			this->lblLastochka3_4->Location = System::Drawing::Point(7, 74);
			this->lblLastochka3_4->Name = L"lblLastochka3_4";
			this->lblLastochka3_4->Size = System::Drawing::Size(68, 13);
			this->lblLastochka3_4->TabIndex = 2;
			this->lblLastochka3_4->Text = L"Стоимость: ";
			// 
			// lblLastochka3_3
			// 
			this->lblLastochka3_3->AutoSize = true;
			this->lblLastochka3_3->Location = System::Drawing::Point(7, 57);
			this->lblLastochka3_3->Name = L"lblLastochka3_3";
			this->lblLastochka3_3->Size = System::Drawing::Size(101, 13);
			this->lblLastochka3_3->TabIndex = 1;
			this->lblLastochka3_3->Text = L"Путь: НН - Москва";
			// 
			// lblLastochka3_1
			// 
			this->lblLastochka3_1->AutoSize = true;
			this->lblLastochka3_1->Location = System::Drawing::Point(7, 21);
			this->lblLastochka3_1->Name = L"lblLastochka3_1";
			this->lblLastochka3_1->Size = System::Drawing::Size(109, 13);
			this->lblLastochka3_1->TabIndex = 0;
			this->lblLastochka3_1->Text = L"Время: 14:10 - 18:20";
			// 
			// groupBoxLastochka3_3
			// 
			this->groupBoxLastochka3_3->Controls->Add(this->radioLastochka3_6);
			this->groupBoxLastochka3_3->Controls->Add(this->radioLastochka3_5);
			this->groupBoxLastochka3_3->Controls->Add(this->radioLastochka3_4);
			this->groupBoxLastochka3_3->Controls->Add(this->radioLastochka3_3);
			this->groupBoxLastochka3_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxLastochka3_3->Name = L"groupBoxLastochka3_3";
			this->groupBoxLastochka3_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxLastochka3_3->TabIndex = 9;
			this->groupBoxLastochka3_3->TabStop = false;
			this->groupBoxLastochka3_3->Text = L"Кол-во человек:";
			// 
			// radioLastochka3_6
			// 
			this->radioLastochka3_6->AutoSize = true;
			this->radioLastochka3_6->Location = System::Drawing::Point(8, 72);
			this->radioLastochka3_6->Name = L"radioLastochka3_6";
			this->radioLastochka3_6->Size = System::Drawing::Size(64, 17);
			this->radioLastochka3_6->TabIndex = 9;
			this->radioLastochka3_6->TabStop = true;
			this->radioLastochka3_6->Text = L"Четыре";
			this->radioLastochka3_6->UseVisualStyleBackColor = true;
			// 
			// radioLastochka3_5
			// 
			this->radioLastochka3_5->AutoSize = true;
			this->radioLastochka3_5->Location = System::Drawing::Point(8, 54);
			this->radioLastochka3_5->Name = L"radioLastochka3_5";
			this->radioLastochka3_5->Size = System::Drawing::Size(44, 17);
			this->radioLastochka3_5->TabIndex = 8;
			this->radioLastochka3_5->TabStop = true;
			this->radioLastochka3_5->Text = L"Три";
			this->radioLastochka3_5->UseVisualStyleBackColor = true;
			// 
			// radioLastochka3_4
			// 
			this->radioLastochka3_4->AutoSize = true;
			this->radioLastochka3_4->Location = System::Drawing::Point(8, 36);
			this->radioLastochka3_4->Name = L"radioLastochka3_4";
			this->radioLastochka3_4->Size = System::Drawing::Size(46, 17);
			this->radioLastochka3_4->TabIndex = 7;
			this->radioLastochka3_4->TabStop = true;
			this->radioLastochka3_4->Text = L"Два";
			this->radioLastochka3_4->UseVisualStyleBackColor = true;
			// 
			// radioLastochka3_3
			// 
			this->radioLastochka3_3->AutoSize = true;
			this->radioLastochka3_3->Checked = true;
			this->radioLastochka3_3->Location = System::Drawing::Point(8, 18);
			this->radioLastochka3_3->Name = L"radioLastochka3_3";
			this->radioLastochka3_3->Size = System::Drawing::Size(51, 17);
			this->radioLastochka3_3->TabIndex = 5;
			this->radioLastochka3_3->TabStop = true;
			this->radioLastochka3_3->Text = L"Один";
			this->radioLastochka3_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka3_2
			// 
			this->groupBoxLastochka3_2->Controls->Add(this->radioLastochka3_2);
			this->groupBoxLastochka3_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxLastochka3_2->Name = L"groupBoxLastochka3_2";
			this->groupBoxLastochka3_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka3_2->TabIndex = 8;
			this->groupBoxLastochka3_2->TabStop = false;
			this->groupBoxLastochka3_2->Text = L"Тип места:";
			// 
			// radioLastochka3_2
			// 
			this->radioLastochka3_2->AutoSize = true;
			this->radioLastochka3_2->Checked = true;
			this->radioLastochka3_2->Location = System::Drawing::Point(8, 49);
			this->radioLastochka3_2->Name = L"radioLastochka3_2";
			this->radioLastochka3_2->Size = System::Drawing::Size(65, 17);
			this->radioLastochka3_2->TabIndex = 5;
			this->radioLastochka3_2->TabStop = true;
			this->radioLastochka3_2->Text = L"Нижнее";
			this->radioLastochka3_2->UseVisualStyleBackColor = true;
			// 
			// LastochkaButton3_2
			// 
			this->LastochkaButton3_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton3_2->BackColor = System::Drawing::Color::Gold;
			this->LastochkaButton3_2->FlatAppearance->BorderSize = 0;
			this->LastochkaButton3_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton3_2->Location = System::Drawing::Point(523, 0);
			this->LastochkaButton3_2->Name = L"LastochkaButton3_2";
			this->LastochkaButton3_2->Size = System::Drawing::Size(106, 41);
			this->LastochkaButton3_2->TabIndex = 3;
			this->LastochkaButton3_2->Text = L"Заказать";
			this->LastochkaButton3_2->UseVisualStyleBackColor = false;
			// 
			// LastochkaButton3_1
			// 
			this->LastochkaButton3_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton3_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->LastochkaButton3_1->FlatAppearance->BorderSize = 0;
			this->LastochkaButton3_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton3_1->Location = System::Drawing::Point(524, 41);
			this->LastochkaButton3_1->Name = L"LastochkaButton3_1";
			this->LastochkaButton3_1->Size = System::Drawing::Size(105, 40);
			this->LastochkaButton3_1->TabIndex = 2;
			this->LastochkaButton3_1->Text = L"Купить";
			this->LastochkaButton3_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerLastochka3
			// 
			this->dateTimePickerLastochka3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerLastochka3->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerLastochka3->Location = System::Drawing::Point(524, 80);
			this->dateTimePickerLastochka3->Name = L"dateTimePickerLastochka3";
			this->dateTimePickerLastochka3->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerLastochka3->TabIndex = 1;
			// 
			// dateTimePicker12
			// 
			this->dateTimePicker12->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker12->Name = L"dateTimePicker12";
			this->dateTimePicker12->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker12->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BackColor = System::Drawing::Color::Azure;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->groupBoxLastochka2_1);
			this->panel7->Controls->Add(this->groupBoxLastochka2_4);
			this->panel7->Controls->Add(this->groupBoxLastochka2_3);
			this->panel7->Controls->Add(this->groupBoxLastochka2_2);
			this->panel7->Controls->Add(this->LastochkaButton2_2);
			this->panel7->Controls->Add(this->LastochkaButton2_1);
			this->panel7->Controls->Add(this->dateTimePickerLastochka2);
			this->panel7->Controls->Add(this->dateTimePicker14);
			this->panel7->Location = System::Drawing::Point(15, 130);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(631, 100);
			this->panel7->TabIndex = 11;
			// 
			// groupBoxLastochka2_1
			// 
			this->groupBoxLastochka2_1->Controls->Add(this->radioLastochka2_1);
			this->groupBoxLastochka2_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxLastochka2_1->Name = L"groupBoxLastochka2_1";
			this->groupBoxLastochka2_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka2_1->TabIndex = 8;
			this->groupBoxLastochka2_1->TabStop = false;
			this->groupBoxLastochka2_1->Text = L"Тип вагона:";
			// 
			// radioLastochka2_1
			// 
			this->radioLastochka2_1->AutoSize = true;
			this->radioLastochka2_1->Checked = true;
			this->radioLastochka2_1->Location = System::Drawing::Point(6, 47);
			this->radioLastochka2_1->Name = L"radioLastochka2_1";
			this->radioLastochka2_1->Size = System::Drawing::Size(49, 17);
			this->radioLastochka2_1->TabIndex = 5;
			this->radioLastochka2_1->TabStop = true;
			this->radioLastochka2_1->Text = L"Купе";
			this->radioLastochka2_1->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka2_4
			// 
			this->groupBoxLastochka2_4->Controls->Add(this->lblLastochka2_2);
			this->groupBoxLastochka2_4->Controls->Add(this->lblLastochka2_4);
			this->groupBoxLastochka2_4->Controls->Add(this->lblLastochka2_3);
			this->groupBoxLastochka2_4->Controls->Add(this->lblLastochka2_1);
			this->groupBoxLastochka2_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxLastochka2_4->Name = L"groupBoxLastochka2_4";
			this->groupBoxLastochka2_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxLastochka2_4->TabIndex = 10;
			this->groupBoxLastochka2_4->TabStop = false;
			this->groupBoxLastochka2_4->Text = L"Информация:";
			// 
			// lblLastochka2_2
			// 
			this->lblLastochka2_2->AutoSize = true;
			this->lblLastochka2_2->Location = System::Drawing::Point(7, 39);
			this->lblLastochka2_2->Name = L"lblLastochka2_2";
			this->lblLastochka2_2->Size = System::Drawing::Size(51, 13);
			this->lblLastochka2_2->TabIndex = 3;
			this->lblLastochka2_2->Text = L"Мест: 22";
			// 
			// lblLastochka2_4
			// 
			this->lblLastochka2_4->AutoSize = true;
			this->lblLastochka2_4->Location = System::Drawing::Point(7, 74);
			this->lblLastochka2_4->Name = L"lblLastochka2_4";
			this->lblLastochka2_4->Size = System::Drawing::Size(68, 13);
			this->lblLastochka2_4->TabIndex = 2;
			this->lblLastochka2_4->Text = L"Стоимость: ";
			// 
			// lblLastochka2_3
			// 
			this->lblLastochka2_3->AutoSize = true;
			this->lblLastochka2_3->Location = System::Drawing::Point(7, 57);
			this->lblLastochka2_3->Name = L"lblLastochka2_3";
			this->lblLastochka2_3->Size = System::Drawing::Size(101, 13);
			this->lblLastochka2_3->TabIndex = 1;
			this->lblLastochka2_3->Text = L"Путь: НН - Москва";
			// 
			// lblLastochka2_1
			// 
			this->lblLastochka2_1->AutoSize = true;
			this->lblLastochka2_1->Location = System::Drawing::Point(7, 21);
			this->lblLastochka2_1->Name = L"lblLastochka2_1";
			this->lblLastochka2_1->Size = System::Drawing::Size(109, 13);
			this->lblLastochka2_1->TabIndex = 0;
			this->lblLastochka2_1->Text = L"Время: 10:45 - 14:00";
			// 
			// groupBoxLastochka2_3
			// 
			this->groupBoxLastochka2_3->Controls->Add(this->radioLastochka2_6);
			this->groupBoxLastochka2_3->Controls->Add(this->radioLastochka2_5);
			this->groupBoxLastochka2_3->Controls->Add(this->radioLastochka2_4);
			this->groupBoxLastochka2_3->Controls->Add(this->radioLastochka2_3);
			this->groupBoxLastochka2_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxLastochka2_3->Name = L"groupBoxLastochka2_3";
			this->groupBoxLastochka2_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxLastochka2_3->TabIndex = 9;
			this->groupBoxLastochka2_3->TabStop = false;
			this->groupBoxLastochka2_3->Text = L"Кол-во человек:";
			// 
			// radioLastochka2_6
			// 
			this->radioLastochka2_6->AutoSize = true;
			this->radioLastochka2_6->Location = System::Drawing::Point(8, 72);
			this->radioLastochka2_6->Name = L"radioLastochka2_6";
			this->radioLastochka2_6->Size = System::Drawing::Size(64, 17);
			this->radioLastochka2_6->TabIndex = 9;
			this->radioLastochka2_6->TabStop = true;
			this->radioLastochka2_6->Text = L"Четыре";
			this->radioLastochka2_6->UseVisualStyleBackColor = true;
			// 
			// radioLastochka2_5
			// 
			this->radioLastochka2_5->AutoSize = true;
			this->radioLastochka2_5->Location = System::Drawing::Point(8, 54);
			this->radioLastochka2_5->Name = L"radioLastochka2_5";
			this->radioLastochka2_5->Size = System::Drawing::Size(44, 17);
			this->radioLastochka2_5->TabIndex = 8;
			this->radioLastochka2_5->TabStop = true;
			this->radioLastochka2_5->Text = L"Три";
			this->radioLastochka2_5->UseVisualStyleBackColor = true;
			// 
			// radioLastochka2_4
			// 
			this->radioLastochka2_4->AutoSize = true;
			this->radioLastochka2_4->Location = System::Drawing::Point(8, 36);
			this->radioLastochka2_4->Name = L"radioLastochka2_4";
			this->radioLastochka2_4->Size = System::Drawing::Size(46, 17);
			this->radioLastochka2_4->TabIndex = 7;
			this->radioLastochka2_4->TabStop = true;
			this->radioLastochka2_4->Text = L"Два";
			this->radioLastochka2_4->UseVisualStyleBackColor = true;
			// 
			// radioLastochka2_3
			// 
			this->radioLastochka2_3->AutoSize = true;
			this->radioLastochka2_3->Checked = true;
			this->radioLastochka2_3->Location = System::Drawing::Point(8, 18);
			this->radioLastochka2_3->Name = L"radioLastochka2_3";
			this->radioLastochka2_3->Size = System::Drawing::Size(51, 17);
			this->radioLastochka2_3->TabIndex = 5;
			this->radioLastochka2_3->TabStop = true;
			this->radioLastochka2_3->Text = L"Один";
			this->radioLastochka2_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka2_2
			// 
			this->groupBoxLastochka2_2->Controls->Add(this->radioLastochka2_2);
			this->groupBoxLastochka2_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxLastochka2_2->Name = L"groupBoxLastochka2_2";
			this->groupBoxLastochka2_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka2_2->TabIndex = 8;
			this->groupBoxLastochka2_2->TabStop = false;
			this->groupBoxLastochka2_2->Text = L"Тип места:";
			// 
			// radioLastochka2_2
			// 
			this->radioLastochka2_2->AutoSize = true;
			this->radioLastochka2_2->Checked = true;
			this->radioLastochka2_2->Location = System::Drawing::Point(8, 47);
			this->radioLastochka2_2->Name = L"radioLastochka2_2";
			this->radioLastochka2_2->Size = System::Drawing::Size(65, 17);
			this->radioLastochka2_2->TabIndex = 5;
			this->radioLastochka2_2->TabStop = true;
			this->radioLastochka2_2->Text = L"Нижнее";
			this->radioLastochka2_2->UseVisualStyleBackColor = true;
			// 
			// LastochkaButton2_2
			// 
			this->LastochkaButton2_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton2_2->BackColor = System::Drawing::Color::Gold;
			this->LastochkaButton2_2->FlatAppearance->BorderSize = 0;
			this->LastochkaButton2_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton2_2->Location = System::Drawing::Point(524, 0);
			this->LastochkaButton2_2->Name = L"LastochkaButton2_2";
			this->LastochkaButton2_2->Size = System::Drawing::Size(105, 41);
			this->LastochkaButton2_2->TabIndex = 3;
			this->LastochkaButton2_2->Text = L"Заказать";
			this->LastochkaButton2_2->UseVisualStyleBackColor = false;
			// 
			// LastochkaButton2_1
			// 
			this->LastochkaButton2_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton2_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->LastochkaButton2_1->FlatAppearance->BorderSize = 0;
			this->LastochkaButton2_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton2_1->Location = System::Drawing::Point(524, 41);
			this->LastochkaButton2_1->Name = L"LastochkaButton2_1";
			this->LastochkaButton2_1->Size = System::Drawing::Size(105, 40);
			this->LastochkaButton2_1->TabIndex = 2;
			this->LastochkaButton2_1->Text = L"Купить";
			this->LastochkaButton2_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerLastochka2
			// 
			this->dateTimePickerLastochka2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerLastochka2->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerLastochka2->Location = System::Drawing::Point(524, 81);
			this->dateTimePickerLastochka2->Name = L"dateTimePickerLastochka2";
			this->dateTimePickerLastochka2->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerLastochka2->TabIndex = 1;
			// 
			// dateTimePicker14
			// 
			this->dateTimePicker14->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker14->Name = L"dateTimePicker14";
			this->dateTimePicker14->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker14->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::Color::Azure;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->groupBoxLastochka1_4);
			this->panel8->Controls->Add(this->groupBoxLastochka1_3);
			this->panel8->Controls->Add(this->groupBoxLastochka1_2);
			this->panel8->Controls->Add(this->groupBoxLastochka1_1);
			this->panel8->Controls->Add(this->LastochkaButton1_2);
			this->panel8->Controls->Add(this->LastochkaButton1_1);
			this->panel8->Controls->Add(this->dateTimePickerLastochka1);
			this->panel8->Controls->Add(this->dateTimePicker16);
			this->panel8->Location = System::Drawing::Point(15, 10);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(631, 100);
			this->panel8->TabIndex = 0;
			// 
			// groupBoxLastochka1_4
			// 
			this->groupBoxLastochka1_4->Controls->Add(this->lblLastochka1_2);
			this->groupBoxLastochka1_4->Controls->Add(this->lblLastochka1_4);
			this->groupBoxLastochka1_4->Controls->Add(this->lblLastochka1_3);
			this->groupBoxLastochka1_4->Controls->Add(this->lblLastochka1_1);
			this->groupBoxLastochka1_4->Location = System::Drawing::Point(381, 0);
			this->groupBoxLastochka1_4->Name = L"groupBoxLastochka1_4";
			this->groupBoxLastochka1_4->Size = System::Drawing::Size(120, 97);
			this->groupBoxLastochka1_4->TabIndex = 10;
			this->groupBoxLastochka1_4->TabStop = false;
			this->groupBoxLastochka1_4->Text = L"Информация:";
			// 
			// lblLastochka1_2
			// 
			this->lblLastochka1_2->AutoSize = true;
			this->lblLastochka1_2->Location = System::Drawing::Point(7, 39);
			this->lblLastochka1_2->Name = L"lblLastochka1_2";
			this->lblLastochka1_2->Size = System::Drawing::Size(51, 13);
			this->lblLastochka1_2->TabIndex = 3;
			this->lblLastochka1_2->Text = L"Мест: 48";
			// 
			// lblLastochka1_4
			// 
			this->lblLastochka1_4->AutoSize = true;
			this->lblLastochka1_4->Location = System::Drawing::Point(7, 74);
			this->lblLastochka1_4->Name = L"lblLastochka1_4";
			this->lblLastochka1_4->Size = System::Drawing::Size(68, 13);
			this->lblLastochka1_4->TabIndex = 2;
			this->lblLastochka1_4->Text = L"Стоимость: ";
			// 
			// lblLastochka1_3
			// 
			this->lblLastochka1_3->AutoSize = true;
			this->lblLastochka1_3->Location = System::Drawing::Point(7, 57);
			this->lblLastochka1_3->Name = L"lblLastochka1_3";
			this->lblLastochka1_3->Size = System::Drawing::Size(101, 13);
			this->lblLastochka1_3->TabIndex = 1;
			this->lblLastochka1_3->Text = L"Путь: НН - Москва";
			// 
			// lblLastochka1_1
			// 
			this->lblLastochka1_1->AutoSize = true;
			this->lblLastochka1_1->Location = System::Drawing::Point(7, 21);
			this->lblLastochka1_1->Name = L"lblLastochka1_1";
			this->lblLastochka1_1->Size = System::Drawing::Size(97, 13);
			this->lblLastochka1_1->TabIndex = 0;
			this->lblLastochka1_1->Text = L"Время: 2:40 - 5:35";
			// 
			// groupBoxLastochka1_3
			// 
			this->groupBoxLastochka1_3->Controls->Add(this->radioLastochka1_6);
			this->groupBoxLastochka1_3->Controls->Add(this->radioLastochka1_5);
			this->groupBoxLastochka1_3->Controls->Add(this->radioLastochka1_4);
			this->groupBoxLastochka1_3->Controls->Add(this->radioLastochka1_3);
			this->groupBoxLastochka1_3->Location = System::Drawing::Point(247, 0);
			this->groupBoxLastochka1_3->Name = L"groupBoxLastochka1_3";
			this->groupBoxLastochka1_3->Size = System::Drawing::Size(126, 97);
			this->groupBoxLastochka1_3->TabIndex = 9;
			this->groupBoxLastochka1_3->TabStop = false;
			this->groupBoxLastochka1_3->Text = L"Кол-во человек:";
			// 
			// radioLastochka1_6
			// 
			this->radioLastochka1_6->AutoSize = true;
			this->radioLastochka1_6->Location = System::Drawing::Point(8, 72);
			this->radioLastochka1_6->Name = L"radioLastochka1_6";
			this->radioLastochka1_6->Size = System::Drawing::Size(64, 17);
			this->radioLastochka1_6->TabIndex = 9;
			this->radioLastochka1_6->TabStop = true;
			this->radioLastochka1_6->Text = L"Четыре";
			this->radioLastochka1_6->UseVisualStyleBackColor = true;
			// 
			// radioLastochka1_5
			// 
			this->radioLastochka1_5->AutoSize = true;
			this->radioLastochka1_5->Location = System::Drawing::Point(8, 54);
			this->radioLastochka1_5->Name = L"radioLastochka1_5";
			this->radioLastochka1_5->Size = System::Drawing::Size(44, 17);
			this->radioLastochka1_5->TabIndex = 8;
			this->radioLastochka1_5->TabStop = true;
			this->radioLastochka1_5->Text = L"Три";
			this->radioLastochka1_5->UseVisualStyleBackColor = true;
			// 
			// radioLastochka1_4
			// 
			this->radioLastochka1_4->AutoSize = true;
			this->radioLastochka1_4->Location = System::Drawing::Point(8, 36);
			this->radioLastochka1_4->Name = L"radioLastochka1_4";
			this->radioLastochka1_4->Size = System::Drawing::Size(46, 17);
			this->radioLastochka1_4->TabIndex = 7;
			this->radioLastochka1_4->TabStop = true;
			this->radioLastochka1_4->Text = L"Два";
			this->radioLastochka1_4->UseVisualStyleBackColor = true;
			// 
			// radioLastochka1_3
			// 
			this->radioLastochka1_3->AutoSize = true;
			this->radioLastochka1_3->Checked = true;
			this->radioLastochka1_3->Location = System::Drawing::Point(8, 18);
			this->radioLastochka1_3->Name = L"radioLastochka1_3";
			this->radioLastochka1_3->Size = System::Drawing::Size(51, 17);
			this->radioLastochka1_3->TabIndex = 5;
			this->radioLastochka1_3->TabStop = true;
			this->radioLastochka1_3->Text = L"Один";
			this->radioLastochka1_3->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka1_2
			// 
			this->groupBoxLastochka1_2->Controls->Add(this->radioLastochka1_2);
			this->groupBoxLastochka1_2->Location = System::Drawing::Point(125, 0);
			this->groupBoxLastochka1_2->Name = L"groupBoxLastochka1_2";
			this->groupBoxLastochka1_2->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka1_2->TabIndex = 8;
			this->groupBoxLastochka1_2->TabStop = false;
			this->groupBoxLastochka1_2->Text = L"Тип места:";
			// 
			// radioLastochka1_2
			// 
			this->radioLastochka1_2->AutoSize = true;
			this->radioLastochka1_2->Checked = true;
			this->radioLastochka1_2->Location = System::Drawing::Point(10, 47);
			this->radioLastochka1_2->Name = L"radioLastochka1_2";
			this->radioLastochka1_2->Size = System::Drawing::Size(65, 17);
			this->radioLastochka1_2->TabIndex = 5;
			this->radioLastochka1_2->TabStop = true;
			this->radioLastochka1_2->Text = L"Нижнее";
			this->radioLastochka1_2->UseVisualStyleBackColor = true;
			// 
			// groupBoxLastochka1_1
			// 
			this->groupBoxLastochka1_1->Controls->Add(this->radioLastochka1_1);
			this->groupBoxLastochka1_1->Location = System::Drawing::Point(3, 0);
			this->groupBoxLastochka1_1->Name = L"groupBoxLastochka1_1";
			this->groupBoxLastochka1_1->Size = System::Drawing::Size(114, 97);
			this->groupBoxLastochka1_1->TabIndex = 7;
			this->groupBoxLastochka1_1->TabStop = false;
			this->groupBoxLastochka1_1->Text = L"Тип вагона:";
			// 
			// radioLastochka1_1
			// 
			this->radioLastochka1_1->AutoSize = true;
			this->radioLastochka1_1->Checked = true;
			this->radioLastochka1_1->Location = System::Drawing::Point(6, 47);
			this->radioLastochka1_1->Name = L"radioLastochka1_1";
			this->radioLastochka1_1->Size = System::Drawing::Size(49, 17);
			this->radioLastochka1_1->TabIndex = 5;
			this->radioLastochka1_1->TabStop = true;
			this->radioLastochka1_1->Text = L"Купе";
			this->radioLastochka1_1->UseVisualStyleBackColor = true;
			// 
			// LastochkaButton1_2
			// 
			this->LastochkaButton1_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton1_2->BackColor = System::Drawing::Color::Gold;
			this->LastochkaButton1_2->FlatAppearance->BorderSize = 0;
			this->LastochkaButton1_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton1_2->Location = System::Drawing::Point(524, 0);
			this->LastochkaButton1_2->Name = L"LastochkaButton1_2";
			this->LastochkaButton1_2->Size = System::Drawing::Size(105, 41);
			this->LastochkaButton1_2->TabIndex = 3;
			this->LastochkaButton1_2->Text = L"Заказать";
			this->LastochkaButton1_2->UseVisualStyleBackColor = false;
			this->LastochkaButton1_2->Click += gcnew System::EventHandler(this, &MyForm::LastochkaButton1_2_Click);
			// 
			// LastochkaButton1_1
			// 
			this->LastochkaButton1_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->LastochkaButton1_1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->LastochkaButton1_1->FlatAppearance->BorderSize = 0;
			this->LastochkaButton1_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastochkaButton1_1->Location = System::Drawing::Point(524, 41);
			this->LastochkaButton1_1->Name = L"LastochkaButton1_1";
			this->LastochkaButton1_1->Size = System::Drawing::Size(105, 40);
			this->LastochkaButton1_1->TabIndex = 2;
			this->LastochkaButton1_1->Text = L"Купить";
			this->LastochkaButton1_1->UseVisualStyleBackColor = false;
			// 
			// dateTimePickerLastochka1
			// 
			this->dateTimePickerLastochka1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePickerLastochka1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePickerLastochka1->Location = System::Drawing::Point(524, 81);
			this->dateTimePickerLastochka1->Name = L"dateTimePickerLastochka1";
			this->dateTimePickerLastochka1->Size = System::Drawing::Size(106, 19);
			this->dateTimePickerLastochka1->TabIndex = 1;
			// 
			// dateTimePicker16
			// 
			this->dateTimePicker16->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker16->Name = L"dateTimePicker16";
			this->dateTimePicker16->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker16->TabIndex = 0;
			// 
			// panelBranded
			// 
			this->panelBranded->AutoScroll = true;
			this->panelBranded->BackColor = System::Drawing::Color::LightBlue;
			this->panelBranded->Controls->Add(this->panel3);
			this->panelBranded->Controls->Add(this->panel4);
			this->panelBranded->Controls->Add(this->panel5);
			this->panelBranded->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBranded->Location = System::Drawing::Point(0, 0);
			this->panelBranded->Name = L"panelBranded";
			this->panelBranded->Size = System::Drawing::Size(661, 360);
			this->panelBranded->TabIndex = 14;
			this->panelBranded->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::Azure;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->groupBox4);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->groupBox2);
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->dateTimePicker3);
			this->panel3->Controls->Add(this->dateTimePicker4);
			this->panel3->Location = System::Drawing::Point(15, 250);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(631, 100);
			this->panel3->TabIndex = 12;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton27);
			this->groupBox4->Location = System::Drawing::Point(3, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(114, 97);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Тип вагона:";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(8, 70);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(39, 17);
			this->radioButton7->TabIndex = 8;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"СВ";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(8, 49);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(74, 17);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Плацкарт";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Checked = true;
			this->radioButton27->Location = System::Drawing::Point(8, 27);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(49, 17);
			this->radioButton27->TabIndex = 5;
			this->radioButton27->TabStop = true;
			this->radioButton27->Text = L"Купе";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(381, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(120, 97);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Мест: 12";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Стоимость: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Путь: НН - Москва";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Время: 14:10 - 18:20";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Location = System::Drawing::Point(247, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(126, 97);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Кол-во человек:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 72);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 17);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Четыре";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(44, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Три";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 36);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(46, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Два";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(8, 18);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(51, 17);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Один";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Location = System::Drawing::Point(125, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(114, 97);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Тип места:";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(8, 63);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(67, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Верхнее";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Location = System::Drawing::Point(8, 27);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(65, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Нижнее";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(523, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Заказать";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(524, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Купить";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker3->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker3->Location = System::Drawing::Point(524, 80);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(106, 19);
			this->dateTimePicker3->TabIndex = 1;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker4->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::Color::Azure;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->groupBox8);
			this->panel4->Controls->Add(this->groupBox5);
			this->panel4->Controls->Add(this->groupBox6);
			this->panel4->Controls->Add(this->groupBox7);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->dateTimePicker6);
			this->panel4->Controls->Add(this->dateTimePicker7);
			this->panel4->Location = System::Drawing::Point(15, 130);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(631, 100);
			this->panel4->TabIndex = 11;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton15);
			this->groupBox8->Controls->Add(this->radioButton16);
			this->groupBox8->Controls->Add(this->radioButton26);
			this->groupBox8->Location = System::Drawing::Point(3, 0);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(114, 97);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Тип вагона:";
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(8, 70);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(39, 17);
			this->radioButton15->TabIndex = 8;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"СВ";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(8, 49);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(74, 17);
			this->radioButton16->TabIndex = 7;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"Плацкарт";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Checked = true;
			this->radioButton26->Location = System::Drawing::Point(8, 27);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(49, 17);
			this->radioButton26->TabIndex = 5;
			this->radioButton26->TabStop = true;
			this->radioButton26->Text = L"Купе";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Location = System::Drawing::Point(381, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(120, 97);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Информация:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Мест: 22";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Стоимость: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Путь: НН - Москва";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Время: 10:45 - 14:00";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton9);
			this->groupBox6->Controls->Add(this->radioButton10);
			this->groupBox6->Controls->Add(this->radioButton11);
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->Location = System::Drawing::Point(247, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(126, 97);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Кол-во человек:";
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(8, 72);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(64, 17);
			this->radioButton9->TabIndex = 9;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Четыре";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(8, 54);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(44, 17);
			this->radioButton10->TabIndex = 8;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Три";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(8, 36);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(46, 17);
			this->radioButton11->TabIndex = 7;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Два";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Checked = true;
			this->radioButton12->Location = System::Drawing::Point(8, 18);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(51, 17);
			this->radioButton12->TabIndex = 5;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Один";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton13);
			this->groupBox7->Controls->Add(this->radioButton14);
			this->groupBox7->Location = System::Drawing::Point(125, 0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(114, 97);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Тип места:";
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(8, 63);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(67, 17);
			this->radioButton13->TabIndex = 7;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Верхнее";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Checked = true;
			this->radioButton14->Location = System::Drawing::Point(8, 27);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(65, 17);
			this->radioButton14->TabIndex = 5;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"Нижнее";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(524, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Заказать";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(524, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 40);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Купить";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker6->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker6->Location = System::Drawing::Point(524, 81);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(106, 19);
			this->dateTimePicker6->TabIndex = 1;
			// 
			// dateTimePicker7
			// 
			this->dateTimePicker7->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker7->Name = L"dateTimePicker7";
			this->dateTimePicker7->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker7->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::Color::Azure;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->groupBox9);
			this->panel5->Controls->Add(this->groupBox10);
			this->panel5->Controls->Add(this->groupBox11);
			this->panel5->Controls->Add(this->groupBox12);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->dateTimePicker9);
			this->panel5->Controls->Add(this->dateTimePicker10);
			this->panel5->Location = System::Drawing::Point(15, 10);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(631, 100);
			this->panel5->TabIndex = 0;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label10);
			this->groupBox9->Controls->Add(this->label11);
			this->groupBox9->Controls->Add(this->label12);
			this->groupBox9->Controls->Add(this->label13);
			this->groupBox9->Location = System::Drawing::Point(381, 0);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(120, 97);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Информация:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Мест: 48";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 74);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Стоимость: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Путь: НН - Москва";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Время: 2:40 - 5:35";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->radioButton17);
			this->groupBox10->Controls->Add(this->radioButton18);
			this->groupBox10->Controls->Add(this->radioButton19);
			this->groupBox10->Controls->Add(this->radioButton20);
			this->groupBox10->Location = System::Drawing::Point(247, 0);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(126, 97);
			this->groupBox10->TabIndex = 9;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Кол-во человек:";
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(8, 72);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(64, 17);
			this->radioButton17->TabIndex = 9;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"Четыре";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(8, 54);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(44, 17);
			this->radioButton18->TabIndex = 8;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"Три";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(8, 36);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(46, 17);
			this->radioButton19->TabIndex = 7;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"Два";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Checked = true;
			this->radioButton20->Location = System::Drawing::Point(8, 18);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(51, 17);
			this->radioButton20->TabIndex = 5;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"Один";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->radioButton21);
			this->groupBox11->Controls->Add(this->radioButton22);
			this->groupBox11->Location = System::Drawing::Point(125, 0);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(114, 97);
			this->groupBox11->TabIndex = 8;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Тип места:";
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(8, 63);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(67, 17);
			this->radioButton21->TabIndex = 7;
			this->radioButton21->TabStop = true;
			this->radioButton21->Text = L"Верхнее";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Checked = true;
			this->radioButton22->Location = System::Drawing::Point(8, 27);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(65, 17);
			this->radioButton22->TabIndex = 5;
			this->radioButton22->TabStop = true;
			this->radioButton22->Text = L"Нижнее";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->radioButton25);
			this->groupBox12->Controls->Add(this->radioButton23);
			this->groupBox12->Controls->Add(this->radioButton24);
			this->groupBox12->Location = System::Drawing::Point(3, 0);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(114, 97);
			this->groupBox12->TabIndex = 7;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Тип вагона:";
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(8, 70);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(39, 17);
			this->radioButton25->TabIndex = 8;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"СВ";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(8, 49);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(74, 17);
			this->radioButton23->TabIndex = 7;
			this->radioButton23->TabStop = true;
			this->radioButton23->Text = L"Плацкарт";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Checked = true;
			this->radioButton24->Location = System::Drawing::Point(8, 27);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(49, 17);
			this->radioButton24->TabIndex = 5;
			this->radioButton24->TabStop = true;
			this->radioButton24->Text = L"Купе";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::Gold;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(524, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 41);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Заказать";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(524, 41);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 40);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Купить";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker9
			// 
			this->dateTimePicker9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker9->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker9->Location = System::Drawing::Point(524, 81);
			this->dateTimePicker9->Name = L"dateTimePicker9";
			this->dateTimePicker9->Size = System::Drawing::Size(106, 19);
			this->dateTimePicker9->TabIndex = 1;
			// 
			// dateTimePicker10
			// 
			this->dateTimePicker10->Location = System::Drawing::Point(519, 102);
			this->dateTimePicker10->Name = L"dateTimePicker10";
			this->dateTimePicker10->Size = System::Drawing::Size(142, 19);
			this->dateTimePicker10->TabIndex = 0;
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
			this->FastButton_3_2->Click += gcnew System::EventHandler(this, &MyForm::FastButton_3_2_Click);
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
			this->FastButton_2_2->Click += gcnew System::EventHandler(this, &MyForm::FastButton_2_2_Click);
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
			this->panelLastochka->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->groupBoxLastochka3_1->ResumeLayout(false);
			this->groupBoxLastochka3_1->PerformLayout();
			this->groupBoxLastochka3_4->ResumeLayout(false);
			this->groupBoxLastochka3_4->PerformLayout();
			this->groupBoxLastochka3_3->ResumeLayout(false);
			this->groupBoxLastochka3_3->PerformLayout();
			this->groupBoxLastochka3_2->ResumeLayout(false);
			this->groupBoxLastochka3_2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->groupBoxLastochka2_1->ResumeLayout(false);
			this->groupBoxLastochka2_1->PerformLayout();
			this->groupBoxLastochka2_4->ResumeLayout(false);
			this->groupBoxLastochka2_4->PerformLayout();
			this->groupBoxLastochka2_3->ResumeLayout(false);
			this->groupBoxLastochka2_3->PerformLayout();
			this->groupBoxLastochka2_2->ResumeLayout(false);
			this->groupBoxLastochka2_2->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->groupBoxLastochka1_4->ResumeLayout(false);
			this->groupBoxLastochka1_4->PerformLayout();
			this->groupBoxLastochka1_3->ResumeLayout(false);
			this->groupBoxLastochka1_3->PerformLayout();
			this->groupBoxLastochka1_2->ResumeLayout(false);
			this->groupBoxLastochka1_2->PerformLayout();
			this->groupBoxLastochka1_1->ResumeLayout(false);
			this->groupBoxLastochka1_1->PerformLayout();
			this->panelBranded->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
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
		panelLastochka->Visible = true;
	}
	private: System::Void btnBranded_Click(System::Object^ sender, System::EventArgs^ e) {
		ActivateButton(sender);
		lblTitle->Text = "Branded";
		panelBranded->Visible = true;
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
		SendOrder(radioButtonFast_1_1, radioButtonFast_1_2, radioButtonFast_1_2,					// 1 groupbox
			radioButtonFast_1_3, radioButtonFast_1_4,												// 2 groupbox
			radioButtonFast_1_5, radioButtonFast_1_6, radioButtonFast_1_7, radioButtonFast_1_8,  	// 3 groupbox
			lblFastTime_1, lblFastCount_1, lblFastTrip_1, lblFastPrice_1,							// 4 groupbox
			FastButton_1_1, FastButton_1_2, dateTimePickerFast_1, 3);
	}
	private: System::Void FastButton_2_2_Click(System::Object^ sender, System::EventArgs^ e) {
		SendOrder(radioButtonFast_2_1, radioButtonFast_2_2, radioButtonFast_2_2,					// 1 groupbox
			radioButtonFast_2_3, radioButtonFast_2_4,												// 2 groupbox
			radioButtonFast_2_5, radioButtonFast_2_6, radioButtonFast_2_7, radioButtonFast_2_8,  	// 3 groupbox
			lblFastTime_2, lblFastCount_2, lblFastTrip_2, lblFastPrice_2,							// 4 groupbox
			FastButton_2_1, FastButton_2_2, dateTimePickerFast_2, 3);
	}
	private: System::Void FastButton_3_2_Click(System::Object^ sender, System::EventArgs^ e) {
		SendOrder(radioButtonFast_3_1, radioButtonFast_3_2, radioButtonFast_3_2,					// 1 groupbox
			radioButtonFast_3_3, radioButtonFast_3_4,												// 2 groupbox
			radioButtonFast_3_5, radioButtonFast_3_6, radioButtonFast_3_7, radioButtonFast_3_8,  	// 3 groupbox
			lblFastTime_3, lblFastCount_3, lblFastTrip_3, lblFastPrice_3,							// 4 groupbox
			FastButton_3_1, FastButton_3_2, dateTimePickerFast_3, 3);
	}
	private: System::Void LastochkaButton1_2_Click(System::Object^ sender, System::EventArgs^ e) {
		SendOrder(radioLastochka1_1, radioLastochka1_1, radioLastochka1_1,					// 1 groupbox
			radioLastochka1_2, radioLastochka1_2,											// 2 groupbox
			radioLastochka1_3, radioLastochka1_4, radioLastochka1_5, radioLastochka1_6,  	// 3 groupbox
			lblLastochka1_1, lblLastochka1_2, lblLastochka1_3, lblLastochka1_4,				// 4 groupbox
			LastochkaButton3_1, LastochkaButton3_2, dateTimePickerLastochka3, 1);
	}
	private: System::Void panelOrdered_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   //design developed with the support of a certified aesthete
		   void SendOrder(RadioButton^ btn1_1, RadioButton^ btn1_2, RadioButton^ btn1_3,
			   RadioButton^ btn2_1, RadioButton^ btn2_2, RadioButton^ btn3_1,
			   RadioButton^ btn3_2, RadioButton^ btn3_3, RadioButton^ btn3_4,
			   Label^ lbl1, Label^ lbl2, Label^ lbl3, Label^ lbl4,
			   Button^ btn1, Button^ btn2, DateTimePicker^ dtp, int type) {
			   Label^ checkedButton1 = gcnew Label();
			   if (btn1_1->Checked == true) {
				   checkedButton1->Text = btn1_1->Text;
			   }
			   else if (btn1_2->Checked == true) {
				   checkedButton1->Text = btn1_2->Text;
			   }
			   else if (btn1_3->Checked == true) {
				   checkedButton1->Text = btn1_3->Text;
			   }

			   Label^ checkedButton2 = gcnew Label();
			   if (btn2_1->Checked == true) {
				   checkedButton2->Text = btn2_1->Text;
			   }
			   else if (btn2_2->Checked == true) {
				   checkedButton2->Text = btn2_2->Text;
			   }

			   Label^ checkedButton3 = gcnew Label();
			   if (btn3_1->Checked == true) {
				   checkedButton3->Text = btn3_1->Text;
			   }
			   else if (btn3_2->Checked == true) {
				   checkedButton3->Text = btn3_2->Text;
			   }
			   else if (btn3_3->Checked == true) {
				   checkedButton3->Text = btn3_3->Text;
			   }
			   else if (btn3_4->Checked == true) {
				   checkedButton3->Text = btn3_4->Text;
			   }

			   newOrdered(checkedButton1, checkedButton2, checkedButton3,
				   (GroupBox^)btn1_1->Parent, (GroupBox^)btn2_1->Parent, 
				   (GroupBox^)btn3_1->Parent, (GroupBox^)lbl1->Parent,
				   lbl1, lbl2, lbl3, lbl4,
				   btn1, btn2, dtp, type);
			   countOrdered++;
			   index++;
	}
	public:
		Panel^ CreateMyOrderedPanel(Panel^ pnl, int x, int y, int w, int h,
			GroupBox^ wagonTypeGB, Label^ wagonTypeLBL, GroupBox^ seatTypeGB, Label^ seatTypeLBL,
			GroupBox^ countPeopleGB, Label^ countPeopleLBL, GroupBox^ information, Label^ INFO_time,
			Label^ INFO_countSeat, Label^ INFO_trip, Label^ INFO_price, Button^ btndelete,
			Button^ btnbuy, DateTimePicker^ dtp, int index, int type) {

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
			Label^ a = gcnew Label();
			if (type == 1) {
				a->Text = "Ласточка";
			}
			else if (type == 1) {
				a->Text = "Фирменный";
			}
			else if (type == 3) {
				a->Text = "Скорый";
			}
			Label^ _wagonTypeLBL2 = gcnew Label();
			_wagonTypeLBL2->Location = Point(8, 60);
			_wagonTypeLBL2->Text = "Поезд: " + a->Text;// + wagonTypeLBL->Text;
			_wagonTypeGB->Controls->Add(_wagonTypeLBL2);

			Label^ _wagonTypeLBL = gcnew Label();
			_wagonTypeLBL->Location = Point(8, 34);
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
		Panel^ newpnl = (Panel^)((Button^)sender)->Parent;
		for (int j = 0; j < pnlsOrdered.size() && test != true; j++) {
			if (newpnl == pnlsOrdered[j]) {
				test = true;
				index = j;
			}
		}
		MessageBox::Show("Del");
		panelOrdered->Controls->Remove(pnlsOrdered[index]);
		pnlsOrdered.erase(pnlsOrdered.begin() + index);
		for (int i = index; i < pnlsOrdered.size(); i++) {
			pnlsOrdered[i]->Location = Point(pnlsOrdered[i]->Location.X, pnlsOrdered[i]->Location.Y - 120);
		}
		countOrdered--;
	}
}
