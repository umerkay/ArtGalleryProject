#pragma once
#include "ArtWork.h"
#include "ArtistForm.h"
#include "Gallery.h"

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
		Gallery* GalleryApp;
	public:
		ArtWorkForm(ArtWork* A)
		{
			InitializeComponent();
			artWork = A;
		}

		void setDataStore(Gallery* DataStore) {
			this->GalleryApp = DataStore;
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

	protected:

	private: System::Windows::Forms::Label^ TitleOfArt;
	private: System::Windows::Forms::Label^ ByArtistFixed;

	protected:


	private: System::Windows::Forms::Label^ ArtistName;
	private: System::Windows::Forms::Label^ DateofArtFixed;


	private: System::Windows::Forms::Label^ DateCreated;
	private: System::Windows::Forms::Label^ TypeofArtFixed;


	private: System::Windows::Forms::Label^ TypeOfArt;
	private: System::Windows::Forms::Label^ PriceOfArt;


	private: System::Windows::Forms::Label^ Price;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;


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
			this->TitleOfArt = (gcnew System::Windows::Forms::Label());
			this->ByArtistFixed = (gcnew System::Windows::Forms::Label());
			this->ArtistName = (gcnew System::Windows::Forms::Label());
			this->DateofArtFixed = (gcnew System::Windows::Forms::Label());
			this->DateCreated = (gcnew System::Windows::Forms::Label());
			this->TypeofArtFixed = (gcnew System::Windows::Forms::Label());
			this->TypeOfArt = (gcnew System::Windows::Forms::Label());
			this->PriceOfArt = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TitleOfArt
			// 
			this->TitleOfArt->BackColor = System::Drawing::Color::Transparent;
			this->TitleOfArt->Font = (gcnew System::Drawing::Font(L"Raleway", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleOfArt->ForeColor = System::Drawing::Color::White;
			this->TitleOfArt->Location = System::Drawing::Point(16, 434);
			this->TitleOfArt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TitleOfArt->Name = L"TitleOfArt";
			this->TitleOfArt->Size = System::Drawing::Size(667, 49);
			this->TitleOfArt->TabIndex = 1;
			this->TitleOfArt->Text = L"The Wounded Angel";
			// 
			// ByArtistFixed
			// 
			this->ByArtistFixed->BackColor = System::Drawing::Color::Transparent;
			this->ByArtistFixed->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ByArtistFixed->ForeColor = System::Drawing::Color::White;
			this->ByArtistFixed->Location = System::Drawing::Point(21, 528);
			this->ByArtistFixed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ByArtistFixed->Name = L"ByArtistFixed";
			this->ByArtistFixed->Size = System::Drawing::Size(92, 34);
			this->ByArtistFixed->TabIndex = 2;
			this->ByArtistFixed->Text = L"Artist:";
			// 
			// ArtistName
			// 
			this->ArtistName->BackColor = System::Drawing::Color::Transparent;
			this->ArtistName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ArtistName->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArtistName->ForeColor = System::Drawing::Color::White;
			this->ArtistName->Location = System::Drawing::Point(171, 528);
			this->ArtistName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ArtistName->Name = L"ArtistName";
			this->ArtistName->Size = System::Drawing::Size(512, 36);
			this->ArtistName->TabIndex = 3;
			this->ArtistName->Text = L"Van Gogh";
			this->ArtistName->Click += gcnew System::EventHandler(this, &ArtWorkForm::ArtistName_Click);
			// 
			// DateofArtFixed
			// 
			this->DateofArtFixed->BackColor = System::Drawing::Color::Transparent;
			this->DateofArtFixed->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateofArtFixed->ForeColor = System::Drawing::Color::White;
			this->DateofArtFixed->Location = System::Drawing::Point(21, 566);
			this->DateofArtFixed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DateofArtFixed->Name = L"DateofArtFixed";
			this->DateofArtFixed->Size = System::Drawing::Size(183, 36);
			this->DateofArtFixed->TabIndex = 4;
			this->DateofArtFixed->Text = L"Creation Date:";
			// 
			// DateCreated
			// 
			this->DateCreated->BackColor = System::Drawing::Color::Transparent;
			this->DateCreated->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateCreated->ForeColor = System::Drawing::Color::White;
			this->DateCreated->Location = System::Drawing::Point(171, 565);
			this->DateCreated->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DateCreated->Name = L"DateCreated";
			this->DateCreated->Size = System::Drawing::Size(203, 36);
			this->DateCreated->TabIndex = 5;
			this->DateCreated->Text = L"1903";
			// 
			// TypeofArtFixed
			// 
			this->TypeofArtFixed->BackColor = System::Drawing::Color::Transparent;
			this->TypeofArtFixed->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypeofArtFixed->ForeColor = System::Drawing::Color::White;
			this->TypeofArtFixed->Location = System::Drawing::Point(21, 605);
			this->TypeofArtFixed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TypeofArtFixed->Name = L"TypeofArtFixed";
			this->TypeofArtFixed->Size = System::Drawing::Size(92, 36);
			this->TypeofArtFixed->TabIndex = 6;
			this->TypeofArtFixed->Text = L"Type:";
			// 
			// TypeOfArt
			// 
			this->TypeOfArt->BackColor = System::Drawing::Color::Transparent;
			this->TypeOfArt->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypeOfArt->ForeColor = System::Drawing::Color::White;
			this->TypeOfArt->Location = System::Drawing::Point(171, 605);
			this->TypeOfArt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TypeOfArt->Name = L"TypeOfArt";
			this->TypeOfArt->Size = System::Drawing::Size(512, 36);
			this->TypeOfArt->TabIndex = 7;
			this->TypeOfArt->Text = L"symbolism";
			// 
			// PriceOfArt
			// 
			this->PriceOfArt->BackColor = System::Drawing::Color::Transparent;
			this->PriceOfArt->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceOfArt->ForeColor = System::Drawing::Color::White;
			this->PriceOfArt->Location = System::Drawing::Point(21, 644);
			this->PriceOfArt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PriceOfArt->Name = L"PriceOfArt";
			this->PriceOfArt->Size = System::Drawing::Size(108, 36);
			this->PriceOfArt->TabIndex = 8;
			this->PriceOfArt->Text = L"Price:";
			// 
			// Price
			// 
			this->Price->BackColor = System::Drawing::Color::Transparent;
			this->Price->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Price->ForeColor = System::Drawing::Color::White;
			this->Price->Location = System::Drawing::Point(171, 644);
			this->Price->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(194, 36);
			this->Price->TabIndex = 9;
			this->Price->Text = L"345,890";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(25, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(658, 376);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(539, 637);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Add to Cart";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ArtWorkForm::button1_Click);
			// 
			// ArtWorkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(705, 721);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->PriceOfArt);
			this->Controls->Add(this->TypeOfArt);
			this->Controls->Add(this->TypeofArtFixed);
			this->Controls->Add(this->DateCreated);
			this->Controls->Add(this->DateofArtFixed);
			this->Controls->Add(this->ArtistName);
			this->Controls->Add(this->ByArtistFixed);
			this->Controls->Add(this->TitleOfArt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ArtWorkForm";
			this->Text = L"ArtWork";
			this->Load += gcnew System::EventHandler(this, &ArtWorkForm::ArtWorkForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ArtWorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TitleOfArt->Text = gcnew String(artWork->getTitle().c_str());
		ArtistName->Text = gcnew String(artWork->getCreator()->get_name().c_str());
		pictureBox1->ImageLocation = gcnew String(artWork->getImg().c_str());
		DateCreated->Text = gcnew String(artWork->getPrice().ToString());
		if (GalleryApp->getCurrUser()->getCart()->contains(artWork)) {
			button1->Text = "Added";
		}
	}
private: System::Void ArtistName_Click(System::Object^ sender, System::EventArgs^ e) {
	ArtistForm^ AF = gcnew ArtistForm(artWork->getCreator());
	this->Hide();
	AF->ShowDialog();
	this->Show();
}
private: System::Void ArtworkOnArtPage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GalleryApp->getCurrUser()->getCart()->contains(artWork)) {
		MessageBox::Show("Already added to Cart", "Alert");
	}
	GalleryApp->getCurrUser()->addToCart(artWork);
	button1->Text = "Added";
}
};
}
