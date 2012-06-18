#pragma once

namespace Variables_and_Debugging {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblHeader1;
	protected: 
	private: System::Windows::Forms::Label^  lblHeader2;
	private: System::Windows::Forms::Label^  lblEquals;
	private: System::Windows::Forms::Label^  lblHeader3;
	private: System::Windows::Forms::TextBox^  txtFeet;
	private: System::Windows::Forms::TextBox^  txtInches;
	private: System::Windows::Forms::TextBox^  txtConvertedInches;

	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::Button^  btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// My variables
	private:
		int iFeet;
		int iInches;
	private: System::Windows::Forms::GroupBox^  grpConversionType;
	private: System::Windows::Forms::RadioButton^  rbToInches;
	private: System::Windows::Forms::RadioButton^  rbFromInches;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;








			 int iConvertedInches;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblHeader1 = (gcnew System::Windows::Forms::Label());
			this->lblHeader2 = (gcnew System::Windows::Forms::Label());
			this->lblEquals = (gcnew System::Windows::Forms::Label());
			this->lblHeader3 = (gcnew System::Windows::Forms::Label());
			this->txtFeet = (gcnew System::Windows::Forms::TextBox());
			this->txtInches = (gcnew System::Windows::Forms::TextBox());
			this->txtConvertedInches = (gcnew System::Windows::Forms::TextBox());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->grpConversionType = (gcnew System::Windows::Forms::GroupBox());
			this->rbToInches = (gcnew System::Windows::Forms::RadioButton());
			this->rbFromInches = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grpConversionType->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblHeader1
			// 
			this->lblHeader1->AutoSize = true;
			this->lblHeader1->Location = System::Drawing::Point(52, 115);
			this->lblHeader1->Name = L"lblHeader1";
			this->lblHeader1->Size = System::Drawing::Size(35, 16);
			this->lblHeader1->TabIndex = 0;
			this->lblHeader1->Text = L"Feet";
			// 
			// lblHeader2
			// 
			this->lblHeader2->AutoSize = true;
			this->lblHeader2->Location = System::Drawing::Point(148, 115);
			this->lblHeader2->Name = L"lblHeader2";
			this->lblHeader2->Size = System::Drawing::Size(47, 16);
			this->lblHeader2->TabIndex = 1;
			this->lblHeader2->Text = L"Inches";
			// 
			// lblEquals
			// 
			this->lblEquals->AutoSize = true;
			this->lblEquals->Location = System::Drawing::Point(225, 178);
			this->lblEquals->Name = L"lblEquals";
			this->lblEquals->Size = System::Drawing::Size(15, 16);
			this->lblEquals->TabIndex = 2;
			this->lblEquals->Text = L"=";
			// 
			// lblHeader3
			// 
			this->lblHeader3->AutoSize = true;
			this->lblHeader3->Location = System::Drawing::Point(275, 115);
			this->lblHeader3->Name = L"lblHeader3";
			this->lblHeader3->Size = System::Drawing::Size(47, 16);
			this->lblHeader3->TabIndex = 3;
			this->lblHeader3->Text = L"Inches";
			// 
			// txtFeet
			// 
			this->txtFeet->Location = System::Drawing::Point(37, 176);
			this->txtFeet->Name = L"txtFeet";
			this->txtFeet->Size = System::Drawing::Size(60, 22);
			this->txtFeet->TabIndex = 4;
			this->txtFeet->TextChanged += gcnew System::EventHandler(this, &Form1::txtFeet_TextChanged);
			// 
			// txtInches
			// 
			this->txtInches->Location = System::Drawing::Point(135, 176);
			this->txtInches->Name = L"txtInches";
			this->txtInches->Size = System::Drawing::Size(60, 22);
			this->txtInches->TabIndex = 5;
			this->txtInches->TextChanged += gcnew System::EventHandler(this, &Form1::txtInches_TextChanged);
			// 
			// txtConvertedInches
			// 
			this->txtConvertedInches->Enabled = false;
			this->txtConvertedInches->Location = System::Drawing::Point(264, 175);
			this->txtConvertedInches->Name = L"txtConvertedInches";
			this->txtConvertedInches->Size = System::Drawing::Size(71, 22);
			this->txtConvertedInches->TabIndex = 6;
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(81, 328);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(75, 23);
			this->btnConvert->TabIndex = 7;
			this->btnConvert->Text = L"&Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(237, 328);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// grpConversionType
			// 
			this->grpConversionType->Controls->Add(this->rbFromInches);
			this->grpConversionType->Controls->Add(this->rbToInches);
			this->grpConversionType->Location = System::Drawing::Point(37, 204);
			this->grpConversionType->Name = L"grpConversionType";
			this->grpConversionType->Size = System::Drawing::Size(299, 106);
			this->grpConversionType->TabIndex = 9;
			this->grpConversionType->TabStop = false;
			this->grpConversionType->Text = L"Conversion Type";
			// 
			// rbToInches
			// 
			this->rbToInches->AutoSize = true;
			this->rbToInches->Checked = true;
			this->rbToInches->Location = System::Drawing::Point(18, 22);
			this->rbToInches->Name = L"rbToInches";
			this->rbToInches->Size = System::Drawing::Size(88, 20);
			this->rbToInches->TabIndex = 0;
			this->rbToInches->TabStop = true;
			this->rbToInches->Text = L"To Inches";
			this->rbToInches->UseVisualStyleBackColor = true;
			// 
			// rbFromInches
			// 
			this->rbFromInches->AutoSize = true;
			this->rbFromInches->Location = System::Drawing::Point(18, 48);
			this->rbFromInches->Name = L"rbFromInches";
			this->rbFromInches->Size = System::Drawing::Size(102, 20);
			this->rbFromInches->TabIndex = 1;
			this->rbFromInches->Text = L"From Inches";
			this->rbFromInches->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(37, 364);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(298, 89);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(290, 60);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(290, 60);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(28, 33);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(104, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(28, 7);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(104, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(40, 33);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(104, 20);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(40, 7);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(104, 20);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(378, 29);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 25);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 497);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->grpConversionType);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->txtConvertedInches);
			this->Controls->Add(this->txtInches);
			this->Controls->Add(this->txtFeet);
			this->Controls->Add(this->lblHeader3);
			this->Controls->Add(this->lblEquals);
			this->Controls->Add(this->lblHeader2);
			this->Controls->Add(this->lblHeader1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Variables and Debugging";
			this->grpConversionType->ResumeLayout(false);
			this->grpConversionType->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				Application::Exit();
			 }
private: System::Void txtFeet_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//int iTemp;
			int iRetVal;

			// Validate Key Press
			iRetVal = ValidateKeyPress(txtFeet->Text);
			if(iRetVal > -9999) // Key press is valid
				iFeet = iRetVal; // Assign to iFeet
			else
			{
				txtFeet->Text = Convert::ToString(iFeet); // Replace with original value
				txtFeet->SelectAll();
			}
/*
			if(Int32::TryParse(txtFeet->Text, iTemp))
				iFeet = Convert::ToInt32(txtFeet->Text);
			else
				txtFeet->Text = Convert::ToString(iFeet);
*/
		 }
private: System::Void txtInches_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			//int iTemp;
			int iRetVal;

			// Validate Key Press
			iRetVal = ValidateKeyPress(txtInches->Text);
			if(iRetVal > -9999) // Key press is valid
				iInches = iRetVal; // Assign to iInches
			else
			{
				txtInches->Text = Convert::ToString(iInches); // Replace with original value
				txtInches->SelectAll();
			}
/*
			if(Int32::TryParse(txtInches->Text, iTemp))
				iInches = Convert::ToInt32(txtInches->Text);
			else
				txtInches->Text = Convert::ToString(iInches);
*/
		 }

private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ sConvertedVal;

			 iConvertedInches = CalculateInches(iFeet, iInches);
			 sConvertedVal = Convert::ToString(iConvertedInches);
			 txtConvertedInches->Text = sConvertedVal;
		//	iConvertedInches = (iFeet * 12) + iInches;
		//	txtConvertedInches->Text = Convert::ToString(iConvertedInches);
		 }

private: int CalculateInches(int iFeetIn, int iInchesIn) {
			 return (iFeetIn * 12) + iInchesIn;
		 }

private: int ValidateKeyPress(System::String^ sControlText) {
			 int iTest;

			 if(Int32::TryParse(sControlText, iTest)) // Verify the value was numeric
				 return iTest; // Return the value if it is
			 else
			 {
				 // Value was not numeric
				 MessageBox::Show("You typed an incorrect value!", "ERROR!!!");
			     // Return -9999 as a flag to indicate an invalid value
			     return -9999;
			 }
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

