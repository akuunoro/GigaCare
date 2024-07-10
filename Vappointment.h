#pragma once

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
	/// Summary for Vappointment
	/// </summary>
	public ref class Vappointment : public System::Windows::Forms::Form
	{
	public:
		Vappointment(void)
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
		~Vappointment()
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
	private: System::Windows::Forms::Panel^ pnl_signup;
	private: System::Windows::Forms::DataGridView^ tbl_appmnt;
















	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ app_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ middlename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ homeaddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phonenumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birthdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ guardian;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ guardianmobilenum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ assphysician;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dept;
	private: System::Windows::Forms::Button^ button1;





















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Vappointment::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pnl_signup = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbl_appmnt = (gcnew System::Windows::Forms::DataGridView());
			this->app_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->middlename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->homeaddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->birthdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guardian = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guardianmobilenum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->assphysician = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dept = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->pnl_signup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbl_appmnt))->BeginInit();
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
			this->panel1->TabIndex = 33;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Vappointment::btn_homeappmnt_Click);
			// 
			// pnl_signup
			// 
			this->pnl_signup->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pnl_signup->Controls->Add(this->button1);
			this->pnl_signup->Controls->Add(this->tbl_appmnt);
			this->pnl_signup->Controls->Add(this->label7);
			this->pnl_signup->Controls->Add(this->panel2);
			this->pnl_signup->Location = System::Drawing::Point(84, 146);
			this->pnl_signup->Name = L"pnl_signup";
			this->pnl_signup->Size = System::Drawing::Size(1019, 587);
			this->pnl_signup->TabIndex = 34;
			this->pnl_signup->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Vappointment::pnl_signup_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(304, 535);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(445, 36);
			this->button1->TabIndex = 83;
			this->button1->Text = L"Appointment Done";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// tbl_appmnt
			// 
			this->tbl_appmnt->AllowUserToOrderColumns = true;
			this->tbl_appmnt->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->tbl_appmnt->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tbl_appmnt->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->app_date,
					this->lastname, this->firstname, this->middlename, this->homeaddress, this->phonenumber, this->birthdate, this->gender, this->guardian,
					this->guardianmobilenum, this->assphysician, this->dept
			});
			this->tbl_appmnt->GridColor = System::Drawing::Color::LightSteelBlue;
			this->tbl_appmnt->Location = System::Drawing::Point(34, 72);
			this->tbl_appmnt->Name = L"tbl_appmnt";
			this->tbl_appmnt->RowHeadersWidth = 51;
			this->tbl_appmnt->RowTemplate->Height = 24;
			this->tbl_appmnt->Size = System::Drawing::Size(959, 439);
			this->tbl_appmnt->TabIndex = 82;
			// 
			// app_date
			// 
			this->app_date->HeaderText = L"Appointment Date";
			this->app_date->MinimumWidth = 6;
			this->app_date->Name = L"app_date";
			this->app_date->ReadOnly = true;
			this->app_date->Width = 125;
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
			// guardian
			// 
			this->guardian->HeaderText = L"Guardian";
			this->guardian->MinimumWidth = 6;
			this->guardian->Name = L"guardian";
			this->guardian->ReadOnly = true;
			this->guardian->Width = 125;
			// 
			// guardianmobilenum
			// 
			this->guardianmobilenum->HeaderText = L"Guardian Mobile Number";
			this->guardianmobilenum->MinimumWidth = 6;
			this->guardianmobilenum->Name = L"guardianmobilenum";
			this->guardianmobilenum->ReadOnly = true;
			this->guardianmobilenum->Width = 125;
			// 
			// assphysician
			// 
			this->assphysician->HeaderText = L"Assigned Physician";
			this->assphysician->MinimumWidth = 6;
			this->assphysician->Name = L"assphysician";
			this->assphysician->ReadOnly = true;
			this->assphysician->Width = 125;
			// 
			// dept
			// 
			this->dept->HeaderText = L"Department";
			this->dept->MinimumWidth = 6;
			this->dept->Name = L"dept";
			this->dept->ReadOnly = true;
			this->dept->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(29, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 28);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Appointment";
			this->label7->Click += gcnew System::EventHandler(this, &Vappointment::label7_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(34, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 4);
			this->panel2->TabIndex = 10;
			// 
			// Vappointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_signup);
			this->DoubleBuffered = true;
			this->Name = L"Vappointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vappointment";
			this->Load += gcnew System::EventHandler(this, &Vappointment::Vappointment_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_signup->ResumeLayout(false);
			this->pnl_signup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbl_appmnt))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void Vappointment_Load(System::Object^ sender, System::EventArgs^ e) {
	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;



	if (dbhospms_connect->State == ConnectionState::Closed) {
		dbhospms_connect->Open();
	}

	try {

		MySqlDataAdapter^ geta = gcnew MySqlDataAdapter("SELECT * FROM hosp_appmnt", dbhospms_connect);
		DataTable^ dt = gcnew DataTable;
		geta->Fill(dt);
		tbl_appmnt->DataSource = dt;

	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to Insert Data");

	}




}
private: System::Void pnl_signup_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
};
}
