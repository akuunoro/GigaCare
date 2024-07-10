#pragma once

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddNurse
	/// </summary>
	public ref class AddNurse : public System::Windows::Forms::Form
	{
	public:
		Form^ gobackdr;
		AddNurse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AddNurse(Form^ showns)
		{
			gobackdr = showns;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNurse()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lbl_department;



	private: System::Windows::Forms::RadioButton^ rb_female;
	private: System::Windows::Forms::RadioButton^ rb_male;
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
	private: System::Windows::Forms::TextBox^ txt_firstnameapp;
	private: System::Windows::Forms::Label^ lbl_firstnameapp;
	private: System::Windows::Forms::Label^ lbl_appmnt2;

	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddNurse::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_department = (gcnew System::Windows::Forms::Label());
			this->rb_female = (gcnew System::Windows::Forms::RadioButton());
			this->rb_male = (gcnew System::Windows::Forms::RadioButton());
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
			this->txt_firstnameapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstnameapp = (gcnew System::Windows::Forms::Label());
			this->lbl_appmnt2 = (gcnew System::Windows::Forms::Label());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
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
			this->panel1->TabIndex = 31;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &AddNurse::btn_homeappmnt_Click);
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
			this->pnl_app->Controls->Add(this->textBox1);
			this->pnl_app->Controls->Add(this->lbl_department);
			this->pnl_app->Controls->Add(this->rb_female);
			this->pnl_app->Controls->Add(this->rb_male);
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
			this->pnl_app->Controls->Add(this->txt_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_appmnt2);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 32;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(536, 285);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(445, 39);
			this->textBox1->TabIndex = 98;
			// 
			// lbl_department
			// 
			this->lbl_department->AutoSize = true;
			this->lbl_department->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_department->ForeColor = System::Drawing::Color::White;
			this->lbl_department->Location = System::Drawing::Point(531, 254);
			this->lbl_department->Name = L"lbl_department";
			this->lbl_department->Size = System::Drawing::Size(141, 28);
			this->lbl_department->TabIndex = 97;
			this->lbl_department->Text = L"Department";
			// 
			// rb_female
			// 
			this->rb_female->AutoSize = true;
			this->rb_female->BackColor = System::Drawing::Color::Transparent;
			this->rb_female->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_female->ForeColor = System::Drawing::Color::White;
			this->rb_female->Location = System::Drawing::Point(678, 195);
			this->rb_female->Name = L"rb_female";
			this->rb_female->Size = System::Drawing::Size(136, 40);
			this->rb_female->TabIndex = 94;
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
			this->rb_male->Location = System::Drawing::Point(546, 195);
			this->rb_male->Name = L"rb_male";
			this->rb_male->Size = System::Drawing::Size(102, 40);
			this->rb_male->TabIndex = 93;
			this->rb_male->TabStop = true;
			this->rb_male->Text = L"Male";
			this->rb_male->UseVisualStyleBackColor = false;
			// 
			// cmb_yearapp
			// 
			this->cmb_yearapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearapp->FormattingEnabled = true;
			this->cmb_yearapp->Location = System::Drawing::Point(846, 103);
			this->cmb_yearapp->Name = L"cmb_yearapp";
			this->cmb_yearapp->Size = System::Drawing::Size(135, 36);
			this->cmb_yearapp->TabIndex = 92;
			// 
			// cmb_dayapp
			// 
			this->cmb_dayapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_dayapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_dayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_dayapp->FormattingEnabled = true;
			this->cmb_dayapp->Location = System::Drawing::Point(754, 103);
			this->cmb_dayapp->Name = L"cmb_dayapp";
			this->cmb_dayapp->Size = System::Drawing::Size(83, 36);
			this->cmb_dayapp->TabIndex = 91;
			// 
			// cmb_monthapp
			// 
			this->cmb_monthapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthapp->FormattingEnabled = true;
			this->cmb_monthapp->Location = System::Drawing::Point(536, 103);
			this->cmb_monthapp->Name = L"cmb_monthapp";
			this->cmb_monthapp->Size = System::Drawing::Size(212, 36);
			this->cmb_monthapp->TabIndex = 90;
			// 
			// lbl_genderapp
			// 
			this->lbl_genderapp->AutoSize = true;
			this->lbl_genderapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_genderapp->ForeColor = System::Drawing::Color::White;
			this->lbl_genderapp->Location = System::Drawing::Point(531, 164);
			this->lbl_genderapp->Name = L"lbl_genderapp";
			this->lbl_genderapp->Size = System::Drawing::Size(90, 28);
			this->lbl_genderapp->TabIndex = 89;
			this->lbl_genderapp->Text = L"Gender";
			// 
			// lbl_birthdayapp
			// 
			this->lbl_birthdayapp->AutoSize = true;
			this->lbl_birthdayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_birthdayapp->ForeColor = System::Drawing::Color::White;
			this->lbl_birthdayapp->Location = System::Drawing::Point(531, 72);
			this->lbl_birthdayapp->Name = L"lbl_birthdayapp";
			this->lbl_birthdayapp->Size = System::Drawing::Size(115, 28);
			this->lbl_birthdayapp->TabIndex = 88;
			this->lbl_birthdayapp->Text = L"Birthdate";
			this->lbl_birthdayapp->Click += gcnew System::EventHandler(this, &AddNurse::lbl_birthdayapp_Click);
			// 
			// txt_mobilenumberapp
			// 
			this->txt_mobilenumberapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_mobilenumberapp->Location = System::Drawing::Point(42, 472);
			this->txt_mobilenumberapp->Name = L"txt_mobilenumberapp";
			this->txt_mobilenumberapp->Size = System::Drawing::Size(445, 39);
			this->txt_mobilenumberapp->TabIndex = 87;
			// 
			// lbl_mobilenumberapp
			// 
			this->lbl_mobilenumberapp->AutoSize = true;
			this->lbl_mobilenumberapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mobilenumberapp->ForeColor = System::Drawing::Color::White;
			this->lbl_mobilenumberapp->Location = System::Drawing::Point(37, 436);
			this->lbl_mobilenumberapp->Name = L"lbl_mobilenumberapp";
			this->lbl_mobilenumberapp->Size = System::Drawing::Size(176, 28);
			this->lbl_mobilenumberapp->TabIndex = 86;
			this->lbl_mobilenumberapp->Text = L"Mobile Number";
			// 
			// txt_homeaddressapp
			// 
			this->txt_homeaddressapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_homeaddressapp->Location = System::Drawing::Point(42, 376);
			this->txt_homeaddressapp->Name = L"txt_homeaddressapp";
			this->txt_homeaddressapp->Size = System::Drawing::Size(445, 39);
			this->txt_homeaddressapp->TabIndex = 85;
			// 
			// lbl_homeaddressapp
			// 
			this->lbl_homeaddressapp->AutoSize = true;
			this->lbl_homeaddressapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_homeaddressapp->ForeColor = System::Drawing::Color::White;
			this->lbl_homeaddressapp->Location = System::Drawing::Point(37, 340);
			this->lbl_homeaddressapp->Name = L"lbl_homeaddressapp";
			this->lbl_homeaddressapp->Size = System::Drawing::Size(170, 28);
			this->lbl_homeaddressapp->TabIndex = 84;
			this->lbl_homeaddressapp->Text = L"Home Address";
			// 
			// txt_lastnameapp
			// 
			this->txt_lastnameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_lastnameapp->Location = System::Drawing::Point(42, 285);
			this->txt_lastnameapp->Name = L"txt_lastnameapp";
			this->txt_lastnameapp->Size = System::Drawing::Size(445, 39);
			this->txt_lastnameapp->TabIndex = 83;
			// 
			// lbl_lastnameapp
			// 
			this->lbl_lastnameapp->AutoSize = true;
			this->lbl_lastnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lastnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_lastnameapp->Location = System::Drawing::Point(37, 249);
			this->lbl_lastnameapp->Name = L"lbl_lastnameapp";
			this->lbl_lastnameapp->Size = System::Drawing::Size(129, 28);
			this->lbl_lastnameapp->TabIndex = 82;
			this->lbl_lastnameapp->Text = L"Last Name";
			// 
			// txt_middlenameapp
			// 
			this->txt_middlenameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_middlenameapp->Location = System::Drawing::Point(42, 195);
			this->txt_middlenameapp->Name = L"txt_middlenameapp";
			this->txt_middlenameapp->Size = System::Drawing::Size(445, 39);
			this->txt_middlenameapp->TabIndex = 81;
			// 
			// lbl_middlenameapp
			// 
			this->lbl_middlenameapp->AutoSize = true;
			this->lbl_middlenameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_middlenameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_middlenameapp->Location = System::Drawing::Point(37, 159);
			this->lbl_middlenameapp->Name = L"lbl_middlenameapp";
			this->lbl_middlenameapp->Size = System::Drawing::Size(154, 28);
			this->lbl_middlenameapp->TabIndex = 80;
			this->lbl_middlenameapp->Text = L"Middle Name";
			// 
			// txt_firstnameapp
			// 
			this->txt_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstnameapp->Location = System::Drawing::Point(42, 103);
			this->txt_firstnameapp->Name = L"txt_firstnameapp";
			this->txt_firstnameapp->Size = System::Drawing::Size(445, 39);
			this->txt_firstnameapp->TabIndex = 79;
			// 
			// lbl_firstnameapp
			// 
			this->lbl_firstnameapp->AutoSize = true;
			this->lbl_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_firstnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_firstnameapp->Location = System::Drawing::Point(37, 67);
			this->lbl_firstnameapp->Name = L"lbl_firstnameapp";
			this->lbl_firstnameapp->Size = System::Drawing::Size(132, 28);
			this->lbl_firstnameapp->TabIndex = 78;
			this->lbl_firstnameapp->Text = L"First Name";
			// 
			// lbl_appmnt2
			// 
			this->lbl_appmnt2->AutoSize = true;
			this->lbl_appmnt2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_appmnt2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_appmnt2->ForeColor = System::Drawing::Color::White;
			this->lbl_appmnt2->Location = System::Drawing::Point(150, 20);
			this->lbl_appmnt2->Name = L"lbl_appmnt2";
			this->lbl_appmnt2->Size = System::Drawing::Size(76, 28);
			this->lbl_appmnt2->TabIndex = 77;
			this->lbl_appmnt2->Text = L"Nurse";
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &AddNurse::btn_doneapp_Click);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(142, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(103, 4);
			this->panel2->TabIndex = 10;
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
			this->lbl_appmnt->Size = System::Drawing::Size(85, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Doctor";
			this->lbl_appmnt->Click += gcnew System::EventHandler(this, &AddNurse::lbl_appmnt_Click);
			// 
			// AddNurse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_app);
			this->DoubleBuffered = true;
			this->Name = L"AddNurse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddNurse";
			this->Load += gcnew System::EventHandler(this, &AddNurse::AddNurse_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbl_birthdayapp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void lbl_appmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	gobackdr->Show();

}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void AddNurse_Load(System::Object^ sender, System::EventArgs^ e) {
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

	lbl_appmnt2->ForeColor = Color::White;
	lbl_appmnt2->BackColor = Color::Transparent;

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

	lbl_department->ForeColor = Color::White;
	lbl_department->BackColor = Color::Transparent;

	
}
};
}
