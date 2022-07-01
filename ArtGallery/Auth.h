#pragma once
#include "Gallery.h"

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{

	Gallery* GalleryApp;
	public:
		Auth(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void setDataStore(Gallery* DataStore) {
			this->GalleryApp = DataStore;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ username;
	protected:
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ signup;
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ gender;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Auth::typeid));
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->gender = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(134, 208);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(231, 22);
			this->username->TabIndex = 0;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(134, 237);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(231, 22);
			this->password->TabIndex = 1;
			// 
			// signup
			// 
			this->signup->Location = System::Drawing::Point(134, 366);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(75, 37);
			this->signup->TabIndex = 4;
			this->signup->Text = L"SignUp";
			this->signup->UseVisualStyleBackColor = true;
			this->signup->Click += gcnew System::EventHandler(this, &Auth::signup_Click);
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(134, 265);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 37);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Auth::login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(134, 309);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(231, 22);
			this->name->TabIndex = 8;
			// 
			// gender
			// 
			this->gender->Location = System::Drawing::Point(134, 338);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(231, 22);
			this->gender->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 343);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(43, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(493, 52);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Welcome to Art Gallery";
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(569, 602);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->login);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Name = L"Auth";
			this->Text = L"Auth";
			this->Load += gcnew System::EventHandler(this, &Auth::Auth_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ response = gcnew String(GalleryApp->signInUser(toStandardString(username->Text), toStandardString(password->Text)).c_str());
		if (response != "OK") {
			MessageBox::Show(response, "Alert");
		}
		else {
			this->Close();
		}
	}
	private: System::Void signup_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ response = gcnew String(GalleryApp->signUpUser(toStandardString(username->Text), toStandardString(password->Text), toStandardString(name->Text), toStandardString(gender->Text)).c_str());
		MessageBox::Show(response, "Alert");
	}
private: System::Void Auth_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
