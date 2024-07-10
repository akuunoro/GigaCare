#pragma once

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Patient4
	/// </summary>
	public ref class Patient4 : public System::Windows::Forms::Form
	{
	private:
			String^ mobilenumpnt;
			static int idnurse;
			static int iddoctor;
			static int iddept;


	public:
		Patient4(String ^ mobilenumpnt)
		{
			InitializeComponent();
			this->mobilenumpnt = mobilenumpnt;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_homeappmnt;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnl_app;
	private: System::Windows::Forms::Button^ btn_doneapp;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::ComboBox^ cmb_departmentpnt;


	private: System::Windows::Forms::Label^ lbl_deptapp;
	private: System::Windows::Forms::ComboBox^ cmb_assdrpnt;



	private: System::Windows::Forms::Label^ lbl_physapp;
	private: System::Windows::Forms::ComboBox^ cmb_roompnt;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmb_assnpnt;




	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient4::typeid));
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_app = (gcnew System::Windows::Forms::Panel());
			this->cmb_roompnt = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmb_assnpnt = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmb_departmentpnt = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_deptapp = (gcnew System::Windows::Forms::Label());
			this->cmb_assdrpnt = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_physapp = (gcnew System::Windows::Forms::Label());
			this->btn_doneapp = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Patient4::btn_homeappmnt_Click);
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
			this->panel1->TabIndex = 27;
			// 
			// pnl_app
			// 
			this->pnl_app->BackColor = System::Drawing::Color::LightCoral;
			this->pnl_app->Controls->Add(this->cmb_roompnt);
			this->pnl_app->Controls->Add(this->label4);
			this->pnl_app->Controls->Add(this->cmb_assnpnt);
			this->pnl_app->Controls->Add(this->label2);
			this->pnl_app->Controls->Add(this->cmb_departmentpnt);
			this->pnl_app->Controls->Add(this->lbl_deptapp);
			this->pnl_app->Controls->Add(this->cmb_assdrpnt);
			this->pnl_app->Controls->Add(this->lbl_physapp);
			this->pnl_app->Controls->Add(this->btn_doneapp);
			this->pnl_app->Controls->Add(this->panel2);
			this->pnl_app->Controls->Add(this->lbl_appmnt);
			this->pnl_app->Location = System::Drawing::Point(82, 155);
			this->pnl_app->Name = L"pnl_app";
			this->pnl_app->Size = System::Drawing::Size(1019, 578);
			this->pnl_app->TabIndex = 28;
			// 
			// cmb_roompnt
			// 
			this->cmb_roompnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_roompnt->FormattingEnabled = true;
			this->cmb_roompnt->Location = System::Drawing::Point(29, 361);
			this->cmb_roompnt->Name = L"cmb_roompnt";
			this->cmb_roompnt->Size = System::Drawing::Size(437, 36);
			this->cmb_roompnt->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(32, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 28);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Assigned Room";
			// 
			// cmb_assnpnt
			// 
			this->cmb_assnpnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_assnpnt->FormattingEnabled = true;
			this->cmb_assnpnt->Location = System::Drawing::Point(29, 257);
			this->cmb_assnpnt->Name = L"cmb_assnpnt";
			this->cmb_assnpnt->Size = System::Drawing::Size(437, 36);
			this->cmb_assnpnt->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(32, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 28);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Assigned Nurse";
			// 
			// cmb_departmentpnt
			// 
			this->cmb_departmentpnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_departmentpnt->FormattingEnabled = true;
			this->cmb_departmentpnt->Location = System::Drawing::Point(533, 151);
			this->cmb_departmentpnt->Name = L"cmb_departmentpnt";
			this->cmb_departmentpnt->Size = System::Drawing::Size(437, 36);
			this->cmb_departmentpnt->TabIndex = 42;
			// 
			// lbl_deptapp
			// 
			this->lbl_deptapp->AutoSize = true;
			this->lbl_deptapp->BackColor = System::Drawing::Color::Transparent;
			this->lbl_deptapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_deptapp->ForeColor = System::Drawing::Color::White;
			this->lbl_deptapp->Location = System::Drawing::Point(536, 115);
			this->lbl_deptapp->Name = L"lbl_deptapp";
			this->lbl_deptapp->Size = System::Drawing::Size(141, 28);
			this->lbl_deptapp->TabIndex = 41;
			this->lbl_deptapp->Text = L"Department";
			// 
			// cmb_assdrpnt
			// 
			this->cmb_assdrpnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_assdrpnt->FormattingEnabled = true;
			this->cmb_assdrpnt->Location = System::Drawing::Point(29, 151);
			this->cmb_assdrpnt->Name = L"cmb_assdrpnt";
			this->cmb_assdrpnt->Size = System::Drawing::Size(437, 36);
			this->cmb_assdrpnt->TabIndex = 40;
			// 
			// lbl_physapp
			// 
			this->lbl_physapp->AutoSize = true;
			this->lbl_physapp->BackColor = System::Drawing::Color::Transparent;
			this->lbl_physapp->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_physapp->ForeColor = System::Drawing::Color::White;
			this->lbl_physapp->Location = System::Drawing::Point(32, 115);
			this->lbl_physapp->Name = L"lbl_physapp";
			this->lbl_physapp->Size = System::Drawing::Size(191, 28);
			this->lbl_physapp->TabIndex = 39;
			this->lbl_physapp->Text = L"Assigned Doctor";
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
			this->btn_doneapp->Click += gcnew System::EventHandler(this, &Patient4::btn_doneapp_Click);
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
			// Patient4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_app);
			this->DoubleBuffered = true;
			this->Name = L"Patient4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Patient4";
			this->Load += gcnew System::EventHandler(this, &Patient4::Patient4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_app->ResumeLayout(false);
			this->pnl_app->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectdbhospms = "Server=localhost;port=3309;database=dbhospms;uid=noro;password=TAKTEKA*_19";
		MySqlConnection^ dbhospms_connect = gcnew MySqlConnection(connectdbhospms);

private: System::Void btn_doneapp_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ assdrpnt = cmb_assdrpnt->SelectedItem != nullptr ? cmb_assdrpnt->SelectedItem->ToString() : "";
	int cassdrpnt = cmb_assdrpnt->SelectedIndex;

	String^ departmentpnt = cmb_departmentpnt->SelectedItem != nullptr ? cmb_departmentpnt->SelectedItem->ToString() : "";
	int cdepartmentpnt = cmb_departmentpnt->SelectedIndex;

	String^ roompnt = cmb_roompnt->SelectedItem != nullptr ? cmb_roompnt->SelectedItem->ToString() : "";
	int croompnt = cmb_roompnt->SelectedIndex;

	String^ nursepnt = cmb_assnpnt->SelectedItem != nullptr ? cmb_assnpnt->SelectedItem->ToString() : "";
	int cnursepnt = cmb_assnpnt->SelectedIndex;


	if (dbhospms_connect->State == ConnectionState::Closed) {
		dbhospms_connect->Open();
	}


	String^ cmdString = "UPDATE hosp_admtinfo SET Admt_room = @room, Admt_nurseid = @nurseid,  Admt_nurse = @nurse, Admt_doctorid = @doctorid, Admt_doctor = @doctor, Admt_departmentid = @departmentid, Admt_department = @department WHERE Admt_contactnum = @contactnum";

	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, dbhospms_connect);
	cmd->Parameters->AddWithValue("@room", roompnt);
	cmd->Parameters->AddWithValue("@nurseid", idnurse);
	cmd->Parameters->AddWithValue("@nurse", nursepnt);
	cmd->Parameters->AddWithValue("@doctorid", iddoctor);
	cmd->Parameters->AddWithValue("@doctor", assdrpnt);
	cmd->Parameters->AddWithValue("@departmentid", iddept);
	cmd->Parameters->AddWithValue("@department", departmentpnt);
	cmd->Parameters->AddWithValue("@contactnum", mobilenumpnt);

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
	Hide();
}
	private: System::Void Patient4_Load(System::Object^ sender, System::EventArgs^ e) {
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

		if (dbhospms_connect->State == ConnectionState::Closed) {
			dbhospms_connect->Open();
		}

		try {



			DataTable^ dtdr = gcnew DataTable();

			MySqlDataAdapter^ getadr = gcnew MySqlDataAdapter("SELECT CONCAT(doctor_lastname, ', ', doctor_firstname) AS doctor_name, DoctorID FROM hosp_doctors_add", dbhospms_connect);
			getadr->Fill(dtdr);

			cmb_assdrpnt->Items->Clear();

			for each (DataRow ^ row in dtdr->Rows) {
				cmb_assdrpnt->Items->Add(row["doctor_name"]->ToString());

				int doctorID = Convert::ToInt32(row["doctorid"]);
				iddoctor = doctorID;
			}

			if (cmb_assdrpnt->Items->Count > 0) {
				cmb_assdrpnt->SelectedIndex = 0;
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



			DataTable^ dtdept = gcnew DataTable();

			MySqlDataAdapter^ getadept = gcnew MySqlDataAdapter("SELECT DeptID, dept_name FROM hosp_department", dbhospms_connect);
			getadept->Fill(dtdept);

			cmb_departmentpnt->Items->Clear();

			for each (DataRow ^ row in dtdept->Rows) {
				cmb_departmentpnt->Items->Add(row["dept_name"]->ToString());

				int deptID = Convert::ToInt32(row["DeptID"]);
				iddept = deptID;
			}

			if (cmb_departmentpnt->Items->Count > 0) {
				cmb_departmentpnt->SelectedIndex = 0;
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



			DataTable^ dtrm = gcnew DataTable();

			MySqlDataAdapter^ getarm = gcnew MySqlDataAdapter("SELECT R_rooms FROM hosp_rooms", dbhospms_connect);
			getarm->Fill(dtrm);

			cmb_roompnt->Items->Clear();

			for each (DataRow ^ row in dtrm->Rows) {
				cmb_roompnt->Items->Add(row["hosp_rooms"]->ToString());
			}

			if (cmb_roompnt->Items->Count > 0) {
				cmb_roompnt->SelectedIndex = 0;
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



			DataTable^ dtn = gcnew DataTable();

			MySqlDataAdapter^ getan = gcnew MySqlDataAdapter("SELECT CONCAT(nurse_lastname, ', ', nurse_firstname) AS nurse_name, NurseID FROM hosp_nurses_add", dbhospms_connect);
			getan->Fill(dtn);

			cmb_roompnt->Items->Clear();

			for each (DataRow ^ row in dtn->Rows) {
				cmb_roompnt->Items->Add(row["nurse_name"]->ToString());


				int NurseID = Convert::ToInt32(row["NurseID"]);
				idnurse = NurseID;

			}

			if (cmb_roompnt->Items->Count > 0) {
				cmb_roompnt->SelectedIndex = 0;
			}



		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Insert Data");

		}
	}

};
}
