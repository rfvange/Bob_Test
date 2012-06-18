#pragma once

namespace Events {

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
	private: System::Windows::Forms::Label^  lblLable1;
	protected: 
	private: System::Windows::Forms::Label^  lblMessage;
	private: System::Windows::Forms::Label^  lblHeader2;
	private: System::Windows::Forms::TextBox^  txtTextControl;
	private: System::Windows::Forms::Button^  btnExit;

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
			this->lblLable1 = (gcnew System::Windows::Forms::Label());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->lblHeader2 = (gcnew System::Windows::Forms::Label());
			this->txtTextControl = (gcnew System::Windows::Forms::TextBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblLable1
			// 
			this->lblLable1->AutoSize = true;
			this->lblLable1->Location = System::Drawing::Point(102, 38);
			this->lblLable1->Name = L"lblLable1";
			this->lblLable1->Size = System::Drawing::Size(105, 16);
			this->lblLable1->TabIndex = 0;
			this->lblLable1->Text = L"Event Triggered";
			// 
			// lblMessage
			// 
			this->lblMessage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMessage->Location = System::Drawing::Point(102, 88);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(100, 23);
			this->lblMessage->TabIndex = 1;
			// 
			// lblHeader2
			// 
			this->lblHeader2->AutoSize = true;
			this->lblHeader2->Location = System::Drawing::Point(112, 138);
			this->lblHeader2->Name = L"lblHeader2";
			this->lblHeader2->Size = System::Drawing::Size(80, 16);
			this->lblHeader2->TabIndex = 2;
			this->lblHeader2->Text = L"Test Control";
			// 
			// txtTextControl
			// 
			this->txtTextControl->Location = System::Drawing::Point(102, 181);
			this->txtTextControl->Name = L"txtTextControl";
			this->txtTextControl->Size = System::Drawing::Size(100, 22);
			this->txtTextControl->TabIndex = 3;
			this->txtTextControl->Click += gcnew System::EventHandler(this, &Form1::txtTextControl_Click);
			this->txtTextControl->TextChanged += gcnew System::EventHandler(this, &Form1::txtTextControl_TextChanged);
			this->txtTextControl->DoubleClick += gcnew System::EventHandler(this, &Form1::txtTextControl_DoubleClick);
			this->txtTextControl->MouseEnter += gcnew System::EventHandler(this, &Form1::txtTextControl_MouseEnter);
			this->txtTextControl->MouseLeave += gcnew System::EventHandler(this, &Form1::txtTextControl_MouseLeave);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(115, 238);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 291);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->txtTextControl);
			this->Controls->Add(this->lblHeader2);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->lblLable1);
			this->Name = L"Form1";
			this->Text = L"Events";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
               Application::Exit();
			 }
	private: System::Void txtTextControl_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			lblMessage->Text = "Double Click";
			 }
	private: System::Void txtTextControl_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblMessage->Text = "Click";
			 }
	private: System::Void txtTextControl_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 lblMessage->Text = "Mouse Enter";
			 }
	private: System::Void txtTextControl_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 lblMessage->Text = "MouseLeave";
			 }
	private: System::Void txtTextControl_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMessage->Text = "Text Changed";
			 }
};
}

