#pragma once

#include "Vemergency2.h"

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Vemegency
	/// </summary>
	public ref class Vemegency : public System::Windows::Forms::Form
	{
	public:
		Vemegency(void)
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
		~Vemegency()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_homeappmnt;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ pnl_signup;










	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ specialization;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ middlename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ homeaddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phonenumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birthdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dori;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cby;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ status;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ assnurse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ assdoctor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ department;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ assroom;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Vemegency::typeid));
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_signup = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->specialization = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->middlename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->homeaddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->birthdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dori = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cby = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->assnurse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->assdoctor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->department = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->assroom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_signup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Vemegency::btn_homeappmnt_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Vemegency::pictureBox1_Click);
			// 
			// pnl_signup
			// 
			this->pnl_signup->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pnl_signup->Controls->Add(this->dataGridView1);
			this->pnl_signup->Controls->Add(this->label7);
			this->pnl_signup->Controls->Add(this->lbl_appmnt);
			this->pnl_signup->Controls->Add(this->panel2);
			this->pnl_signup->Location = System::Drawing::Point(82, 155);
			this->pnl_signup->Name = L"pnl_signup";
			this->pnl_signup->Size = System::Drawing::Size(1019, 536);
			this->pnl_signup->TabIndex = 32;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->specialization,
					this->lastname, this->firstname, this->middlename, this->homeaddress, this->phonenumber, this->birthdate, this->gender, this->dori,
					this->cby, this->status, this->assnurse, this->assdoctor, this->department, this->assroom
			});
			this->dataGridView1->GridColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->Location = System::Drawing::Point(34, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(959, 439);
			this->dataGridView1->TabIndex = 82;
			// 
			// specialization
			// 
			this->specialization->HeaderText = L"Patient ID";
			this->specialization->MinimumWidth = 6;
			this->specialization->Name = L"specialization";
			this->specialization->ReadOnly = true;
			this->specialization->Width = 125;
			// 
			// lastname
			// 
			this->lastname->HeaderText = L"Last Name";
			this->lastname->MinimumWidth = 6;
			this->lastname->Name = L"lastname";
			this->lastname->Width = 125;
			// 
			// firstname
			// 
			this->firstname->HeaderText = L"First Name";
			this->firstname->MinimumWidth = 6;
			this->firstname->Name = L"firstname";
			this->firstname->ReadOnly = true;
			this->firstname->Width = 125;
			// 
			// middlename
			// 
			this->middlename->HeaderText = L"Middle Name";
			this->middlename->MinimumWidth = 6;
			this->middlename->Name = L"middlename";
			this->middlename->ReadOnly = true;
			this->middlename->Width = 125;
			// 
			// homeaddress
			// 
			this->homeaddress->HeaderText = L"Home Address";
			this->homeaddress->MinimumWidth = 6;
			this->homeaddress->Name = L"homeaddress";
			this->homeaddress->ReadOnly = true;
			this->homeaddress->Width = 125;
			// 
			// phonenumber
			// 
			this->phonenumber->HeaderText = L"Contact Number";
			this->phonenumber->MinimumWidth = 6;
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->ReadOnly = true;
			this->phonenumber->Width = 125;
			// 
			// birthdate
			// 
			this->birthdate->HeaderText = L"Birth Date";
			this->birthdate->MinimumWidth = 6;
			this->birthdate->Name = L"birthdate";
			this->birthdate->ReadOnly = true;
			this->birthdate->Width = 125;
			// 
			// gender
			// 
			this->gender->HeaderText = L"Gender";
			this->gender->MinimumWidth = 6;
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Width = 125;
			// 
			// dori
			// 
			this->dori->HeaderText = L"Disease/ Injury";
			this->dori->MinimumWidth = 6;
			this->dori->Name = L"dori";
			this->dori->ReadOnly = true;
			this->dori->Width = 125;
			// 
			// cby
			// 
			this->cby->HeaderText = L"Caused by";
			this->cby->MinimumWidth = 6;
			this->cby->Name = L"cby";
			this->cby->ReadOnly = true;
			this->cby->Width = 125;
			// 
			// status
			// 
			this->status->HeaderText = L"Status";
			this->status->MinimumWidth = 6;
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			this->status->Width = 125;
			// 
			// assnurse
			// 
			this->assnurse->HeaderText = L"Assigned Nurse";
			this->assnurse->MinimumWidth = 6;
			this->assnurse->Name = L"assnurse";
			this->assnurse->ReadOnly = true;
			this->assnurse->Width = 125;
			// 
			// assdoctor
			// 
			this->assdoctor->HeaderText = L"Assigned Doctor";
			this->assdoctor->MinimumWidth = 6;
			this->assdoctor->Name = L"assdoctor";
			this->assdoctor->ReadOnly = true;
			this->assdoctor->Width = 125;
			// 
			// department
			// 
			this->department->HeaderText = L"Department";
			this->department->MinimumWidth = 6;
			this->department->Name = L"department";
			this->department->ReadOnly = true;
			this->department->Width = 125;
			// 
			// assroom
			// 
			this->assroom->HeaderText = L"Assigned Room";
			this->assroom->MinimumWidth = 6;
			this->assroom->Name = L"assroom";
			this->assroom->ReadOnly = true;
			this->assroom->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(150, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 28);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Accompanied by";
			this->label7->Click += gcnew System::EventHandler(this, &Vemegency::label7_Click);
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
			this->lbl_appmnt->TabIndex = 78;
			this->lbl_appmnt->Text = L"Patient";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(34, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 4);
			this->panel2->TabIndex = 10;
			// 
			// Vemegency
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_signup);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Vemegency";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vemegency";
			this->Load += gcnew System::EventHandler(this, &Vemegency::Vemegency_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_signup->ResumeLayout(false);
			this->pnl_signup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	Vemergency2^ showveme2 = gcnew Vemergency2(this);
	showveme2->Show();
	Hide();
}
private: System::Void Vemegency_Load(System::Object^ sender, System::EventArgs^ e) {
	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;
}
};
}
