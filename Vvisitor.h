#pragma once

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Vvisitor
	/// </summary>
	public ref class Vvisitor : public System::Windows::Forms::Form
	{
	public:
		Vvisitor(void)
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
		~Vvisitor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_signup;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_homeappmnt;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ specialization;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pnt_vst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rm_vst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ datevst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ timeinvst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ timeoutvst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ middlename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ homeaddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phonenumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birthdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Vvisitor::typeid));
			this->pnl_signup = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->specialization = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pnt_vst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rm_vst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->datevst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timeinvst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timeoutvst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->middlename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->homeaddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->birthdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_signup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_signup
			// 
			this->pnl_signup->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pnl_signup->Controls->Add(this->dataGridView1);
			this->pnl_signup->Controls->Add(this->lbl_appmnt);
			this->pnl_signup->Controls->Add(this->panel2);
			this->pnl_signup->Location = System::Drawing::Point(82, 186);
			this->pnl_signup->Name = L"pnl_signup";
			this->pnl_signup->Size = System::Drawing::Size(1019, 536);
			this->pnl_signup->TabIndex = 36;
			this->pnl_signup->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Vvisitor::pnl_signup_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->specialization,
					this->pnt_vst, this->rm_vst, this->datevst, this->timeinvst, this->timeoutvst, this->lastname, this->firstname, this->middlename,
					this->homeaddress, this->phonenumber, this->birthdate, this->gender
			});
			this->dataGridView1->GridColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->Location = System::Drawing::Point(34, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(959, 439);
			this->dataGridView1->TabIndex = 80;
			// 
			// specialization
			// 
			this->specialization->HeaderText = L"Visitor ID";
			this->specialization->MinimumWidth = 6;
			this->specialization->Name = L"specialization";
			this->specialization->ReadOnly = true;
			this->specialization->Width = 125;
			// 
			// pnt_vst
			// 
			this->pnt_vst->HeaderText = L"Patient Visited";
			this->pnt_vst->MinimumWidth = 6;
			this->pnt_vst->Name = L"pnt_vst";
			this->pnt_vst->ReadOnly = true;
			this->pnt_vst->Width = 125;
			// 
			// rm_vst
			// 
			this->rm_vst->HeaderText = L"Room Visited";
			this->rm_vst->MinimumWidth = 6;
			this->rm_vst->Name = L"rm_vst";
			this->rm_vst->ReadOnly = true;
			this->rm_vst->Width = 125;
			// 
			// datevst
			// 
			this->datevst->HeaderText = L"Date of Visit";
			this->datevst->MinimumWidth = 6;
			this->datevst->Name = L"datevst";
			this->datevst->ReadOnly = true;
			this->datevst->Width = 125;
			// 
			// timeinvst
			// 
			this->timeinvst->HeaderText = L"Time In";
			this->timeinvst->MinimumWidth = 6;
			this->timeinvst->Name = L"timeinvst";
			this->timeinvst->ReadOnly = true;
			this->timeinvst->Width = 125;
			// 
			// timeoutvst
			// 
			this->timeoutvst->HeaderText = L"Time Out";
			this->timeoutvst->MinimumWidth = 6;
			this->timeoutvst->Name = L"timeoutvst";
			this->timeoutvst->ReadOnly = true;
			this->timeoutvst->Width = 125;
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
			// lbl_appmnt
			// 
			this->lbl_appmnt->AutoSize = true;
			this->lbl_appmnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_appmnt->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_appmnt->ForeColor = System::Drawing::Color::White;
			this->lbl_appmnt->Location = System::Drawing::Point(40, 20);
			this->lbl_appmnt->Name = L"lbl_appmnt";
			this->lbl_appmnt->Size = System::Drawing::Size(85, 28);
			this->lbl_appmnt->TabIndex = 78;
			this->lbl_appmnt->Text = L"Visitor";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(34, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(114, 4);
			this->panel2->TabIndex = 10;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &Vvisitor::btn_homeappmnt_Click);
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
			this->panel1->TabIndex = 35;
			// 
			// Vvisitor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->pnl_signup);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"Vvisitor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vvisitor";
			this->Load += gcnew System::EventHandler(this, &Vvisitor::Vvisitor_Load);
			this->pnl_signup->ResumeLayout(false);
			this->pnl_signup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pnl_signup_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
}
private: System::Void Vvisitor_Load(System::Object^ sender, System::EventArgs^ e) {

	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;

}
};
}
