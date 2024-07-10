#pragma once
#include "Disease.h"
#include "Injury.h"


namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class Patient3 : public System::Windows::Forms::Form
	{
	private:

		String^ mobilenumpnt;
	public:

		Patient3(String ^mobilenumpnt)
		{
			InitializeComponent();
			this->mobilenumpnt = mobilenumpnt;
		}

	protected:
		
		~Patient3()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_homeappmnt;
	private: System::Windows::Forms::Panel^ pnl_app;



	private: System::Windows::Forms::Label^ label2;













	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Button^ btn_injury;

	private: System::Windows::Forms::Button^ btn_disease;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->btn_injury = (gcnew System::Windows::Forms::Button());
			this->btn_disease = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->pnl_app->SuspendLayout();
			this->SuspendLayout();
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Patient3::btn_homeappmnt_Click);
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->btn_injury);
			this->pnl_app->Controls->Add(this->btn_disease);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 24;
			// 
			// btn_injury
			// 
			this->btn_injury->BackColor = System::Drawing::Color::RoyalBlue;
			this->btn_injury->Font = (gcnew System::Drawing::Font(L"Arial Black", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_injury->ForeColor = System::Drawing::Color::White;
			this->btn_injury->Location = System::Drawing::Point(539, 210);
			this->btn_injury->Name = L"btn_injury";
			this->btn_injury->Size = System::Drawing::Size(292, 141);
			this->btn_injury->TabIndex = 31;
			this->btn_injury->Text = L"Injury";
			this->btn_injury->UseVisualStyleBackColor = false;
			this->btn_injury->Click += gcnew System::EventHandler(this, &Patient3::button2_Click);
			// 
			// btn_disease
			// 
			this->btn_disease->BackColor = System::Drawing::Color::RoyalBlue;
			this->btn_disease->Font = (gcnew System::Drawing::Font(L"Arial Black", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_disease->ForeColor = System::Drawing::Color::White;
			this->btn_disease->Location = System::Drawing::Point(225, 210);
			this->btn_disease->Name = L"btn_disease";
			this->btn_disease->Size = System::Drawing::Size(292, 141);
			this->btn_disease->TabIndex = 30;
			this->btn_disease->Text = L"Disease";
			this->btn_disease->UseVisualStyleBackColor = false;
			this->btn_disease->Click += gcnew System::EventHandler(this, &Patient3::button1_Click);
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
			// Patient3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_app);
			this->DoubleBuffered = true;
			this->Name = L"Patient3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient3";
			this->Load += gcnew System::EventHandler(this, &Patient3::Patient3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Patient3_Load(System::Object^ sender, System::EventArgs^ e) {
		btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
		btn_homeappmnt->FlatAppearance->BorderSize = 0;
		btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;

		btn_disease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_disease->BackColor = System::Drawing::Color::MidnightBlue;
		btn_disease->FlatAppearance->BorderSize = 0;
		btn_disease->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_disease->ForeColor = System::Drawing::Color::White;

		btn_injury->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_injury->BackColor = System::Drawing::Color::MidnightBlue;
		btn_injury->FlatAppearance->BorderSize = 0;
		btn_injury->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
		btn_injury->ForeColor = System::Drawing::Color::White;

		Color RedTransparent = Color::FromArgb(130, 255, 0, 0);

		pnl_app->BackColor = RedTransparent;

		lbl_appmnt->ForeColor = Color::White;
		lbl_appmnt->BackColor = Color::Transparent;




	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Disease^ showdisease = gcnew Disease(mobilenumpnt);
	showdisease->Show();
	this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Injury^ showdisease = gcnew Injury(mobilenumpnt);
	showdisease->Show();
	this->Hide();
}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
};
}
