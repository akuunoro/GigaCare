#pragma once
#include "menuview.h"
#include "Appointment.h"
#include "Patient.h"
#include "Emergency.h"
#include "Visitin.h"
#include "Operations.h"
#include "Adddoctor.h"



namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	private:
		
	public:
		Home()
		{
			InitializeComponent();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_menu;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ pnl_add;
	private: System::Windows::Forms::Button^ btn_personnelh;
	private: System::Windows::Forms::Button^ btn_operationsh;
	private: System::Windows::Forms::Button^ btn_visitorh;
	private: System::Windows::Forms::Button^ btn_emergencyh;
	private: System::Windows::Forms::Button^ btn_patienth;
	private: System::Windows::Forms::Button^ btn_appmnth;
	private: System::Windows::Forms::Panel^ pnl_home;
	private: System::Windows::Forms::Label^ lbl_set5;
	private: System::Windows::Forms::Label^ lbl_set4;
	private: System::Windows::Forms::Label^ lbl_set3;
	private: System::Windows::Forms::Label^ lbl_set2;
	private: System::Windows::Forms::Label^ lbl_set1;
	private: System::Windows::Forms::Button^ btn_home;

	private: System::Windows::Forms::Label^ lbl_set6;
	private: System::Windows::Forms::Label^ lbl_set8;

	private: System::Windows::Forms::Label^ lbl_set7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->btn_menu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_add = (gcnew System::Windows::Forms::Panel());
			this->btn_personnelh = (gcnew System::Windows::Forms::Button());
			this->btn_operationsh = (gcnew System::Windows::Forms::Button());
			this->btn_visitorh = (gcnew System::Windows::Forms::Button());
			this->btn_emergencyh = (gcnew System::Windows::Forms::Button());
			this->btn_patienth = (gcnew System::Windows::Forms::Button());
			this->btn_appmnth = (gcnew System::Windows::Forms::Button());
			this->pnl_home = (gcnew System::Windows::Forms::Panel());
			this->lbl_set8 = (gcnew System::Windows::Forms::Label());
			this->lbl_set7 = (gcnew System::Windows::Forms::Label());
			this->lbl_set6 = (gcnew System::Windows::Forms::Label());
			this->lbl_set5 = (gcnew System::Windows::Forms::Label());
			this->lbl_set4 = (gcnew System::Windows::Forms::Label());
			this->lbl_set3 = (gcnew System::Windows::Forms::Label());
			this->lbl_set2 = (gcnew System::Windows::Forms::Label());
			this->lbl_set1 = (gcnew System::Windows::Forms::Label());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_add->SuspendLayout();
			this->pnl_home->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_menu
			// 
			this->btn_menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_menu.BackgroundImage")));
			this->btn_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_menu->Location = System::Drawing::Point(1088, 31);
			this->btn_menu->Name = L"btn_menu";
			this->btn_menu->Size = System::Drawing::Size(94, 77);
			this->btn_menu->TabIndex = 16;
			this->btn_menu->UseVisualStyleBackColor = true;
			this->btn_menu->Click += gcnew System::EventHandler(this, &Home::btn_menu_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-4, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 140);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// pnl_add
			// 
			this->pnl_add->BackColor = System::Drawing::Color::Red;
			this->pnl_add->Controls->Add(this->btn_personnelh);
			this->pnl_add->Controls->Add(this->btn_operationsh);
			this->pnl_add->Controls->Add(this->btn_visitorh);
			this->pnl_add->Controls->Add(this->btn_emergencyh);
			this->pnl_add->Controls->Add(this->btn_patienth);
			this->pnl_add->Controls->Add(this->btn_appmnth);
			this->pnl_add->Location = System::Drawing::Point(70, 157);
			this->pnl_add->Name = L"pnl_add";
			this->pnl_add->Size = System::Drawing::Size(1038, 41);
			this->pnl_add->TabIndex = 14;
			// 
			// btn_personnelh
			// 
			this->btn_personnelh->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_personnelh->Location = System::Drawing::Point(874, 5);
			this->btn_personnelh->Name = L"btn_personnelh";
			this->btn_personnelh->Size = System::Drawing::Size(161, 31);
			this->btn_personnelh->TabIndex = 11;
			this->btn_personnelh->Text = L"Personnel";
			this->btn_personnelh->UseVisualStyleBackColor = true;
			this->btn_personnelh->Click += gcnew System::EventHandler(this, &Home::btn_personnelh_Click);
			// 
			// btn_operationsh
			// 
			this->btn_operationsh->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_operationsh->Location = System::Drawing::Point(707, 5);
			this->btn_operationsh->Name = L"btn_operationsh";
			this->btn_operationsh->Size = System::Drawing::Size(161, 31);
			this->btn_operationsh->TabIndex = 10;
			this->btn_operationsh->Text = L"Operations";
			this->btn_operationsh->UseVisualStyleBackColor = true;
			this->btn_operationsh->Click += gcnew System::EventHandler(this, &Home::btn_operationsh_Click);
			// 
			// btn_visitorh
			// 
			this->btn_visitorh->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_visitorh->Location = System::Drawing::Point(540, 5);
			this->btn_visitorh->Name = L"btn_visitorh";
			this->btn_visitorh->Size = System::Drawing::Size(161, 31);
			this->btn_visitorh->TabIndex = 9;
			this->btn_visitorh->Text = L"Visitor";
			this->btn_visitorh->UseVisualStyleBackColor = true;
			this->btn_visitorh->Click += gcnew System::EventHandler(this, &Home::btn_visitorh_Click);
			// 
			// btn_emergencyh
			// 
			this->btn_emergencyh->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_emergencyh->Location = System::Drawing::Point(373, 5);
			this->btn_emergencyh->Name = L"btn_emergencyh";
			this->btn_emergencyh->Size = System::Drawing::Size(161, 31);
			this->btn_emergencyh->TabIndex = 8;
			this->btn_emergencyh->Text = L"Emergency";
			this->btn_emergencyh->UseVisualStyleBackColor = true;
			this->btn_emergencyh->Click += gcnew System::EventHandler(this, &Home::btn_emergencyh_Click);
			// 
			// btn_patienth
			// 
			this->btn_patienth->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_patienth->Location = System::Drawing::Point(193, 5);
			this->btn_patienth->Name = L"btn_patienth";
			this->btn_patienth->Size = System::Drawing::Size(174, 31);
			this->btn_patienth->TabIndex = 7;
			this->btn_patienth->Text = L"Patient";
			this->btn_patienth->UseVisualStyleBackColor = true;
			this->btn_patienth->Click += gcnew System::EventHandler(this, &Home::btn_patienth_Click);
			// 
			// btn_appmnth
			// 
			this->btn_appmnth->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_appmnth->Location = System::Drawing::Point(3, 5);
			this->btn_appmnth->Name = L"btn_appmnth";
			this->btn_appmnth->Size = System::Drawing::Size(184, 31);
			this->btn_appmnth->TabIndex = 6;
			this->btn_appmnth->Text = L"Appointment";
			this->btn_appmnth->UseVisualStyleBackColor = true;
			this->btn_appmnth->Click += gcnew System::EventHandler(this, &Home::btn_appmnth_Click);
			// 
			// pnl_home
			// 
			this->pnl_home->Controls->Add(this->lbl_set8);
			this->pnl_home->Controls->Add(this->lbl_set7);
			this->pnl_home->Controls->Add(this->lbl_set6);
			this->pnl_home->Controls->Add(this->lbl_set5);
			this->pnl_home->Controls->Add(this->lbl_set4);
			this->pnl_home->Controls->Add(this->lbl_set3);
			this->pnl_home->Controls->Add(this->lbl_set2);
			this->pnl_home->Controls->Add(this->lbl_set1);
			this->pnl_home->Location = System::Drawing::Point(-4, 237);
			this->pnl_home->Name = L"pnl_home";
			this->pnl_home->Size = System::Drawing::Size(927, 421);
			this->pnl_home->TabIndex = 13;
			// 
			// lbl_set8
			// 
			this->lbl_set8->AutoSize = true;
			this->lbl_set8->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set8->Location = System::Drawing::Point(60, 325);
			this->lbl_set8->Name = L"lbl_set8";
			this->lbl_set8->Size = System::Drawing::Size(162, 19);
			this->lbl_set8->TabIndex = 7;
			this->lbl_set8->Text = L"medical operations.";
			// 
			// lbl_set7
			// 
			this->lbl_set7->AutoSize = true;
			this->lbl_set7->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set7->Location = System::Drawing::Point(60, 297);
			this->lbl_set7->Name = L"lbl_set7";
			this->lbl_set7->Size = System::Drawing::Size(665, 38);
			this->lbl_set7->TabIndex = 6;
			this->lbl_set7->Text = L"specialists also includes surgeons who are authorized to perform highly specializ"
				L"ed\r\n\r\n";
			// 
			// lbl_set6
			// 
			this->lbl_set6->AutoSize = true;
			this->lbl_set6->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set6->Location = System::Drawing::Point(60, 269);
			this->lbl_set6->Name = L"lbl_set6";
			this->lbl_set6->Size = System::Drawing::Size(684, 38);
			this->lbl_set6->TabIndex = 5;
			this->lbl_set6->Text = L"for instance regarding  language, flexibility, and intercultural competence. Our "
				L"pool of \r\n\r\n";
			this->lbl_set6->Click += gcnew System::EventHandler(this, &Home::label1_Click);
			// 
			// lbl_set5
			// 
			this->lbl_set5->AutoSize = true;
			this->lbl_set5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set5->Location = System::Drawing::Point(60, 241);
			this->lbl_set5->Name = L"lbl_set5";
			this->lbl_set5->Size = System::Drawing::Size(706, 19);
			this->lbl_set5->TabIndex = 4;
			this->lbl_set5->Text = L"their fields. Furthermore, they are particularly well qualified to meet the needs"
				L" of patients";
			// 
			// lbl_set4
			// 
			this->lbl_set4->AutoSize = true;
			this->lbl_set4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set4->Location = System::Drawing::Point(60, 212);
			this->lbl_set4->Name = L"lbl_set4";
			this->lbl_set4->Size = System::Drawing::Size(702, 19);
			this->lbl_set4->TabIndex = 3;
			this->lbl_set4->Text = L"The doctors who treat our beloved patients have many years of experience as senio"
				L"rs in";
			// 
			// lbl_set3
			// 
			this->lbl_set3->AutoSize = true;
			this->lbl_set3->Font = (gcnew System::Drawing::Font(L"Arial Black", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set3->Location = System::Drawing::Point(52, 128);
			this->lbl_set3->Name = L"lbl_set3";
			this->lbl_set3->Size = System::Drawing::Size(734, 70);
			this->lbl_set3->TabIndex = 2;
			this->lbl_set3->Text = L"HANDS AND GOOD CARE.";
			// 
			// lbl_set2
			// 
			this->lbl_set2->AutoSize = true;
			this->lbl_set2->Font = (gcnew System::Drawing::Font(L"Arial Black", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set2->Location = System::Drawing::Point(52, 68);
			this->lbl_set2->Name = L"lbl_set2";
			this->lbl_set2->Size = System::Drawing::Size(816, 70);
			this->lbl_set2->TabIndex = 1;
			this->lbl_set2->Text = L"ALWAYS BE IN THE BEST OF";
			// 
			// lbl_set1
			// 
			this->lbl_set1->AutoSize = true;
			this->lbl_set1->Font = (gcnew System::Drawing::Font(L"Arial Black", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_set1->Location = System::Drawing::Point(52, 12);
			this->lbl_set1->Name = L"lbl_set1";
			this->lbl_set1->Size = System::Drawing::Size(737, 70);
			this->lbl_set1->TabIndex = 0;
			this->lbl_set1->Text = L"AT GIGA CARE, YOU WILL";
			// 
			// btn_home
			// 
			this->btn_home->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_home->Font = (gcnew System::Drawing::Font(L"Arial Black", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_home->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_home->Location = System::Drawing::Point(886, 50);
			this->btn_home->Name = L"btn_home";
			this->btn_home->Size = System::Drawing::Size(185, 58);
			this->btn_home->TabIndex = 12;
			this->btn_home->Text = L"HOME";
			this->btn_home->UseVisualStyleBackColor = false;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->btn_menu);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pnl_add);
			this->Controls->Add(this->pnl_home);
			this->Controls->Add(this->btn_home);
			this->DoubleBuffered = true;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_add->ResumeLayout(false);
			this->pnl_home->ResumeLayout(false);
			this->pnl_home->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {

		

		btn_menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_menu->BackColor = System::Drawing::Color::Transparent;
		btn_menu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;

		btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_home->BackColor = System::Drawing::Color::Transparent;
		btn_home->FlatAppearance->BorderSize = 0;
		btn_home->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_home->ForeColor = System::Drawing::Color::SteelBlue;

		//Add
		Color RedTransparent = Color::FromArgb(150, 255, 0, 0);

		pnl_add->BackColor = RedTransparent;

		btn_appmnth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_appmnth->BackColor = System::Drawing::Color::Transparent;
		btn_appmnth->FlatAppearance->BorderSize = 0;
		btn_appmnth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_appmnth->ForeColor = System::Drawing::Color::White;

		btn_patienth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_patienth->BackColor = System::Drawing::Color::Transparent;
		btn_patienth->FlatAppearance->BorderSize = 0;
		btn_patienth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_patienth->ForeColor = System::Drawing::Color::White;

		btn_emergencyh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_emergencyh->BackColor = System::Drawing::Color::Transparent;
		btn_emergencyh->FlatAppearance->BorderSize = 0;
		btn_emergencyh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_emergencyh->ForeColor = System::Drawing::Color::White;

		btn_visitorh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_visitorh->BackColor = System::Drawing::Color::Transparent;
		btn_visitorh->FlatAppearance->BorderSize = 0;
		btn_visitorh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_visitorh->ForeColor = System::Drawing::Color::White;


		btn_personnelh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_personnelh->BackColor = System::Drawing::Color::Transparent;
		btn_personnelh->FlatAppearance->BorderSize = 0;
		btn_personnelh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_personnelh->ForeColor = System::Drawing::Color::White;

		btn_operationsh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_operationsh->BackColor = System::Drawing::Color::Transparent;
		btn_operationsh->FlatAppearance->BorderSize = 0;
		btn_operationsh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(150, 255, 0, 0);
		btn_operationsh->ForeColor = System::Drawing::Color::White;



		Color steelBlueTransparent = Color::FromArgb(150, 70, 130, 180);




		pnl_home->BackColor = steelBlueTransparent;
		lbl_set1->ForeColor = Color::MidnightBlue;
		lbl_set1->BackColor = Color::Transparent;

		lbl_set2->ForeColor = Color::MidnightBlue;
		lbl_set2->BackColor = Color::Transparent;

		lbl_set3->ForeColor = Color::MidnightBlue;
		lbl_set3->BackColor = Color::Transparent;

		lbl_set4->ForeColor = Color::MidnightBlue;
		lbl_set4->BackColor = Color::Transparent;

		lbl_set5->ForeColor = Color::MidnightBlue;
		lbl_set5->BackColor = Color::Transparent;

		lbl_set6->ForeColor = Color::MidnightBlue;
		lbl_set6->BackColor = Color::Transparent;

		lbl_set7->ForeColor = Color::MidnightBlue;
		lbl_set7->BackColor = Color::Transparent;

		lbl_set8->ForeColor = Color::MidnightBlue;
		lbl_set8->BackColor = Color::Transparent;







		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;





	}
private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	menuview^ showvm = gcnew menuview();
	showvm->Show();
}
private: System::Void btn_appmnth_Click(System::Object^ sender, System::EventArgs^ e) {
	Appointment^ showappmnt = gcnew Appointment();
	showappmnt->Show();
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_patienth_Click(System::Object^ sender, System::EventArgs^ e) {



	Patient^ showpatient = gcnew Patient();
	showpatient->Show();



}
private: System::Void btn_emergencyh_Click(System::Object^ sender, System::EventArgs^ e) {
	Emergency^ showem = gcnew Emergency();
	showem->Show();
}
private: System::Void btn_visitorh_Click(System::Object^ sender, System::EventArgs^ e) {
	Visitin^ showvsin = gcnew Visitin();
	showvsin->Show();
}
private: System::Void btn_operationsh_Click(System::Object^ sender, System::EventArgs^ e) {
	Operations^ showop = gcnew Operations();
	showop->Show();
}
private: System::Void btn_personnelh_Click(System::Object^ sender, System::EventArgs^ e) {
	Adddoctor^ showpsl = gcnew Adddoctor();
	showpsl->Show();
}
};
}
