#pragma once
#include "ArtWork.h"

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ArtWorkForm
	/// </summary>
	public ref class ArtWorkForm : public System::Windows::Forms::Form
	{
		ArtWork* artWork;
	public:
		ArtWorkForm(ArtWork* A)
		{
			InitializeComponent();
			artWork = A;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArtWorkForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ ArtworkOnArtPage;
	protected:

	private: System::Windows::Forms::TextBox^ TitleOfArt;
	private: System::Windows::Forms::TextBox^ ByArtistFixed;

	protected:


	private: System::Windows::Forms::TextBox^ ArtistName;
	private: System::Windows::Forms::TextBox^ DateofArtFixed;


	private: System::Windows::Forms::TextBox^ DateCreated;
	private: System::Windows::Forms::TextBox^ TypeofArtFixed;


	private: System::Windows::Forms::TextBox^ TypeOfArt;
	private: System::Windows::Forms::TextBox^ PriceOfArt;


	private: System::Windows::Forms::TextBox^ Price;
	private: System::Windows::Forms::Button^ LikeArt;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArtWorkForm::typeid));
			this->ArtworkOnArtPage = (gcnew System::Windows::Forms::Panel());
			this->TitleOfArt = (gcnew System::Windows::Forms::TextBox());
			this->ByArtistFixed = (gcnew System::Windows::Forms::TextBox());
			this->ArtistName = (gcnew System::Windows::Forms::TextBox());
			this->DateofArtFixed = (gcnew System::Windows::Forms::TextBox());
			this->DateCreated = (gcnew System::Windows::Forms::TextBox());
			this->TypeofArtFixed = (gcnew System::Windows::Forms::TextBox());
			this->TypeOfArt = (gcnew System::Windows::Forms::TextBox());
			this->PriceOfArt = (gcnew System::Windows::Forms::TextBox());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->LikeArt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ArtworkOnArtPage
			// 
			this->ArtworkOnArtPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ArtworkOnArtPage.BackgroundImage")));
			this->ArtworkOnArtPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ArtworkOnArtPage->Location = System::Drawing::Point(40, 31);
			this->ArtworkOnArtPage->Name = L"ArtworkOnArtPage";
			this->ArtworkOnArtPage->Size = System::Drawing::Size(450, 357);
			this->ArtworkOnArtPage->TabIndex = 0;
			// 
			// TitleOfArt
			// 
			this->TitleOfArt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TitleOfArt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleOfArt->Location = System::Drawing::Point(536, 43);
			this->TitleOfArt->Name = L"TitleOfArt";
			this->TitleOfArt->Size = System::Drawing::Size(417, 59);
			this->TitleOfArt->TabIndex = 1;
			this->TitleOfArt->Text = L"The Wounded Angel";
			// 
			// ByArtistFixed
			// 
			this->ByArtistFixed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ByArtistFixed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ByArtistFixed->Location = System::Drawing::Point(526, 157);
			this->ByArtistFixed->Multiline = true;
			this->ByArtistFixed->Name = L"ByArtistFixed";
			this->ByArtistFixed->Size = System::Drawing::Size(104, 42);
			this->ByArtistFixed->TabIndex = 2;
			this->ByArtistFixed->Text = L"Artist:";
			// 
			// ArtistName
			// 
			this->ArtistName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ArtistName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArtistName->Location = System::Drawing::Point(658, 157);
			this->ArtistName->Name = L"ArtistName";
			this->ArtistName->Size = System::Drawing::Size(228, 43);
			this->ArtistName->TabIndex = 3;
			this->ArtistName->Text = L"Hugo Simberg";
			// 
			// DateofArtFixed
			// 
			this->DateofArtFixed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DateofArtFixed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateofArtFixed->Location = System::Drawing::Point(526, 205);
			this->DateofArtFixed->Name = L"DateofArtFixed";
			this->DateofArtFixed->Size = System::Drawing::Size(206, 43);
			this->DateofArtFixed->TabIndex = 4;
			this->DateofArtFixed->Text = L"Creation Date:";
			this->DateofArtFixed->TextChanged += gcnew System::EventHandler(this, &ArtWorkForm::textBox4_TextChanged);
			// 
			// DateCreated
			// 
			this->DateCreated->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DateCreated->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateCreated->Location = System::Drawing::Point(748, 205);
			this->DateCreated->Name = L"DateCreated";
			this->DateCreated->Size = System::Drawing::Size(228, 43);
			this->DateCreated->TabIndex = 5;
			this->DateCreated->Text = L"1903";
			this->DateCreated->TextChanged += gcnew System::EventHandler(this, &ArtWorkForm::textBox5_TextChanged);
			// 
			// TypeofArtFixed
			// 
			this->TypeofArtFixed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TypeofArtFixed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypeofArtFixed->Location = System::Drawing::Point(526, 254);
			this->TypeofArtFixed->Name = L"TypeofArtFixed";
			this->TypeofArtFixed->Size = System::Drawing::Size(104, 43);
			this->TypeofArtFixed->TabIndex = 6;
			this->TypeofArtFixed->Text = L"Type:";
			this->TypeofArtFixed->TextChanged += gcnew System::EventHandler(this, &ArtWorkForm::textBox6_TextChanged);
			// 
			// TypeOfArt
			// 
			this->TypeOfArt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TypeOfArt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypeOfArt->Location = System::Drawing::Point(658, 254);
			this->TypeOfArt->Name = L"TypeOfArt";
			this->TypeOfArt->Size = System::Drawing::Size(228, 43);
			this->TypeOfArt->TabIndex = 7;
			this->TypeOfArt->Text = L"symbolism";
			this->TypeOfArt->TextChanged += gcnew System::EventHandler(this, &ArtWorkForm::textBox7_TextChanged);
			// 
			// PriceOfArt
			// 
			this->PriceOfArt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PriceOfArt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceOfArt->Location = System::Drawing::Point(526, 318);
			this->PriceOfArt->Name = L"PriceOfArt";
			this->PriceOfArt->Size = System::Drawing::Size(121, 43);
			this->PriceOfArt->TabIndex = 8;
			this->PriceOfArt->Text = L"Price:";
			// 
			// Price
			// 
			this->Price->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Price->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Price->Location = System::Drawing::Point(653, 318);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(218, 43);
			this->Price->TabIndex = 9;
			this->Price->Text = L"345,890";
			// 
			// LikeArt
			// 
			this->LikeArt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->LikeArt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LikeArt.BackgroundImage")));
			this->LikeArt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LikeArt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LikeArt->ForeColor = System::Drawing::SystemColors::Control;
			this->LikeArt->Location = System::Drawing::Point(940, 59);
			this->LikeArt->Name = L"LikeArt";
			this->LikeArt->Size = System::Drawing::Size(55, 43);
			this->LikeArt->TabIndex = 10;
			this->LikeArt->UseVisualStyleBackColor = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 414);
			this->Controls->Add(this->LikeArt);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->PriceOfArt);
			this->Controls->Add(this->TypeOfArt);
			this->Controls->Add(this->TypeofArtFixed);
			this->Controls->Add(this->DateCreated);
			this->Controls->Add(this->DateofArtFixed);
			this->Controls->Add(this->ArtistName);
			this->Controls->Add(this->ByArtistFixed);
			this->Controls->Add(this->TitleOfArt);
			this->Controls->Add(this->ArtworkOnArtPage);
			this->Name = L"MyForm1";
			this->Text = L"ArtWork";
			this->Load += gcnew System::EventHandler(this, &ArtWorkForm::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ArtWorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = gcnew String(artWork->getTitle().c_str());
		label2->Text = "by " + gcnew String(artWork->getCreator()->get_name().c_str());
	}
	};
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
