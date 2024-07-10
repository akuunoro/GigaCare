#pragma once
#include "Vdoctor.h"
#include "Vemegency.h"
#include "Vappointment.h"
#include "Vvisitor.h"
#include "Vpatient.h"
#include "VOperations.h"

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menuview
	/// </summary>
	public ref class menuview : public System::Windows::Forms::Form
	{
	public:
		menuview(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menuview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	protected:
	private: System::Windows::Forms::Button^ btn_exitmv;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_operationsmv;
	private: System::Windows::Forms::Button^ btn_patientsmv;
	private: System::Windows::Forms::Button^ btn_visitorsmv;
	private: System::Windows::Forms::Button^ btn_appointmentsmv;
	private: System::Windows::Forms::Button^ btn_emergencymv;
	private: System::Windows::Forms::Button^ btn_personnelmv;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbl_menu;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Button^ btn_logout;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuview::typeid));
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_exitmv = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_operationsmv = (gcnew System::Windows::Forms::Button());
			this->btn_patientsmv = (gcnew System::Windows::Forms::Button());
			this->btn_visitorsmv = (gcnew System::Windows::Forms::Button());
			this->btn_appointmentsmv = (gcnew System::Windows::Forms::Button());
			this->btn_emergencymv = (gcnew System::Windows::Forms::Button());
			this->btn_personnelmv = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_menu = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(260, 548);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(69, 53);
			this->pictureBox8->TabIndex = 35;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &menuview::pictureBox8_Click);
			// 
			// btn_exitmv
			// 
			this->btn_exitmv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_exitmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exitmv->Location = System::Drawing::Point(31, 563);
			this->btn_exitmv->Name = L"btn_exitmv";
			this->btn_exitmv->Size = System::Drawing::Size(223, 38);
			this->btn_exitmv->TabIndex = 34;
			this->btn_exitmv->Text = L"EXIT";
			this->btn_exitmv->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btn_exitmv->UseVisualStyleBackColor = true;
			this->btn_exitmv->Click += gcnew System::EventHandler(this, &menuview::btn_exitmv_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(260, 433);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(69, 65);
			this->pictureBox7->TabIndex = 33;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &menuview::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(260, 379);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(69, 60);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &menuview::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(260, 323);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(69, 50);
			this->pictureBox5->TabIndex = 31;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &menuview::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(260, 268);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(69, 49);
			this->pictureBox4->TabIndex = 30;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &menuview::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(260, 213);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(69, 49);
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &menuview::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(260, 164);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 43);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &menuview::pictureBox1_Click);
			// 
			// btn_operationsmv
			// 
			this->btn_operationsmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_operationsmv->Location = System::Drawing::Point(31, 460);
			this->btn_operationsmv->Name = L"btn_operationsmv";
			this->btn_operationsmv->Size = System::Drawing::Size(223, 38);
			this->btn_operationsmv->TabIndex = 27;
			this->btn_operationsmv->Text = L"OPERATIONS";
			this->btn_operationsmv->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btn_operationsmv->UseVisualStyleBackColor = true;
			this->btn_operationsmv->Click += gcnew System::EventHandler(this, &menuview::btn_operationsmv_Click);
			// 
			// btn_patientsmv
			// 
			this->btn_patientsmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_patientsmv->Location = System::Drawing::Point(31, 401);
			this->btn_patientsmv->Name = L"btn_patientsmv";
			this->btn_patientsmv->Size = System::Drawing::Size(223, 38);
			this->btn_patientsmv->TabIndex = 26;
			this->btn_patientsmv->Text = L"PATIENTS";
			this->btn_patientsmv->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_patientsmv->UseVisualStyleBackColor = true;
			this->btn_patientsmv->Click += gcnew System::EventHandler(this, &menuview::btn_patientsmv_Click);
			// 
			// btn_visitorsmv
			// 
			this->btn_visitorsmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_visitorsmv->Location = System::Drawing::Point(31, 335);
			this->btn_visitorsmv->Name = L"btn_visitorsmv";
			this->btn_visitorsmv->Size = System::Drawing::Size(223, 38);
			this->btn_visitorsmv->TabIndex = 25;
			this->btn_visitorsmv->Text = L"VISITORS";
			this->btn_visitorsmv->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_visitorsmv->UseVisualStyleBackColor = true;
			this->btn_visitorsmv->Click += gcnew System::EventHandler(this, &menuview::btn_visitorsmv_Click);
			// 
			// btn_appointmentsmv
			// 
			this->btn_appointmentsmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_appointmentsmv->Location = System::Drawing::Point(31, 279);
			this->btn_appointmentsmv->Name = L"btn_appointmentsmv";
			this->btn_appointmentsmv->Size = System::Drawing::Size(223, 38);
			this->btn_appointmentsmv->TabIndex = 24;
			this->btn_appointmentsmv->Text = L"APPOINTMENTS";
			this->btn_appointmentsmv->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_appointmentsmv->UseVisualStyleBackColor = true;
			this->btn_appointmentsmv->Click += gcnew System::EventHandler(this, &menuview::btn_appointmentsmv_Click);
			// 
			// btn_emergencymv
			// 
			this->btn_emergencymv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_emergencymv->Location = System::Drawing::Point(31, 224);
			this->btn_emergencymv->Name = L"btn_emergencymv";
			this->btn_emergencymv->Size = System::Drawing::Size(223, 38);
			this->btn_emergencymv->TabIndex = 23;
			this->btn_emergencymv->Text = L"EMERGENCY";
			this->btn_emergencymv->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_emergencymv->UseVisualStyleBackColor = true;
			this->btn_emergencymv->Click += gcnew System::EventHandler(this, &menuview::btn_emergencymv_Click);
			// 
			// btn_personnelmv
			// 
			this->btn_personnelmv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_personnelmv->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_personnelmv->Location = System::Drawing::Point(31, 169);
			this->btn_personnelmv->Name = L"btn_personnelmv";
			this->btn_personnelmv->Size = System::Drawing::Size(223, 38);
			this->btn_personnelmv->TabIndex = 22;
			this->btn_personnelmv->Text = L"PERSONNEL";
			this->btn_personnelmv->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_personnelmv->UseVisualStyleBackColor = true;
			this->btn_personnelmv->Click += gcnew System::EventHandler(this, &menuview::btn_personnelmv_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->ForeColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(23, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(297, 2);
			this->panel1->TabIndex = 21;
			// 
			// lbl_menu
			// 
			this->lbl_menu->AutoSize = true;
			this->lbl_menu->BackColor = System::Drawing::Color::Transparent;
			this->lbl_menu->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_menu->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lbl_menu->Location = System::Drawing::Point(230, 92);
			this->lbl_menu->Name = L"lbl_menu";
			this->lbl_menu->Size = System::Drawing::Size(99, 36);
			this->lbl_menu->TabIndex = 20;
			this->lbl_menu->Text = L"MENU";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(62, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(223, 116);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(260, 504);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(69, 50);
			this->pictureBox9->TabIndex = 37;
			this->pictureBox9->TabStop = false;
			// 
			// btn_logout
			// 
			this->btn_logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_logout->Location = System::Drawing::Point(31, 516);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(223, 38);
			this->btn_logout->TabIndex = 36;
			this->btn_logout->Text = L"LOGOUT";
			this->btn_logout->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btn_logout->UseVisualStyleBackColor = true;
			// 
			// menuview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(352, 633);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->btn_exitmv);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_operationsmv);
			this->Controls->Add(this->btn_patientsmv);
			this->Controls->Add(this->btn_visitorsmv);
			this->Controls->Add(this->btn_appointmentsmv);
			this->Controls->Add(this->btn_emergencymv);
			this->Controls->Add(this->btn_personnelmv);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbl_menu);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"menuview";
			this->Text = L"menuview";
			this->Load += gcnew System::EventHandler(this, &menuview::menuview_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuview_Load(System::Object^ sender, System::EventArgs^ e) {
		btn_personnelmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_personnelmv->BackColor = System::Drawing::Color::Transparent;
		btn_personnelmv->FlatAppearance->BorderSize = 0;
		btn_personnelmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_personnelmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_emergencymv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_emergencymv->BackColor = System::Drawing::Color::Transparent;
		btn_emergencymv->FlatAppearance->BorderSize = 0;
		btn_emergencymv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_emergencymv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_appointmentsmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_appointmentsmv->BackColor = System::Drawing::Color::Transparent;
		btn_appointmentsmv->FlatAppearance->BorderSize = 0;
		btn_appointmentsmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_appointmentsmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_visitorsmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_visitorsmv->BackColor = System::Drawing::Color::Transparent;
		btn_visitorsmv->FlatAppearance->BorderSize = 0;
		btn_visitorsmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_visitorsmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_patientsmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_patientsmv->BackColor = System::Drawing::Color::Transparent;
		btn_patientsmv->FlatAppearance->BorderSize = 0;
		btn_patientsmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_patientsmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_operationsmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_operationsmv->BackColor = System::Drawing::Color::Transparent;
		btn_operationsmv->FlatAppearance->BorderSize = 0;
		btn_operationsmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_operationsmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_exitmv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_exitmv->BackColor = System::Drawing::Color::Transparent;
		btn_exitmv->FlatAppearance->BorderSize = 0;
		btn_exitmv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_exitmv->ForeColor = System::Drawing::Color::MidnightBlue;

		btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_logout->BackColor = System::Drawing::Color::Transparent;
		btn_logout->FlatAppearance->BorderSize = 0;
		btn_logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_logout->ForeColor = System::Drawing::Color::MidnightBlue;


		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		this->Location = System::Drawing::Point(946, 208);
	}
private: System::Void btn_exitmv_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void btn_personnelmv_Click(System::Object^ sender, System::EventArgs^ e) {
	Vdoctor^ showvdr = gcnew Vdoctor();
	showvdr->Show();
	Hide();
	
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Vdoctor^ showvdr = gcnew Vdoctor();
	showvdr->Show();
	Hide();
}
private: System::Void btn_emergencymv_Click(System::Object^ sender, System::EventArgs^ e) {
	Vemegency^ showemr = gcnew Vemegency();
	showemr->Show();
	Hide();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	Vemegency^ showemr = gcnew Vemegency();
	showemr->Show();
	Hide();
}
private: System::Void btn_appointmentsmv_Click(System::Object^ sender, System::EventArgs^ e) {
	Vappointment^ showvapp = gcnew Vappointment();
	showvapp->Show();
	Hide();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	Vappointment^ showvapp = gcnew Vappointment();
	showvapp->Show();
	Hide();

}
private: System::Void btn_visitorsmv_Click(System::Object^ sender, System::EventArgs^ e) {
	Vvisitor^ showvs = gcnew Vvisitor();
	showvs->Show();
	Hide();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	Vvisitor^ showvs = gcnew Vvisitor();
	showvs->Show();
	Hide();
}
private: System::Void btn_patientsmv_Click(System::Object^ sender, System::EventArgs^ e) {
	Vpatient^ showvp = gcnew Vpatient();
	showvp->Show();
	Hide();
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	Vpatient^ showvp = gcnew Vpatient();
	showvp->Show();
	Hide();
}
private: System::Void btn_operationsmv_Click(System::Object^ sender, System::EventArgs^ e) {
	VOperations^ showop = gcnew VOperations();
	showop->Show();
	Hide();

}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	VOperations^ showop = gcnew VOperations();
	showop->Show();
	Hide();
}
};
}
