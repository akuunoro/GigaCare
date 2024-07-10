#pragma once
#include "menuview.h"



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
	/// Summary for Appointment2
	/// </summary>
	public ref class Appointment2 : public System::Windows::Forms::Form
	{
	public:

		void cmb_Month()
		{
			array<String^>^ months = gcnew array<String^> {
				"January", "February", "March", "April", "May", "June",
					"July", "August", "September", "October", "November", "December"
			};

			this->cmb_monthapp->Items->AddRange(months);

		};

		void cmb_Days()
		{
			for (int i = 1; i <= 31; ++i)
			{
				this->cmb_dayapp->Items->Add(i.ToString());
			}
		}

		void cmb_Year() {
			for (int i = 2024; i >= 1900; --i) {
				this->cmb_yearapp->Items->Add(i.ToString());
			}
		}





		Appointment2(String^ mobilenum)
		{
			InitializeComponent();
			cmb_Month();
			cmb_Days();
			cmb_Year();


			this->mobilenum = mobilenum;

			
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Appointment2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		
		String^ mobilenum;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_homeappmnt;


	private: System::Windows::Forms::Panel^ pnl_app;
	private: System::Windows::Forms::ComboBox^ cmb_assphy;


	private: System::Windows::Forms::Label^ lbl_physapp;
	private: System::Windows::Forms::ComboBox^ cmb_yearapp;


	private: System::Windows::Forms::ComboBox^ cmb_dayapp;
	private: System::Windows::Forms::Button^ btn_doneapp;


	private: System::Windows::Forms::ComboBox^ cmb_monthapp;

	private: System::Windows::Forms::Label^ lbl_appmntdate;

	private: System::Windows::Forms::Label^ label2;
















	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::ComboBox^ cmb_department;

	private: System::Windows::Forms::Label^ lbl_deptapp;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Appointment2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->cmb_department = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_deptapp = (gcnew System::Windows::Forms::Label());
			this->cmb_assphy = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_physapp = (gcnew System::Windows::Forms::Label());
			this->cmb_yearapp = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_dayapp = (gcnew System::Windows::Forms::ComboBox());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->cmb_monthapp = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_appmntdate = (gcnew System::Windows::Forms::Label());
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
			this->panel1->TabIndex = 1;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Appointment2::btn_homeappmnt_Click);
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->cmb_department);
			this->pnl_app->Controls->Add(this->lbl_deptapp);
			this->pnl_app->Controls->Add(this->cmb_assphy);
			this->pnl_app->Controls->Add(this->lbl_physapp);
			this->pnl_app->Controls->Add(this->cmb_yearapp);
			this->pnl_app->Controls->Add(this->cmb_dayapp);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->cmb_monthapp);
			this->pnl_app->Controls->Add(this->lbl_appmntdate);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(85, 156);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 21;
			// 
			// cmb_department
			// 
			this->cmb_department->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_department->FormattingEnabled = true;
			this->cmb_department->Location = System::Drawing::Point(549, 127);
			this->cmb_department->Name = L"cmb_department";
			this->cmb_department->Size = System::Drawing::Size(437, 36);
			this->cmb_department->TabIndex = 38;
			// 
			// lbl_deptapp
			// 
			this->lbl_deptapp->AutoSize = true;
			this->lbl_deptapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_deptapp->ForeColor = System::Drawing::Color::White;
			this->lbl_deptapp->Location = System::Drawing::Point(552, 91);
			this->lbl_deptapp->Name = L"lbl_deptapp";
			this->lbl_deptapp->Size = System::Drawing::Size(141, 28);
			this->lbl_deptapp->TabIndex = 37;
			this->lbl_deptapp->Text = L"Department";
			// 
			// cmb_assphy
			// 
			this->cmb_assphy->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_assphy->FormattingEnabled = true;
			this->cmb_assphy->Location = System::Drawing::Point(45, 127);
			this->cmb_assphy->Name = L"cmb_assphy";
			this->cmb_assphy->Size = System::Drawing::Size(437, 36);
			this->cmb_assphy->TabIndex = 36;
			// 
			// lbl_physapp
			// 
			this->lbl_physapp->AutoSize = true;
			this->lbl_physapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_physapp->ForeColor = System::Drawing::Color::White;
			this->lbl_physapp->Location = System::Drawing::Point(48, 91);
			this->lbl_physapp->Name = L"lbl_physapp";
			this->lbl_physapp->Size = System::Drawing::Size(222, 28);
			this->lbl_physapp->TabIndex = 35;
			this->lbl_physapp->Text = L"Assigned Physician";
			// 
			// cmb_yearapp
			// 
			this->cmb_yearapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_yearapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_yearapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_yearapp->FormattingEnabled = true;
			this->cmb_yearapp->Location = System::Drawing::Point(599, 259);
			this->cmb_yearapp->Name = L"cmb_yearapp";
			this->cmb_yearapp->Size = System::Drawing::Size(135, 36);
			this->cmb_yearapp->TabIndex = 34;
			// 
			// cmb_dayapp
			// 
			this->cmb_dayapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_dayapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_dayapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_dayapp->FormattingEnabled = true;
			this->cmb_dayapp->Location = System::Drawing::Point(507, 259);
			this->cmb_dayapp->Name = L"cmb_dayapp";
			this->cmb_dayapp->Size = System::Drawing::Size(83, 36);
			this->cmb_dayapp->TabIndex = 33;
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Appointment2::btn_signup_Click);
			// 
			// cmb_monthapp
			// 
			this->cmb_monthapp->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cmb_monthapp->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmb_monthapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_monthapp->FormattingEnabled = true;
			this->cmb_monthapp->Location = System::Drawing::Point(289, 259);
			this->cmb_monthapp->Name = L"cmb_monthapp";
			this->cmb_monthapp->Size = System::Drawing::Size(212, 36);
			this->cmb_monthapp->TabIndex = 32;
			// 
			// lbl_appmntdate
			// 
			this->lbl_appmntdate->AutoSize = true;
			this->lbl_appmntdate->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_appmntdate->ForeColor = System::Drawing::Color::White;
			this->lbl_appmntdate->Location = System::Drawing::Point(411, 216);
			this->lbl_appmntdate->Name = L"lbl_appmntdate";
			this->lbl_appmntdate->Size = System::Drawing::Size(209, 28);
			this->lbl_appmntdate->TabIndex = 31;
			this->lbl_appmntdate->Text = L"Appointment Date";
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
			this->lbl_appmnt->Size = System::Drawing::Size(151, 28);
			this->lbl_appmnt->TabIndex = 0;
			this->lbl_appmnt->Text = L"Appointment";
			// 
			// Appointment2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_app);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Appointment2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Appointment2";
			this->Load += gcnew System::EventHandler(this, &Appointment2::Appointment2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);





	private: System::Void btn_signup_Click(System::Object^ sender, System::EventArgs^ e) {
		

		String^ assphys = cmb_assphy->SelectedItem != nullptr ? cmb_assphy->SelectedItem->ToString() : "";
		int cassphys = cmb_assphy->SelectedIndex;

		String^ department = cmb_department->SelectedItem != nullptr ? cmb_department->SelectedItem->ToString() : "";
		int cdepartment = cmb_department->SelectedIndex;



		String^ month = cmb_monthapp->Text;
		int^ indexm = cmb_monthapp->SelectedIndex;

		String^ day = cmb_dayapp->Text;
		int^ indexd = cmb_dayapp->SelectedIndex;

		String^ year = cmb_yearapp->Text;
		int^ indexy = cmb_yearapp->SelectedIndex;

		String^ appmntdate = String::Format("{0}-{1}-{2}", indexm, indexd, indexy);


		if (dbhospms_connect->State == ConnectionState::Closed) {
			dbhospms_connect->Open();
		}

		
		String^ cmdString = "UPDATE hosp_appmnt SET Appmnt_physician = @physician, Appmnt_department = @department, Appmnt_date = @date WHERE Appmnt_contactnum = @contactnum";

		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, dbhospms_connect);

		cmd->Parameters->AddWithValue("@physician", assphys);
		cmd->Parameters->AddWithValue("@department", department);
		cmd->Parameters->AddWithValue("@date", appmntdate);
		cmd->Parameters->AddWithValue("@contactnum", mobilenum);

		try {
			cmd->ExecuteNonQuery();
			MessageBox::Show("Data Added Successfully!");
			this->Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to update data: " + e->Message);
		}
		finally {
			if (dbhospms_connect->State == ConnectionState::Open) {
				dbhospms_connect->Close();
			}

		}

		
	}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
}
private: System::Void Appointment2_Load(System::Object^ sender, System::EventArgs^ e) {


		if (dbhospms_connect->State == ConnectionState::Closed) {
			dbhospms_connect->Open();
		}

		try {



			DataTable^ dt = gcnew DataTable();

			MySqlDataAdapter^ geta = gcnew MySqlDataAdapter("SELECT CONCAT(doctor_lastname, ', ', doctor_firstname) AS doctor_name FROM hosp_doctors_add", dbhospms_connect);
			geta->Fill(dt);

			cmb_assphy->Items->Clear();

			for each (DataRow ^ row in dt->Rows) {
				cmb_assphy->Items->Add(row["doctor_name"]->ToString());
			}

			if (cmb_assphy->Items->Count > 0) {
				cmb_assphy->SelectedIndex = 0;
			}

			

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Insert Data");

		}

		if (dbhospms_connect->State == ConnectionState::Open) {
				dbhospms_connect->Close();
			}


		if (dbhospms_connect->State == ConnectionState::Closed) {
			dbhospms_connect->Open();
		}

		try {



			DataTable^ dt1 = gcnew DataTable();

			MySqlDataAdapter^ geta1 = gcnew MySqlDataAdapter("SELECT dept_name FROM hosp_department", dbhospms_connect);
			geta1->Fill(dt1);

			cmb_department->Items->Clear();

			for each (DataRow ^ row in dt1->Rows) {
				cmb_department->Items->Add(row["dept_name"]->ToString());
			}

			if (cmb_department->Items->Count > 0) {
				cmb_department->SelectedIndex = 0;
			}



		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Insert Data");

		}

		if (dbhospms_connect->State == ConnectionState::Open) {
			dbhospms_connect->Close();
		}
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

	lbl_physapp->ForeColor = Color::White;
	lbl_physapp->BackColor = Color::Transparent;

	lbl_deptapp->ForeColor = Color::White;
	lbl_deptapp->BackColor = Color::Transparent;

	lbl_appmntdate->ForeColor = Color::White;
	lbl_appmntdate->BackColor = Color::Transparent;


}
};
}
