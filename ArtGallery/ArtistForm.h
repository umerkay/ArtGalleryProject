#pragma once

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class ArtistForm : public System::Windows::Forms::Form
	{
	public:
		ArtistForm(void)
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
		~ArtistForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ NameOfArtist;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ArtistBirthPlace;

	private: System::Windows::Forms::TextBox^ Age;
	private: System::Windows::Forms::TextBox^ StyleOfArtist;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArtistForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NameOfArtist = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ArtistBirthPlace = (gcnew System::Windows::Forms::TextBox());
			this->Age = (gcnew System::Windows::Forms::TextBox());
			this->StyleOfArtist = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(92, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(221, 173);
			this->panel1->TabIndex = 0;
			// 
			// NameOfArtist
			// 
			this->NameOfArtist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NameOfArtist->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameOfArtist->Location = System::Drawing::Point(354, 44);
			this->NameOfArtist->Multiline = true;
			this->NameOfArtist->Name = L"NameOfArtist";
			this->NameOfArtist->Size = System::Drawing::Size(261, 69);
			this->NameOfArtist->TabIndex = 1;
			this->NameOfArtist->Text = L"Van Gogh";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(143, 261);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(240, 129);
			this->panel2->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(423, 261);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(249, 129);
			this->panel3->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(694, 261);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(248, 129);
			this->panel4->TabIndex = 4;
			// 
			// ArtistBirthPlace
			// 
			this->ArtistBirthPlace->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ArtistBirthPlace->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArtistBirthPlace->Location = System::Drawing::Point(364, 136);
			this->ArtistBirthPlace->Multiline = true;
			this->ArtistBirthPlace->Name = L"ArtistBirthPlace";
			this->ArtistBirthPlace->Size = System::Drawing::Size(433, 32);
			this->ArtistBirthPlace->TabIndex = 5;
			this->ArtistBirthPlace->Text = L"BornVincent Willem van Gogh · 30 Mar";
			// 
			// Age
			// 
			this->Age->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Age->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age->Location = System::Drawing::Point(364, 174);
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(538, 22);
			this->Age->TabIndex = 7;
			this->Age->Text = L"37";
			// 
			// StyleOfArtist
			// 
			this->StyleOfArtist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->StyleOfArtist->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StyleOfArtist->Location = System::Drawing::Point(364, 202);
			this->StyleOfArtist->Name = L"StyleOfArtist";
			this->StyleOfArtist->Size = System::Drawing::Size(538, 22);
			this->StyleOfArtist->TabIndex = 8;
			this->StyleOfArtist->Text = L"Known forPainting, drawing still life, portraits and landscapes";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1034, 429);
			this->Controls->Add(this->StyleOfArtist);
			this->Controls->Add(this->Age);
			this->Controls->Add(this->ArtistBirthPlace);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->NameOfArtist);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Artist";
			this->Load += gcnew System::EventHandler(this, &ArtistForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
