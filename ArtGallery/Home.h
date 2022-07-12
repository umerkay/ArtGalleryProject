//#include "OOPLogic.h"
#include "Gallery.h"
#include "ArtWorkForm.h"
#include "CartForm.h"

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
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
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

	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;








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
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1204, 16);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"LogOut";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::logoutBtn);
			// 
			// welcomeMsg
			// 
			this->welcomeMsg->AutoSize = true;
			this->welcomeMsg->BackColor = System::Drawing::Color::Transparent;
			this->welcomeMsg->Font = (gcnew System::Drawing::Font(L"Raleway", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeMsg->ForeColor = System::Drawing::Color::Transparent;
			this->welcomeMsg->Location = System::Drawing::Point(38, 34);
			this->welcomeMsg->Name = L"welcomeMsg";
			this->welcomeMsg->Size = System::Drawing::Size(198, 83);
			this->welcomeMsg->TabIndex = 12;
			this->welcomeMsg->Text = L"label1";
			// 
			// artWLbl1
			// 
			this->artWLbl1->AutoSize = true;
			this->artWLbl1->BackColor = System::Drawing::Color::Transparent;
			this->artWLbl1->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artWLbl1->Location = System::Drawing::Point(116, 364);
			this->artWLbl1->Name = L"artWLbl1";
			this->artWLbl1->Size = System::Drawing::Size(56, 24);
			this->artWLbl1->TabIndex = 13;
			this->artWLbl1->Text = L"label1";
			// 
			// artWLbl4
			// 
			this->artWLbl4->AutoSize = true;
			this->artWLbl4->BackColor = System::Drawing::Color::Transparent;
			this->artWLbl4->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artWLbl4->Location = System::Drawing::Point(793, 365);
			this->artWLbl4->Name = L"artWLbl4";
			this->artWLbl4->Size = System::Drawing::Size(56, 24);
			this->artWLbl4->TabIndex = 14;
			this->artWLbl4->Text = L"label1";
			// 
			// artWLbl3
			// 
			this->artWLbl3->AutoSize = true;
			this->artWLbl3->BackColor = System::Drawing::Color::Transparent;
			this->artWLbl3->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artWLbl3->Location = System::Drawing::Point(568, 365);
			this->artWLbl3->Name = L"artWLbl3";
			this->artWLbl3->Size = System::Drawing::Size(56, 24);
			this->artWLbl3->TabIndex = 15;
			this->artWLbl3->Text = L"label1";
			// 
			// artWLbl2
			// 
			this->artWLbl2->AutoSize = true;
			this->artWLbl2->BackColor = System::Drawing::Color::Transparent;
			this->artWLbl2->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artWLbl2->Location = System::Drawing::Point(342, 365);
			this->artWLbl2->Name = L"artWLbl2";
			this->artWLbl2->Size = System::Drawing::Size(56, 24);
			this->artWLbl2->TabIndex = 16;
			this->artWLbl2->Text = L"label1";
			// 
			// artWLbl5
			// 
			this->artWLbl5->AutoSize = true;
			this->artWLbl5->BackColor = System::Drawing::Color::Transparent;
			this->artWLbl5->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->artWLbl5->Location = System::Drawing::Point(1019, 365);
			this->artWLbl5->Name = L"artWLbl5";
			this->artWLbl5->Size = System::Drawing::Size(56, 24);
			this->artWLbl5->TabIndex = 17;
			this->artWLbl5->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(121, 214);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(204, 143);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(346, 214);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(206, 143);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(572, 214);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(206, 143);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Home::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(797, 214);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(205, 143);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Home::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(1023, 214);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(204, 143);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Home::pictureBox5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(1098, 16);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 36);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Cart";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Raleway ExtraLight", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 239);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 83);
			this->label1->TabIndex = 24;
			this->label1->Text = L"<";
			this->label1->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway ExtraLight", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1231, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 83);
			this->label2->TabIndex = 25;
			this->label2->Text = L">";
			this->label2->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Raleway", 19.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(91, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 44);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Latest Art Works";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway", 19.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(72, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(299, 44);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Recommendations";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(102, 55);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(204, 143);
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(1004, 55);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(204, 143);
			this->pictureBox7->TabIndex = 37;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(778, 55);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(205, 143);
			this->pictureBox8->TabIndex = 36;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(553, 55);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(206, 143);
			this->pictureBox9->TabIndex = 35;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Location = System::Drawing::Point(327, 55);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(206, 143);
			this->pictureBox10->TabIndex = 34;
			this->pictureBox10->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1000, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 24);
			this->label5->TabIndex = 32;
			this->label5->Text = L"label1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(323, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 24);
			this->label6->TabIndex = 31;
			this->label6->Text = L"label1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(549, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 24);
			this->label7->TabIndex = 30;
			this->label7->Text = L"label1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(774, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 24);
			this->label8->TabIndex = 29;
			this->label8->Text = L"label1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Raleway", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(97, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 24);
			this->label9->TabIndex = 28;
			this->label9->Text = L"label1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(19, 400);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1218, 244);
			this->panel1->TabIndex = 38;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1348, 721);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->artWLbl5);
			this->Controls->Add(this->artWLbl2);
			this->Controls->Add(this->artWLbl3);
			this->Controls->Add(this->artWLbl4);
			this->Controls->Add(this->artWLbl1);
			this->Controls->Add(this->welcomeMsg);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		welcomeMsg->Text = "Welcome " + gcnew String(GalleryApp->getCurrUser()->getName().c_str());
		//welcomeMsg->Text = "Welcome " + gcnew String(GalleryApp->getCurrUser()->getCart()->getNoOfItems().ToString());
		//welcomeMsg->Text = "Artwork available: " + gcnew String(GalleryApp->getArtWorkByID(0)->getTitle().c_str());

		panel1->Hide();
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
		DialogResult = MessageBox::Show("Do you want to logout? Items in your cart will be lost.", "Logout", MessageBoxButtons::YesNo);

		if (DialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			GalleryApp->logoutUser();
			this->Close();
		}
		else
		{
			// If 'No', do something here.
		}
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
		A->setDataStore(GalleryApp);
		A->Show();
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 1) % total));
		A->setDataStore(GalleryApp);
		A->Show();
	}

	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 2) % total));
		A->setDataStore(GalleryApp);
		A->Show();
	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 3) % total));
		A->setDataStore(GalleryApp);
		A->Show();
	}

	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		ArtWorkForm^ A = gcnew ArtWorkForm(GalleryApp->getArtWorkByID((artWPagen + 4) % total));
		A->setDataStore(GalleryApp);
		A->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		CartForm^ A = gcnew CartForm(/*GalleryApp->getCurrUser()->getCart()*/);
		A->setDataStore(GalleryApp);
		A->Show();
	}
};
}