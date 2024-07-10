#pragma once

namespace HospitalMSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VOperations
	/// </summary>
	public ref class VOperations : public System::Windows::Forms::Form
	{
	public:
		VOperations(void)
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
		~VOperations()
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
	private: System::Windows::Forms::Panel^ pnl_signup;
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Label^ lbl_appmnt;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pntid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pntName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dori;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ assdr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ schroom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ schdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ status;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VOperations::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_homeappmnt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_signup = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pntid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pntName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dori = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->assdr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->schroom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->schdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbl_appmnt = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_signup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->panel1->TabIndex = 41;
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
			this->btn_homeappmnt->Click += gcnew System::EventHandler(this, &VOperations::btn_homeappmnt_Click);
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
			// pnl_signup
			// 
			this->pnl_signup->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pnl_signup->Controls->Add(this->button2);
			this->pnl_signup->Controls->Add(this->button1);
			this->pnl_signup->Controls->Add(this->dataGridView1);
			this->pnl_signup->Controls->Add(this->lbl_appmnt);
			this->pnl_signup->Controls->Add(this->panel2);
			this->pnl_signup->Location = System::Drawing::Point(82, 155);
			this->pnl_signup->Name = L"pnl_signup";
			this->pnl_signup->Size = System::Drawing::Size(1019, 586);
			this->pnl_signup->TabIndex = 42;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCoral;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(592, 531);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 40);
			this->button2->TabIndex = 82;
			this->button2->Text = L"Set On Going";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(208, 531);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 40);
			this->button1->TabIndex = 81;
			this->button1->Text = L"Set Complete";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->pntid,
					this->pntName, this->dori, this->assdr, this->schroom, this->schdate, this->status
			});
			this->dataGridView1->GridColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->Location = System::Drawing::Point(59, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(901, 439);
			this->dataGridView1->TabIndex = 80;
			// 
			// pntid
			// 
			this->pntid->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->pntid->HeaderText = L"Patient ID";
			this->pntid->MinimumWidth = 6;
			this->pntid->Name = L"pntid";
			this->pntid->ReadOnly = true;
			this->pntid->Width = 98;
			// 
			// pntName
			// 
			this->pntName->HeaderText = L"Patient Name";
			this->pntName->MinimumWidth = 6;
			this->pntName->Name = L"pntName";
			this->pntName->ReadOnly = true;
			this->pntName->Width = 125;
			// 
			// dori
			// 
			this->dori->HeaderText = L"Disease/ Injury";
			this->dori->MinimumWidth = 6;
			this->dori->Name = L"dori";
			this->dori->ReadOnly = true;
			this->dori->Width = 125;
			// 
			// assdr
			// 
			this->assdr->HeaderText = L"Assigned Doctor";
			this->assdr->MinimumWidth = 6;
			this->assdr->Name = L"assdr";
			this->assdr->ReadOnly = true;
			this->assdr->Width = 125;
			// 
			// schroom
			// 
			this->schroom->HeaderText = L"Scheduled Room";
			this->schroom->MinimumWidth = 6;
			this->schroom->Name = L"schroom";
			this->schroom->ReadOnly = true;
			this->schroom->Width = 125;
			// 
			// schdate
			// 
			this->schdate->HeaderText = L"Scheduled Date";
			this->schdate->MinimumWidth = 6;
			this->schdate->Name = L"schdate";
			this->schdate->ReadOnly = true;
			this->schdate->Width = 125;
			// 
			// status
			// 
			this->status->HeaderText = L"Status";
			this->status->MinimumWidth = 6;
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			this->status->Width = 125;
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
			this->lbl_appmnt->TabIndex = 78;
			this->lbl_appmnt->Text = L"Operations";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(34, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(152, 4);
			this->panel2->TabIndex = 10;
			// 
			// VOperations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_signup);
			this->DoubleBuffered = true;
			this->Name = L"VOperations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VOperations";
			this->Load += gcnew System::EventHandler(this, &VOperations::VOperations_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_signup->ResumeLayout(false);
			this->pnl_signup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_homeappmnt_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
	}
private: System::Void VOperations_Load(System::Object^ sender, System::EventArgs^ e) {
	btn_homeappmnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_homeappmnt->BackColor = System::Drawing::Color::Transparent;
	btn_homeappmnt->FlatAppearance->BorderSize = 0;
	btn_homeappmnt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
	btn_homeappmnt->ForeColor = System::Drawing::Color::SteelBlue;
}
};
}
