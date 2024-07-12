#pragma once
#include "Form2.h"
#include <vector>
#include <vcclr.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include <fstream>






namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			LoadImages();
			
			//
			//TODO: Add the constructor code here
			//
			iSlide = 0;
			bool secondChance= false;
			isRunning = false;
			elapsedSeconds = 0;
			
			/*questionFunctions = gcnew array<QuestionFunction>(15) {
				&Form1::Question1, & Form1::Question2, & Form1::Question3,
					& Form1::Question4, & Form1::Question5, & Form1::Question6,
					& Form1::Question7, & Form1::Question8, & Form1::Question9,
					& Form1::Question10, & Form1::Question11, & Form1::Question12,
					& Form1::Question13, & Form1::Question14, & Form1::Question15
			};*/

		}
		
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
			
		}





	



	private:
		
		System::Windows::Forms::Label^ timeLabel;
		System::Windows::Forms::Timer^ timer;
		System::Boolean isRunning;
		System::Int32 elapsedSeconds;
		System::ComponentModel::Container^ componentsContainer;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private:
		TextBox^ nameTextBox;
		Button^ enterButton;
	//private:
		//array<QuestionFunction>^ questionFunctions;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;


	private: System::Windows::Forms::RadioButton^ radioButton2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ labelUserName;













































	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(94, 345);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(770, 396);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(265, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(240, 213);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button1->Location = System::Drawing::Point(94, 747);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(813, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Location = System::Drawing::Point(744, 21);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(163, 152);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Location = System::Drawing::Point(995, 21);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(163, 152);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Location = System::Drawing::Point(1240, 21);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(163, 152);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->BackColor = System::Drawing::Color::Black;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(529, 493);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(276, 91);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(1060, 239);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(343, 543);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(210, 370);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(509, 51);
			this->label1->TabIndex = 18;
			this->label1->Text = L"label1";
			// 
			// radioButton1
			// 
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->BackColor = System::Drawing::Color::Black;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(157, 493);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(276, 91);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->BackColor = System::Drawing::Color::Black;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton3->Location = System::Drawing::Point(157, 629);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(276, 91);
			this->radioButton3->TabIndex = 21;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton4->BackColor = System::Drawing::Color::Black;
			this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton4->Location = System::Drawing::Point(529, 629);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(276, 91);
			this->radioButton4->TabIndex = 22;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(392, 756);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"round";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(536, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 24;
			this->label2->Text = L"label2";
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->timeLabel->Location = System::Drawing::Point(62, 120);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(120, 31);
			this->timeLabel->TabIndex = 1;
			this->timeLabel->Text = L"00:00:00";
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &Form1::timer_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(65, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"session time";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1600, 900);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->timeLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();


		}

		
		
#pragma endregion
		int iSlide;
		int clickCount = 0;
		int money = 0;
		time_t seesionTime;
		int currentQuestionIndex;
		bool secondChance = false;
		bool min2 = true;
		bool helps = true;
		System::String^ playerName;
		int sessionTime, questionNumber;
private:
	System::Drawing::Image^ image11;
	System::Drawing::Image^ image12;
	System::Drawing::Image^ image13;
	System::Drawing::Image^ image14;
	System::Drawing::Image^ image15;
	System::Drawing::Image^ image16;
	System::Drawing::Image^ image17;
	System::Drawing::Image^ image18;
	System::Drawing::Image^ image19;
	System::Drawing::Image^ image110;
	System::Drawing::Image^ image111;
	System::Drawing::Image^ image112;
	System::Drawing::Image^ image113;
	System::Drawing::Image^ image114;
	System::Drawing::Image^ image115;
	
	

	

private: System::Void LoadImages() {
	String^ imagePath1 = "Images\\Picture01.png";
	System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
	this->pictureBox1->Image = image1;

	String^ imagePath2 = "Images\\Layout.png";
	System::Drawing::Image^ image2 = System::Drawing::Image::FromFile(imagePath2);
	this->pictureBox2->Image = image2;

	String^ imagePath3 = "Images\\Icon.jpg";
	System::Drawing::Image^ image3 = System::Drawing::Image::FromFile(imagePath3);
	this->pictureBox3->Image = image3;

	String^ imagePath4 = "Images\\50on50.jpg";
	System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
	this->pictureBox4->Image = image4;
	
	String^ imagePath5 = "Images\\PPLhelp.jpg";
	System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
	this->pictureBox5->Image = image5;

	String^ imagePath6 = "Images\\2x.png";
	System::Drawing::Image^ image6 = System::Drawing::Image::FromFile(imagePath6);
	this->pictureBox6->Image = image6;

	String^ imagePath11 = "Images\\Picture1.png";
	String^ imagePath12 = "Images\\Picture2.png";
	String^ imagePath13 = "Images\\Picture3.png";
	String^ imagePath14 = "Images\\Picture4.png";
	String^ imagePath15 = "Images\\Picture5.png";
	String^ imagePath16 = "Images\\Picture6.png";
	String^ imagePath17 = "Images\\Picture7.png";
	String^ imagePath18 = "Images\\Picture8.png";
	String^ imagePath19 = "Images\\Picture9.png";
	String^ imagePath110 = "Images\\Picture10.png";
	String^ imagePath111 = "Images\\Picture11.png";
	String^ imagePath112 = "Images\\Picture12.png";
	String^ imagePath113 = "Images\\Picture13.png";
	String^ imagePath114 = "Images\\Picture14.png";
	String^ imagePath115 = "Images\\Picture15.png";

	this->image11 = System::Drawing::Image::FromFile(imagePath11);
	this->image12 = System::Drawing::Image::FromFile(imagePath12);
	this->image13 = System::Drawing::Image::FromFile(imagePath13);
	this->image14 = System::Drawing::Image::FromFile(imagePath14);
	this->image15 = System::Drawing::Image::FromFile(imagePath15);
	this->image16 = System::Drawing::Image::FromFile(imagePath16);
	this->image17 = System::Drawing::Image::FromFile(imagePath17);
	this->image18 = System::Drawing::Image::FromFile(imagePath18);
	this->image19 = System::Drawing::Image::FromFile(imagePath19);
	this->image110 = System::Drawing::Image::FromFile(imagePath110);
	this->image111 = System::Drawing::Image::FromFile(imagePath111);
	this->image112 = System::Drawing::Image::FromFile(imagePath112);
	this->image113 = System::Drawing::Image::FromFile(imagePath113);
	this->image114 = System::Drawing::Image::FromFile(imagePath114);
	this->image115 = System::Drawing::Image::FromFile(imagePath115);
	
}


	   /*void SaveGameState(System::String^ playerName, int money, int sessionTime, int questionNumber) {
		   // Открываем файл для записи
		   std::ofstream outFile("gamestate.txt");
		   if (outFile.is_open()) {
			   // Преобразуем System::String^ в std::string
			   std::string playerNameStr = msclr::interop::marshal_as<std::string>(playerName);

			   // Записываем данные в файл
			   outFile << playerNameStr << std::endl;
			   outFile << money << std::endl;
			   outFile << sessionTime << std::endl;
			   outFile << questionNumber << std::endl;

			   // Закрываем файл
			   outFile.close();
		   }
	   }

	   void LoadGameState(System::String^% playerName, int% money, int% sessionTime) {
		   // Открываем файл для чтения
		   std::ifstream inFile("gamestate.txt");
		   if (inFile.is_open()) {
			   std::string playerNameStr;
			   std::getline(inFile, playerNameStr);

			   // Преобразуем std::string в System::String^
			   playerName = gcnew System::String(playerNameStr.c_str());

			   inFile >> money;
			   inFile >> sessionTime;
			   inFile >> questionNumber;

			   // Закрываем файл
			   inFile.close();
		   }
	   }
	   private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		   SaveGameState(playerName, money, sessionTime );
	   }

			  // Пример загрузки при запуске
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ playerName;
		int money, sessionTime, questionNumber;
		LoadGameState(playerName, money, sessionTime, questionNumber);

		// Устанавливаем загруженные данные
		this->playerName = playerName;
		this->money = money;
		this->sessionTime = sessionTime;
		
	}*/
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->elapsedSeconds++;
		int hours = this->elapsedSeconds / 3600;
		int minutes = (this->elapsedSeconds % 3600) / 60;
		int seconds = this->elapsedSeconds % 60;
		this->timeLabel->Text = String::Format("{0:D2}:{1:D2}:{2:D2}", hours, minutes, seconds);
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		
		
	}

	
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (button1->Text == "start/restart") {
		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;
		
	}
	else {
		String^ imagePath4x = "Images\\50on50x.jpg";
		System::Drawing::Image^ image4x = System::Drawing::Image::FromFile(imagePath4x);
		this->pictureBox4->Image = image4x;
	}

	if (button1->Text == "1") 
	{
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "2")
	{
		radioButton1->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "3")
	{
		radioButton2->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "4")
	{
		radioButton2->Visible = false;
		radioButton3->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "5")
	{
		radioButton1->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "6")
	{
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "7")
	{
		radioButton1->Visible = false;
		radioButton3->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "8")
	{
		radioButton3->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}

	if (button1->Text == "9")
	{
		radioButton2->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "10")
	{
		radioButton1->Visible = false;
		radioButton3->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "11")
	{
		radioButton3->Visible = false;
		radioButton4->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "12")
	{
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "13")
	{
		radioButton2->Visible = false;
		radioButton3->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "14")
	{
		radioButton1->Visible = false;
		radioButton3->Visible = false;
		pictureBox4->Enabled = false;
		
	}
	if (button1->Text == "15")
	{
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		pictureBox4->Enabled = false;
		
	}



}

private: System::Void Question1() {
	label1->Text = "What is 8 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question2() {
	label1->Text = "What is 7 + 7";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question3() {
	label1->Text = "What is 3 + 6";
	radioButton1->Text = "A: 9";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question4() {
	label1->Text = "What is 7 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question5() {
	label1->Text = "What is 9 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question6() {
	label1->Text = "What is 4 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 10";
	radioButton4->Text = "D: 11";

}
private: System::Void Question7() {
	label1->Text = "What is 5 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question8() {
	label1->Text = "What is 12 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 18";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question9() {
	label1->Text = "What is 1 + 12";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question10() {
	label1->Text = "What is 8 + 7";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question11() {
	label1->Text = "What is 7 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question12() {
	label1->Text = "What is 5 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question13() {
	label1->Text = "What is 4 + 9";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question14() {
	label1->Text = "What is 9 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 11";

}
private: System::Void Question15() {
	label1->Text = "What is 6 + 6";
	radioButton1->Text = "A: 13";
	radioButton2->Text = "B: 15";
	radioButton3->Text = "C: 14";
	radioButton4->Text = "D: 12";

}






















	   

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;


	label2->Text = "$0";

	
	
	if (button1->Text == "1") {
		money = 100;
		label2->Text = "$100";
		questionNumber = 1;
	}
	if (button1->Text == "2") {
		money = 200;
		label2->Text = "$200";
		questionNumber = 2;
	}
	if (button1->Text == "3") {
		money = 300;
		label2->Text = "$300";
		questionNumber = 3;
	}
	if (button1->Text == "4") {
		money = 500;
		label2->Text = "$500";
		questionNumber = 4;
	}
	if (button1->Text == "5") {
		money = 1000;
		label2->Text = "$1000";
		questionNumber = 5;
	}
	if (button1->Text == "6") {
		money = 2000;
		label2->Text = "$2000";
		questionNumber = 6;
	}
	if (button1->Text == "7") {
		money = 4000;
		label2->Text = "$4000";
		questionNumber = 7;
	}
	if (button1->Text == "8") {
		money = 8000;
		label2->Text = "$8000";
		questionNumber = 8;
	}
	if (button1->Text == "9") {
		money = 16000;
		label2->Text = "$16000";
		questionNumber = 9;
	}
	if (button1->Text == "10") {
		money = 32000;
		label2->Text = "$32000";
		questionNumber = 10;
	}
	if (button1->Text == "11") {
		money = 64000;
		label2->Text = "$64000";
		questionNumber = 11;
	}
	if (button1->Text == "12") {
		money = 125000;
		label2->Text = "$125000";
		questionNumber = 12;
	}
	if (button1->Text == "13") {
		money = 250000;
		label2->Text = "$250000";
		questionNumber = 13;
	}
	if (button1->Text == "14") {
		money = 500000;
		label2->Text = "$500000";
		questionNumber = 14;
	}


	radioButton1->Visible = true;
	radioButton2->Visible = true;
	radioButton3->Visible = true;
	radioButton4->Visible = true;

	radioButton1->BackColor = System::Drawing::Color::Black;
	radioButton2->BackColor = System::Drawing::Color::Black;
	radioButton3->BackColor = System::Drawing::Color::Black;
	radioButton4->BackColor = System::Drawing::Color::Black;

	if (this->isRunning)
	{

		this->button1->Text = L"restart";
	}
		else if (this->button1->Text == "restart") {
		this->elapsedSeconds = 0;
		this->timeLabel->Text = "00:00:00";
	
	}
	else
	{
		this->timer->Start();

	}
	this->isRunning = !this->isRunning;


	iSlide += 1;

	switch (iSlide) {
	case 1:
		Question1();
		iSlide = 1;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image11;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
	break;



	case 2:
		Question2();
		iSlide = 2;
		button1->Text = Convert::ToString(iSlide);
		
		this->pictureBox1->Image = this->image12;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 3:
		Question3();
		iSlide = 3;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image13;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;


	case 4:
		Question4();
		iSlide = 4;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image14;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 5:
		Question5();
		iSlide = 5;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image15;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 6:
		Question6();
		iSlide = 6;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image16;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 7:
		Question7();
		iSlide = 7;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image17;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 8:
		Question8();
		iSlide = 8;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image18;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 9:
		Question9();
		iSlide = 9;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image19;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 10:
		Question10();
		iSlide = 10;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image110;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;


	case 11:
		Question11();
		iSlide = 11;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image111;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 12:
		Question12();
		iSlide = 12;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image112;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 13:
		Question13();
		iSlide = 13;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image113;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 14:
		Question14();
		iSlide = 14;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image114;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;

	case 15:
		Question15();
		iSlide = 15;
		button1->Text = Convert::ToString(iSlide);
		this->pictureBox1->Image = this->image115;
		button1->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;

		radioButton1->BackColor = System::Drawing::Color::Black;
		radioButton2->BackColor = System::Drawing::Color::Black;
		radioButton3->BackColor = System::Drawing::Color::Black;
		radioButton4->BackColor = System::Drawing::Color::Black;
		break;


	}






}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (button1->Text == "3" && radioButton1->Checked == true) {
		radioButton1->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
		
	}
	if (button1->Text == "4" && radioButton1->Checked == true) {
		radioButton1->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "9" && radioButton1->Checked == true) {
		radioButton1->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "11" && radioButton1->Checked == true) {
		radioButton1->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "13" && radioButton1->Checked == true) {
		radioButton1->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}


	//=========================InCorrect Answer=============================
	if ((button1->Text == "10" || button1->Text == "2" || button1->Text == "14") && (radioButton1->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton1->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "3" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;

			}
			if (button1->Text == "4" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "9" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "11" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "13" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}

		}
		
			radioButton1->BackColor = System::Drawing::Color::Red;
			String^ imagePath1 = "Images\\Picture01.png";
			System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
			this->pictureBox1->Image = image1;

			String^ imagePath4 = "Images\\50on50.jpg";
			System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
			this->pictureBox4->Image = image4;

			String^ imagePath5 = "Images\\PPLhelp.jpg";
			System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
			this->pictureBox5->Image = image5;
			iSlide = 0;
			button1->Enabled = true;
			button1->Text = "restart";

			Question1();
			pictureBox4->Enabled = true;
			pictureBox5->Enabled = true;
		}
		
	
	if ((button1->Text == "8" || button1->Text == "5" || button1->Text == "6") && (radioButton1->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton1->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "3" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;

			}
			if (button1->Text == "4" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "9" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "11" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "13" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton1->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}

	if ((button1->Text == "6") && (radioButton1->Checked == true) && !(pictureBox6->Focused)) {
		if (secondChance) {
			radioButton1->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "3" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;

			}
			if (button1->Text == "4" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "9" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "11" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "13" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton1->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
	}
	if ((button1->Text == "7" || button1->Text == "15" || button1->Text == "1") && (radioButton1->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton1->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "3" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;

			}
			if (button1->Text == "4" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "9" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "11" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "13" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton1->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	if ((button1->Text == "12") && (radioButton1->Checked == true) && !(pictureBox6->Focused)) {
		
		if (secondChance) {
			radioButton1->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "3" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;

			}
			if (button1->Text == "4" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "9" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "11" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "13" && radioButton1->Checked == true) {
				radioButton1->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			radioButton1->BackColor = System::Drawing::Color::Red;
		}
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	







}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	   if (button1->Text == "10" && radioButton2->Checked == true) {
		   radioButton2->BackColor = System::Drawing::Color::Gold;
		   button1->Enabled = true;
	   }
	   if (button1->Text == "5" && radioButton2->Checked == true) {
		   radioButton2->BackColor = System::Drawing::Color::Gold;
		   button1->Enabled = true;
	   }
	   if (button1->Text == "8" && radioButton2->Checked == true) {
		   radioButton2->BackColor = System::Drawing::Color::Gold;
		   button1->Enabled = true;
	   }
	   if (button1->Text == "14" && radioButton2->Checked == true) {
		   radioButton2->BackColor = System::Drawing::Color::Gold;
		   button1->Enabled = true;
	   }


	   //=========================InCorrect Answer=============================
	   if ((button1->Text == "11" || button1->Text == "2" || button1->Text == "3") && (radioButton2->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton2->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "10" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "5" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "8" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "14" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton2->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		  
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "4" || button1->Text == "15" || button1->Text == "6") && (radioButton2->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton2->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "10" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "5" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "8" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "14" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton2->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }

	   if ((button1->Text == "6") && (radioButton2->Checked == true) && !(pictureBox6->Focused)) {
		   if (secondChance) {
			   radioButton2->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "10" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "5" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "8" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "14" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton2->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "7" || button1->Text == "12" || button1->Text == "9") && (radioButton2->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton2->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "10" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "5" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "8" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "14" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton2->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "13") && (radioButton2->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton2->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "10" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "5" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "8" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "14" && radioButton2->Checked == true) {
				   radioButton2->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton2->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }




















}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {\

	if (button1->Text == "2" && radioButton3->Checked == true) {
		radioButton3->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "6" && radioButton3->Checked == true) {
		radioButton3->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	   }
	if (button1->Text == "1" && radioButton3->Checked == true) {
		radioButton3->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}


	   //=========================InCorrect Answer=============================
	   if ((button1->Text == "4" || button1->Text == "3") && (radioButton3->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "15" || button1->Text == "5") && (radioButton3->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }

	   if ((button1->Text == "10") && (radioButton3->Checked == true) && !(pictureBox6->Focused)) {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		  
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "7" || button1->Text == "8" || button1->Text == "9") && (radioButton3->Checked == true) && !(pictureBox6->Focused))
	   {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "11" || button1->Text == "13") && (radioButton3->Checked == true) && !(pictureBox6->Focused)) {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }
	   if ((button1->Text == "12" || button1->Text == "14") && (radioButton3->Checked == true) && !(pictureBox6->Focused)) {
		   if (secondChance) {
			   radioButton3->BackColor = System::Drawing::Color::Red;
			   if (button1->Text == "2" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "6" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
			   if (button1->Text == "1" && radioButton3->Checked == true) {
				   radioButton3->BackColor = System::Drawing::Color::Gold;
				   button1->Enabled = true;
			   }
		   }
		   radioButton3->BackColor = System::Drawing::Color::Red;
		   String^ imagePath1 = "Images\\Picture01.png";
		   System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		   this->pictureBox1->Image = image1;

		   String^ imagePath4 = "Images\\50on50.jpg";
		   System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		   this->pictureBox4->Image = image4;

		   String^ imagePath5 = "Images\\PPLhelp.jpg";
		   System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		   this->pictureBox5->Image = image5;
		   iSlide = 0;
		   button1->Enabled = true;
		   button1->Text = "restart";
		   
		   Question1();
		   pictureBox4->Enabled = true;
		   pictureBox5->Enabled = true;
		   
	   }





}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (button1->Text == "7" && radioButton4->Checked == true) {
		radioButton4->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "12" && radioButton4->Checked == true) {
		radioButton4->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}
	if (button1->Text == "15" && radioButton4->Checked == true) {
		radioButton4->BackColor = System::Drawing::Color::Gold;
		button1->Enabled = true;
	}


	//=========================InCorrect Answer=============================
	if ((button1->Text == "1" || button1->Text == "2" || button1->Text == "3") && (radioButton4->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton4->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	if ((button1->Text == "4" || button1->Text == "5") && (radioButton4->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton4->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}

	if ((button1->Text == "6") && (radioButton4->Checked == true) && !(pictureBox6->Focused)) {
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton4->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	if ((button1->Text == "10" || button1->Text == "8" || button1->Text == "9") && (radioButton4->Checked == true) && !(pictureBox6->Focused))
	{
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton4->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	if ((button1->Text == "11" || button1->Text == "13") && (radioButton4->Checked == true) && !(pictureBox6->Focused)) {
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		radioButton4->BackColor = System::Drawing::Color::Red;
		String^ imagePath1 = "Images\\Picture01.png";
		System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
		this->pictureBox1->Image = image1;

		String^ imagePath4 = "Images\\50on50.jpg";
		System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
		this->pictureBox4->Image = image4;

		String^ imagePath5 = "Images\\PPLhelp.jpg";
		System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
		this->pictureBox5->Image = image5;
		iSlide = 0;
		button1->Enabled = true;
		button1->Text = "restart";
		
		Question1();
		pictureBox4->Enabled = true;
		pictureBox5->Enabled = true;
		
	}
	if ((button1->Text == "14") && (radioButton4->Checked == true) && !(pictureBox6->Focused)) {
		if (secondChance) {
			radioButton4->BackColor = System::Drawing::Color::Red;
			if (button1->Text == "7" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "12" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
			if (button1->Text == "15" && radioButton4->Checked == true) {
				radioButton4->BackColor = System::Drawing::Color::Gold;
				button1->Enabled = true;
			}
		}
		
		


			radioButton4->BackColor = System::Drawing::Color::Red;
			String^ imagePath1 = "Images\\Picture01.png";
			System::Drawing::Image^ image1 = System::Drawing::Image::FromFile(imagePath1);
			this->pictureBox1->Image = image1;

			String^ imagePath4 = "Images\\50on50.jpg";
			System::Drawing::Image^ image4 = System::Drawing::Image::FromFile(imagePath4);
			this->pictureBox4->Image = image4;

			String^ imagePath5 = "Images\\PPLhelp.jpg";
			System::Drawing::Image^ image5 = System::Drawing::Image::FromFile(imagePath5);
			this->pictureBox5->Image = image5;
			iSlide = 0;
			button1->Enabled = true;
			button1->Text = "restart";

			Question1();
			pictureBox4->Enabled = true;
			pictureBox5->Enabled = true;
		
	}




}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ imagePath6x = "Images\\2xX.png";
	System::Drawing::Image^ image6x = System::Drawing::Image::FromFile(imagePath6x);
	this->pictureBox6->Image = image6x;
	bool secondChanse = true;
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ imagePath5x = "Images\\PPLhelpx.jpg";
	System::Drawing::Image^ image5x = System::Drawing::Image::FromFile(imagePath5x);
	this->pictureBox5->Image = image5x;
	
	if (button1->Text == "1") 
	{
		Form2^ form2 = gcnew Form2(10, 20, 50, 20);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "2")
	{
		Form2^ form2 = gcnew Form2(8, 7, 76, 9);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "3")
	{
		Form2^ form2 = gcnew Form2(60, 30, 7, 3);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "4")
	{
		Form2^ form2 = gcnew Form2(45, 35, 12, 8);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "5")
	{
		Form2^ form2 = gcnew Form2(34, 52, 4, 10);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "6")
	{
		Form2^ form2 = gcnew Form2(15, 10, 5, 70);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "7")
	{
		Form2^ form2 = gcnew Form2(10, 14, 16, 60);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "8")
	{
		Form2^ form2 = gcnew Form2(34, 54, 2, 10);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "9")
	{
		Form2^ form2 = gcnew Form2(40, 20, 30, 10);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "10")
	{
		Form2^ form2 = gcnew Form2(34, 55, 1, 10);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "11")
	{
		Form2^ form2 = gcnew Form2(94, 2, 3, 1);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "12")
	{
		Form2^ form2 = gcnew Form2(14, 16, 32, 38);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "13")
	{
		Form2^ form2 = gcnew Form2(34, 33, 17, 16);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "14")
	{
		Form2^ form2 = gcnew Form2(34, 55, 1, 10);
		form2->Show();
		pictureBox5->Enabled = false;
	}
	if (button1->Text == "15")
	{
		Form2^ form2 = gcnew Form2(5, 14, 6, 75);
		form2->Show();
		pictureBox5->Enabled = false;
	}
}
};
}
