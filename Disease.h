#pragma once
#include "Patient4.h"

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Disease
	/// </summary>
	public ref class Disease : public System::Windows::Forms::Form
	{
	private: 
		String^ mobilenumpnt;
	public:
		Disease(String^ mobilenumpnt)
		{
			InitializeComponent();
			this->mobilenumpnt = mobilenumpnt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Disease()
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
















	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Label^ lbl_title;


	private: System::Windows::Forms::RadioButton^ rb1;
	private: System::Windows::Forms::RadioButton^ rb2;
	private: System::Windows::Forms::RadioButton^ rb19;





	private: System::Windows::Forms::RadioButton^ rb18;

	private: System::Windows::Forms::RadioButton^ rb17;

	private: System::Windows::Forms::RadioButton^ rb16;

	private: System::Windows::Forms::RadioButton^ rb15;

	private: System::Windows::Forms::RadioButton^ rb14;

	private: System::Windows::Forms::RadioButton^ rb13;

	private: System::Windows::Forms::RadioButton^ rb12;

	private: System::Windows::Forms::RadioButton^ rb11;

	private: System::Windows::Forms::RadioButton^ rb10;

	private: System::Windows::Forms::RadioButton^ rb9;

	private: System::Windows::Forms::RadioButton^ rb8;

	private: System::Windows::Forms::RadioButton^ rb7;


	private: System::Windows::Forms::RadioButton^ rb6;

	private: System::Windows::Forms::RadioButton^ rb5;

	private: System::Windows::Forms::RadioButton^ rb3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Disease::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->rb19 = (gcnew System::Windows::Forms::RadioButton());
			this->rb18 = (gcnew System::Windows::Forms::RadioButton());
			this->rb17 = (gcnew System::Windows::Forms::RadioButton());
			this->rb16 = (gcnew System::Windows::Forms::RadioButton());
			this->rb15 = (gcnew System::Windows::Forms::RadioButton());
			this->rb14 = (gcnew System::Windows::Forms::RadioButton());
			this->rb13 = (gcnew System::Windows::Forms::RadioButton());
			this->rb12 = (gcnew System::Windows::Forms::RadioButton());
			this->rb11 = (gcnew System::Windows::Forms::RadioButton());
			this->rb10 = (gcnew System::Windows::Forms::RadioButton());
			this->rb9 = (gcnew System::Windows::Forms::RadioButton());
			this->rb8 = (gcnew System::Windows::Forms::RadioButton());
			this->rb7 = (gcnew System::Windows::Forms::RadioButton());
			this->rb6 = (gcnew System::Windows::Forms::RadioButton());
			this->rb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
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
			this->panel1->TabIndex = 23;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Disease::btn_homeappmnt_Click);
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
			this->pnl_app->Controls->Add(this->rb19);
			this->pnl_app->Controls->Add(this->rb18);
			this->pnl_app->Controls->Add(this->rb17);
			this->pnl_app->Controls->Add(this->rb16);
			this->pnl_app->Controls->Add(this->rb15);
			this->pnl_app->Controls->Add(this->rb14);
			this->pnl_app->Controls->Add(this->rb13);
			this->pnl_app->Controls->Add(this->rb12);
			this->pnl_app->Controls->Add(this->rb11);
			this->pnl_app->Controls->Add(this->rb10);
			this->pnl_app->Controls->Add(this->rb9);
			this->pnl_app->Controls->Add(this->rb8);
			this->pnl_app->Controls->Add(this->rb7);
			this->pnl_app->Controls->Add(this->rb6);
			this->pnl_app->Controls->Add(this->rb5);
			this->pnl_app->Controls->Add(this->rb3);
			this->pnl_app->Controls->Add(this->rb2);
			this->pnl_app->Controls->Add(this->rb1);
			this->pnl_app->Controls->Add(this->lbl_title);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 165);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 24;
			this->pnl_app->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Disease::pnl_app_Paint);
			// 
			// rb19
			// 
			this->rb19->AutoSize = true;
			this->rb19->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb19->Location = System::Drawing::Point(690, 377);
			this->rb19->Name = L"rb19";
			this->rb19->Size = System::Drawing::Size(174, 28);
			this->rb19->TabIndex = 48;
			this->rb19->TabStop = true;
			this->rb19->Text = L"Abdominal Pain";
			this->rb19->UseVisualStyleBackColor = true;
			// 
			// rb18
			// 
			this->rb18->AutoSize = true;
			this->rb18->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb18->Location = System::Drawing::Point(690, 327);
			this->rb18->Name = L"rb18";
			this->rb18->Size = System::Drawing::Size(150, 28);
			this->rb18->TabIndex = 47;
			this->rb18->TabStop = true;
			this->rb18->Text = L"Hypothermia";
			this->rb18->UseVisualStyleBackColor = true;
			// 
			// rb17
			// 
			this->rb17->AutoSize = true;
			this->rb17->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb17->Location = System::Drawing::Point(689, 281);
			this->rb17->Name = L"rb17";
			this->rb17->Size = System::Drawing::Size(236, 28);
			this->rb17->TabIndex = 46;
			this->rb17->TabStop = true;
			this->rb17->Text = L"Urinary Track Disease";
			this->rb17->UseVisualStyleBackColor = true;
			// 
			// rb16
			// 
			this->rb16->AutoSize = true;
			this->rb16->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb16->Location = System::Drawing::Point(690, 238);
			this->rb16->Name = L"rb16";
			this->rb16->Size = System::Drawing::Size(206, 28);
			this->rb16->TabIndex = 45;
			this->rb16->TabStop = true;
			this->rb16->Text = L"Acute Appendicitis";
			this->rb16->UseVisualStyleBackColor = true;
			// 
			// rb15
			// 
			this->rb15->AutoSize = true;
			this->rb15->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb15->Location = System::Drawing::Point(690, 195);
			this->rb15->Name = L"rb15";
			this->rb15->Size = System::Drawing::Size(198, 28);
			this->rb15->TabIndex = 44;
			this->rb15->TabStop = true;
			this->rb15->Text = L"Intestinal Disease";
			this->rb15->UseVisualStyleBackColor = true;
			// 
			// rb14
			// 
			this->rb14->AutoSize = true;
			this->rb14->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb14->Location = System::Drawing::Point(690, 151);
			this->rb14->Name = L"rb14";
			this->rb14->Size = System::Drawing::Size(114, 28);
			this->rb14->TabIndex = 43;
			this->rb14->TabStop = true;
			this->rb14->Text = L"Infection";
			this->rb14->UseVisualStyleBackColor = true;
			// 
			// rb13
			// 
			this->rb13->AutoSize = true;
			this->rb13->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb13->Location = System::Drawing::Point(415, 377);
			this->rb13->Name = L"rb13";
			this->rb13->Size = System::Drawing::Size(96, 28);
			this->rb13->TabIndex = 42;
			this->rb13->TabStop = true;
			this->rb13->Text = L"Allergy";
			this->rb13->UseVisualStyleBackColor = true;
			// 
			// rb12
			// 
			this->rb12->AutoSize = true;
			this->rb12->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb12->Location = System::Drawing::Point(415, 327);
			this->rb12->Name = L"rb12";
			this->rb12->Size = System::Drawing::Size(99, 28);
			this->rb12->TabIndex = 41;
			this->rb12->TabStop = true;
			this->rb12->Text = L"Dengue";
			this->rb12->UseVisualStyleBackColor = true;
			// 
			// rb11
			// 
			this->rb11->AutoSize = true;
			this->rb11->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb11->Location = System::Drawing::Point(414, 281);
			this->rb11->Name = L"rb11";
			this->rb11->Size = System::Drawing::Size(132, 28);
			this->rb11->TabIndex = 40;
			this->rb11->TabStop = true;
			this->rb11->Text = L"Pneumonia";
			this->rb11->UseVisualStyleBackColor = true;
			// 
			// rb10
			// 
			this->rb10->AutoSize = true;
			this->rb10->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb10->Location = System::Drawing::Point(415, 238);
			this->rb10->Name = L"rb10";
			this->rb10->Size = System::Drawing::Size(116, 28);
			this->rb10->TabIndex = 39;
			this->rb10->TabStop = true;
			this->rb10->Text = L"Pulmonia";
			this->rb10->UseVisualStyleBackColor = true;
			// 
			// rb9
			// 
			this->rb9->AutoSize = true;
			this->rb9->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb9->Location = System::Drawing::Point(415, 195);
			this->rb9->Name = L"rb9";
			this->rb9->Size = System::Drawing::Size(91, 28);
			this->rb9->TabIndex = 38;
			this->rb9->TabStop = true;
			this->rb9->Text = L"Stroke";
			this->rb9->UseVisualStyleBackColor = true;
			// 
			// rb8
			// 
			this->rb8->AutoSize = true;
			this->rb8->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb8->Location = System::Drawing::Point(415, 151);
			this->rb8->Name = L"rb8";
			this->rb8->Size = System::Drawing::Size(96, 28);
			this->rb8->TabIndex = 37;
			this->rb8->TabStop = true;
			this->rb8->Text = L"Cancer";
			this->rb8->UseVisualStyleBackColor = true;
			// 
			// rb7
			// 
			this->rb7->AutoSize = true;
			this->rb7->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb7->Location = System::Drawing::Point(61, 377);
			this->rb7->Name = L"rb7";
			this->rb7->Size = System::Drawing::Size(159, 28);
			this->rb7->TabIndex = 36;
			this->rb7->TabStop = true;
			this->rb7->Text = L"Hyperthermia";
			this->rb7->UseVisualStyleBackColor = true;
			// 
			// rb6
			// 
			this->rb6->AutoSize = true;
			this->rb6->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb6->Location = System::Drawing::Point(61, 327);
			this->rb6->Name = L"rb6";
			this->rb6->Size = System::Drawing::Size(162, 28);
			this->rb6->TabIndex = 35;
			this->rb6->TabStop = true;
			this->rb6->Text = L"Heart Disease";
			this->rb6->UseVisualStyleBackColor = true;
			// 
			// rb5
			// 
			this->rb5->AutoSize = true;
			this->rb5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb5->Location = System::Drawing::Point(60, 281);
			this->rb5->Name = L"rb5";
			this->rb5->Size = System::Drawing::Size(112, 28);
			this->rb5->TabIndex = 34;
			this->rb5->TabStop = true;
			this->rb5->Text = L"Diabetes";
			this->rb5->UseVisualStyleBackColor = true;
			// 
			// rb3
			// 
			this->rb3->AutoSize = true;
			this->rb3->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb3->Location = System::Drawing::Point(61, 238);
			this->rb3->Name = L"rb3";
			this->rb3->Size = System::Drawing::Size(137, 28);
			this->rb3->TabIndex = 33;
			this->rb3->TabStop = true;
			this->rb3->Text = L"Cholesterol";
			this->rb3->UseVisualStyleBackColor = true;
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb2->Location = System::Drawing::Point(61, 195);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(170, 28);
			this->rb2->TabIndex = 32;
			this->rb2->TabStop = true;
			this->rb2->Text = L"Blood Pressure";
			this->rb2->UseVisualStyleBackColor = true;
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb1->Location = System::Drawing::Point(61, 151);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(234, 28);
			this->rb1->TabIndex = 31;
			this->rb1->TabStop = true;
			this->rb1->Text = L"Asthma/ Lung Disease";
			this->rb1->UseVisualStyleBackColor = true;
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::Transparent;
			this->lbl_title->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::White;
			this->lbl_title->Location = System::Drawing::Point(336, 79);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(273, 42);
			this->lbl_title->TabIndex = 28;
			this->lbl_title->Text = L"Patient Disease";
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Disease::btn_doneapp_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(45, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 4);
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
			this->lbl_appmnt->Size = System::Drawing::Size(90, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Patient";
			// 
			// Disease
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_app);
			this->DoubleBuffered = true;
			this->Name = L"Disease";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Disease";
			this->Load += gcnew System::EventHandler(this, &Disease::Disease_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);
	private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ getdisease;

		if (rb1->Checked) getdisease = "Asthma/ Lung Disease";
		else if (rb2->Checked) getdisease = "Blood Pressure";
		else if (rb3->Checked) getdisease = "Cholesterol";
		else if (rb5->Checked) getdisease = "Diabetes";
		else if (rb6->Checked) getdisease = "Heart Disease";
		else if (rb7->Checked) getdisease = "Hyperthermia";
		else if (rb8->Checked) getdisease = "Cancer";
		else if (rb9->Checked) getdisease = "Stroke";
		else if (rb10->Checked) getdisease = "Pulmonia";
		else if (rb11->Checked) getdisease = "Pneumonia";
		else if (rb12->Checked) getdisease = "Dengue";
		else if (rb13->Checked) getdisease = "Allergy";
		else if (rb14->Checked) getdisease = "Infection";
		else if (rb15->Checked) getdisease = "Intestinal Disease";
		else if (rb16->Checked) getdisease = "Acute Appendicitis";
		else if (rb17->Checked) getdisease = "Urinary Track Disease";
		else if (rb18->Checked) getdisease = "Hypothermia";
		else if (rb19->Checked) getdisease = "Abdominal Pain";

		if (dbhospms_connect->State == ConnectionState::Closed) {
			dbhospms_connect->Open();
		}



		String^ cmdString = "UPDATE hosp_admtinfo SET Admt_dori = @dori WHERE Admt_contactnum = @tcontactnum ) ";


		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, dbhospms_connect);

		cmd->Parameters->AddWithValue("@dori", getdisease);
		cmd->Parameters->AddWithValue("@tcontactnum", mobilenumpnt);

		try {
			// Execute the command
			cmd->ExecuteNonQuery();

			// Close the connection if it is open
			if (dbhospms_connect->State == ConnectionState::Open) {
				dbhospms_connect->Close();


			}

			
			Patient4^ showp4 = gcnew Patient4(mobilenumpnt);
			showp4->Show();
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
private: System::Void Disease_Load(System::Object^ sender, System::EventArgs^ e) {
	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;


	Color RedTransparent = Color::FromArgb(130, 255, 0, 0);

	pnl_app->BackColor = RedTransparent;

	lbl_appmnt->ForeColor = Color::White;
	lbl_appmnt->BackColor = Color::Transparent;

	rb1->BackColor = Color::Transparent;
	rb2->BackColor = Color::Transparent;
	rb3->BackColor = Color::Transparent;
	rb5->BackColor = Color::Transparent;
	rb6->BackColor = Color::Transparent;
	rb7->BackColor = Color::Transparent;
	rb8->BackColor = Color::Transparent;
	rb9->BackColor = Color::Transparent;
	rb10->BackColor = Color::Transparent;
	rb11->BackColor = Color::Transparent;
	rb12->BackColor = Color::Transparent;
	rb13->BackColor = Color::Transparent;
	rb14->BackColor = Color::Transparent;
	rb15->BackColor = Color::Transparent;
	rb16->BackColor = Color::Transparent;
	rb17->BackColor = Color::Transparent;
	rb18->BackColor = Color::Transparent;
	rb19->BackColor = Color::Transparent;

	rb1->ForeColor = Color::White;
	rb2->ForeColor = Color::White;
	rb3->ForeColor = Color::White;
	rb5->ForeColor = Color::White;
	rb6->ForeColor = Color::White;
	rb7->ForeColor = Color::White;
	rb8->ForeColor = Color::White;
	rb9->ForeColor = Color::White;
	rb10->ForeColor = Color::White;
	rb11->ForeColor = Color::White;
	rb12->ForeColor = Color::White;
	rb13->ForeColor = Color::White;
	rb14->ForeColor = Color::White;
	rb15->ForeColor = Color::White;
	rb16->ForeColor = Color::White;
	rb17->ForeColor = Color::White;
	rb18->ForeColor = Color::White;
	rb19->ForeColor = Color::White;
	









}
private: System::Void pnl_app_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
