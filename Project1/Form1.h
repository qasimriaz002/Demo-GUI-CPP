#pragma once

#include <string>
#include "Person.h"
#include "Student.h"
#include "Form2.h"

namespace CppCLRWinFormsProject {


	Student s1;

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace msclr::interop;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbl_ID;

	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbl_fName;
	private: System::Windows::Forms::Label^ lbl_regNo;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ tb_id;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::TextBox^ tb_fname;
	private: System::Windows::Forms::TextBox^ tb_regno;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbl_x;
	private: System::Windows::Forms::Button^ btn_openForm;




	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_fName = (gcnew System::Windows::Forms::Label());
			this->lbl_regNo = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_fname = (gcnew System::Windows::Forms::TextBox());
			this->tb_regno = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbl_x = (gcnew System::Windows::Forms::Label());
			this->btn_openForm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(522, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(89, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Person ID:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->Location = System::Drawing::Point(89, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Person Name:";
			// 
			// lbl_ID
			// 
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_ID->Location = System::Drawing::Point(354, 103);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(0, 37);
			this->lbl_ID->TabIndex = 2;
			this->lbl_ID->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_name->Location = System::Drawing::Point(354, 157);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(0, 37);
			this->lbl_name->TabIndex = 2;
			this->lbl_name->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->Location = System::Drawing::Point(89, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Father Name:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// lbl_fName
			// 
			this->lbl_fName->AutoSize = true;
			this->lbl_fName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_fName->Location = System::Drawing::Point(354, 210);
			this->lbl_fName->Name = L"lbl_fName";
			this->lbl_fName->Size = System::Drawing::Size(0, 37);
			this->lbl_fName->TabIndex = 2;
			this->lbl_fName->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// lbl_regNo
			// 
			this->lbl_regNo->AutoSize = true;
			this->lbl_regNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_regNo->Location = System::Drawing::Point(354, 258);
			this->lbl_regNo->Name = L"lbl_regNo";
			this->lbl_regNo->Size = System::Drawing::Size(0, 37);
			this->lbl_regNo->TabIndex = 2;
			this->lbl_regNo->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label6->Location = System::Drawing::Point(89, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 37);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Reg Number:";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// tb_id
			// 
			this->tb_id->Location = System::Drawing::Point(597, 103);
			this->tb_id->Name = L"tb_id";
			this->tb_id->Size = System::Drawing::Size(371, 26);
			this->tb_id->TabIndex = 4;
			// 
			// tb_name
			// 
			this->tb_name->Location = System::Drawing::Point(597, 157);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(371, 26);
			this->tb_name->TabIndex = 4;
			// 
			// tb_fname
			// 
			this->tb_fname->Location = System::Drawing::Point(597, 210);
			this->tb_fname->Name = L"tb_fname";
			this->tb_fname->Size = System::Drawing::Size(371, 26);
			this->tb_fname->TabIndex = 4;
			// 
			// tb_regno
			// 
			this->tb_regno->Location = System::Drawing::Point(597, 258);
			this->tb_regno->Name = L"tb_regno";
			this->tb_regno->Size = System::Drawing::Size(371, 26);
			this->tb_regno->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(766, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 53);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Insert Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(539, 50);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(70, 20);
			this->lbl_x->TabIndex = 6;
			this->lbl_x->Text = L"Any Text";
			// 
			// btn_openForm
			// 
			this->btn_openForm->Location = System::Drawing::Point(278, 332);
			this->btn_openForm->Name = L"btn_openForm";
			this->btn_openForm->Size = System::Drawing::Size(187, 40);
			this->btn_openForm->TabIndex = 7;
			this->btn_openForm->Text = L"Open Form";
			this->btn_openForm->UseVisualStyleBackColor = true;
			this->btn_openForm->Click += gcnew System::EventHandler(this, &Form1::btn_openForm_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 384);
			this->Controls->Add(this->btn_openForm);
			this->Controls->Add(this->lbl_x);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tb_regno);
			this->Controls->Add(this->tb_fname);
			this->Controls->Add(this->tb_name);
			this->Controls->Add(this->tb_id);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbl_regNo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbl_fName);
			this->Controls->Add(this->lbl_name);
			this->Controls->Add(this->lbl_ID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Function to convert the String (captial S String) into string (small s string)
		   string MarshalString(String^ s) {
			   using namespace Runtime::InteropServices;
			   string os;
			   const char* chars =
				   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
			   return os;
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Start in the name of Allah";
		label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		label1->ForeColor = System::Drawing::Color::Red;

		lbl_name->Text = gcnew String(s1.getName().c_str());
		lbl_ID->Text = gcnew String(to_string(s1.getId()).c_str());
		lbl_fName->Text = gcnew String(s1.get_std_fatherName().c_str());
		lbl_regNo->Text = gcnew String(to_string(s1.get_std_regNo()).c_str());
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	s1.set_std_regNo(Convert::ToInt32(tb_regno->Text));
	s1.setp_id(Convert::ToInt32(tb_id->Text));
	s1.setp_name(MarshalString(tb_name->Text));
	s1.set_std_fatherName(MarshalString(tb_fname->Text));
	MessageBox::Show("Data Inserted");
	lbl_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_openForm_Click(System::Object^ sender, System::EventArgs^ e) {
	Form2^ frm2 = gcnew Form2();
	frm2->Show();
	//this->Hide();

}
};
}
