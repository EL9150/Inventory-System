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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
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
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;













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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->tabPage1->Controls->Add(this->txtCent);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1341, 697);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Adding Items";
			// 
			// txtCent
			// 
			this->txtCent->Enabled = false;
			this->txtCent->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCent->Location = System::Drawing::Point(546, 215);
			this->txtCent->Name = L"txtCent";
			this->txtCent->Size = System::Drawing::Size(96, 52);
			this->txtCent->TabIndex = 12;
			this->txtCent->Text = L"0";
			this->txtCent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Linen;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(682, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(639, 423);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(799, 557);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(522, 48);
			this->panel3->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->cboCurrency);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtDollar);
			this->panel1->Controls->Add(this->txtID);
			this->panel1->Controls->Add(this->txtPName);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(18, 75);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(639, 206);
			this->panel1->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(508, 154);
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
			this->cboCurrency->Location = System::Drawing::Point(161, 141);
			this->cboCurrency->Name = L"cboCurrency";
			this->cboCurrency->Size = System::Drawing::Size(94, 50);
			this->cboCurrency->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 37);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Price ";
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
			this->txtDollar->Location = System::Drawing::Point(299, 139);
			this->txtDollar->Name = L"txtDollar";
			this->txtDollar->Size = System::Drawing::Size(209, 52);
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
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Linen;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->monthCalendar1);
			this->panel4->Location = System::Drawing::Point(18, 302);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(295, 227);
			this->panel4->TabIndex = 0;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(16, 9);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Linen;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Location = System::Drawing::Point(18, 557);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(639, 86);
			this->panel5->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(74, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 37);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Date Added";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(299, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 52);
			this->textBox1->TabIndex = 14;
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
			this->label9->Text = L"2";
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
};
}
