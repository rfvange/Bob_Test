#pragma once

namespace ProgressBar1 {

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
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  Exit;

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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(22, 39);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(282, 76);
			this->progressBar1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 76);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Push Me";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(22, 142);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(282, 230);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(323, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Load Picture";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(323, 255);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(96, 32);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"E&xit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Form1::Exit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 488);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"Form1";
			this->Text = L"Progress Bar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(progressBar1->Value == 0)
					 progressBar1->Value = 50;
				 else if(progressBar1->Value == 50)
					 progressBar1->Value = 100;
				 else if(progressBar1->Value == 100)
					 progressBar1->Value = 0;
//				 MessageBox::Show("You typed an incorrect value!", "ERROR!!!");
			 }
			 
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//				 MessageBox::Show("You typed an incorrect value!", "ERROR!!!");
//				 progressBar1->Value = 0;
				Image^ MyImage;
//				int xSize = 864, ySize = 1152;
				int xSize = 216, ySize = 288;
//String^ fileToDisplay = L"D:\\Bob3\\Canon\\101___06\\Brita_Paint.jpg";
//				if (MyImage != 0)
//				{
//				   MyImage->Dispose();
//				}
 
				// Stretches the image to fit the pictureBox.
				pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage ;
//				MyImage = gcnew Bitmap(fileToDisplay);
				MyImage = Image::FromFile(L"D:\\Bob3\\Canon\\101___06\\Brita_Paint.jpg");
				pictureBox1->ClientSize = System::Drawing::Size(xSize, ySize);
//				pictureBox1->Image = dynamic_cast<Image^>(MyImage);
				pictureBox1->Image = MyImage;
			 }
			 
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

