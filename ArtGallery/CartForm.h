#pragma once
#include "Gallery.h"
#include "Order.h"
#include <ctime>

static std::string STR(System::String^ string);

namespace ArtGallery {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CartForm
	/// </summary>
	public ref class CartForm : public System::Windows::Forms::Form
	{
		//Cart* CartObj;
		Gallery* GalleryApp;
	private: System::Windows::Forms::Panel^ panel5;




	private: System::Windows::Forms::Label^ noitems;
	private: System::Windows::Forms::Label^ notiems2;
	private: System::Windows::Forms::Label^ remove1;
	private: System::Windows::Forms::Label^ remove2;
	private: System::Windows::Forms::Label^ remove3;
	private: System::Windows::Forms::Label^ remove4;




		   int pagen;
	public:
		CartForm(/*Cart* cart*/)
		{
			InitializeComponent();
			//CartObj = cart;
			pagen = 0;
		}
		void setDataStore(Gallery* DataStore) {
			this->GalleryApp = DataStore;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ InName;
	protected:
	private: System::Windows::Forms::TextBox^ InAddress;
	private: System::Windows::Forms::TextBox^ InComments;
	private: System::Windows::Forms::TextBox^ InContact;
	private: System::Windows::Forms::Label^ subtotal;
	private: System::Windows::Forms::Label^ shipping;
	private: System::Windows::Forms::Label^ tax;
	private: System::Windows::Forms::Label^ total;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Item1Name;
	private: System::Windows::Forms::Label^ Item1Price;






	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Label^ Pagen;
	private: System::Windows::Forms::Label^ rightArr;
	private: System::Windows::Forms::Label^ leftArr;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ Item2Price;
	private: System::Windows::Forms::Label^ Item2Name;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ Item3Price;
	private: System::Windows::Forms::Label^ Item3Name;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ Item4Price;
	private: System::Windows::Forms::Label^ Item4Name;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CartForm::typeid));
			this->InName = (gcnew System::Windows::Forms::TextBox());
			this->InAddress = (gcnew System::Windows::Forms::TextBox());
			this->InComments = (gcnew System::Windows::Forms::TextBox());
			this->InContact = (gcnew System::Windows::Forms::TextBox());
			this->subtotal = (gcnew System::Windows::Forms::Label());
			this->shipping = (gcnew System::Windows::Forms::Label());
			this->tax = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Item1Name = (gcnew System::Windows::Forms::Label());
			this->Item1Price = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Pagen = (gcnew System::Windows::Forms::Label());
			this->rightArr = (gcnew System::Windows::Forms::Label());
			this->leftArr = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->remove1 = (gcnew System::Windows::Forms::Label());
			this->noitems = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->remove2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Item2Price = (gcnew System::Windows::Forms::Label());
			this->Item2Name = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->remove3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Item3Price = (gcnew System::Windows::Forms::Label());
			this->Item3Name = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->remove4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Item4Price = (gcnew System::Windows::Forms::Label());
			this->Item4Name = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->notiems2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// InName
			// 
			this->InName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->InName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InName->Enabled = false;
			this->InName->Location = System::Drawing::Point(482, 206);
			this->InName->Name = L"InName";
			this->InName->Size = System::Drawing::Size(298, 15);
			this->InName->TabIndex = 0;
			// 
			// InAddress
			// 
			this->InAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->InAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InAddress->Location = System::Drawing::Point(482, 256);
			this->InAddress->Name = L"InAddress";
			this->InAddress->Size = System::Drawing::Size(298, 15);
			this->InAddress->TabIndex = 1;
			// 
			// InComments
			// 
			this->InComments->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->InComments->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InComments->Location = System::Drawing::Point(482, 305);
			this->InComments->Name = L"InComments";
			this->InComments->Size = System::Drawing::Size(298, 15);
			this->InComments->TabIndex = 2;
			// 
			// InContact
			// 
			this->InContact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->InContact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InContact->Location = System::Drawing::Point(482, 353);
			this->InContact->Name = L"InContact";
			this->InContact->Size = System::Drawing::Size(298, 15);
			this->InContact->TabIndex = 3;
			// 
			// subtotal
			// 
			this->subtotal->AutoSize = true;
			this->subtotal->BackColor = System::Drawing::Color::Transparent;
			this->subtotal->Location = System::Drawing::Point(630, 391);
			this->subtotal->Name = L"subtotal";
			this->subtotal->Size = System::Drawing::Size(44, 16);
			this->subtotal->TabIndex = 4;
			this->subtotal->Text = L"label1";
			this->subtotal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// shipping
			// 
			this->shipping->AutoSize = true;
			this->shipping->BackColor = System::Drawing::Color::Transparent;
			this->shipping->Location = System::Drawing::Point(630, 407);
			this->shipping->Name = L"shipping";
			this->shipping->Size = System::Drawing::Size(44, 16);
			this->shipping->TabIndex = 5;
			this->shipping->Text = L"label1";
			this->shipping->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tax
			// 
			this->tax->AutoSize = true;
			this->tax->BackColor = System::Drawing::Color::Transparent;
			this->tax->Location = System::Drawing::Point(630, 423);
			this->tax->Name = L"tax";
			this->tax->Size = System::Drawing::Size(44, 16);
			this->tax->TabIndex = 6;
			this->tax->Text = L"label1";
			this->tax->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->BackColor = System::Drawing::Color::Transparent;
			this->total->Location = System::Drawing::Point(630, 459);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(44, 16);
			this->total->TabIndex = 7;
			this->total->Text = L"label1";
			this->total->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->CausesValidation = false;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(677, 490);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Checkout";
			this->label2->Click += gcnew System::EventHandler(this, &CartForm::label2_Click);
			// 
			// Item1Name
			// 
			this->Item1Name->AutoSize = true;
			this->Item1Name->BackColor = System::Drawing::Color::Transparent;
			this->Item1Name->CausesValidation = false;
			this->Item1Name->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Item1Name->Font = (gcnew System::Drawing::Font(L"Raleway", 10, System::Drawing::FontStyle::Bold));
			this->Item1Name->ForeColor = System::Drawing::Color::Black;
			this->Item1Name->Location = System::Drawing::Point(161, 16);
			this->Item1Name->Name = L"Item1Name";
			this->Item1Name->Size = System::Drawing::Size(89, 24);
			this->Item1Name->TabIndex = 9;
			this->Item1Name->Text = L"Checkout";
			// 
			// Item1Price
			// 
			this->Item1Price->AutoSize = true;
			this->Item1Price->BackColor = System::Drawing::Color::Transparent;
			this->Item1Price->CausesValidation = false;
			this->Item1Price->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Item1Price->ForeColor = System::Drawing::Color::Black;
			this->Item1Price->Location = System::Drawing::Point(161, 41);
			this->Item1Price->Name = L"Item1Price";
			this->Item1Price->Size = System::Drawing::Size(60, 28);
			this->Item1Price->TabIndex = 10;
			this->Item1Price->Text = L"$000";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(155, 84);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// Pagen
			// 
			this->Pagen->AutoSize = true;
			this->Pagen->BackColor = System::Drawing::Color::Transparent;
			this->Pagen->Location = System::Drawing::Point(49, 7);
			this->Pagen->Name = L"Pagen";
			this->Pagen->Size = System::Drawing::Size(69, 16);
			this->Pagen->TabIndex = 21;
			this->Pagen->Text = L"1 to 4 of 20";
			this->Pagen->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rightArr
			// 
			this->rightArr->AutoSize = true;
			this->rightArr->BackColor = System::Drawing::Color::White;
			this->rightArr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rightArr->Location = System::Drawing::Point(135, 6);
			this->rightArr->Name = L"rightArr";
			this->rightArr->Size = System::Drawing::Size(14, 16);
			this->rightArr->TabIndex = 22;
			this->rightArr->Text = L">";
			this->rightArr->Click += gcnew System::EventHandler(this, &CartForm::rightArr_Click);
			// 
			// leftArr
			// 
			this->leftArr->AutoSize = true;
			this->leftArr->BackColor = System::Drawing::Color::White;
			this->leftArr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->leftArr->Location = System::Drawing::Point(8, 6);
			this->leftArr->Name = L"leftArr";
			this->leftArr->Size = System::Drawing::Size(14, 16);
			this->leftArr->TabIndex = 23;
			this->leftArr->Text = L"<";
			this->leftArr->Click += gcnew System::EventHandler(this, &CartForm::leftArr_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->remove1);
			this->panel1->Controls->Add(this->noitems);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->Item1Price);
			this->panel1->Controls->Add(this->Item1Name);
			this->panel1->Location = System::Drawing::Point(34, 101);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(404, 94);
			this->panel1->TabIndex = 24;
			// 
			// remove1
			// 
			this->remove1->AutoSize = true;
			this->remove1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remove1->Location = System::Drawing::Point(376, 71);
			this->remove1->Name = L"remove1";
			this->remove1->Size = System::Drawing::Size(15, 16);
			this->remove1->TabIndex = 30;
			this->remove1->Text = L"X";
			this->remove1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->remove1->Click += gcnew System::EventHandler(this, &CartForm::remove1_Click);
			// 
			// noitems
			// 
			this->noitems->AutoSize = true;
			this->noitems->Font = (gcnew System::Drawing::Font(L"Raleway Medium", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->noitems->Location = System::Drawing::Point(58, 138);
			this->noitems->Name = L"noitems";
			this->noitems->Size = System::Drawing::Size(343, 24);
			this->noitems->TabIndex = 29;
			this->noitems->Text = L"You do no have any items in your Cart.";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->remove2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->Item2Price);
			this->panel2->Controls->Add(this->Item2Name);
			this->panel2->Location = System::Drawing::Point(34, 194);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(406, 94);
			this->panel2->TabIndex = 25;
			// 
			// remove2
			// 
			this->remove2->AutoSize = true;
			this->remove2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remove2->Location = System::Drawing::Point(376, 71);
			this->remove2->Name = L"remove2";
			this->remove2->Size = System::Drawing::Size(15, 16);
			this->remove2->TabIndex = 31;
			this->remove2->Text = L"X";
			this->remove2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->remove2->Click += gcnew System::EventHandler(this, &CartForm::remove2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(3, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(155, 84);
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// Item2Price
			// 
			this->Item2Price->AutoSize = true;
			this->Item2Price->BackColor = System::Drawing::Color::Transparent;
			this->Item2Price->CausesValidation = false;
			this->Item2Price->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Item2Price->ForeColor = System::Drawing::Color::Black;
			this->Item2Price->Location = System::Drawing::Point(161, 41);
			this->Item2Price->Name = L"Item2Price";
			this->Item2Price->Size = System::Drawing::Size(60, 28);
			this->Item2Price->TabIndex = 10;
			this->Item2Price->Text = L"$000";
			// 
			// Item2Name
			// 
			this->Item2Name->AutoSize = true;
			this->Item2Name->BackColor = System::Drawing::Color::Transparent;
			this->Item2Name->CausesValidation = false;
			this->Item2Name->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Item2Name->Font = (gcnew System::Drawing::Font(L"Raleway", 10, System::Drawing::FontStyle::Bold));
			this->Item2Name->ForeColor = System::Drawing::Color::Black;
			this->Item2Name->Location = System::Drawing::Point(161, 16);
			this->Item2Name->Name = L"Item2Name";
			this->Item2Name->Size = System::Drawing::Size(89, 24);
			this->Item2Name->TabIndex = 9;
			this->Item2Name->Text = L"Checkout";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->remove3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->Item3Price);
			this->panel3->Controls->Add(this->Item3Name);
			this->panel3->Location = System::Drawing::Point(34, 286);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(406, 94);
			this->panel3->TabIndex = 26;
			// 
			// remove3
			// 
			this->remove3->AutoSize = true;
			this->remove3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remove3->Location = System::Drawing::Point(376, 71);
			this->remove3->Name = L"remove3";
			this->remove3->Size = System::Drawing::Size(15, 16);
			this->remove3->TabIndex = 32;
			this->remove3->Text = L"X";
			this->remove3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->remove3->Click += gcnew System::EventHandler(this, &CartForm::remove3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(155, 84);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// Item3Price
			// 
			this->Item3Price->AutoSize = true;
			this->Item3Price->BackColor = System::Drawing::Color::Transparent;
			this->Item3Price->CausesValidation = false;
			this->Item3Price->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Item3Price->ForeColor = System::Drawing::Color::Black;
			this->Item3Price->Location = System::Drawing::Point(161, 41);
			this->Item3Price->Name = L"Item3Price";
			this->Item3Price->Size = System::Drawing::Size(60, 28);
			this->Item3Price->TabIndex = 10;
			this->Item3Price->Text = L"$000";
			// 
			// Item3Name
			// 
			this->Item3Name->AutoSize = true;
			this->Item3Name->BackColor = System::Drawing::Color::Transparent;
			this->Item3Name->CausesValidation = false;
			this->Item3Name->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Item3Name->Font = (gcnew System::Drawing::Font(L"Raleway", 10, System::Drawing::FontStyle::Bold));
			this->Item3Name->ForeColor = System::Drawing::Color::Black;
			this->Item3Name->Location = System::Drawing::Point(161, 16);
			this->Item3Name->Name = L"Item3Name";
			this->Item3Name->Size = System::Drawing::Size(89, 24);
			this->Item3Name->TabIndex = 9;
			this->Item3Name->Text = L"Checkout";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->remove4);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->Item4Price);
			this->panel4->Controls->Add(this->Item4Name);
			this->panel4->Location = System::Drawing::Point(34, 378);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(406, 94);
			this->panel4->TabIndex = 27;
			// 
			// remove4
			// 
			this->remove4->AutoSize = true;
			this->remove4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remove4->Location = System::Drawing::Point(376, 71);
			this->remove4->Name = L"remove4";
			this->remove4->Size = System::Drawing::Size(15, 16);
			this->remove4->TabIndex = 33;
			this->remove4->Text = L"X";
			this->remove4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->remove4->Click += gcnew System::EventHandler(this, &CartForm::remove4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox4->Location = System::Drawing::Point(3, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(155, 84);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// Item4Price
			// 
			this->Item4Price->AutoSize = true;
			this->Item4Price->BackColor = System::Drawing::Color::Transparent;
			this->Item4Price->CausesValidation = false;
			this->Item4Price->Font = (gcnew System::Drawing::Font(L"Raleway", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Item4Price->ForeColor = System::Drawing::Color::Black;
			this->Item4Price->Location = System::Drawing::Point(161, 41);
			this->Item4Price->Name = L"Item4Price";
			this->Item4Price->Size = System::Drawing::Size(60, 28);
			this->Item4Price->TabIndex = 10;
			this->Item4Price->Text = L"$000";
			// 
			// Item4Name
			// 
			this->Item4Name->AutoSize = true;
			this->Item4Name->BackColor = System::Drawing::Color::Transparent;
			this->Item4Name->CausesValidation = false;
			this->Item4Name->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Item4Name->Font = (gcnew System::Drawing::Font(L"Raleway", 10, System::Drawing::FontStyle::Bold));
			this->Item4Name->ForeColor = System::Drawing::Color::Black;
			this->Item4Name->Location = System::Drawing::Point(161, 16);
			this->Item4Name->Name = L"Item4Name";
			this->Item4Name->Size = System::Drawing::Size(89, 24);
			this->Item4Name->TabIndex = 9;
			this->Item4Name->Text = L"Checkout";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->leftArr);
			this->panel5->Controls->Add(this->rightArr);
			this->panel5->Controls->Add(this->Pagen);
			this->panel5->Location = System::Drawing::Point(137, 508);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(160, 31);
			this->panel5->TabIndex = 28;
			// 
			// notiems2
			// 
			this->notiems2->AutoSize = true;
			this->notiems2->BackColor = System::Drawing::Color::Transparent;
			this->notiems2->Font = (gcnew System::Drawing::Font(L"Raleway Medium", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->notiems2->Location = System::Drawing::Point(253, 38);
			this->notiems2->Name = L"notiems2";
			this->notiems2->Size = System::Drawing::Size(350, 24);
			this->notiems2->TabIndex = 29;
			this->notiems2->Text = L"You do not have any items in your Cart.";
			// 
			// CartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(845, 559);
			this->Controls->Add(this->notiems2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->total);
			this->Controls->Add(this->tax);
			this->Controls->Add(this->shipping);
			this->Controls->Add(this->subtotal);
			this->Controls->Add(this->InContact);
			this->Controls->Add(this->InComments);
			this->Controls->Add(this->InAddress);
			this->Controls->Add(this->InName);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"CartForm";
			this->Text = L"CartForm";
			this->Load += gcnew System::EventHandler(this, &CartForm::CartForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CartForm_Load(System::Object^ sender, System::EventArgs^ e) {
		InName->Text = gcnew String(GalleryApp->getCurrUser()->getUsername().c_str());
		renderCart();
	}
		   private: System::Void renderCart() {
			   panel1->Hide();
			   panel2->Hide();
			   panel3->Hide();
			   panel4->Hide();

			   Cart* CartObj = GalleryApp->getCurrUser()->getCart();
			   int totalArtWs = CartObj->getNoOfItems();

			   if (totalArtWs > 0) notiems2->Hide();
			   else notiems2->Show();

			   if (totalArtWs > pagen + 0) {
				   panel1->Show();
				   Item1Name->Text = gcnew String(CartObj->getArtWorkNo(pagen + 0)->getTitle().c_str());
				   Item1Price->Text = gcnew String(CartObj->getArtWorkNo(pagen + 0)->getPrice().ToString());
				   pictureBox1->ImageLocation = gcnew String(CartObj->getArtWorkNo(pagen + 0)->getImg().c_str());
			   }

			   if (totalArtWs > pagen + 1) {
				   panel2->Show();
				   Item2Name->Text = gcnew String(CartObj->getArtWorkNo(pagen + 1)->getTitle().c_str());
				   Item2Price->Text = gcnew String(CartObj->getArtWorkNo(pagen + 1)->getPrice().ToString());
				   pictureBox2->ImageLocation = gcnew String(CartObj->getArtWorkNo(pagen + 1)->getImg().c_str());
			   }

			   if (totalArtWs > pagen + 2) {
				   panel3->Show(); 
				   Item3Name->Text = gcnew String(CartObj->getArtWorkNo(pagen + 2)->getTitle().c_str());
				   Item3Price->Text = gcnew String(CartObj->getArtWorkNo(pagen + 2)->getPrice().ToString());
				   pictureBox3->ImageLocation = gcnew String(CartObj->getArtWorkNo(pagen + 2)->getImg().c_str());
			   }

			   if (totalArtWs > pagen + 3) {
				   panel4->Show();
				   Item4Name->Text = gcnew String(CartObj->getArtWorkNo(pagen + 3)->getTitle().c_str());
				   Item4Price->Text = gcnew String(CartObj->getArtWorkNo(pagen + 3)->getPrice().ToString());
				   pictureBox4->ImageLocation = gcnew String(CartObj->getArtWorkNo(pagen + 3)->getImg().c_str());
			   }
			   panel5->Hide();

			   if (totalArtWs > 4) {
				   panel5->Show();
				   Pagen->Text = gcnew String((pagen + 1) + " to " + (pagen + 4)) + " of " + gcnew String(totalArtWs.ToString());
			   }

			   subtotal->Text = gcnew String(CartObj->getSubTotal().ToString());
			   total->Text = gcnew String(CartObj->getTotal().ToString());
			   shipping->Text = gcnew String(CartObj->getShipping().ToString());
			   tax->Text = gcnew String(CartObj->getTax().ToString());
		   }

private: System::Void rightArr_Click(System::Object^ sender, System::EventArgs^ e) {
	pagen += 4;
	renderCart();
}

private: System::Void leftArr_Click(System::Object^ sender, System::EventArgs^ e) {
	pagen -= 4;
	if (pagen < 0) pagen = 0;
	renderCart();
}
private: System::Void remove1_Click(System::Object^ sender, System::EventArgs^ e) {
	GalleryApp->getCurrUser()->removeFromCart(pagen + 0);
	renderCart();
}

private: System::Void remove2_Click(System::Object^ sender, System::EventArgs^ e) {
	GalleryApp->getCurrUser()->removeFromCart(pagen + 1);
	renderCart();
}

private: System::Void remove3_Click(System::Object^ sender, System::EventArgs^ e) {
	GalleryApp->getCurrUser()->removeFromCart(pagen + 2);
	renderCart();
}

private: System::Void remove4_Click(System::Object^ sender, System::EventArgs^ e) {
	GalleryApp->getCurrUser()->removeFromCart(pagen + 3);
	renderCart();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	time_t now = time(0);
	char* dt = ctime(&now);

	Order* o = new Order(GalleryApp->getCurrUser()->getID(), STR(gcnew String(dt)), STR(InAddress->Text), STR(InComments->Text), STR(InContact->Text));
	GalleryApp->saveOrder(o);
	MessageBox::Show("Your order has been received and you will receive a confirmation call soon.", "Hurray!");
	GalleryApp->getCurrUser()->emptyCart();
	this->Close();
}
};
}


static std::string STR(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;

	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);


	return returnString;
}
