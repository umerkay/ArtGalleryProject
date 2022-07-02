//#include "OOPLogic.h"
#include "Gallery.h"

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	Gallery* GalleryApp;
	public:
		Home(void)
		{
			//this->SetStyle(ControlStyles.SupportsTransparentBackColor, true);
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ SearchBox;
	protected:

	private: System::Windows::Forms::Button^ LogOut;
	private: System::Windows::Forms::Button^ BackArrow;
	protected:


	private: System::Windows::Forms::Button^ ForwardArrow;

	private: System::Windows::Forms::PictureBox^ Artwork1;

	private: System::Windows::Forms::PictureBox^ Artwork2;

	private: System::Windows::Forms::PictureBox^ Artwork3;
	private: System::Windows::Forms::TextBox^ WelcomeFixed;





	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::PictureBox^ Artwork4;
	private: System::Windows::Forms::PictureBox^ Artwork5;
	private: System::Windows::Forms::PictureBox^ Rec1;
	private: System::Windows::Forms::PictureBox^ Rec2;
	private: System::Windows::Forms::PictureBox^ Rec3;
	private: System::Windows::Forms::PictureBox^ Rec4;
	private: System::Windows::Forms::PictureBox^ Rec5;















	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->SearchBox = (gcnew System::Windows::Forms::TextBox());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->BackArrow = (gcnew System::Windows::Forms::Button());
			this->ForwardArrow = (gcnew System::Windows::Forms::Button());
			this->Artwork1 = (gcnew System::Windows::Forms::PictureBox());
			this->Artwork2 = (gcnew System::Windows::Forms::PictureBox());
			this->Artwork3 = (gcnew System::Windows::Forms::PictureBox());
			this->WelcomeFixed = (gcnew System::Windows::Forms::TextBox());
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->Artwork4 = (gcnew System::Windows::Forms::PictureBox());
			this->Artwork5 = (gcnew System::Windows::Forms::PictureBox());
			this->Rec1 = (gcnew System::Windows::Forms::PictureBox());
			this->Rec2 = (gcnew System::Windows::Forms::PictureBox());
			this->Rec3 = (gcnew System::Windows::Forms::PictureBox());
			this->Rec4 = (gcnew System::Windows::Forms::PictureBox());
			this->Rec5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec5))->BeginInit();
			this->SuspendLayout();
			// 
			// SearchBox
			// 
			this->SearchBox->BackColor = System::Drawing::Color::White;
			this->SearchBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchBox->Location = System::Drawing::Point(859, 107);
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Size = System::Drawing::Size(339, 19);
			this->SearchBox->TabIndex = 2;
			this->SearchBox->Text = L"Search box";
			// 
			// LogOut
			// 
			this->LogOut->BackColor = System::Drawing::Color::Black;
			this->LogOut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LogOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOut->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LogOut->Location = System::Drawing::Point(1140, 12);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Size = System::Drawing::Size(130, 59);
			this->LogOut->TabIndex = 3;
			this->LogOut->Text = L"Log Out";
			this->LogOut->UseVisualStyleBackColor = false;
			// 
			// BackArrow
			// 
			this->BackArrow->BackColor = System::Drawing::Color::Transparent;
			this->BackArrow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackArrow.BackgroundImage")));
			this->BackArrow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BackArrow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackArrow->Location = System::Drawing::Point(58, 257);
			this->BackArrow->Name = L"BackArrow";
			this->BackArrow->Size = System::Drawing::Size(75, 77);
			this->BackArrow->TabIndex = 4;
			this->BackArrow->UseVisualStyleBackColor = false;
			// 
			// ForwardArrow
			// 
			this->ForwardArrow->BackColor = System::Drawing::Color::Transparent;
			this->ForwardArrow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ForwardArrow.BackgroundImage")));
			this->ForwardArrow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForwardArrow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForwardArrow->Location = System::Drawing::Point(1195, 257);
			this->ForwardArrow->Name = L"ForwardArrow";
			this->ForwardArrow->Size = System::Drawing::Size(75, 77);
			this->ForwardArrow->TabIndex = 5;
			this->ForwardArrow->UseVisualStyleBackColor = false;
			// 
			// Artwork1
			// 
			this->Artwork1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Artwork1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Artwork1.BackgroundImage")));
			this->Artwork1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Artwork1->Location = System::Drawing::Point(139, 203);
			this->Artwork1->Name = L"Artwork1";
			this->Artwork1->Size = System::Drawing::Size(205, 167);
			this->Artwork1->TabIndex = 6;
			this->Artwork1->TabStop = false;
			// 
			// Artwork2
			// 
			this->Artwork2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Artwork2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Artwork2.BackgroundImage")));
			this->Artwork2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Artwork2->Location = System::Drawing::Point(350, 203);
			this->Artwork2->Name = L"Artwork2";
			this->Artwork2->Size = System::Drawing::Size(213, 167);
			this->Artwork2->TabIndex = 7;
			this->Artwork2->TabStop = false;
			// 
			// Artwork3
			// 
			this->Artwork3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Artwork3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Artwork3.BackgroundImage")));
			this->Artwork3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Artwork3->Location = System::Drawing::Point(569, 203);
			this->Artwork3->Name = L"Artwork3";
			this->Artwork3->Size = System::Drawing::Size(209, 167);
			this->Artwork3->TabIndex = 8;
			this->Artwork3->TabStop = false;
			this->Artwork3->Click += gcnew System::EventHandler(this, &Home::pictureBox3_Click);
			// 
			// WelcomeFixed
			// 
			this->WelcomeFixed->BackColor = System::Drawing::SystemColors::MenuText;
			this->WelcomeFixed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->WelcomeFixed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeFixed->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->WelcomeFixed->Location = System::Drawing::Point(111, 28);
			this->WelcomeFixed->Multiline = true;
			this->WelcomeFixed->Name = L"WelcomeFixed";
			this->WelcomeFixed->Size = System::Drawing::Size(320, 82);
			this->WelcomeFixed->TabIndex = 12;
			this->WelcomeFixed->Text = L"WELCOME";
			// 
			// Username
			// 
			this->Username->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->Username->Location = System::Drawing::Point(388, 28);
			this->Username->Multiline = true;
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(376, 79);
			this->Username->TabIndex = 15;
			this->Username->Text = L"MANAHIL";
			this->Username->TextChanged += gcnew System::EventHandler(this, &Home::textBox3_TextChanged);
			// 
			// Artwork4
			// 
			this->Artwork4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Artwork4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Artwork4.BackgroundImage")));
			this->Artwork4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Artwork4->Location = System::Drawing::Point(784, 203);
			this->Artwork4->Name = L"Artwork4";
			this->Artwork4->Size = System::Drawing::Size(204, 167);
			this->Artwork4->TabIndex = 16;
			this->Artwork4->TabStop = false;
			this->Artwork4->Click += gcnew System::EventHandler(this, &Home::pictureBox7_Click);
			// 
			// Artwork5
			// 
			this->Artwork5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Artwork5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Artwork5.BackgroundImage")));
			this->Artwork5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Artwork5->Location = System::Drawing::Point(994, 203);
			this->Artwork5->Name = L"Artwork5";
			this->Artwork5->Size = System::Drawing::Size(204, 167);
			this->Artwork5->TabIndex = 17;
			this->Artwork5->TabStop = false;
			this->Artwork5->Click += gcnew System::EventHandler(this, &Home::pictureBox9_Click);
			// 
			// Rec1
			// 
			this->Rec1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Rec1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rec1.BackgroundImage")));
			this->Rec1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Rec1->Location = System::Drawing::Point(139, 454);
			this->Rec1->Name = L"Rec1";
			this->Rec1->Size = System::Drawing::Size(205, 167);
			this->Rec1->TabIndex = 18;
			this->Rec1->TabStop = false;
			// 
			// Rec2
			// 
			this->Rec2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Rec2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rec2.BackgroundImage")));
			this->Rec2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Rec2->Location = System::Drawing::Point(350, 454);
			this->Rec2->Name = L"Rec2";
			this->Rec2->Size = System::Drawing::Size(213, 167);
			this->Rec2->TabIndex = 19;
			this->Rec2->TabStop = false;
			// 
			// Rec3
			// 
			this->Rec3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Rec3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rec3.BackgroundImage")));
			this->Rec3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Rec3->Location = System::Drawing::Point(569, 454);
			this->Rec3->Name = L"Rec3";
			this->Rec3->Size = System::Drawing::Size(209, 167);
			this->Rec3->TabIndex = 20;
			this->Rec3->TabStop = false;
			this->Rec3->Click += gcnew System::EventHandler(this, &Home::pictureBox6_Click);
			// 
			// Rec4
			// 
			this->Rec4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Rec4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rec4.BackgroundImage")));
			this->Rec4->Location = System::Drawing::Point(784, 454);
			this->Rec4->Name = L"Rec4";
			this->Rec4->Size = System::Drawing::Size(204, 167);
			this->Rec4->TabIndex = 21;
			this->Rec4->TabStop = false;
			this->Rec4->Click += gcnew System::EventHandler(this, &Home::pictureBox8_Click);
			// 
			// Rec5
			// 
			this->Rec5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Rec5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rec5.BackgroundImage")));
			this->Rec5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Rec5->Location = System::Drawing::Point(994, 454);
			this->Rec5->Name = L"Rec5";
			this->Rec5->Size = System::Drawing::Size(204, 167);
			this->Rec5->TabIndex = 22;
			this->Rec5->TabStop = false;
			this->Rec5->Click += gcnew System::EventHandler(this, &Home::pictureBox10_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->Rec5);
			this->Controls->Add(this->Rec4);
			this->Controls->Add(this->Rec3);
			this->Controls->Add(this->Rec2);
			this->Controls->Add(this->Rec1);
			this->Controls->Add(this->Artwork5);
			this->Controls->Add(this->Artwork4);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->WelcomeFixed);
			this->Controls->Add(this->Artwork3);
			this->Controls->Add(this->Artwork2);
			this->Controls->Add(this->Artwork1);
			this->Controls->Add(this->ForwardArrow);
			this->Controls->Add(this->BackArrow);
			this->Controls->Add(this->LogOut);
			this->Controls->Add(this->SearchBox);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Artwork5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rec5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		//welcomeMsg->Text = "Welcome " + gcnew String(GalleryApp->getCurrUser()->getUsername().c_str());
		//welcomeMsg->Text = "Artwork available: " + gcnew String(GalleryApp->getArtWorkByID(0)->getTitle().c_str());

		//welcomeMsg->Text = "Artist avalilable " + gcnew String(GalleryApp->getArtistbyID(0)->get_name().c_str());
	}
	private: System::Void logoutbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		GalleryApp->logoutUser();
		this->Close();
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}