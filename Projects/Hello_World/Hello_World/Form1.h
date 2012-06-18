#pragma once

namespace Hello_World {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  btnChange;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(135, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"This is Text";
			// 
			// btnChange
			// 
			this->btnChange->Location = System::Drawing::Point(136, 151);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(75, 23);
			this->btnChange->TabIndex = 1;
			this->btnChange->Text = L"&Change";
			this->btnChange->UseVisualStyleBackColor = true;
			this->btnChange->Click += gcnew System::EventHandler(this, &Form1::btnChange_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(138, 238);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"&Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 332);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Hello World";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnChange_Click(System::Object^  sender, System::EventArgs^  e) {
				 label1->Text = "Hello World";
			 }
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	};
}

