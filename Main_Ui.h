#pragma once
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <msclr/marshal_cppstd.h>
#include "libxl.h"
#include <comdef.h> // you will need this

using namespace libxl;
template <class Key,											// map::key_type
		  class T,												// map::mapped_type
		  class Compare = std::less<Key>,						// map::key_compare
		  class Alloc = std::allocator<std::pair<const Key, T>> // map::allocator_type
		  >
class map;
namespace TimeTableLinkerProject
{
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_Ui
	/// </summary>
public
	ref class Main_Ui : public System::Windows::Forms::Form
	{
	public:
		Main_Ui(void)
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
		~Main_Ui()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button ^ create_quick_meet_btn;

	protected:
	private:
		System::Windows::Forms::Button ^ choose_excel_file_btn;

	private:
		System::Windows::Forms::TextBox ^ textBox1;

	private:
		System::Windows::Forms::OpenFileDialog ^ openFileDialog1;

	private:
		System::Windows::Forms::Button ^ read_file_btn;

	private:
		System::Windows::Forms::TextBox ^ textBox2;

	private:
	private:
		System::Windows::Forms::Label ^ monday_label;

	private:
		System::Windows::Forms::Label ^ tuesday_label;

	private:
		System::Windows::Forms::Button ^ monday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec1_btn;

	private:
		System::Windows::Forms::Label ^ wednesday_label;

	private:
		System::Windows::Forms::Label ^ thursday_label;

	private:
		System::Windows::Forms::Label ^ friday_label;

	private:
		System::Windows::Forms::Label ^ saturday_label;

	private:
		System::Windows::Forms::Label ^ time_label;

	private:
		System::Windows::Forms::TextBox ^ textBox3;

	private:
		System::Windows::Forms::Button ^ monday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ monday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec2_btn;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ time_1_label;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button47;



	private:
	private:
		System::ComponentModel::IContainer ^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Ui::typeid));
			this->create_quick_meet_btn = (gcnew System::Windows::Forms::Button());
			this->choose_excel_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->read_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->monday_label = (gcnew System::Windows::Forms::Label());
			this->tuesday_label = (gcnew System::Windows::Forms::Label());
			this->monday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_label = (gcnew System::Windows::Forms::Label());
			this->thursday_label = (gcnew System::Windows::Forms::Label());
			this->friday_label = (gcnew System::Windows::Forms::Label());
			this->saturday_label = (gcnew System::Windows::Forms::Label());
			this->time_label = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->monday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->time_1_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// create_quick_meet_btn
			// 
			this->create_quick_meet_btn->BackColor = System::Drawing::Color::Transparent;
			this->create_quick_meet_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->create_quick_meet_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->create_quick_meet_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->create_quick_meet_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->create_quick_meet_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->create_quick_meet_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"create_quick_meet_btn.Image")));
			this->create_quick_meet_btn->Location = System::Drawing::Point(1777, 17);
			this->create_quick_meet_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->create_quick_meet_btn->Name = L"create_quick_meet_btn";
			this->create_quick_meet_btn->Size = System::Drawing::Size(241, 60);
			this->create_quick_meet_btn->TabIndex = 0;
			this->create_quick_meet_btn->Text = L"Create Quick Meet";
			this->create_quick_meet_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->create_quick_meet_btn->UseVisualStyleBackColor = false;
			this->create_quick_meet_btn->Click += gcnew System::EventHandler(this, &Main_Ui::create_quick_meet_btn_Click);
			// 
			// choose_excel_file_btn
			// 
			this->choose_excel_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->choose_excel_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->choose_excel_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->choose_excel_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->choose_excel_file_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choose_excel_file_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->choose_excel_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->choose_excel_file_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"choose_excel_file_btn.Image")));
			this->choose_excel_file_btn->Location = System::Drawing::Point(649, 779);
			this->choose_excel_file_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->choose_excel_file_btn->Name = L"choose_excel_file_btn";
			this->choose_excel_file_btn->Size = System::Drawing::Size(267, 58);
			this->choose_excel_file_btn->TabIndex = 1;
			this->choose_excel_file_btn->Text = L"Choose Excel File";
			this->choose_excel_file_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->choose_excel_file_btn->UseVisualStyleBackColor = false;
			this->choose_excel_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::choose_excel_file_btn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(272, 789);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 32);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"File Path...";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// read_file_btn
			// 
			this->read_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->read_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->read_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->read_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->read_file_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->read_file_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->read_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->read_file_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"read_file_btn.Image")));
			this->read_file_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->read_file_btn->Location = System::Drawing::Point(1493, 780);
			this->read_file_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->read_file_btn->Name = L"read_file_btn";
			this->read_file_btn->Size = System::Drawing::Size(236, 63);
			this->read_file_btn->TabIndex = 3;
			this->read_file_btn->Text = L"Read File";
			this->read_file_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->read_file_btn->UseVisualStyleBackColor = false;
			this->read_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::read_file_btn_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(1000, 789);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(472, 32);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Enter File Path...";
			// 
			// monday_label
			// 
			this->monday_label->AutoSize = true;
			this->monday_label->BackColor = System::Drawing::Color::Transparent;
			this->monday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monday_label->Location = System::Drawing::Point(27, 133);
			this->monday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->monday_label->Name = L"monday_label";
			this->monday_label->Size = System::Drawing::Size(85, 28);
			this->monday_label->TabIndex = 8;
			this->monday_label->Text = L"Monday";
			// 
			// tuesday_label
			// 
			this->tuesday_label->AutoSize = true;
			this->tuesday_label->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->tuesday_label->Location = System::Drawing::Point(27, 220);
			this->tuesday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tuesday_label->Name = L"tuesday_label";
			this->tuesday_label->Size = System::Drawing::Size(81, 28);
			this->tuesday_label->TabIndex = 9;
			this->tuesday_label->Text = L"Tuesday";
			// 
			// monday_lec1_btn
			// 
			this->monday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec1_btn->Location = System::Drawing::Point(168, 121);
			this->monday_lec1_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec1_btn->Name = L"monday_lec1_btn";
			this->monday_lec1_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec1_btn->TabIndex = 10;
			this->monday_lec1_btn->Text = L"Mon Lec 1";
			this->monday_lec1_btn->UseVisualStyleBackColor = false;
			this->monday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec1_btn_Click);
			// 
			// tuesday_lec1_btn
			// 
			this->tuesday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->tuesday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec1_btn->Location = System::Drawing::Point(168, 209);
			this->tuesday_lec1_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tuesday_lec1_btn->Name = L"tuesday_lec1_btn";
			this->tuesday_lec1_btn->Size = System::Drawing::Size(172, 57);
			this->tuesday_lec1_btn->TabIndex = 11;
			this->tuesday_lec1_btn->Text = L"Tue Lec 1";
			this->tuesday_lec1_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec1_btn_Click);
			// 
			// wednesday_label
			// 
			this->wednesday_label->AutoSize = true;
			this->wednesday_label->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->wednesday_label->Location = System::Drawing::Point(29, 325);
			this->wednesday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->wednesday_label->Name = L"wednesday_label";
			this->wednesday_label->Size = System::Drawing::Size(114, 28);
			this->wednesday_label->TabIndex = 12;
			this->wednesday_label->Text = L"Wednesday";
			// 
			// thursday_label
			// 
			this->thursday_label->AutoSize = true;
			this->thursday_label->BackColor = System::Drawing::Color::Transparent;
			this->thursday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->thursday_label->Location = System::Drawing::Point(29, 411);
			this->thursday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->thursday_label->Name = L"thursday_label";
			this->thursday_label->Size = System::Drawing::Size(91, 28);
			this->thursday_label->TabIndex = 13;
			this->thursday_label->Text = L"Thrusday";
			// 
			// friday_label
			// 
			this->friday_label->AutoSize = true;
			this->friday_label->BackColor = System::Drawing::Color::Transparent;
			this->friday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->friday_label->Location = System::Drawing::Point(29, 497);
			this->friday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->friday_label->Name = L"friday_label";
			this->friday_label->Size = System::Drawing::Size(66, 28);
			this->friday_label->TabIndex = 14;
			this->friday_label->Text = L"Friday";
			// 
			// saturday_label
			// 
			this->saturday_label->AutoSize = true;
			this->saturday_label->BackColor = System::Drawing::Color::Transparent;
			this->saturday_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->saturday_label->Location = System::Drawing::Point(29, 580);
			this->saturday_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->saturday_label->Name = L"saturday_label";
			this->saturday_label->Size = System::Drawing::Size(90, 28);
			this->saturday_label->TabIndex = 15;
			this->saturday_label->Text = L"Saturday";
			// 
			// time_label
			// 
			this->time_label->AutoSize = true;
			this->time_label->BackColor = System::Drawing::Color::Transparent;
			this->time_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->time_label->Location = System::Drawing::Point(29, 86);
			this->time_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_label->Name = L"time_label";
			this->time_label->Size = System::Drawing::Size(53, 25);
			this->time_label->TabIndex = 16;
			this->time_label->Text = L"Time";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(217, 33);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 17;
			// 
			// monday_lec2_btn
			// 
			this->monday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec2_btn->Location = System::Drawing::Point(375, 121);
			this->monday_lec2_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec2_btn->Name = L"monday_lec2_btn";
			this->monday_lec2_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec2_btn->TabIndex = 18;
			this->monday_lec2_btn->Text = L"Mon Lec 2";
			this->monday_lec2_btn->UseVisualStyleBackColor = false;
			this->monday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec2_btn_Click);
			// 
			// monday_lec3_btn
			// 
			this->monday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec3_btn->Location = System::Drawing::Point(588, 121);
			this->monday_lec3_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec3_btn->Name = L"monday_lec3_btn";
			this->monday_lec3_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec3_btn->TabIndex = 19;
			this->monday_lec3_btn->Text = L"Mon Lec 3";
			this->monday_lec3_btn->UseVisualStyleBackColor = false;
			// 
			// monday_lec4_btn
			// 
			this->monday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec4_btn->Location = System::Drawing::Point(797, 121);
			this->monday_lec4_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec4_btn->Name = L"monday_lec4_btn";
			this->monday_lec4_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec4_btn->TabIndex = 20;
			this->monday_lec4_btn->Text = L"Mon Lec 4";
			this->monday_lec4_btn->UseVisualStyleBackColor = false;
			// 
			// monday_lec5_btn
			// 
			this->monday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec5_btn->Location = System::Drawing::Point(1019, 121);
			this->monday_lec5_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec5_btn->Name = L"monday_lec5_btn";
			this->monday_lec5_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec5_btn->TabIndex = 21;
			this->monday_lec5_btn->Text = L"Mon Lec 5";
			this->monday_lec5_btn->UseVisualStyleBackColor = false;
			// 
			// monday_lec6_btn
			// 
			this->monday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->monday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec6_btn->Location = System::Drawing::Point(1235, 121);
			this->monday_lec6_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->monday_lec6_btn->Name = L"monday_lec6_btn";
			this->monday_lec6_btn->Size = System::Drawing::Size(172, 59);
			this->monday_lec6_btn->TabIndex = 22;
			this->monday_lec6_btn->Text = L"Mon Lec 6";
			this->monday_lec6_btn->UseVisualStyleBackColor = false;
			// 
			// friday_lec1_btn
			// 
			this->friday_lec1_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->friday_lec1_btn->Location = System::Drawing::Point(423, 32);
			this->friday_lec1_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->friday_lec1_btn->Name = L"friday_lec1_btn";
			this->friday_lec1_btn->Size = System::Drawing::Size(172, 28);
			this->friday_lec1_btn->TabIndex = 23;
			this->friday_lec1_btn->Text = L"Fri Lec 1";
			this->friday_lec1_btn->UseVisualStyleBackColor = true;
			this->friday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec1_btn_Click);
			// 
			// friday_lec2_btn
			// 
			this->friday_lec2_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->friday_lec2_btn->Location = System::Drawing::Point(217, 644);
			this->friday_lec2_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->friday_lec2_btn->Name = L"friday_lec2_btn";
			this->friday_lec2_btn->Size = System::Drawing::Size(172, 28);
			this->friday_lec2_btn->TabIndex = 24;
			this->friday_lec2_btn->Text = L"Fri Lec 2";
			this->friday_lec2_btn->UseVisualStyleBackColor = true;
			this->friday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec2_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(33, 635);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1440, 1);
			this->panel1->TabIndex = 26;
			// 
			// time_1_label
			// 
			this->time_1_label->AutoSize = true;
			this->time_1_label->Location = System::Drawing::Point(191, 86);
			this->time_1_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_1_label->Name = L"time_1_label";
			this->time_1_label->Size = System::Drawing::Size(90, 17);
			this->time_1_label->TabIndex = 27;
			this->time_1_label->Text = L"Time Label 1";
			this->time_1_label->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1448, 121);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 59);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Mon Lec 7";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1643, 121);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 59);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Mon Lec 8";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1847, 121);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 59);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Mon Lec 9";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1847, 209);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(172, 59);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Tue Lec 9";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(1643, 209);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(172, 59);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Tue Lec 8";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(1448, 209);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 59);
			this->button6->TabIndex = 36;
			this->button6->Text = L"Tue Lec 7";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1235, 209);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(172, 59);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Tue Lec 6";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(1019, 209);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(172, 59);
			this->button8->TabIndex = 34;
			this->button8->Text = L"Tue Lec 5";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(797, 209);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(172, 59);
			this->button9->TabIndex = 33;
			this->button9->Text = L"Tue Lec 4";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(588, 209);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(172, 59);
			this->button10->TabIndex = 32;
			this->button10->Text = L"Tue Lec 3";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(375, 209);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(172, 59);
			this->button11->TabIndex = 31;
			this->button11->Text = L"Tue Lec 2";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(1847, 300);
			this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(172, 59);
			this->button12->TabIndex = 47;
			this->button12->Text = L"Tue Lec 9";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(1643, 300);
			this->button13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(172, 59);
			this->button13->TabIndex = 46;
			this->button13->Text = L"Tue Lec 8";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(1448, 300);
			this->button14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(172, 59);
			this->button14->TabIndex = 45;
			this->button14->Text = L"Tue Lec 7";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(1235, 300);
			this->button15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(172, 59);
			this->button15->TabIndex = 44;
			this->button15->Text = L"Tue Lec 6";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(1019, 300);
			this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(172, 59);
			this->button16->TabIndex = 43;
			this->button16->Text = L"Tue Lec 5";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(797, 300);
			this->button17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(172, 59);
			this->button17->TabIndex = 42;
			this->button17->Text = L"Tue Lec 4";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(588, 300);
			this->button18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(172, 59);
			this->button18->TabIndex = 41;
			this->button18->Text = L"Tue Lec 3";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(375, 300);
			this->button19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(172, 59);
			this->button19->TabIndex = 40;
			this->button19->Text = L"Tue Lec 2";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(168, 300);
			this->button20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(172, 57);
			this->button20->TabIndex = 39;
			this->button20->Text = L"Tue Lec 1";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(1847, 388);
			this->button21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(172, 59);
			this->button21->TabIndex = 56;
			this->button21->Text = L"Tue Lec 9";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(1643, 388);
			this->button22->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(172, 59);
			this->button22->TabIndex = 55;
			this->button22->Text = L"Tue Lec 8";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(1448, 388);
			this->button23->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(172, 59);
			this->button23->TabIndex = 54;
			this->button23->Text = L"Tue Lec 7";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(1235, 388);
			this->button24->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(172, 59);
			this->button24->TabIndex = 53;
			this->button24->Text = L"Tue Lec 6";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(1019, 388);
			this->button25->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(172, 59);
			this->button25->TabIndex = 52;
			this->button25->Text = L"Tue Lec 5";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(797, 388);
			this->button26->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(172, 59);
			this->button26->TabIndex = 51;
			this->button26->Text = L"Tue Lec 4";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(588, 388);
			this->button27->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(172, 59);
			this->button27->TabIndex = 50;
			this->button27->Text = L"Tue Lec 3";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(375, 388);
			this->button28->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(172, 59);
			this->button28->TabIndex = 49;
			this->button28->Text = L"Tue Lec 2";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Transparent;
			this->button29->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(168, 388);
			this->button29->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(172, 57);
			this->button29->TabIndex = 48;
			this->button29->Text = L"Tue Lec 1";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Transparent;
			this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(1847, 474);
			this->button30->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(172, 59);
			this->button30->TabIndex = 65;
			this->button30->Text = L"Tue Lec 9";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Transparent;
			this->button31->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button31->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(1643, 474);
			this->button31->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(172, 59);
			this->button31->TabIndex = 64;
			this->button31->Text = L"Tue Lec 8";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(1448, 474);
			this->button32->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(172, 59);
			this->button32->TabIndex = 63;
			this->button32->Text = L"Tue Lec 7";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Transparent;
			this->button33->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button33->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(1235, 474);
			this->button33->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(172, 59);
			this->button33->TabIndex = 62;
			this->button33->Text = L"Tue Lec 6";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Transparent;
			this->button34->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(1019, 474);
			this->button34->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(172, 59);
			this->button34->TabIndex = 61;
			this->button34->Text = L"Tue Lec 5";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Transparent;
			this->button35->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button35->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(797, 474);
			this->button35->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(172, 59);
			this->button35->TabIndex = 60;
			this->button35->Text = L"Tue Lec 4";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Transparent;
			this->button36->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button36->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(588, 474);
			this->button36->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(172, 59);
			this->button36->TabIndex = 59;
			this->button36->Text = L"Tue Lec 3";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Transparent;
			this->button37->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button37->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(375, 474);
			this->button37->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(172, 59);
			this->button37->TabIndex = 58;
			this->button37->Text = L"Tue Lec 2";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Transparent;
			this->button38->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button38->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button38->ForeColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(168, 474);
			this->button38->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(172, 57);
			this->button38->TabIndex = 57;
			this->button38->Text = L"Tue Lec 1";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Transparent;
			this->button39->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button39->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button39->ForeColor = System::Drawing::Color::White;
			this->button39->Location = System::Drawing::Point(1847, 556);
			this->button39->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(172, 59);
			this->button39->TabIndex = 74;
			this->button39->Text = L"Tue Lec 9";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Transparent;
			this->button40->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button40->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button40->ForeColor = System::Drawing::Color::White;
			this->button40->Location = System::Drawing::Point(1643, 556);
			this->button40->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(172, 59);
			this->button40->TabIndex = 73;
			this->button40->Text = L"Tue Lec 8";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Transparent;
			this->button41->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button41->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button41->ForeColor = System::Drawing::Color::White;
			this->button41->Location = System::Drawing::Point(1448, 556);
			this->button41->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(172, 59);
			this->button41->TabIndex = 72;
			this->button41->Text = L"Tue Lec 7";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Transparent;
			this->button42->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button42->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button42->ForeColor = System::Drawing::Color::White;
			this->button42->Location = System::Drawing::Point(1235, 556);
			this->button42->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(172, 59);
			this->button42->TabIndex = 71;
			this->button42->Text = L"Tue Lec 6";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Transparent;
			this->button43->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button43->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button43->ForeColor = System::Drawing::Color::White;
			this->button43->Location = System::Drawing::Point(1019, 556);
			this->button43->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(172, 59);
			this->button43->TabIndex = 70;
			this->button43->Text = L"Tue Lec 5";
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::Transparent;
			this->button44->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button44->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button44->ForeColor = System::Drawing::Color::White;
			this->button44->Location = System::Drawing::Point(797, 556);
			this->button44->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(172, 59);
			this->button44->TabIndex = 69;
			this->button44->Text = L"Tue Lec 4";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::Transparent;
			this->button45->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button45->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button45->ForeColor = System::Drawing::Color::White;
			this->button45->Location = System::Drawing::Point(588, 556);
			this->button45->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(172, 59);
			this->button45->TabIndex = 68;
			this->button45->Text = L"Tue Lec 3";
			this->button45->UseVisualStyleBackColor = false;
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::Transparent;
			this->button46->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button46->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button46->ForeColor = System::Drawing::Color::White;
			this->button46->Location = System::Drawing::Point(375, 556);
			this->button46->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(172, 59);
			this->button46->TabIndex = 67;
			this->button46->Text = L"Tue Lec 2";
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::Transparent;
			this->button47->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button47->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button47->ForeColor = System::Drawing::Color::White;
			this->button47->Location = System::Drawing::Point(168, 556);
			this->button47->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(172, 57);
			this->button47->TabIndex = 66;
			this->button47->Text = L"Tue Lec 1";
			this->button47->UseVisualStyleBackColor = false;
			// 
			// Main_Ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1040);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->time_1_label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->friday_lec2_btn);
			this->Controls->Add(this->friday_lec1_btn);
			this->Controls->Add(this->monday_lec6_btn);
			this->Controls->Add(this->monday_lec5_btn);
			this->Controls->Add(this->monday_lec4_btn);
			this->Controls->Add(this->monday_lec3_btn);
			this->Controls->Add(this->monday_lec2_btn);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->time_label);
			this->Controls->Add(this->saturday_label);
			this->Controls->Add(this->friday_label);
			this->Controls->Add(this->thursday_label);
			this->Controls->Add(this->wednesday_label);
			this->Controls->Add(this->tuesday_lec1_btn);
			this->Controls->Add(this->monday_lec1_btn);
			this->Controls->Add(this->tuesday_label);
			this->Controls->Add(this->monday_label);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->read_file_btn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->choose_excel_file_btn);
			this->Controls->Add(this->create_quick_meet_btn);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Main_Ui";
			this->Text = L"Main_Ui";
			this->Load += gcnew System::EventHandler(this, &Main_Ui::Main_Ui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::String ^ global_file_path = L"";
		int monday_row;
		int monday_col;
		int string_row;
		int string_col;
		CellType cellType;
		System::String ^ monday_lec1_url;
		System::String ^ monday_lec2_url;
		System::String ^ tuesday_lec1_url;
		System::String ^ friday_lec1_url;
		System::String ^ friday_lec2_url;
		void replaceAll(std::string& str, const std::string& from, const std::string& to) {
			if (from.empty())
				return;
			size_t start_pos = 0;
			while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
				str.replace(start_pos, from.length(), to);
				start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
			}
		}
		void read_previous_file() {
			fstream my_file;
			my_file.open("saved_file.txt", ios::in);
			std::string previous_file_path_1;
			if (my_file)
			{
				while (std::getline(my_file, previous_file_path_1))
				{
					previous_file_path_1 = previous_file_path_1 + "";
				}
			}
			my_file.close();
			String^ previous_file_path_2;
			previous_file_path_2 = msclr::interop::marshal_as<String^>(previous_file_path_1);
			if (previous_file_path_1 != "") {
				replaceAll(previous_file_path_1, "\\", "\\\\");
				read_file(previous_file_path_2);
			}

		}
		void find_monday(Sheet *sheet)
		{
			//Find Monday
			for (int row = sheet->firstRow(); row < sheet->lastRow(); ++row)
			{
				for (int col = sheet->firstCol(); col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);

					//if (sheet->isFormula(row, col))
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring name(L"Monday");
						const wchar_t *szName = name.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						if (*s == *szName)
						{
							monday_row = row;
							monday_col = col;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};

		void find_string(Sheet *sheet, wstring toFind)
		{
			textBox3->Text = msclr::interop::marshal_as<System::String ^>(toFind);
			for (int row = monday_row + 7; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col; col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);

					//if (sheet->isFormula(row, col))
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						if (*s == *szStr)
						{
							string_row = row;
							string_col = col;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};
		void timeline_buttons_maker(Sheet* sheet) {
			int row, col;
			//Timeline Label 1
			row = monday_row - 1 ;
			col = monday_col + 1;
			const wchar_t* time_label_1_string = sheet->readStr(row, col);
			wstring time_label_1(time_label_1_string);
			string time_label_1_str(time_label_1.begin(), time_label_1.end());

			time_1_label->Visible = true;
			time_1_label->Text = "";
			time_1_label->Text = time_1_label->Text + msclr::interop::marshal_as<System::String^>(time_label_1_str);
		};

		void monday_buttons_maker(Sheet *sheet)
		{

			int row, col;
			//Monday Lec1
			row = monday_row;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *monday_lec1_lec_string = sheet->readStr(row, col);
				wstring monday_lec1_lec(monday_lec1_lec_string);
				string monday_lec1_lec_str(monday_lec1_lec.begin(), monday_lec1_lec.end());

				monday_lec1_btn->Visible = true;
				monday_lec1_btn->Text = "";
				monday_lec1_btn->Text = monday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(monday_lec1_lec_str);
				find_string(sheet, monday_lec1_lec);
				const wchar_t *monday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring monday_lec1_url_raw_2(monday_lec1_url_raw);
				string monday_lec1_url_raw_3(monday_lec1_url_raw_2.begin(), monday_lec1_url_raw_2.end());
				monday_lec1_url = monday_lec1_url + msclr::interop::marshal_as<System::String ^>(monday_lec1_url_raw_3);
			}

			//Monday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec2_btn->Visible = true;
				monday_lec2_btn->Text = "";
				monday_lec2_btn->Text = monday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				find_string(sheet, lec);
				const wchar_t *monday_lec2_url_raw = sheet->readStr(14, 2);
				wstring monday_lec2_url_raw_2(monday_lec2_url_raw);
				string monday_lec2_url_raw_3(monday_lec2_url_raw_2.begin(), monday_lec2_url_raw_2.end());
				monday_lec2_url = monday_lec2_url + msclr::interop::marshal_as<System::String ^>(monday_lec2_url_raw_3);
			}
			//Monday Lec3
			//Monday Lec4
			//Monday Lec5
			//Monday Lec6
			//Monday Lec7
			//Monday Lec8
			//Monday Lec9
		}

		void tuesday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//tuesday Lec1
			row = monday_row + 1;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *tuesday_lec1_lec_string = sheet->readStr(row, col);
				wstring tuesday_lec1_lec(tuesday_lec1_lec_string);
				string tuesday_lec1_lec_str(tuesday_lec1_lec.begin(), tuesday_lec1_lec.end());

				tuesday_lec1_btn->Visible = true;
				tuesday_lec1_btn->Text = "";
				tuesday_lec1_btn->Text = tuesday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(tuesday_lec1_lec_str);
				find_string(sheet, tuesday_lec1_lec);
				const wchar_t *tuesday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec1_url_raw_2(tuesday_lec1_url_raw);
				string tuesday_lec1_url_raw_3(tuesday_lec1_url_raw_2.begin(), tuesday_lec1_url_raw_2.end());
				tuesday_lec1_url = tuesday_lec1_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec1_url_raw_3);
			}

			//tuesday Lec2
			// col = col + 1;
			// const wchar_t *lec_string = sheet->readStr(row, col);
			// wstring lec(lec_string);
			// string lec_str(lec.begin(), lec.end());

			// tuesday_lec2_btn->Visible = true;
			// tuesday_lec2_btn->Text = "";
			// tuesday_lec2_btn->Text = tuesday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
			// find_string(sheet, lec);
			// const wchar_t *tuesday_lec2_url_raw = sheet->readStr(14, 2);
			// wstring tuesday_lec2_url_raw_2(tuesday_lec2_url_raw);
			// string tuesday_lec2_url_raw_3(tuesday_lec2_url_raw_2.begin(), tuesday_lec2_url_raw_2.end());
			// tuesday_lec2_url = tuesday_lec2_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec2_url_raw_3);
			//tuesday Lec3
			//tuesday Lec4
			//tuesday Lec5
			//tuesday Lec6
			//tuesday Lec7
			//tuesday Lec8
			//tuesday Lec9
		}

		void friday_buttons_maker(Sheet *sheet)
		{
			//friday Lec1
			int row, col;
			row = monday_row + 4;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *friday_lec1_lec_string = sheet->readStr(row, col);
				wstring friday_lec1_lec(friday_lec1_lec_string);
				string friday_lec1_lec_str(friday_lec1_lec.begin(), friday_lec1_lec.end());

				friday_lec1_btn->Visible = true;
				friday_lec1_btn->Text = "";
				friday_lec1_btn->Text = friday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(friday_lec1_lec_str);
				find_string(sheet, friday_lec1_lec);
				const wchar_t *friday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring friday_lec1_url_raw_2(friday_lec1_url_raw);
				string friday_lec1_url_raw_3(friday_lec1_url_raw_2.begin(), friday_lec1_url_raw_2.end());
				friday_lec1_url = friday_lec1_url + msclr::interop::marshal_as<System::String ^>(friday_lec1_url_raw_3);
			}
			//friday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *friday_lec2_lec_string = sheet->readStr(row, col);
				wstring friday_lec2_lec(friday_lec2_lec_string);
				string friday_lec2_lec_str(friday_lec2_lec.begin(), friday_lec2_lec.end());

				friday_lec2_btn->Visible = true;
				friday_lec2_btn->Text = "";
				friday_lec2_btn->Text = friday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(friday_lec2_lec_str);
				find_string(sheet, friday_lec2_lec);
				const wchar_t *friday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring friday_lec2_url_raw_2(friday_lec2_url_raw);
				string friday_lec2_url_raw_3(friday_lec2_url_raw_2.begin(), friday_lec2_url_raw_2.end());
				friday_lec2_url = friday_lec2_url + msclr::interop::marshal_as<System::String ^>(friday_lec2_url_raw_3);
			}

			//friday Lec3
			//friday Lec4
			//friday Lec5
			//friday Lec6
			//friday Lec7
			//friday Lec8
			//friday Lec9
		}

		void display_buttons(Sheet *sheet)
		{
			/*for (int row = monday_row; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col + 1; col < sheet->lastCol(); ++col)
				{*/
			timeline_buttons_maker(sheet);
			monday_buttons_maker(sheet);
			tuesday_buttons_maker(sheet);
			friday_buttons_maker(sheet);

			/*}
			}*/
		}

		void read_file(System::String ^ file_path)
		{
			//String ^ to std::string
			std::string converted_filename = msclr::interop::marshal_as<std::string>(file_path);
			fstream my_file;
			my_file.open("saved_file.txt", ios::out);
			if (my_file)
			{
				my_file << converted_filename;
				my_file.close();
			}
			//std::string to WCHAR
			string narrow_string(converted_filename);
			wstring wide_string = wstring(narrow_string.begin(), narrow_string.end());
			const wchar_t *result = wide_string.c_str();

			Book *book = xlCreateXMLBook();

			if (book->load(result))
			{
				Sheet *sheet = book->getSheet(0);
				if (sheet)
				{
					find_monday(sheet);
					display_buttons(sheet);
				}
			}

			book->release();
		}

	private:
		System::Void create_quick_meet_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			string url = "https://meet.google.com/new";
			system(("start " + url).c_str());
		}

	private:
		System::Void choose_excel_file_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ filename;
			//openFileDialog1->Filter = "Text File|*.txt|Word Doc|*.doc|Excel Sheet|*.xlsx";
			openFileDialog1->FileName = "";
			openFileDialog1->Filter = "Excel Sheet|*.xlsx";
			openFileDialog1->InitialDirectory = "C:\\Users\\abhis\\Desktop\\SDP_Works\\Time_Table_Linker_Project\\My_Folder";
			openFileDialog1->Title = "Open Excel Files";
			openFileDialog1->ShowDialog();
			filename = openFileDialog1->FileName;
			textBox1->Text = filename->ToString();

			//System::String^ xyz = "Hi boys";
			global_file_path = filename;
			//std::string converted_filename = msclr::interop::marshal_as< std::string >(filename);
			textBox2->Text = global_file_path;
			if (global_file_path != "") {
				MessageBox::Show("File Imported Successfully", "Time Table Linker", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
		}

	private:
		System::Void read_file_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (textBox2->Text == L"Enter File Path..." || textBox2->Text == L"")
			{
			
				MessageBox::Show("Please Choose File", "Time Table Linker", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				//read_file(global_file_path);
				read_file(textBox2->Text);
			}
			//textBox2->Text = global_file_path;
		}

	private:
		System::Void monday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec1_url_secondary = "" + monday_lec1_url;
			std::string monday_lec1_final_url = msclr::interop::marshal_as<std::string>(monday_lec1_url_secondary);
			system(("start " + monday_lec1_final_url).c_str());
		}

	private:
		System::Void monday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec2_url_secondary = "" + monday_lec2_url;
			std::string monday_lec2_final_url = msclr::interop::marshal_as<std::string>(monday_lec2_url_secondary);
			system(("start " + monday_lec2_final_url).c_str());
		}

	private:
		System::Void tuesday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec1_url_secondary = "" + tuesday_lec1_url;
			std::string tuesday_lec1_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec1_url_secondary);
			system(("start " + tuesday_lec1_final_url).c_str());
		}

	private:
		System::Void friday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec1_url_secondary = "" + friday_lec1_url;
			std::string friday_lec1_final_url = msclr::interop::marshal_as<std::string>(friday_lec1_url_secondary);
			system(("start " + friday_lec1_final_url).c_str());
		}

	private:
		System::Void friday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ friday_lec2_url_secondary = "" + friday_lec2_url;
			std::string friday_lec2_final_url = msclr::interop::marshal_as<std::string>(friday_lec2_url_secondary);
			system(("start " + friday_lec2_final_url).c_str());
		}
	private: System::Void Main_Ui_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
