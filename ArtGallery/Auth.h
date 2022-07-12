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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;


	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Button^ button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ address;


	private: System::Windows::Forms::TextBox^ name;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel5;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Auth::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Desktop;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(76, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(82, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Desktop;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(83, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2));
			this->panel1->Location = System::Drawing::Point(78, 251);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(316, 2);
			this->panel1->TabIndex = 4;
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::Desktop;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->username->Location = System::Drawing::Point(78, 223);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(316, 23);
			this->username->TabIndex = 0;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::Desktop;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->password->Location = System::Drawing::Point(78, 294);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(316, 23);
			this->password->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2));
			this->panel2->Location = System::Drawing::Point(79, 322);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(316, 2);
			this->panel2->TabIndex = 6;
			// 
			// button
			// 
			this->button->BackColor = System::Drawing::SystemColors::Desktop;
			this->button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button->Location = System::Drawing::Point(78, 549);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(171, 39);
			this->button->TabIndex = 9;
			this->button->Text = L"Sign Up";
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &Auth::button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Desktop;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(273, 549);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 39);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2));
			this->panel3->Location = System::Drawing::Point(27, 127);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(316, 2);
			this->panel3->TabIndex = 12;
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::SystemColors::Desktop;
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->address->Location = System::Drawing::Point(26, 99);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(316, 23);
			this->address->TabIndex = 11;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::Desktop;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->name->Location = System::Drawing::Point(26, 28);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(316, 23);
			this->name->TabIndex = 7;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2));
			this->panel4->Location = System::Drawing::Point(26, 56);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(316, 2);
			this->panel4->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Desktop;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(31, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Desktop;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(30, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Full Name";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Raleway", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(85, 500);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 22);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Already registered\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &Auth::checkBox1_CheckStateChanged);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->address);
			this->panel5->Controls->Add(this->name);
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(52, 341);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(412, 148);
			this->panel5->TabIndex = 14;
			// 
			// Auth
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(934, 629);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Auth";
			this->Text = L"Auth";
			this->Load += gcnew System::EventHandler(this, &Auth::Auth_Load);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
		String^ response = gcnew String(GalleryApp->signUpUser(toStandardString(username->Text), toStandardString(password->Text), toStandardString(name->Text), toStandardString(address->Text)).c_str());
		MessageBox::Show(response, "Alert");
		username->Text = "";
		password->Text = "";
		name->Text = "";
		address->Text = "";
	}
private: System::Void Auth_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button->Text = "Sign In";
		label1->Text = "Sign In";
		panel5->Hide();
	}
	else {
		button->Text = "Sign Up";
		label1->Text = "Sign Up";
		panel5->Show();
	}
}

private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBox1->Checked) {
		signup_Click(sender, e);
	}
	else {
		login_Click(sender, e);
	}
}
};
}
