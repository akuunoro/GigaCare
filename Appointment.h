#pragma once
#include "Appointment2.h"


namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Appointment
	/// </summary>
	public ref class Appointment : public System::Windows::Forms::Form
	{
	public:
		void cmb_Month()
		{
			array<String^>^ months = gcnew array<String^> {
				"January", "February", "March", "April", "May", "June",
					"July", "August", "September", "October", "November", "December"
			};

			this->cmb_monthapp->Items->AddRange(months);

		};

		void cmb_Days()
		{
			for (int i = 1; i <= 31; ++i)
			{
				this->cmb_dayapp->Items->Add(i.ToString());
			}
		}

		void cmb_Year() {
			for (int i = 2024; i >= 1900; --i) {
				this->cmb_yearapp->Items->Add(i.ToString());
			}
		}
	private: System::Windows::Forms::RadioButton^ rb_male;
	private: System::Windows::Forms::RadioButton^ rb_female;
	public:


	public:


		Form ^gohomeappmnt;
		Appointment(void)
		{
			InitializeComponent();
			cmb_Month();
			cmb_Days();
			cmb_Year();

	
			
		}

		Appointment(Form ^showappmnt)
		{
			gohomeappmnt = showappmnt;
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Appointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btn_homeappmnt;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ pnl_app;

	private: System::Windows::Forms::ComboBox^ cmb_yearapp;

	private: System::Windows::Forms::ComboBox^ cmb_dayapp;

	private: System::Windows::Forms::ComboBox^ cmb_monthapp;



	private: System::Windows::Forms::Label^ lbl_genderapp;

	private: System::Windows::Forms::Label^ lbl_birthdayapp;

	private: System::Windows::Forms::TextBox^ txt_mobilenumberapp;

	private: System::Windows::Forms::Label^ lbl_mobilenumberapp;

	private: System::Windows::Forms::TextBox^ txt_homeaddressapp;

	private: System::Windows::Forms::Label^ lbl_homeaddressapp;

	private: System::Windows::Forms::TextBox^ txt_lastnameapp;

	private: System::Windows::Forms::Label^ lbl_lastnameapp;


	private: System::Windows::Forms::TextBox^ txt_middlenameapp;


	private: System::Windows::Forms::Label^ lbl_middlenameapp;
	private: System::Windows::Forms::Button^ btn_doneapp;




	private: System::Windows::Forms::TextBox^ txt_firstnameapp;





	private: System::Windows::Forms::Label^ lbl_firstnameapp;

	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Panel^ panel2;






	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ txt_guardianapp;

private: System::Windows::Forms::Label^ lbl_guardianapp;
private: System::Windows::Forms::TextBox^ txt_gmobilenumapp;




private: System::Windows::Forms::Label^ lbl_gmobilenumapp;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Appointment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->rb_male = (gcnew System::Windows::Forms::RadioButton());
			this->txt_gmobilenumapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_gmobilenumapp = (gcnew System::Windows::Forms::Label());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_guardianapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_guardianapp = (gcnew System::Windows::Forms::Label());
			this->cmb_yearapp = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_dayapp = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_monthapp = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_genderapp = (gcnew System::Windows::Forms::Label());
			this->lbl_birthdayapp = (gcnew System::Windows::Forms::Label());
			this->txt_mobilenumberapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mobilenumberapp = (gcnew System::Windows::Forms::Label());
			this->txt_homeaddressapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_homeaddressapp = (gcnew System::Windows::Forms::Label());
			this->txt_lastnameapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_lastnameapp = (gcnew System::Windows::Forms::Label());
			this->txt_middlenameapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_middlenameapp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_firstnameapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstnameapp = (gcnew System::Windows::Forms::Label());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			this->rb_female = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_app->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->btn_homeappmnt);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1182, 140);
			this->panel1->TabIndex = 0;
			// 
			// btn_homeappmnt
			// 
			this->btn_homeappmnt->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_homeappmnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_homeappmnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_homeappmnt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_homeappmnt->Location = System::Drawing::Point(867, 63);
			this->btn_homeappmnt->Name = L"btn_homeappmnt";
			this->btn_homeappmnt->Size = System::Drawing::Size(185, 58);
			this->btn_homeappmnt->TabIndex = 26;
			this->btn_homeappmnt->Text = L"HOME";
			this->btn_homeappmnt->UseVisualStyleBackColor = false;
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Appointment::btn_homeappmnt_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 140);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->rb_female);
			this->pnl_app->Controls->Add(this->rb_male);
			this->pnl_app->Controls->Add(this->txt_gmobilenumapp);
			this->pnl_app->Controls->Add(this->lbl_gmobilenumapp);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->txt_guardianapp);
			this->pnl_app->Controls->Add(this->lbl_guardianapp);
			this->pnl_app->Controls->Add(this->cmb_yearapp);
			this->pnl_app->Controls->Add(this->cmb_dayapp);
			this->pnl_app->Controls->Add(this->cmb_monthapp);
			this->pnl_app->Controls->Add(this->lbl_genderapp);
			this->pnl_app->Controls->Add(this->lbl_birthdayapp);
			this->pnl_app->Controls->Add(this->txt_mobilenumberapp);
			this->pnl_app->Controls->Add(this->lbl_mobilenumberapp);
			this->pnl_app->Controls->Add(this->txt_homeaddressapp);
			this->pnl_app->Controls->Add(this->lbl_homeaddressapp);
			this->pnl_app->Controls->Add(this->txt_lastnameapp);
			this->pnl_app->Controls->Add(this->lbl_lastnameapp);
			this->pnl_app->Controls->Add(this->txt_middlenameapp);
			this->pnl_app->Controls->Add(this->lbl_middlenameapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->txt_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(85, 156);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 20;
			// 
			// rb_male
			// 
			this->rb_male->AutoSize = true;
			this->rb_male->BackColor = System::Drawing::Color::Transparent;
			this->rb_male->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_male->ForeColor = System::Drawing::Color::White;
			this->rb_male->Location = System::Drawing::Point(549, 203);
			this->rb_male->Name = L"rb_male";
			this->rb_male->Size = System::Drawing::Size(102, 40);
			this->rb_male->TabIndex = 32;
			this->rb_male->TabStop = true;
			this->rb_male->Text = L"Male";
			this->rb_male->UseVisualStyleBackColor = false;
			this->rb_male->CheckedChanged += gcnew System::EventHandler(this, &Appointment::radioButton1_CheckedChanged);
			// 
			// txt_gmobilenumapp
			// 
			this->txt_gmobilenumapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gmobilenumapp->Location = System::Drawing::Point(539, 384);
			this->txt_gmobilenumapp->Name = L"txt_gmobilenumapp";
			this->txt_gmobilenumapp->Size = System::Drawing::Size(445, 39);
			this->txt_gmobilenumapp->TabIndex = 31;
			// 
			// lbl_gmobilenumapp
			// 
			this->lbl_gmobilenumapp->AutoSize = true;
			this->lbl_gmobilenumapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_gmobilenumapp->ForeColor = System::Drawing::Color::White;
			this->lbl_gmobilenumapp->Location = System::Drawing::Point(534, 348);
			this->lbl_gmobilenumapp->Name = L"lbl_gmobilenumapp";
			this->lbl_gmobilenumapp->Size = System::Drawing::Size(281, 28);
			this->lbl_gmobilenumapp->TabIndex = 30;
			this->lbl_gmobilenumapp->Text = L"Guardian Mobile Number";
			// 
			// btn_doneapp
			// 
			this->btn_doneapp->BackColor = System::Drawing::Color::RoyalBlue;
			this->btn_doneapp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_doneapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_doneapp->ForeColor = System::Drawing::Color::White;
			this->btn_doneapp->Location = System::Drawing::Point(836, 514);
			this->btn_doneapp->Name = L"btn_doneapp";
			this->btn_doneapp->Size = System::Drawing::Size(131, 43);
			this->btn_doneapp->TabIndex = 11;
			this->btn_doneapp->Text = L"Done";
			this->btn_doneapp->UseVisualStyleBackColor = false;
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Appointment::btn_signup_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(517, 433);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 28);
			this->label2->TabIndex = 29;
			// 
			// txt_guardianapp
			// 
			this->txt_guardianapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_guardianapp->Location = System::Drawing::Point(539, 293);
			this->txt_guardianapp->Name = L"txt_guardianapp";
			this->txt_guardianapp->Size = System::Drawing::Size(445, 39);
			this->txt_guardianapp->TabIndex = 28;
			// 
			// lbl_guardianapp
			// 
			this->lbl_guardianapp->AutoSize = true;
			this->lbl_guardianapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_guardianapp->ForeColor = System::Drawing::Color::White;
			this->lbl_guardianapp->Location = System::Drawing::Point(526, 257);
			this->lbl_guardianapp->Name = L"lbl_guardianapp";
			this->lbl_guardianapp->Size = System::Drawing::Size(110, 28);
			this->lbl_guardianapp->TabIndex = 27;
			this->lbl_guardianapp->Text = L"Guardian";
			// 
			// cmb_yearapp
			// 
			this->cmb_yearapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearapp->FormattingEnabled = true;
			this->cmb_yearapp->Location = System::Drawing::Point(849, 111);
			this->cmb_yearapp->Name = L"cmb_yearapp";
			this->cmb_yearapp->Size = System::Drawing::Size(135, 36);
			this->cmb_yearapp->TabIndex = 26;
			// 
			// cmb_dayapp
			// 
			this->cmb_dayapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_dayapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_dayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_dayapp->FormattingEnabled = true;
			this->cmb_dayapp->Location = System::Drawing::Point(757, 111);
			this->cmb_dayapp->Name = L"cmb_dayapp";
			this->cmb_dayapp->Size = System::Drawing::Size(83, 36);
			this->cmb_dayapp->TabIndex = 25;
			// 
			// cmb_monthapp
			// 
			this->cmb_monthapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthapp->FormattingEnabled = true;
			this->cmb_monthapp->Location = System::Drawing::Point(539, 111);
			this->cmb_monthapp->Name = L"cmb_monthapp";
			this->cmb_monthapp->Size = System::Drawing::Size(212, 36);
			this->cmb_monthapp->TabIndex = 24;
			// 
			// lbl_genderapp
			// 
			this->lbl_genderapp->AutoSize = true;
			this->lbl_genderapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_genderapp->ForeColor = System::Drawing::Color::White;
			this->lbl_genderapp->Location = System::Drawing::Point(544, 167);
			this->lbl_genderapp->Name = L"lbl_genderapp";
			this->lbl_genderapp->Size = System::Drawing::Size(90, 28);
			this->lbl_genderapp->TabIndex = 22;
			this->lbl_genderapp->Text = L"Gender";
			// 
			// lbl_birthdayapp
			// 
			this->lbl_birthdayapp->AutoSize = true;
			this->lbl_birthdayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_birthdayapp->ForeColor = System::Drawing::Color::White;
			this->lbl_birthdayapp->Location = System::Drawing::Point(544, 75);
			this->lbl_birthdayapp->Name = L"lbl_birthdayapp";
			this->lbl_birthdayapp->Size = System::Drawing::Size(115, 28);
			this->lbl_birthdayapp->TabIndex = 20;
			this->lbl_birthdayapp->Text = L"Birthdate";
			// 
			// txt_mobilenumberapp
			// 
			this->txt_mobilenumberapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_mobilenumberapp->Location = System::Drawing::Point(45, 480);
			this->txt_mobilenumberapp->Name = L"txt_mobilenumberapp";
			this->txt_mobilenumberapp->Size = System::Drawing::Size(445, 39);
			this->txt_mobilenumberapp->TabIndex = 19;
			// 
			// lbl_mobilenumberapp
			// 
			this->lbl_mobilenumberapp->AutoSize = true;
			this->lbl_mobilenumberapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mobilenumberapp->ForeColor = System::Drawing::Color::White;
			this->lbl_mobilenumberapp->Location = System::Drawing::Point(40, 444);
			this->lbl_mobilenumberapp->Name = L"lbl_mobilenumberapp";
			this->lbl_mobilenumberapp->Size = System::Drawing::Size(176, 28);
			this->lbl_mobilenumberapp->TabIndex = 18;
			this->lbl_mobilenumberapp->Text = L"Mobile Number";
			// 
			// txt_homeaddressapp
			// 
			this->txt_homeaddressapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_homeaddressapp->Location = System::Drawing::Point(45, 384);
			this->txt_homeaddressapp->Name = L"txt_homeaddressapp";
			this->txt_homeaddressapp->Size = System::Drawing::Size(445, 39);
			this->txt_homeaddressapp->TabIndex = 17;
			// 
			// lbl_homeaddressapp
			// 
			this->lbl_homeaddressapp->AutoSize = true;
			this->lbl_homeaddressapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_homeaddressapp->ForeColor = System::Drawing::Color::White;
			this->lbl_homeaddressapp->Location = System::Drawing::Point(40, 348);
			this->lbl_homeaddressapp->Name = L"lbl_homeaddressapp";
			this->lbl_homeaddressapp->Size = System::Drawing::Size(170, 28);
			this->lbl_homeaddressapp->TabIndex = 16;
			this->lbl_homeaddressapp->Text = L"Home Address";
			// 
			// txt_lastnameapp
			// 
			this->txt_lastnameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_lastnameapp->Location = System::Drawing::Point(45, 293);
			this->txt_lastnameapp->Name = L"txt_lastnameapp";
			this->txt_lastnameapp->Size = System::Drawing::Size(445, 39);
			this->txt_lastnameapp->TabIndex = 15;
			// 
			// lbl_lastnameapp
			// 
			this->lbl_lastnameapp->AutoSize = true;
			this->lbl_lastnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lastnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_lastnameapp->Location = System::Drawing::Point(40, 257);
			this->lbl_lastnameapp->Name = L"lbl_lastnameapp";
			this->lbl_lastnameapp->Size = System::Drawing::Size(129, 28);
			this->lbl_lastnameapp->TabIndex = 14;
			this->lbl_lastnameapp->Text = L"Last Name";
			// 
			// txt_middlenameapp
			// 
			this->txt_middlenameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_middlenameapp->Location = System::Drawing::Point(45, 203);
			this->txt_middlenameapp->Name = L"txt_middlenameapp";
			this->txt_middlenameapp->Size = System::Drawing::Size(445, 39);
			this->txt_middlenameapp->TabIndex = 13;
			// 
			// lbl_middlenameapp
			// 
			this->lbl_middlenameapp->AutoSize = true;
			this->lbl_middlenameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_middlenameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_middlenameapp->Location = System::Drawing::Point(40, 167);
			this->lbl_middlenameapp->Name = L"lbl_middlenameapp";
			this->lbl_middlenameapp->Size = System::Drawing::Size(154, 28);
			this->lbl_middlenameapp->TabIndex = 12;
			this->lbl_middlenameapp->Text = L"Middle Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(45, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 4);
			this->panel2->TabIndex = 10;
			// 
			// txt_firstnameapp
			// 
			this->txt_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstnameapp->Location = System::Drawing::Point(45, 111);
			this->txt_firstnameapp->Name = L"txt_firstnameapp";
			this->txt_firstnameapp->Size = System::Drawing::Size(445, 39);
			this->txt_firstnameapp->TabIndex = 5;
			// 
			// lbl_firstnameapp
			// 
			this->lbl_firstnameapp->AutoSize = true;
			this->lbl_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_firstnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_firstnameapp->Location = System::Drawing::Point(40, 75);
			this->lbl_firstnameapp->Name = L"lbl_firstnameapp";
			this->lbl_firstnameapp->Size = System::Drawing::Size(132, 28);
			this->lbl_firstnameapp->TabIndex = 2;
			this->lbl_firstnameapp->Text = L"First Name";
			// 
			// lbl_appmnt
			// 
			this->lbl_appmnt->AutoSize = true;
			this->lbl_appmnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_appmnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_appmnt->ForeColor = System::Drawing::Color::White;
			this->lbl_appmnt->Location = System::Drawing::Point(40, 20);
			this->lbl_appmnt->Name = L"lbl_appmnt";
			this->lbl_appmnt->Size = System::Drawing::Size(151, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Appointment";
			// 
			// rb_female
			// 
			this->rb_female->AutoSize = true;
			this->rb_female->BackColor = System::Drawing::Color::Transparent;
			this->rb_female->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_female->ForeColor = System::Drawing::Color::White;
			this->rb_female->Location = System::Drawing::Point(681, 203);
			this->rb_female->Name = L"rb_female";
			this->rb_female->Size = System::Drawing::Size(136, 40);
			this->rb_female->TabIndex = 33;
			this->rb_female->TabStop = true;
			this->rb_female->Text = L"Female";
			this->rb_female->UseVisualStyleBackColor = false;
			// 
			// Appointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_app);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Appointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Appointment";
			this->Load += gcnew System::EventHandler(this, &Appointment::Appointment_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);

		
	private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Hide();
		

	}

		 
private: System::Void btn_signup_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ lastname = txt_lastnameapp->Text;
	String^ middlename = txt_middlenameapp->Text;
	String^ firstname = txt_firstnameapp->Text;
	String^ homeadrress = txt_homeaddressapp->Text;
	String^ mobilenum = txt_mobilenumberapp->Text;

	String^ month = cmb_monthapp->Text;
	int^ indexm = cmb_monthapp->SelectedIndex;

	String^ day = cmb_dayapp->Text;
	int^ indexd = cmb_dayapp->SelectedIndex;

	String^ year = cmb_yearapp->Text;
	int^ indexy = cmb_yearapp->SelectedIndex;




	String^ birthdate = String::Format("{0}-{1}-{2}", indexm, indexd, indexy);
	String^ gender;

	if (rb_male->Checked) gender = "Male";
	else if (rb_female->Checked) gender = "Female";


	String^ guardian = txt_guardianapp->Text;
	String^ guardianmobilenum = txt_gmobilenumapp->Text;

	if (dbhospms_connect->State == ConnectionState::Closed) {
		dbhospms_connect->Open();
	}

	

	String^ cmdString = "INSERT INTO hosp_appmnt (Appmnt_lastname, Appmnt_firstname, Appmnt_midlename,  Appmnt_homeaddress, Appmnt_contactnum, Appmnt_birthdate, Appmnt_gender, Appmnt_guardianname,  Appmnt_guardianmobilenum) " +
		"VALUES (@lastname, @firstname, @middlename, @homeaddress, @contactnum, @birthdate, @gender, @guardianname, @guardianmobilenum)";

	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, dbhospms_connect);

	// Add parameters to the SQL command
	cmd->Parameters->AddWithValue("@lastname", lastname);
	cmd->Parameters->AddWithValue("@firstname", firstname);
	cmd->Parameters->AddWithValue("@middlename", middlename);
	cmd->Parameters->AddWithValue("@homeaddress", homeadrress);
	cmd->Parameters->AddWithValue("@contactnum", mobilenum);
	cmd->Parameters->AddWithValue("@birthdate", birthdate);
	cmd->Parameters->AddWithValue("@gender", gender);
	cmd->Parameters->AddWithValue("@guardianname", guardian);
	cmd->Parameters->AddWithValue("@guardianmobilenum", guardianmobilenum);

	try {
		// Execute the command
		cmd->ExecuteNonQuery();

		// Close the connection if it is open
		if (dbhospms_connect->State == ConnectionState::Open) {
			dbhospms_connect->Close();
			
			
		}
			this->Hide();
			Appointment2^ showappmnt2 = gcnew Appointment2(mobilenum);
			showappmnt2->Show();
		MessageBox::Show("Appointment added successfully!");

	}
	catch (Exception^ e) {
		MessageBox::Show("Data Insert Failed: " + e->Message);
	}



	
	
}

private: System::Void Appointment_Load(System::Object^ sender, System::EventArgs^ e) {
	


	try {
		dbhospms_connect->Open();
		MessageBox::Show("Connection Established Succeeded.");
	}
	catch (Exception^ e) {
		MessageBox::Show("Connection Error!");
	}





	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;





	btn_doneapp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_doneapp->BackColor = System::Drawing::Color::MidnightBlue;
	btn_doneapp->FlatAppearance->BorderSize = 0;
	btn_doneapp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_doneapp->ForeColor = System::Drawing::Color::White;

	Color RedTransparent = Color::FromArgb(130, 255, 0, 0);

	pnl_app->BackColor = RedTransparent;

	lbl_appmnt->ForeColor = Color::White;
	lbl_appmnt->BackColor = Color::Transparent;

	lbl_firstnameapp->ForeColor = Color::White;
	lbl_firstnameapp->BackColor = Color::Transparent;

	lbl_middlenameapp->ForeColor = Color::White;
	lbl_middlenameapp->BackColor = Color::Transparent;

	lbl_lastnameapp->ForeColor = Color::White;
	lbl_lastnameapp->BackColor = Color::Transparent;

	lbl_homeaddressapp->ForeColor = Color::White;
	lbl_homeaddressapp->BackColor = Color::Transparent;

	lbl_mobilenumberapp->ForeColor = Color::White;
	lbl_mobilenumberapp->BackColor = Color::Transparent;

	lbl_birthdayapp->ForeColor = Color::White;
	lbl_birthdayapp->BackColor = Color::Transparent;

	lbl_genderapp->ForeColor = Color::White;
	lbl_genderapp->BackColor = Color::Transparent;

	lbl_guardianapp->ForeColor = Color::White;
	lbl_guardianapp->BackColor = Color::Transparent;

	lbl_gmobilenumapp->ForeColor = Color::White;
	lbl_gmobilenumapp->BackColor = Color::Transparent;




}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
