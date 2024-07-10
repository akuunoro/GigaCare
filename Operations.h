#pragma once

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operations
	/// </summary>
	public ref class Operations : public System::Windows::Forms::Form
	{
	public:
		Operations(void)
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
		~Operations()
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
	private: System::Windows::Forms::Panel^ pnl_app;
	private: System::Windows::Forms::TextBox^ txt_firstnameapp;
	private: System::Windows::Forms::Label^ lbl_firstnameapp;
	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmb_monthapp;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmb_yearapp;
	private: System::Windows::Forms::ComboBox^ cmb_dayapp;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ lbl_birthdayapp;
































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Operations::typeid));
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmb_yearapp = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_dayapp = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_birthdayapp = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmb_monthapp = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_firstnameapp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_firstnameapp = (gcnew System::Windows::Forms::Label());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Operations::btn_homeappmnt_Click);
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
			this->panel1->TabIndex = 27;
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
			this->pnl_app->Controls->Add(this->comboBox1);
			this->pnl_app->Controls->Add(this->label6);
			this->pnl_app->Controls->Add(this->cmb_yearapp);
			this->pnl_app->Controls->Add(this->cmb_dayapp);
			this->pnl_app->Controls->Add(this->comboBox2);
			this->pnl_app->Controls->Add(this->lbl_birthdayapp);
			this->pnl_app->Controls->Add(this->label5);
			this->pnl_app->Controls->Add(this->cmb_monthapp);
			this->pnl_app->Controls->Add(this->label4);
			this->pnl_app->Controls->Add(this->textBox2);
			this->pnl_app->Controls->Add(this->label3);
			this->pnl_app->Controls->Add(this->textBox1);
			this->pnl_app->Controls->Add(this->label1);
			this->pnl_app->Controls->Add(this->txt_firstnameapp);
			this->pnl_app->Controls->Add(this->lbl_firstnameapp);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 28;
			this->pnl_app->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Operations::pnl_app_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(622, 362);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 36);
			this->comboBox1->TabIndex = 76;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(627, 326);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 28);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Scheduled Room";
			// 
			// cmb_yearapp
			// 
			this->cmb_yearapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearapp->FormattingEnabled = true;
			this->cmb_yearapp->Location = System::Drawing::Point(362, 362);
			this->cmb_yearapp->Name = L"cmb_yearapp";
			this->cmb_yearapp->Size = System::Drawing::Size(135, 36);
			this->cmb_yearapp->TabIndex = 74;
			// 
			// cmb_dayapp
			// 
			this->cmb_dayapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_dayapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_dayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_dayapp->FormattingEnabled = true;
			this->cmb_dayapp->Location = System::Drawing::Point(270, 362);
			this->cmb_dayapp->Name = L"cmb_dayapp";
			this->cmb_dayapp->Size = System::Drawing::Size(83, 36);
			this->cmb_dayapp->TabIndex = 73;
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(52, 362);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(212, 36);
			this->comboBox2->TabIndex = 72;
			// 
			// lbl_birthdayapp
			// 
			this->lbl_birthdayapp->AutoSize = true;
			this->lbl_birthdayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_birthdayapp->ForeColor = System::Drawing::Color::White;
			this->lbl_birthdayapp->Location = System::Drawing::Point(57, 326);
			this->lbl_birthdayapp->Name = L"lbl_birthdayapp";
			this->lbl_birthdayapp->Size = System::Drawing::Size(182, 28);
			this->lbl_birthdayapp->TabIndex = 71;
			this->lbl_birthdayapp->Text = L"Scheduled Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(52, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 28);
			this->label5->TabIndex = 43;
			// 
			// cmb_monthapp
			// 
			this->cmb_monthapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthapp->FormattingEnabled = true;
			this->cmb_monthapp->Location = System::Drawing::Point(55, 251);
			this->cmb_monthapp->Name = L"cmb_monthapp";
			this->cmb_monthapp->Size = System::Drawing::Size(364, 36);
			this->cmb_monthapp->TabIndex = 42;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(52, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 28);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Assigned Doctor";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(622, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(348, 39);
			this->textBox2->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(617, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 28);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Disease/ Injury";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(55, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 39);
			this->textBox1->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(50, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 28);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Patient ID";
			// 
			// txt_firstnameapp
			// 
			this->txt_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstnameapp->Location = System::Drawing::Point(254, 144);
			this->txt_firstnameapp->Name = L"txt_firstnameapp";
			this->txt_firstnameapp->Size = System::Drawing::Size(348, 39);
			this->txt_firstnameapp->TabIndex = 36;
			this->txt_firstnameapp->TextChanged += gcnew System::EventHandler(this, &Operations::txt_firstnameapp_TextChanged);
			// 
			// lbl_firstnameapp
			// 
			this->lbl_firstnameapp->AutoSize = true;
			this->lbl_firstnameapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_firstnameapp->ForeColor = System::Drawing::Color::White;
			this->lbl_firstnameapp->Location = System::Drawing::Point(249, 113);
			this->lbl_firstnameapp->Name = L"lbl_firstnameapp";
			this->lbl_firstnameapp->Size = System::Drawing::Size(160, 28);
			this->lbl_firstnameapp->TabIndex = 35;
			this->lbl_firstnameapp->Text = L"Patient Name";
			this->lbl_firstnameapp->Click += gcnew System::EventHandler(this, &Operations::lbl_firstnameapp_Click);
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Operations::btn_doneapp_Click);
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
			this->lbl_appmnt->Size = System::Drawing::Size(131, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Operations";
			// 
			// Operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_app);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Operations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Operations";
			this->Load += gcnew System::EventHandler(this, &Operations::Operations_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbl_firstnameapp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_firstnameapp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pnl_app_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void Operations_Load(System::Object^ sender, System::EventArgs^ e) {
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

}
};
}
