#pragma once
#include "Patient3.h"
namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Patient2
	/// </summary>
	public ref class Patient2 : public System::Windows::Forms::Form
	{
	private:
		String^ mobilenumpnt;
	public:

		void fillincmb()
		{
			cmb_Days();
			cmb_Month();
			cmb_Year();
		}

		void cmb_Month()
		{
			array<String^>^ months = gcnew array<String^> {
				"January", "February", "March", "April", "May", "June",
					"July", "August", "September", "October", "November", "December"
			};

			this->cmb_monthpntg->Items->AddRange(months);

		};

		void cmb_Days()
		{
			for (int i = 1; i <= 31; ++i)
			{
				this->cmb_daypntg->Items->Add(i.ToString());
			}
		}

		void cmb_Year() {
			for (int i = 2024; i >= 1900; --i) {
				this->cmb_yearpntg->Items->Add(i.ToString());
			}
		}
		Patient2(String^ mobilenumpnt)
		{
			InitializeComponent();
			fillincmb();

			this->mobilenumpnt = mobilenumpnt;
		}

		Patient2(void)
		{
			InitializeComponent();
			fillincmb();

			this->mobilenumpnt = mobilenumpnt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient2()
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
	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmb_yearpntg;

	private: System::Windows::Forms::ComboBox^ cmb_daypntg;

	private: System::Windows::Forms::ComboBox^ cmb_monthpntg;

	private: System::Windows::Forms::Label^ lbl_genderapp;
	private: System::Windows::Forms::Label^ lbl_birthdayapp;
	private: System::Windows::Forms::TextBox^ txt_mobilenumberpntg;

	private: System::Windows::Forms::Label^ lbl_mobilenumberapp;
	private: System::Windows::Forms::TextBox^ txt_homeaddresspntg;

	private: System::Windows::Forms::Label^ lbl_homeaddressapp;
	private: System::Windows::Forms::TextBox^ txt_lastnamepntg;

	private: System::Windows::Forms::Label^ lbl_lastnameapp;
	private: System::Windows::Forms::TextBox^ txt_middlenamepntg;

	private: System::Windows::Forms::Label^ lbl_middlenameapp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txt_firstnamepntg;

	private: System::Windows::Forms::Label^ lbl_firstnameapp;
	private: System::Windows::Forms::Label^ lbl_appmnt;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient2::typeid));
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->rb_female = (gcnew System::Windows::Forms::RadioButton());
			this->rb_male = (gcnew System::Windows::Forms::RadioButton());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmb_yearpntg = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_daypntg = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_monthpntg = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_genderapp = (gcnew System::Windows::Forms::Label());
			this->lbl_birthdayapp = (gcnew System::Windows::Forms::Label());
			this->txt_mobilenumberpntg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mobilenumberapp = (gcnew System::Windows::Forms::Label());
			this->txt_homeaddresspntg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_homeaddressapp = (gcnew System::Windows::Forms::Label());
			this->txt_lastnamepntg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_lastnameapp = (gcnew System::Windows::Forms::Label());
			this->txt_middlenamepntg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_middlenameapp = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_firstnamepntg = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstnameapp = (gcnew System::Windows::Forms::Label());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Patient2::btn_homeappmnt_Click);
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
			this->panel1->TabIndex = 2;
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->rb_female);
			this->pnl_app->Controls->Add(this->rb_male);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->cmb_yearpntg);
			this->pnl_app->Controls->Add(this->cmb_daypntg);
			this->pnl_app->Controls->Add(this->cmb_monthpntg);
			this->pnl_app->Controls->Add(this->lbl_genderapp);
			this->pnl_app->Controls->Add(this->lbl_birthdayapp);
			this->pnl_app->Controls->Add(this->txt_mobilenumberpntg);
			this->pnl_app->Controls->Add(this->lbl_mobilenumberapp);
			this->pnl_app->Controls->Add(this->txt_homeaddresspntg);
			this->pnl_app->Controls->Add(this->lbl_homeaddressapp);
			this->pnl_app->Controls->Add(this->txt_lastnamepntg);
			this->pnl_app->Controls->Add(this->lbl_lastnameapp);
			this->pnl_app->Controls->Add(this->txt_middlenamepntg);
			this->pnl_app->Controls->Add(this->lbl_middlenameapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->txt_firstnamepntg);
			this->pnl_app->Controls->Add(this->lbl_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 22;
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Patient2::btn_doneapp_Click);
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
			// cmb_yearpntg
			// 
			this->cmb_yearpntg->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearpntg->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearpntg->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearpntg->FormattingEnabled = true;
			this->cmb_yearpntg->Location = System::Drawing::Point(849, 111);
			this->cmb_yearpntg->Name = L"cmb_yearpntg";
			this->cmb_yearpntg->Size = System::Drawing::Size(135, 36);
			this->cmb_yearpntg->TabIndex = 26;
			// 
			// cmb_daypntg
			// 
			this->cmb_daypntg->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_daypntg->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_daypntg->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_daypntg->FormattingEnabled = true;
			this->cmb_daypntg->Location = System::Drawing::Point(757, 111);
			this->cmb_daypntg->Name = L"cmb_daypntg";
			this->cmb_daypntg->Size = System::Drawing::Size(83, 36);
			this->cmb_daypntg->TabIndex = 25;
			// 
			// cmb_monthpntg
			// 
			this->cmb_monthpntg->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthpntg->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthpntg->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthpntg->FormattingEnabled = true;
			this->cmb_monthpntg->Location = System::Drawing::Point(539, 111);
			this->cmb_monthpntg->Name = L"cmb_monthpntg";
			this->cmb_monthpntg->Size = System::Drawing::Size(212, 36);
			this->cmb_monthpntg->TabIndex = 24;
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
			this->lbl_birthdayapp->Size = System::Drawing::Size(220, 28);
			this->lbl_birthdayapp->TabIndex = 20;
			this->lbl_birthdayapp->Text = L"Guardian Birthdate";
			// 
			// txt_mobilenumberpntg
			// 
			this->txt_mobilenumberpntg->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_mobilenumberpntg->Location = System::Drawing::Point(45, 480);
			this->txt_mobilenumberpntg->Name = L"txt_mobilenumberpntg";
			this->txt_mobilenumberpntg->Size = System::Drawing::Size(445, 39);
			this->txt_mobilenumberpntg->TabIndex = 19;
			// 
			// lbl_mobilenumberapp
			// 
			this->lbl_mobilenumberapp->AutoSize = true;
			this->lbl_mobilenumberapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mobilenumberapp->ForeColor = System::Drawing::Color::White;
			this->lbl_mobilenumberapp->Location = System::Drawing::Point(40, 444);
			this->lbl_mobilenumberapp->Name = L"lbl_mobilenumberapp";
			this->lbl_mobilenumberapp->Size = System::Drawing::Size(281, 28);
			this->lbl_mobilenumberapp->TabIndex = 18;
			this->lbl_mobilenumberapp->Text = L"Guardian Mobile Number";
			// 
			// txt_homeaddresspntg
			// 
			this->txt_homeaddresspntg->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_homeaddresspntg->Location = System::Drawing::Point(45, 384);
			this->txt_homeaddresspntg->Name = L"txt_homeaddresspntg";
			this->txt_homeaddresspntg->Size = System::Drawing::Size(445, 39);
			this->txt_homeaddresspntg->TabIndex = 17;
			// 
			// lbl_homeaddressapp
			// 
			this->lbl_homeaddressapp->AutoSize = true;
			this->lbl_homeaddressapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_homeaddressapp->ForeColor = System::Drawing::Color::White;
			this->lbl_homeaddressapp->Location = System::Drawing::Point(40, 348);
			this->lbl_homeaddressapp->Name = L"lbl_homeaddressapp";
			this->lbl_homeaddressapp->Size = System::Drawing::Size(275, 28);
			this->lbl_homeaddressapp->TabIndex = 16;
			this->lbl_homeaddressapp->Text = L"Guardian Home Address";
			// 
			// txt_lastnamepntg
			// 
			this->txt_lastnamepntg->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_lastnamepntg->Location = System::Drawing::Point(45, 293);
			this->txt_lastnamepntg->Name = L"txt_lastnamepntg";
			this->txt_lastnamepntg->Size = System::Drawing::Size(445, 39);
			this->txt_lastnamepntg->TabIndex = 15;
			// 
			// lbl_lastnameapp
			// 
			this->lbl_lastnameapp->AutoSize = true;
			this->lbl_lastnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lastnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_lastnameapp->Location = System::Drawing::Point(40, 257);
			this->lbl_lastnameapp->Name = L"lbl_lastnameapp";
			this->lbl_lastnameapp->Size = System::Drawing::Size(234, 28);
			this->lbl_lastnameapp->TabIndex = 14;
			this->lbl_lastnameapp->Text = L"Guardian Last Name";
			// 
			// txt_middlenamepntg
			// 
			this->txt_middlenamepntg->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_middlenamepntg->Location = System::Drawing::Point(45, 203);
			this->txt_middlenamepntg->Name = L"txt_middlenamepntg";
			this->txt_middlenamepntg->Size = System::Drawing::Size(445, 39);
			this->txt_middlenamepntg->TabIndex = 13;
			// 
			// lbl_middlenameapp
			// 
			this->lbl_middlenameapp->AutoSize = true;
			this->lbl_middlenameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_middlenameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_middlenameapp->Location = System::Drawing::Point(40, 167);
			this->lbl_middlenameapp->Name = L"lbl_middlenameapp";
			this->lbl_middlenameapp->Size = System::Drawing::Size(259, 28);
			this->lbl_middlenameapp->TabIndex = 12;
			this->lbl_middlenameapp->Text = L"Guardian Middle Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(45, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 4);
			this->panel2->TabIndex = 10;
			// 
			// txt_firstnamepntg
			// 
			this->txt_firstnamepntg->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstnamepntg->Location = System::Drawing::Point(45, 111);
			this->txt_firstnamepntg->Name = L"txt_firstnamepntg";
			this->txt_firstnamepntg->Size = System::Drawing::Size(445, 39);
			this->txt_firstnamepntg->TabIndex = 5;
			// 
			// lbl_firstnameapp
			// 
			this->lbl_firstnameapp->AutoSize = true;
			this->lbl_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_firstnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_firstnameapp->Location = System::Drawing::Point(40, 75);
			this->lbl_firstnameapp->Name = L"lbl_firstnameapp";
			this->lbl_firstnameapp->Size = System::Drawing::Size(237, 28);
			this->lbl_firstnameapp->TabIndex = 2;
			this->lbl_firstnameapp->Text = L"Gaurdian First Name";
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
			this->lbl_appmnt->Size = System::Drawing::Size(90, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Patient";
			// 
			// Patient2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_app);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Patient2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient2";
			this->Load += gcnew System::EventHandler(this, &Patient2::Patient2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);


	private: System::Void Patient2_Load(System::Object^ sender, System::EventArgs^ e) {
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





		
	}
private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ glastname = txt_lastnamepntg->Text;
	String^ gmiddlename = txt_middlenamepntg->Text;
	String^ gfirstname = txt_firstnamepntg->Text;
	String^ ghomeadrress = txt_homeaddresspntg->Text;
	String^ gmobilenum = txt_mobilenumberpntg->Text;

	String^ month = cmb_monthpntg->Text;
	int^ indexm = cmb_monthpntg->SelectedIndex;

	String^ day = cmb_daypntg->Text;
	int^ indexd = cmb_daypntg->SelectedIndex;

	String^ year = cmb_yearpntg->Text;
	int^ indexy = cmb_yearpntg->SelectedIndex;




	String^ gbirthdate = String::Format("{0}-{1}-{2}", indexm, indexd, indexy);
	String^ ggender;

	if (rb_male->Checked) ggender = "Male";
	else if (rb_female->Checked) ggender = "Female";


	if (dbhospms_connect->State == ConnectionState::Closed) {
		dbhospms_connect->Open();
	}



	String^ cmdString = "UPDATE hosp_admtinfo SET Admt_glastname = @lastname, Admt_gfirstname = @firstname, Admt_gmidlename = @middlename,  Admt_gaddress = @homeaddress, Admt_gcontactmum = @contactnum, Admt_gbirthdate = @birthdate, Admt_ggender = @gender WHERE Admt_contactmum = @tcontactnum";
		

	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, dbhospms_connect);

	// Add parameters to the SQL command
	cmd->Parameters->AddWithValue("@lastname", glastname);
	cmd->Parameters->AddWithValue("@firstname", gfirstname);
	cmd->Parameters->AddWithValue("@middlename", gmiddlename);
	cmd->Parameters->AddWithValue("@homeaddress", ghomeadrress);
	cmd->Parameters->AddWithValue("@contactnum", gmobilenum);
	cmd->Parameters->AddWithValue("@birthdate", gbirthdate);
	cmd->Parameters->AddWithValue("@gender", ggender);
	cmd->Parameters->AddWithValue("@tcontactnum", mobilenumpnt);

	try {
		// Execute the command
		cmd->ExecuteNonQuery();

		// Close the connection if it is open
		if (dbhospms_connect->State == ConnectionState::Open) {
			dbhospms_connect->Close();


		}

		Patient3^ showpatient3 = gcnew Patient3(mobilenumpnt);
		showpatient3->Show();
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
