#pragma once
#include "Patient2.h"

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for Patient
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	public:
		void fillincmb()
		{
			cmb_Dayspnt();
			cmb_Monthpnt();
			cmb_Yearpnt();
		}



		void cmb_Monthpnt()
		{
			array<String^>^ month = gcnew array<String^> {
				"January", "February", "March", "April", "May", "June",
					"July", "August", "September", "October", "November", "December"
			};

			this->cmb_monthpnt->Items->AddRange(month);

		};

		void cmb_Dayspnt()
		{
			for (int i = 1; i <= 31; ++i)
			{
				this->cmb_daypnt->Items->Add(i.ToString());
			}
		}

		void cmb_Yearpnt() {
			for (int i = 2024; i >= 1900; --i) {
				this->cmb_yearpnt->Items->Add(i.ToString());
			}
		}
	

	
	public:
		
		Patient(void)
		{
			InitializeComponent();
			fillincmb();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient()
		{
			if (components)
			{
				delete components;
			}
		}

	
		


	private: System::Windows::Forms::Button^ btn_homeappmnt;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnl_app;
	private: System::Windows::Forms::RadioButton^ rb_female;
	private: System::Windows::Forms::RadioButton^ rb_male;
	private: System::Windows::Forms::Button^ btn_donepnt;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmb_yearpnt;



	private: System::Windows::Forms::ComboBox^ cmb_daypnt;

	private: System::Windows::Forms::ComboBox^ cmb_monthpnt;

	private: System::Windows::Forms::Label^ lbl_genderapp;
	private: System::Windows::Forms::Label^ lbl_birthdayapp;
	private: System::Windows::Forms::TextBox^ txt_mobilenumberpnt;

	private: System::Windows::Forms::Label^ lbl_mobilenumberapp;
	private: System::Windows::Forms::TextBox^ txt_homeaddresspnt;

	private: System::Windows::Forms::Label^ lbl_homeaddressapp;
	private: System::Windows::Forms::TextBox^ txt_lastnamepnt;

	private: System::Windows::Forms::Label^ lbl_lastnameapp;
	private: System::Windows::Forms::TextBox^ txt_middlenamepnt;

	private: System::Windows::Forms::Label^ lbl_middlenameapp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txt_firstnamepnt;

	private: System::Windows::Forms::Label^ lbl_firstnameapp;
	private: System::Windows::Forms::Label^ lbl_pnt;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->rb_female = (gcnew System::Windows::Forms::RadioButton());
			this->rb_male = (gcnew System::Windows::Forms::RadioButton());
			this->btn_donepnt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmb_yearpnt = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_daypnt = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_monthpnt = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_genderapp = (gcnew System::Windows::Forms::Label());
			this->lbl_birthdayapp = (gcnew System::Windows::Forms::Label());
			this->txt_mobilenumberpnt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mobilenumberapp = (gcnew System::Windows::Forms::Label());
			this->txt_homeaddresspnt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_homeaddressapp = (gcnew System::Windows::Forms::Label());
			this->txt_lastnamepnt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_lastnameapp = (gcnew System::Windows::Forms::Label());
			this->txt_middlenamepnt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_middlenameapp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_firstnamepnt = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstnameapp = (gcnew System::Windows::Forms::Label());
			this->lbl_pnt = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->pnl_app->SuspendLayout();
			this->SuspendLayout();
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Patient::btn_homeappmnt_Click);
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
			this->panel1->TabIndex = 1;
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->rb_female);
			this->pnl_app->Controls->Add(this->rb_male);
			this->pnl_app->Controls->Add(this->btn_donepnt);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->cmb_yearpnt);
			this->pnl_app->Controls->Add(this->cmb_daypnt);
			this->pnl_app->Controls->Add(this->cmb_monthpnt);
			this->pnl_app->Controls->Add(this->lbl_genderapp);
			this->pnl_app->Controls->Add(this->lbl_birthdayapp);
			this->pnl_app->Controls->Add(this->txt_mobilenumberpnt);
			this->pnl_app->Controls->Add(this->lbl_mobilenumberapp);
			this->pnl_app->Controls->Add(this->txt_homeaddresspnt);
			this->pnl_app->Controls->Add(this->lbl_homeaddressapp);
			this->pnl_app->Controls->Add(this->txt_lastnamepnt);
			this->pnl_app->Controls->Add(this->lbl_lastnameapp);
			this->pnl_app->Controls->Add(this->txt_middlenamepnt);
			this->pnl_app->Controls->Add(this->lbl_middlenameapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->txt_firstnamepnt);
			this->pnl_app->Controls->Add(this->lbl_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_pnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 21;
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
			// 
			// btn_donepnt
			// 
			this->btn_donepnt->BackColor = System::Drawing::Color::RoyalBlue;
			this->btn_donepnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_donepnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_donepnt->ForeColor = System::Drawing::Color::White;
			this->btn_donepnt->Location = System::Drawing::Point(836, 514);
			this->btn_donepnt->Name = L"btn_donepnt";
			this->btn_donepnt->Size = System::Drawing::Size(131, 43);
			this->btn_donepnt->TabIndex = 11;
			this->btn_donepnt->Text = L"Done";
			this->btn_donepnt->UseVisualStyleBackColor = false;
			this->btn_donepnt->Click += gcnew System::EventHandler(this, &Patient::btn_doneapp_Click);
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
			// cmb_yearpnt
			// 
			this->cmb_yearpnt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearpnt->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearpnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearpnt->FormattingEnabled = true;
			this->cmb_yearpnt->Location = System::Drawing::Point(849, 111);
			this->cmb_yearpnt->Name = L"cmb_yearpnt";
			this->cmb_yearpnt->Size = System::Drawing::Size(135, 36);
			this->cmb_yearpnt->TabIndex = 26;
			// 
			// cmb_daypnt
			// 
			this->cmb_daypnt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_daypnt->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_daypnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_daypnt->FormattingEnabled = true;
			this->cmb_daypnt->Location = System::Drawing::Point(757, 111);
			this->cmb_daypnt->Name = L"cmb_daypnt";
			this->cmb_daypnt->Size = System::Drawing::Size(83, 36);
			this->cmb_daypnt->TabIndex = 25;
			// 
			// cmb_monthpnt
			// 
			this->cmb_monthpnt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthpnt->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthpnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthpnt->FormattingEnabled = true;
			this->cmb_monthpnt->Location = System::Drawing::Point(539, 111);
			this->cmb_monthpnt->Name = L"cmb_monthpnt";
			this->cmb_monthpnt->Size = System::Drawing::Size(212, 36);
			this->cmb_monthpnt->TabIndex = 24;
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
			// txt_mobilenumberpnt
			// 
			this->txt_mobilenumberpnt->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_mobilenumberpnt->Location = System::Drawing::Point(45, 480);
			this->txt_mobilenumberpnt->Name = L"txt_mobilenumberpnt";
			this->txt_mobilenumberpnt->Size = System::Drawing::Size(445, 39);
			this->txt_mobilenumberpnt->TabIndex = 19;
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
			// txt_homeaddresspnt
			// 
			this->txt_homeaddresspnt->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_homeaddresspnt->Location = System::Drawing::Point(45, 384);
			this->txt_homeaddresspnt->Name = L"txt_homeaddresspnt";
			this->txt_homeaddresspnt->Size = System::Drawing::Size(445, 39);
			this->txt_homeaddresspnt->TabIndex = 17;
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
			// txt_lastnamepnt
			// 
			this->txt_lastnamepnt->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_lastnamepnt->Location = System::Drawing::Point(45, 293);
			this->txt_lastnamepnt->Name = L"txt_lastnamepnt";
			this->txt_lastnamepnt->Size = System::Drawing::Size(445, 39);
			this->txt_lastnamepnt->TabIndex = 15;
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
			// txt_middlenamepnt
			// 
			this->txt_middlenamepnt->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_middlenamepnt->Location = System::Drawing::Point(45, 203);
			this->txt_middlenamepnt->Name = L"txt_middlenamepnt";
			this->txt_middlenamepnt->Size = System::Drawing::Size(445, 39);
			this->txt_middlenamepnt->TabIndex = 13;
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
			// txt_firstnamepnt
			// 
			this->txt_firstnamepnt->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstnamepnt->Location = System::Drawing::Point(45, 111);
			this->txt_firstnamepnt->Name = L"txt_firstnamepnt";
			this->txt_firstnamepnt->Size = System::Drawing::Size(445, 39);
			this->txt_firstnamepnt->TabIndex = 5;
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
			// lbl_pnt
			// 
			this->lbl_pnt->AutoSize = true;
			this->lbl_pnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_pnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_pnt->ForeColor = System::Drawing::Color::White;
			this->lbl_pnt->Location = System::Drawing::Point(40, 20);
			this->lbl_pnt->Name = L"lbl_pnt";
			this->lbl_pnt->Size = System::Drawing::Size(90, 28);
			this->lbl_pnt->TabIndex = 0;
			this->lbl_pnt->Text = L"Patient";
			// 
			// Patient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_app);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Patient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient";
			this->Load += gcnew System::EventHandler(this, &Patient::Patient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);

	private: System::Void Patient_Load(System::Object^ sender, System::EventArgs^ e) {
		btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
		btn_homeappmnt->FlatAppearance->BorderSize = 0;
		btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;

		btn_donepnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_donepnt->BackColor = System::Drawing::Color::MidnightBlue;
		btn_donepnt->FlatAppearance->BorderSize = 0;
		btn_donepnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_donepnt->ForeColor = System::Drawing::Color::White;

		Color RedTransparent = Color::FromArgb(130, 255, 0, 0); 
		
		pnl_app->BackColor = RedTransparent;

		lbl_pnt->ForeColor = Color::White;
		lbl_pnt->BackColor = Color::Transparent;

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

		





	}
private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ lastnamepnt = txt_lastnamepnt->Text;
	String^ middlenamepnt = txt_middlenamepnt->Text;
	String^ firstnamepnt = txt_firstnamepnt->Text;
	String^ homeadrresspnt = txt_homeaddresspnt->Text;
	String^ mobilenumpnt = txt_mobilenumberpnt->Text;

	String^ monthpnt = cmb_monthpnt->Text;
	int^ indexm = cmb_monthpnt->SelectedIndex;

	String^ daypnt = cmb_daypnt->Text;
	int^ indexd = cmb_daypnt->SelectedIndex;

	String^ yearpnt = cmb_yearpnt->Text;
	int^ indexy = cmb_yearpnt->SelectedIndex;




	String^ birthdatepnt = String::Format("{0}-{1}-{2}", indexm, indexd, indexy);
	String^ genderpnt;

	if (rb_male->Checked) genderpnt = "Male";
	else if (rb_female->Checked) genderpnt = "Female";


	if (dbhospms_connect->State == ConnectionState::Closed) {
		dbhospms_connect->Open();
	}



	String^ pntString = "INSERT INTO hosp_admtinfo (Admt_lastname, Admt_firstname, Admt_midlename,  Admt_address, Admt_contactmum, Admt_birthdate, Admt_gender) " +
		"VALUES (@lastname, @firstname, @middlename, @homeaddress, @contactnum, @birthdate, @gender)";

	MySqlCommand^ pnt = gcnew MySqlCommand(pntString, dbhospms_connect);

	// Add parameters to the SQL command
	pnt->Parameters->AddWithValue("@lastname", lastnamepnt);
	pnt->Parameters->AddWithValue("@firstname", firstnamepnt);
	pnt->Parameters->AddWithValue("@middlename", middlenamepnt);
	pnt->Parameters->AddWithValue("@homeaddress", homeadrresspnt);
	pnt->Parameters->AddWithValue("@contactnum", mobilenumpnt);
	pnt->Parameters->AddWithValue("@birthdate", birthdatepnt);
	pnt->Parameters->AddWithValue("@gender", genderpnt);

	try {
		// Execute the command
		pnt->ExecuteNonQuery();

		// Close the connection if it is open
		if (dbhospms_connect->State == ConnectionState::Open) {
			dbhospms_connect->Close();


		}
		Patient2^ showpatient2 = gcnew Patient2(mobilenumpnt);
		showpatient2->Show();
		this->Hide();
		MessageBox::Show("Appointment added successfully!");

	}
	catch (Exception^ e) {
		MessageBox::Show("Data Insert Failed: " + e->Message);
	}
	
}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
};
}
