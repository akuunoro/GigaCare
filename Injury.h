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
	/// Summary for Injury
	/// </summary>
	public ref class Injury : public System::Windows::Forms::Form
	{
	private:
		String^ mobilenumpnt;
	public:
		Injury(String^ mobilenumpnt)
		{
			InitializeComponent();
			this->mobilenumpnt = mobilenumpnt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Injury()
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
	private: System::Windows::Forms::Label^ label1;












	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::RadioButton^ rb5;

	private: System::Windows::Forms::RadioButton^ rb4;

	private: System::Windows::Forms::RadioButton^ rb3;


	private: System::Windows::Forms::RadioButton^ rb2;

	private: System::Windows::Forms::RadioButton^ rb1;
	private: System::Windows::Forms::RadioButton^ rb12;



	private: System::Windows::Forms::RadioButton^ rb11;

	private: System::Windows::Forms::RadioButton^ rb10;

	private: System::Windows::Forms::RadioButton^ rb9;

	private: System::Windows::Forms::RadioButton^ rb8;

	private: System::Windows::Forms::RadioButton^ rb7;

	private: System::Windows::Forms::RadioButton^ rb6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Injury::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->rb12 = (gcnew System::Windows::Forms::RadioButton());
			this->rb11 = (gcnew System::Windows::Forms::RadioButton());
			this->rb10 = (gcnew System::Windows::Forms::RadioButton());
			this->rb9 = (gcnew System::Windows::Forms::RadioButton());
			this->rb8 = (gcnew System::Windows::Forms::RadioButton());
			this->rb7 = (gcnew System::Windows::Forms::RadioButton());
			this->rb6 = (gcnew System::Windows::Forms::RadioButton());
			this->rb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rb4 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->TabIndex = 25;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Injury::btn_homeappmnt_Click);
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
			this->pnl_app->Controls->Add(this->rb12);
			this->pnl_app->Controls->Add(this->rb11);
			this->pnl_app->Controls->Add(this->rb10);
			this->pnl_app->Controls->Add(this->rb9);
			this->pnl_app->Controls->Add(this->rb8);
			this->pnl_app->Controls->Add(this->rb7);
			this->pnl_app->Controls->Add(this->rb6);
			this->pnl_app->Controls->Add(this->rb5);
			this->pnl_app->Controls->Add(this->rb4);
			this->pnl_app->Controls->Add(this->rb3);
			this->pnl_app->Controls->Add(this->rb2);
			this->pnl_app->Controls->Add(this->rb1);
			this->pnl_app->Controls->Add(this->label1);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 26;
			// 
			// rb12
			// 
			this->rb12->AutoSize = true;
			this->rb12->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb12->Location = System::Drawing::Point(693, 198);
			this->rb12->Name = L"rb12";
			this->rb12->Size = System::Drawing::Size(274, 28);
			this->rb12->TabIndex = 40;
			this->rb12->TabStop = true;
			this->rb12->Text = L"Musculoskeletal Disorders";
			this->rb12->UseVisualStyleBackColor = true;
			// 
			// rb11
			// 
			this->rb11->AutoSize = true;
			this->rb11->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb11->Location = System::Drawing::Point(693, 154);
			this->rb11->Name = L"rb11";
			this->rb11->Size = System::Drawing::Size(124, 28);
			this->rb11->TabIndex = 39;
			this->rb11->TabStop = true;
			this->rb11->Text = L"Punctures";
			this->rb11->UseVisualStyleBackColor = true;
			// 
			// rb10
			// 
			this->rb10->AutoSize = true;
			this->rb10->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb10->Location = System::Drawing::Point(419, 330);
			this->rb10->Name = L"rb10";
			this->rb10->Size = System::Drawing::Size(153, 28);
			this->rb10->TabIndex = 38;
			this->rb10->TabStop = true;
			this->rb10->Text = L"Head Trauma";
			this->rb10->UseVisualStyleBackColor = true;
			// 
			// rb9
			// 
			this->rb9->AutoSize = true;
			this->rb9->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb9->Location = System::Drawing::Point(419, 287);
			this->rb9->Name = L"rb9";
			this->rb9->Size = System::Drawing::Size(213, 28);
			this->rb9->TabIndex = 37;
			this->rb9->TabStop = true;
			this->rb9->Text = L"Cuts or Lacerations";
			this->rb9->UseVisualStyleBackColor = true;
			// 
			// rb8
			// 
			this->rb8->AutoSize = true;
			this->rb8->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb8->Location = System::Drawing::Point(419, 241);
			this->rb8->Name = L"rb8";
			this->rb8->Size = System::Drawing::Size(240, 28);
			this->rb8->TabIndex = 36;
			this->rb8->TabStop = true;
			this->rb8->Text = L"Traumatic Brain Injury";
			this->rb8->UseVisualStyleBackColor = true;
			// 
			// rb7
			// 
			this->rb7->AutoSize = true;
			this->rb7->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb7->Location = System::Drawing::Point(419, 198);
			this->rb7->Name = L"rb7";
			this->rb7->Size = System::Drawing::Size(157, 28);
			this->rb7->TabIndex = 35;
			this->rb7->TabStop = true;
			this->rb7->Text = L"Broken Bones";
			this->rb7->UseVisualStyleBackColor = true;
			// 
			// rb6
			// 
			this->rb6->AutoSize = true;
			this->rb6->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb6->Location = System::Drawing::Point(419, 154);
			this->rb6->Name = L"rb6";
			this->rb6->Size = System::Drawing::Size(85, 28);
			this->rb6->TabIndex = 34;
			this->rb6->TabStop = true;
			this->rb6->Text = L"Burns";
			this->rb6->UseVisualStyleBackColor = true;
			// 
			// rb5
			// 
			this->rb5->AutoSize = true;
			this->rb5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb5->Location = System::Drawing::Point(95, 330);
			this->rb5->Name = L"rb5";
			this->rb5->Size = System::Drawing::Size(145, 28);
			this->rb5->TabIndex = 33;
			this->rb5->TabStop = true;
			this->rb5->Text = L"Open Wound";
			this->rb5->UseVisualStyleBackColor = true;
			// 
			// rb4
			// 
			this->rb4->AutoSize = true;
			this->rb4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb4->Location = System::Drawing::Point(95, 287);
			this->rb4->Name = L"rb4";
			this->rb4->Size = System::Drawing::Size(144, 28);
			this->rb4->TabIndex = 32;
			this->rb4->TabStop = true;
			this->rb4->Text = L"Deep Wound";
			this->rb4->UseVisualStyleBackColor = true;
			// 
			// rb3
			// 
			this->rb3->AutoSize = true;
			this->rb3->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb3->Location = System::Drawing::Point(95, 241);
			this->rb3->Name = L"rb3";
			this->rb3->Size = System::Drawing::Size(97, 28);
			this->rb3->TabIndex = 31;
			this->rb3->TabStop = true;
			this->rb3->Text = L"Strains";
			this->rb3->UseVisualStyleBackColor = true;
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb2->Location = System::Drawing::Point(95, 198);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(90, 28);
			this->rb2->TabIndex = 30;
			this->rb2->TabStop = true;
			this->rb2->Text = L"Sprain";
			this->rb2->UseVisualStyleBackColor = true;
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb1->Location = System::Drawing::Point(95, 154);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(119, 28);
			this->rb1->TabIndex = 29;
			this->rb1->TabStop = true;
			this->rb1->Text = L"Fractures";
			this->rb1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(412, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 42);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Patient Injury";
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Injury::btn_doneapp_Click);
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
			// Injury
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_app);
			this->DoubleBuffered = true;
			this->Name = L"Injury";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Injury";
			this->Load += gcnew System::EventHandler(this, &Injury::Injury_Load);
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

		if (rb1->Checked) getdisease = "Fractures";
		else if (rb2->Checked) getdisease = "Sprain";
		else if (rb3->Checked) getdisease = "Strain";
		else if (rb4->Checked) getdisease = "Deep Wound";
		else if (rb5->Checked) getdisease = "Open Wound";
		else if (rb6->Checked) getdisease = "Burns";
		else if (rb7->Checked) getdisease = "Broken Bones";
		else if (rb8->Checked) getdisease = "Traumatic Brain Injury";
		else if (rb9->Checked) getdisease = "Cuts or Lacerations";
		else if (rb10->Checked) getdisease = "Head Trauma";
		else if (rb11->Checked) getdisease = "Punctures";
		else if (rb12->Checked) getdisease = "Musculoskeletal Disorder ";
		

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
private: System::Void Injury_Load(System::Object^ sender, System::EventArgs^ e) {
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
	rb4->BackColor = Color::Transparent;
	rb6->BackColor = Color::Transparent;
	rb7->BackColor = Color::Transparent;
	rb8->BackColor = Color::Transparent;
	rb9->BackColor = Color::Transparent;
	rb10->BackColor = Color::Transparent;
	rb11->BackColor = Color::Transparent;
	rb12->BackColor = Color::Transparent;

	rb1->ForeColor = Color::White;
	rb2->ForeColor = Color::White;
	rb3->ForeColor = Color::White;
	rb5->ForeColor = Color::White;
	rb4->ForeColor = Color::White;
	rb6->ForeColor = Color::White;
	rb7->ForeColor = Color::White;
	rb8->ForeColor = Color::White;
	rb9->ForeColor = Color::White;
	rb10->ForeColor = Color::White;
	rb11->ForeColor = Color::White;
	rb12->ForeColor = Color::White;


}

};
}
