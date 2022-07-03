//#include "OOPLogic.h"
#include "Gallery.h"
#include "ArtWorkForm.h"

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
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
			int artWPagen = 0;
			int total;
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
	private: System::Windows::Forms::TextBox^ SearchText;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;






	private: System::Windows::Forms::Label^ welcomeMsg;
	private: System::Windows::Forms::Label^ artWLbl1;
	private: System::Windows::Forms::Label^ artWLbl4;
	private: System::Windows::Forms::Label^ artWLbl3;
	private: System::Windows::Forms::Label^ artWLbl2;
	private: System::Windows::Forms::Label^ artWLbl5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;




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
			this->SearchText = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->welcomeMsg = (gcnew System::Windows::Forms::Label());
			this->artWLbl1 = (gcnew System::Windows::Forms::Label());
			this->artWLbl4 = (gcnew System::Windows::Forms::Label());
			this->artWLbl3 = (gcnew System::Windows::Forms::Label());
			this->artWLbl2 = (gcnew System::Windows::Forms::Label());
			this->artWLbl5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// SearchText
			// 
			this->SearchText->BackColor = System::Drawing::Color::White;
			this->SearchText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchText->Location = System::Drawing::Point(846, 114);
			this->SearchText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SearchText->Name = L"SearchText";
			this->SearchText->Size = System::Drawing::Size(301, 15);
			this->SearchText->TabIndex = 2;
			this->SearchText->Text = L"Search Artworks";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1204, 11);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"LogOut";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::logoutBtn);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(66, 267);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 53);
			this->button2->TabIndex = 4;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1215, 287);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 53);
			this->button3->TabIndex = 5;
			this->button3->Text = L"->";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// welcomeMsg
			// 
			this->welcomeMsg->AutoSize = true;
			this->welcomeMsg->Location = System::Drawing::Point(63, 53);
			this->welcomeMsg->Name = L"welcomeMsg";
			this->welcomeMsg->Size = System::Drawing::Size(44, 16);
			this->welcomeMsg->TabIndex = 12;
			this->welcomeMsg->Text = L"label1";
			// 
			// artWLbl1
			// 
			this->artWLbl1->AutoSize = true;
			this->artWLbl1->Location = System::Drawing::Point(159, 360);
			this->artWLbl1->Name = L"artWLbl1";
			this->artWLbl1->Size = System::Drawing::Size(44, 16);
			this->artWLbl1->TabIndex = 13;
			this->artWLbl1->Text = L"label1";
			// 
			// artWLbl4
			// 
			this->artWLbl4->AutoSize = true;
			this->artWLbl4->Location = System::Drawing::Point(762, 360);
			this->artWLbl4->Name = L"artWLbl4";
			this->artWLbl4->Size = System::Drawing::Size(44, 16);
			this->artWLbl4->TabIndex = 14;
			this->artWLbl4->Text = L"label1";
			// 
			// artWLbl3
			// 
			this->artWLbl3->AutoSize = true;
			this->artWLbl3->Location = System::Drawing::Point(591, 360);
			this->artWLbl3->Name = L"artWLbl3";
			this->artWLbl3->Size = System::Drawing::Size(44, 16);
			this->artWLbl3->TabIndex = 15;
			this->artWLbl3->Text = L"label1";
			// 
			// artWLbl2
			// 
			this->artWLbl2->AutoSize = true;
			this->artWLbl2->Location = System::Drawing::Point(393, 360);
			this->artWLbl2->Name = L"artWLbl2";
			this->artWLbl2->Size = System::Drawing::Size(44, 16);
			this->artWLbl2->TabIndex = 16;
			this->artWLbl2->Text = L"label1";
			// 
			// artWLbl5
			// 
			this->artWLbl5->AutoSize = true;
			this->artWLbl5->Location = System::Drawing::Point(900, 360);
			this->artWLbl5->Name = L"artWLbl5";
			this->artWLbl5->Size = System::Drawing::Size(44, 16);
			this->artWLbl5->TabIndex = 17;
			this->artWLbl5->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(162, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 106);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(396, 234);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(116, 106);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(594, 234);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(116, 106);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Home::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(765, 234);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(116, 106);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Home::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(903, 234);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(116, 106);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Home::pictureBox5_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1348, 721);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->artWLbl5);
			this->Controls->Add(this->artWLbl2);
			this->Controls->Add(this->artWLbl3);
			this->Controls->Add(this->artWLbl4);
			this->Controls->Add(this->artWLbl1);
			this->Controls->Add(this->welcomeMsg);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SearchText);
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		welcomeMsg->Text = "Welcome " + gcnew String(GalleryApp->getCurrUser()->getUsername().c_str());
		//welcomeMsg->Text = "Artwork available: " + gcnew String(GalleryApp->getArtWorkByID(0)->getTitle().c_str());
		
		renderLatestAW();

		//welcomeMsg->Text = "Artist avalilable " + gcnew String(GalleryApp->getArtistbyID(0)->get_name().c_str());
	}

	private: System::Void renderLatestAW() {

		total = GalleryApp->getTotalArtWorks();

		ArtWork* AW = GalleryApp->getArtWorkByID(artWPagen % total);
		artWLbl1->Text = gcnew String(AW->getTitle().c_str());
		pictureBox1->ImageLocation = gcnew String(AW->getImg().c_str());

		AW = GalleryApp->getArtWorkByID((artWPagen + 1) % total);
		artWLbl2->Text = gcnew String(AW->getTitle().c_str());
		pictureBox2->ImageLocation = gcnew String(AW->getImg().c_str());

		AW = GalleryApp->getArtWorkByID((artWPagen + 2) % total);
		artWLbl3->Text = gcnew String(AW->getTitle().c_str());
		pictureBox3->ImageLocation = gcnew String(AW->getImg().c_str());

		AW = GalleryApp->getArtWorkByID((artWPagen + 3) % total);
		artWLbl4->Text = gcnew String(AW->getTitle().c_str());
		pictureBox4->ImageLocation = gcnew String(AW->getImg().c_str());

		AW = GalleryApp->getArtWorkByID((artWPagen + 4) % total);
		artWLbl5->Text = gcnew String(AW->getTitle().c_str());
		pictureBox5->ImageLocation = gcnew String(AW->getImg().c_str());
	}

	private: System::Void logoutBtn(System::Object^ sender, System::EventArgs^ e) {
		GalleryApp->logoutUser();
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->artWPagen++;
		renderLatestAW();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->artWPagen <= 0) return;
		this->artWPagen--;
		renderLatestAW();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen) % total));
		A->Show();
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 1) % total));
		A->Show();
	}

	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 2) % total));
		A->Show();
	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 3) % total));
		A->Show();
	}

	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 4) % total));
		A->Show();
	}
};
}