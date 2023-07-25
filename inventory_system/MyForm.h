#pragma once

namespace inventorysystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ PProduct;
	private: System::Windows::Forms::Panel^ PProduct2;


	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPName;
	private: System::Windows::Forms::TextBox^ txtDollar;




	private: System::Windows::Forms::TextBox^ txtID;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cboCurrency;

	private: System::Windows::Forms::TextBox^ txtCent;
	private: System::Windows::Forms::Panel^ PCalendar;


	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ PDate;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ NUP1;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtComment;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtDescription;

	private: System::Windows::Forms::Panel^ POwner;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ txtOwner;
	private: System::Windows::Forms::TextBox^ txtEmail;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txtPhone;















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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtCent = (gcnew System::Windows::Forms::TextBox());
			this->PProduct2 = (gcnew System::Windows::Forms::Panel());
			this->PCalendar = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->PDate = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->PProduct = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cboCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDollar = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtPName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->NUP1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtComment = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->POwner = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->PProduct2->SuspendLayout();
			this->PCalendar->SuspendLayout();
			this->PDate->SuspendLayout();
			this->PProduct->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUP1))->BeginInit();
			this->POwner->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1349, 726);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Bisque;
			this->tabPage1->Controls->Add(this->POwner);
			this->tabPage1->Controls->Add(this->txtCent);
			this->tabPage1->Controls->Add(this->PProduct2);
			this->tabPage1->Controls->Add(this->PCalendar);
			this->tabPage1->Controls->Add(this->PDate);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->PProduct);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1341, 697);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Storing";
			// 
			// txtCent
			// 
			this->txtCent->Enabled = false;
			this->txtCent->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCent->Location = System::Drawing::Point(573, 156);
			this->txtCent->Name = L"txtCent";
			this->txtCent->Size = System::Drawing::Size(69, 52);
			this->txtCent->TabIndex = 12;
			this->txtCent->Text = L"0";
			this->txtCent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PProduct2
			// 
			this->PProduct2->BackColor = System::Drawing::Color::Linen;
			this->PProduct2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PProduct2->Controls->Add(this->label12);
			this->PProduct2->Controls->Add(this->label13);
			this->PProduct2->Controls->Add(this->label15);
			this->PProduct2->Controls->Add(this->txtComment);
			this->PProduct2->Controls->Add(this->label14);
			this->PProduct2->Controls->Add(this->txtDescription);
			this->PProduct2->Location = System::Drawing::Point(682, 16);
			this->PProduct2->Name = L"PProduct2";
			this->PProduct2->Size = System::Drawing::Size(639, 269);
			this->PProduct2->TabIndex = 0;
			// 
			// PCalendar
			// 
			this->PCalendar->BackColor = System::Drawing::Color::Linen;
			this->PCalendar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PCalendar->Controls->Add(this->monthCalendar1);
			this->PCalendar->Location = System::Drawing::Point(18, 337);
			this->PCalendar->Name = L"PCalendar";
			this->PCalendar->Size = System::Drawing::Size(295, 227);
			this->PCalendar->TabIndex = 0;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(16, 9);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// PDate
			// 
			this->PDate->BackColor = System::Drawing::Color::Linen;
			this->PDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PDate->Controls->Add(this->label8);
			this->PDate->Controls->Add(this->label9);
			this->PDate->Controls->Add(this->txtDate);
			this->PDate->Location = System::Drawing::Point(319, 410);
			this->PDate->Name = L"PDate";
			this->PDate->Size = System::Drawing::Size(338, 86);
			this->PDate->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(65, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 37);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Date";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 51);
			this->label9->TabIndex = 13;
			this->label9->Text = L"5";
			// 
			// txtDate
			// 
			this->txtDate->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDate->Location = System::Drawing::Point(140, 16);
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(182, 52);
			this->txtDate->TabIndex = 14;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(942, 630);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(379, 48);
			this->panel3->TabIndex = 0;
			// 
			// PProduct
			// 
			this->PProduct->BackColor = System::Drawing::Color::Linen;
			this->PProduct->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PProduct->Controls->Add(this->NUP1);
			this->PProduct->Controls->Add(this->label10);
			this->PProduct->Controls->Add(this->label11);
			this->PProduct->Controls->Add(this->label7);
			this->PProduct->Controls->Add(this->cboCurrency);
			this->PProduct->Controls->Add(this->label6);
			this->PProduct->Controls->Add(this->label5);
			this->PProduct->Controls->Add(this->label4);
			this->PProduct->Controls->Add(this->txtDollar);
			this->PProduct->Controls->Add(this->txtID);
			this->PProduct->Controls->Add(this->txtPName);
			this->PProduct->Controls->Add(this->label3);
			this->PProduct->Controls->Add(this->label2);
			this->PProduct->Controls->Add(this->label1);
			this->PProduct->Location = System::Drawing::Point(18, 16);
			this->PProduct->Name = L"PProduct";
			this->PProduct->Size = System::Drawing::Size(639, 281);
			this->PProduct->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(526, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 37);
			this->label7->TabIndex = 11;
			this->label7->Text = L".";
			// 
			// cboCurrency
			// 
			this->cboCurrency->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboCurrency->FormattingEnabled = true;
			this->cboCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"USD", L"EUR", L"CNY", L"JPY", L"AUD", L"GBP",
					L"CAD", L"HKD", L""
			});
			this->cboCurrency->Location = System::Drawing::Point(299, 141);
			this->cboCurrency->Name = L"cboCurrency";
			this->cboCurrency->Size = System::Drawing::Size(94, 50);
			this->cboCurrency->TabIndex = 10;
			this->cboCurrency->Text = L"USD";
			this->cboCurrency->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboCurrency_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 37);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Unit Price";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(74, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 37);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Product ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(74, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 37);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Product Name";
			// 
			// txtDollar
			// 
			this->txtDollar->Enabled = false;
			this->txtDollar->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDollar->Location = System::Drawing::Point(410, 139);
			this->txtDollar->Name = L"txtDollar";
			this->txtDollar->Size = System::Drawing::Size(110, 52);
			this->txtDollar->TabIndex = 6;
			this->txtDollar->Text = L"0";
			this->txtDollar->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtID
			// 
			this->txtID->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtID->Location = System::Drawing::Point(299, 74);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(324, 52);
			this->txtID->TabIndex = 5;
			// 
			// txtPName
			// 
			this->txtPName->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPName->Location = System::Drawing::Point(299, 10);
			this->txtPName->Name = L"txtPName";
			this->txtPName->Size = System::Drawing::Size(324, 52);
			this->txtPName->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 51);
			this->label3->TabIndex = 2;
			this->label3->Text = L"3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 51);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1";
			// 
			// tabPage2
			// 
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1341, 697);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Inventory";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(74, 217);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(205, 37);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Number of Items";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 203);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 51);
			this->label11->TabIndex = 12;
			this->label11->Text = L"4";
			// 
			// NUP1
			// 
			this->NUP1->Location = System::Drawing::Point(299, 211);
			this->NUP1->Name = L"NUP1";
			this->NUP1->Size = System::Drawing::Size(94, 49);
			this->NUP1->TabIndex = 14;
			this->NUP1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(81, 89);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 37);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Comment";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(81, 25);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(150, 37);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Description";
			// 
			// txtComment
			// 
			this->txtComment->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComment->Location = System::Drawing::Point(259, 89);
			this->txtComment->Multiline = true;
			this->txtComment->Name = L"txtComment";
			this->txtComment->Size = System::Drawing::Size(359, 165);
			this->txtComment->TabIndex = 18;
			this->txtComment->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtDescription
			// 
			this->txtDescription->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDescription->Location = System::Drawing::Point(259, 10);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(359, 52);
			this->txtDescription->TabIndex = 17;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(23, 75);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 51);
			this->label14->TabIndex = 16;
			this->label14->Text = L"7";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(23, 11);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 51);
			this->label15->TabIndex = 15;
			this->label15->Text = L"6";
			// 
			// POwner
			// 
			this->POwner->BackColor = System::Drawing::Color::Linen;
			this->POwner->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->POwner->Controls->Add(this->txtEmail);
			this->POwner->Controls->Add(this->label20);
			this->POwner->Controls->Add(this->label21);
			this->POwner->Controls->Add(this->txtPhone);
			this->POwner->Controls->Add(this->label16);
			this->POwner->Controls->Add(this->label17);
			this->POwner->Controls->Add(this->label18);
			this->POwner->Controls->Add(this->label19);
			this->POwner->Controls->Add(this->txtOwner);
			this->POwner->Location = System::Drawing::Point(682, 321);
			this->POwner->Name = L"POwner";
			this->POwner->Size = System::Drawing::Size(639, 220);
			this->POwner->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(81, 89);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 37);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Phone";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(81, 25);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(94, 37);
			this->label17->TabIndex = 19;
			this->label17->Text = L"Owner";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(23, 11);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 51);
			this->label18->TabIndex = 15;
			this->label18->Text = L"8";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(23, 75);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(43, 51);
			this->label19->TabIndex = 16;
			this->label19->Text = L"9";
			// 
			// txtOwner
			// 
			this->txtOwner->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOwner->Location = System::Drawing::Point(259, 10);
			this->txtOwner->Name = L"txtOwner";
			this->txtOwner->Size = System::Drawing::Size(359, 52);
			this->txtOwner->TabIndex = 17;
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(259, 75);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(359, 52);
			this->txtPhone->TabIndex = 21;
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(259, 140);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(359, 52);
			this->txtEmail->TabIndex = 24;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(81, 154);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 37);
			this->label20->TabIndex = 23;
			this->label20->Text = L"Email";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(6, 140);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 51);
			this->label21->TabIndex = 22;
			this->label21->Text = L"10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->PProduct2->ResumeLayout(false);
			this->PProduct2->PerformLayout();
			this->PCalendar->ResumeLayout(false);
			this->PDate->ResumeLayout(false);
			this->PDate->PerformLayout();
			this->PProduct->ResumeLayout(false);
			this->PProduct->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUP1))->EndInit();
			this->POwner->ResumeLayout(false);
			this->POwner->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cboCurrency_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
