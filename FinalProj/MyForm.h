#pragma once
#include <iostream>
#include <string>
#include "Classes.h"
using namespace std;
using System::String;
//My includes and namespaces above

namespace FinalProj {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Begin my code
			hand *h = setup();
			picU0->Image = Image::FromFile(h[0].getCard(0).getImg(), false);
			picU1->Image = Image::FromFile(h[0].getCard(1).getImg(), false);
			picU2->Image = Image::FromFile(h[0].getCard(2).getImg(), false);
			picU3->Image = Image::FromFile(h[0].getCard(3).getImg(), false);
			picU4->Image = Image::FromFile(h[0].getCard(4).getImg(), false);
			picU5->Image = Image::FromFile(h[0].getCard(5).getImg(), false);
			picU6->Image = Image::FromFile(h[0].getCard(6).getImg(), false);
			picU7->Image = Image::FromFile(h[0].getCard(7).getImg(), false);
			picU8->Image = Image::FromFile(h[0].getCard(8).getImg(), false);
			picU9->Image = Image::FromFile(h[0].getCard(9).getImg(), false);
			picU10->Image = Image::FromFile(h[0].getCard(10).getImg(), false);
			picU11->Image = Image::FromFile(h[0].getCard(11).getImg(), false);
			picU12->Image = Image::FromFile(h[0].getCard(12).getImg(), false);
			updateMid();
			//End my code
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  picDh;
	private: System::Windows::Forms::PictureBox^  picHh;


	private: System::Windows::Forms::PictureBox^  picSh;

	private: System::Windows::Forms::PictureBox^  picCh;
	private: System::Windows::Forms::PictureBox^  picDl;
	private: System::Windows::Forms::PictureBox^  picHl;




	private: System::Windows::Forms::PictureBox^  picSl;


	private: System::Windows::Forms::PictureBox^  picCl;


	private: System::Windows::Forms::Label^  lblP2;
	private: System::Windows::Forms::Label^  lblP1;
	private: System::Windows::Forms::Label^  lblP3;
	private: System::Windows::Forms::PictureBox^  picU1;
	private: System::Windows::Forms::PictureBox^  picU2;
	private: System::Windows::Forms::PictureBox^  picU3;
	private: System::Windows::Forms::PictureBox^  picU4;
	private: System::Windows::Forms::PictureBox^  picU5;

	private: System::Windows::Forms::PictureBox^  picU7;
	private: System::Windows::Forms::PictureBox^  picU8;
	private: System::Windows::Forms::PictureBox^  picU9;










	private: System::Windows::Forms::PictureBox^  picU0;
	private: System::Windows::Forms::PictureBox^  picU12;



	private: System::Windows::Forms::PictureBox^  picU11;

	private: System::Windows::Forms::PictureBox^  picU10;
	private: System::Windows::Forms::PictureBox^  picU6;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picDh = (gcnew System::Windows::Forms::PictureBox());
			this->picHh = (gcnew System::Windows::Forms::PictureBox());
			this->picSh = (gcnew System::Windows::Forms::PictureBox());
			this->picCh = (gcnew System::Windows::Forms::PictureBox());
			this->picDl = (gcnew System::Windows::Forms::PictureBox());
			this->picHl = (gcnew System::Windows::Forms::PictureBox());
			this->picSl = (gcnew System::Windows::Forms::PictureBox());
			this->picCl = (gcnew System::Windows::Forms::PictureBox());
			this->lblP2 = (gcnew System::Windows::Forms::Label());
			this->lblP1 = (gcnew System::Windows::Forms::Label());
			this->lblP3 = (gcnew System::Windows::Forms::Label());
			this->picU1 = (gcnew System::Windows::Forms::PictureBox());
			this->picU2 = (gcnew System::Windows::Forms::PictureBox());
			this->picU3 = (gcnew System::Windows::Forms::PictureBox());
			this->picU4 = (gcnew System::Windows::Forms::PictureBox());
			this->picU5 = (gcnew System::Windows::Forms::PictureBox());
			this->picU7 = (gcnew System::Windows::Forms::PictureBox());
			this->picU8 = (gcnew System::Windows::Forms::PictureBox());
			this->picU9 = (gcnew System::Windows::Forms::PictureBox());
			this->picU0 = (gcnew System::Windows::Forms::PictureBox());
			this->picU12 = (gcnew System::Windows::Forms::PictureBox());
			this->picU11 = (gcnew System::Windows::Forms::PictureBox());
			this->picU10 = (gcnew System::Windows::Forms::PictureBox());
			this->picU6 = (gcnew System::Windows::Forms::PictureBox());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU6))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(788, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->quitToolStripMenuItem,
					this->instructionsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::quitToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(361, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(361, 159);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(66, 61);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(361, 317);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(66, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(361, 238);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(66, 61);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(318, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Low";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(442, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"High";
			// 
			// picDh
			// 
			this->picDh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picDh.Image")));
			this->picDh->Location = System::Drawing::Point(433, 238);
			this->picDh->Name = L"picDh";
			this->picDh->Size = System::Drawing::Size(50, 73);
			this->picDh->TabIndex = 12;
			this->picDh->TabStop = false;
			// 
			// picHh
			// 
			this->picHh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHh.Image")));
			this->picHh->Location = System::Drawing::Point(433, 317);
			this->picHh->Name = L"picHh";
			this->picHh->Size = System::Drawing::Size(50, 73);
			this->picHh->TabIndex = 11;
			this->picHh->TabStop = false;
			// 
			// picSh
			// 
			this->picSh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSh.Image")));
			this->picSh->Location = System::Drawing::Point(433, 159);
			this->picSh->Name = L"picSh";
			this->picSh->Size = System::Drawing::Size(50, 73);
			this->picSh->TabIndex = 10;
			this->picSh->TabStop = false;
			// 
			// picCh
			// 
			this->picCh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picCh.Image")));
			this->picCh->Location = System::Drawing::Point(433, 80);
			this->picCh->Name = L"picCh";
			this->picCh->Size = System::Drawing::Size(50, 73);
			this->picCh->TabIndex = 9;
			this->picCh->TabStop = false;
			// 
			// picDl
			// 
			this->picDl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picDl.Image")));
			this->picDl->Location = System::Drawing::Point(305, 238);
			this->picDl->Name = L"picDl";
			this->picDl->Size = System::Drawing::Size(50, 73);
			this->picDl->TabIndex = 16;
			this->picDl->TabStop = false;
			// 
			// picHl
			// 
			this->picHl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHl.Image")));
			this->picHl->Location = System::Drawing::Point(305, 317);
			this->picHl->Name = L"picHl";
			this->picHl->Size = System::Drawing::Size(50, 73);
			this->picHl->TabIndex = 15;
			this->picHl->TabStop = false;
			// 
			// picSl
			// 
			this->picSl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSl.Image")));
			this->picSl->Location = System::Drawing::Point(305, 159);
			this->picSl->Name = L"picSl";
			this->picSl->Size = System::Drawing::Size(50, 73);
			this->picSl->TabIndex = 14;
			this->picSl->TabStop = false;
			// 
			// picCl
			// 
			this->picCl->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picCl.Image")));
			this->picCl->Location = System::Drawing::Point(305, 80);
			this->picCl->Name = L"picCl";
			this->picCl->Size = System::Drawing::Size(50, 73);
			this->picCl->TabIndex = 13;
			this->picCl->TabStop = false;
			// 
			// lblP2
			// 
			this->lblP2->AutoSize = true;
			this->lblP2->Location = System::Drawing::Point(351, 37);
			this->lblP2->Name = L"lblP2";
			this->lblP2->Size = System::Drawing::Size(87, 13);
			this->lblP2->TabIndex = 17;
			this->lblP2->Text = L"Player 2:    Cards";
			// 
			// lblP1
			// 
			this->lblP1->AutoSize = true;
			this->lblP1->Location = System::Drawing::Point(17, 239);
			this->lblP1->Name = L"lblP1";
			this->lblP1->Size = System::Drawing::Size(87, 13);
			this->lblP1->TabIndex = 18;
			this->lblP1->Text = L"Player 1:    Cards";
			// 
			// lblP3
			// 
			this->lblP3->AutoSize = true;
			this->lblP3->Location = System::Drawing::Point(655, 239);
			this->lblP3->Name = L"lblP3";
			this->lblP3->Size = System::Drawing::Size(87, 13);
			this->lblP3->TabIndex = 19;
			this->lblP3->Text = L"Player 3:    Cards";
			// 
			// picU1
			// 
			this->picU1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU1.Image")));
			this->picU1->Location = System::Drawing::Point(89, 401);
			this->picU1->Name = L"picU1";
			this->picU1->Size = System::Drawing::Size(50, 73);
			this->picU1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU1->TabIndex = 20;
			this->picU1->TabStop = false;
			this->picU1->Click += gcnew System::EventHandler(this, &MyForm::picU1_Click);
			// 
			// picU2
			// 
			this->picU2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU2.Image")));
			this->picU2->Location = System::Drawing::Point(145, 401);
			this->picU2->Name = L"picU2";
			this->picU2->Size = System::Drawing::Size(50, 73);
			this->picU2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU2->TabIndex = 21;
			this->picU2->TabStop = false;
			this->picU2->Click += gcnew System::EventHandler(this, &MyForm::picU2_Click);
			// 
			// picU3
			// 
			this->picU3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU3.Image")));
			this->picU3->Location = System::Drawing::Point(201, 401);
			this->picU3->Name = L"picU3";
			this->picU3->Size = System::Drawing::Size(50, 73);
			this->picU3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU3->TabIndex = 22;
			this->picU3->TabStop = false;
			this->picU3->Click += gcnew System::EventHandler(this, &MyForm::picU3_Click);
			// 
			// picU4
			// 
			this->picU4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU4.Image")));
			this->picU4->Location = System::Drawing::Point(257, 401);
			this->picU4->Name = L"picU4";
			this->picU4->Size = System::Drawing::Size(50, 73);
			this->picU4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU4->TabIndex = 23;
			this->picU4->TabStop = false;
			this->picU4->Click += gcnew System::EventHandler(this, &MyForm::picU4_Click);
			// 
			// picU5
			// 
			this->picU5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU5.Image")));
			this->picU5->Location = System::Drawing::Point(313, 401);
			this->picU5->Name = L"picU5";
			this->picU5->Size = System::Drawing::Size(50, 73);
			this->picU5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU5->TabIndex = 24;
			this->picU5->TabStop = false;
			this->picU5->Click += gcnew System::EventHandler(this, &MyForm::picU5_Click);
			// 
			// picU7
			// 
			this->picU7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU7.Image")));
			this->picU7->Location = System::Drawing::Point(425, 401);
			this->picU7->Name = L"picU7";
			this->picU7->Size = System::Drawing::Size(50, 73);
			this->picU7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU7->TabIndex = 26;
			this->picU7->TabStop = false;
			this->picU7->Click += gcnew System::EventHandler(this, &MyForm::picU7_Click);
			// 
			// picU8
			// 
			this->picU8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU8.Image")));
			this->picU8->Location = System::Drawing::Point(481, 401);
			this->picU8->Name = L"picU8";
			this->picU8->Size = System::Drawing::Size(50, 73);
			this->picU8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU8->TabIndex = 27;
			this->picU8->TabStop = false;
			this->picU8->Click += gcnew System::EventHandler(this, &MyForm::picU8_Click);
			// 
			// picU9
			// 
			this->picU9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU9.Image")));
			this->picU9->Location = System::Drawing::Point(537, 401);
			this->picU9->Name = L"picU9";
			this->picU9->Size = System::Drawing::Size(50, 73);
			this->picU9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU9->TabIndex = 28;
			this->picU9->TabStop = false;
			this->picU9->Click += gcnew System::EventHandler(this, &MyForm::picU9_Click);
			// 
			// picU0
			// 
			this->picU0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU0.Image")));
			this->picU0->Location = System::Drawing::Point(33, 401);
			this->picU0->Name = L"picU0";
			this->picU0->Size = System::Drawing::Size(50, 73);
			this->picU0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU0->TabIndex = 29;
			this->picU0->TabStop = false;
			this->picU0->Click += gcnew System::EventHandler(this, &MyForm::picU0_Click);
			// 
			// picU12
			// 
			this->picU12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU12.Image")));
			this->picU12->Location = System::Drawing::Point(705, 401);
			this->picU12->Name = L"picU12";
			this->picU12->Size = System::Drawing::Size(50, 73);
			this->picU12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU12->TabIndex = 30;
			this->picU12->TabStop = false;
			this->picU12->Click += gcnew System::EventHandler(this, &MyForm::picU12_Click);
			// 
			// picU11
			// 
			this->picU11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU11.Image")));
			this->picU11->Location = System::Drawing::Point(649, 401);
			this->picU11->Name = L"picU11";
			this->picU11->Size = System::Drawing::Size(50, 73);
			this->picU11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU11->TabIndex = 31;
			this->picU11->TabStop = false;
			this->picU11->Click += gcnew System::EventHandler(this, &MyForm::picU11_Click);
			// 
			// picU10
			// 
			this->picU10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU10.Image")));
			this->picU10->Location = System::Drawing::Point(593, 401);
			this->picU10->Name = L"picU10";
			this->picU10->Size = System::Drawing::Size(50, 73);
			this->picU10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU10->TabIndex = 32;
			this->picU10->TabStop = false;
			this->picU10->Click += gcnew System::EventHandler(this, &MyForm::picU10_Click);
			// 
			// picU6
			// 
			this->picU6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picU6.Image")));
			this->picU6->Location = System::Drawing::Point(369, 401);
			this->picU6->Name = L"picU6";
			this->picU6->Size = System::Drawing::Size(50, 73);
			this->picU6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picU6->TabIndex = 33;
			this->picU6->TabStop = false;
			this->picU6->Click += gcnew System::EventHandler(this, &MyForm::picU6_Click_1);
			// 
			// instructionsToolStripMenuItem
			// 
			this->instructionsToolStripMenuItem->Name = L"instructionsToolStripMenuItem";
			this->instructionsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->instructionsToolStripMenuItem->Text = L"Instructions";
			this->instructionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::instructionsToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 491);
			this->Controls->Add(this->picU6);
			this->Controls->Add(this->picU10);
			this->Controls->Add(this->picU11);
			this->Controls->Add(this->picU12);
			this->Controls->Add(this->picU0);
			this->Controls->Add(this->picU9);
			this->Controls->Add(this->picU8);
			this->Controls->Add(this->picU7);
			this->Controls->Add(this->picU5);
			this->Controls->Add(this->picU4);
			this->Controls->Add(this->picU3);
			this->Controls->Add(this->picU2);
			this->Controls->Add(this->picU1);
			this->Controls->Add(this->lblP3);
			this->Controls->Add(this->lblP1);
			this->Controls->Add(this->lblP2);
			this->Controls->Add(this->picDl);
			this->Controls->Add(this->picHl);
			this->Controls->Add(this->picSl);
			this->Controls->Add(this->picCl);
			this->Controls->Add(this->picDh);
			this->Controls->Add(this->picHh);
			this->Controls->Add(this->picSh);
			this->Controls->Add(this->picCh);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picU6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
	//Everything above marked area is auto generated by VS
	//My own function below to update the images of the middle cards and the opponent texts, while continuing the AI play
	void updateMid() {
		do{
			lblP1->Text = "Player 1: " + updateText(1) + " Cards";
			lblP2->Text = "Player 2: " + updateText(2) + " Cards";
			lblP3->Text = "Player 3: " + updateText(3) + " Cards";

			picCl->Image = Image::FromFile(updateMiddle(0));
			picCh->Image = Image::FromFile(updateMiddle(4));
			picSl->Image = Image::FromFile(updateMiddle(1));
			picSh->Image = Image::FromFile(updateMiddle(5));
			picDl->Image = Image::FromFile(updateMiddle(2));
			picDh->Image = Image::FromFile(updateMiddle(6));
			picHl->Image = Image::FromFile(updateMiddle(3));
			picHh->Image = Image::FromFile(updateMiddle(7));
		} while (continuePlay());
	}

	//Function headers below are auto generated by VS, but internals are written by me
private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		exit(0);
	}
private: System::Void picU0_Click(System::Object^  sender, System::EventArgs^  e) {
	picU0->Image = Image::FromFile(cardClick(0), true);
	updateMid();
}
private: System::Void picU1_Click(System::Object^  sender, System::EventArgs^  e) {
	picU1->Image = Image::FromFile(cardClick(1), true);
	updateMid();
}
private: System::Void picU2_Click(System::Object^  sender, System::EventArgs^  e) {
	picU2->Image = Image::FromFile(cardClick(2), true);
	updateMid();
}
private: System::Void picU3_Click(System::Object^  sender, System::EventArgs^  e) {
	picU3->Image = Image::FromFile(cardClick(3), true);
	updateMid();
}
private: System::Void picU4_Click(System::Object^  sender, System::EventArgs^  e) {
	picU4->Image = Image::FromFile(cardClick(4), true);
	updateMid();
}
private: System::Void picU5_Click(System::Object^  sender, System::EventArgs^  e) {
	picU5->Image = Image::FromFile(cardClick(5), true);
	updateMid();
}
private: System::Void picU6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	picU6->Image = Image::FromFile(cardClick(6), true);
	updateMid();
}
private: System::Void picU7_Click(System::Object^  sender, System::EventArgs^  e) {
	picU7->Image = Image::FromFile(cardClick(7), true);
	updateMid();
}
private: System::Void picU8_Click(System::Object^  sender, System::EventArgs^  e) {
	picU8->Image = Image::FromFile(cardClick(8), true);
	updateMid();
}
private: System::Void picU9_Click(System::Object^  sender, System::EventArgs^  e) {
	picU9->Image = Image::FromFile(cardClick(9), true);
	updateMid();
}
private: System::Void picU10_Click(System::Object^  sender, System::EventArgs^  e) {
	picU10->Image = Image::FromFile(cardClick(10), true);
	updateMid();
}
private: System::Void picU11_Click(System::Object^  sender, System::EventArgs^  e) {
	picU11->Image = Image::FromFile(cardClick(11), true);
	updateMid();
}
private: System::Void picU12_Click(System::Object^  sender, System::EventArgs^  e) {
	picU12->Image = Image::FromFile(cardClick(12), true);
	updateMid();
}
private: System::Void instructionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Sevens is a cardgame where the goal is to get rid of all your cards.\nPlay your cards to add on to the line on each suit, where sevens start the line of that suit. If you cannot play a card, you must skip your turn. \nFor a more in-depth look, go to: en.wikipedia.org/Wiki/Sevens_(card_game)");
}
};
}