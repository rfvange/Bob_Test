#pragma once

//namespace Variables_and_Debugging {

/*
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
*/
	int ValidateKeyPress(System::String^ sControlText) {
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


//}

