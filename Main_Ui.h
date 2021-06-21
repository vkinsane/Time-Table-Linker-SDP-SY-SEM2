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
			read_previous_file();
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
	private:
	private:
		System::Windows::Forms::Button ^ monday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec1_btn;

	private:
	private:
	private:
	private:
	private:
	private:
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

	private:
		System::Windows::Forms::Label ^ time_1_label;

	private:
		System::Windows::Forms::Button ^ monday_lec7_btn;

	private:
	private:
		System::Windows::Forms::Button ^ monday_lec8_btn;

	private:
	private:
		System::Windows::Forms::Button ^ monday_lec9_btn;

	private:
	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel3;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel5;

	private:
		System::Windows::Forms::Label ^ label6;

	private:
		System::Windows::Forms::Label ^ time_label;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel6;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel1;

	private:
		System::Windows::Forms::Label ^ label5;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::Label ^ label8;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel2;

	private:
		System::Windows::Forms::Button ^ wednesday_lec1_btn;

	private:
	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel4;

	private:
		System::Windows::Forms::Button ^ tuesday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec9_btn;

	private:
		System::Windows::Forms::Button ^ tuesday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ wednesday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec7_btn;

	private:
	private:
		System::Windows::Forms::Button ^ thursday_lec5_btn;

	private:
	private:
		System::Windows::Forms::Button ^ thursday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ thursday_lec9_btn;

	private:
	private:
	private:
	private:
	private:
	private:
	private:
	private:
		System::Windows::Forms::Button ^ wednesday_lec9_btn;

	private:
		System::Windows::Forms::Label ^ time_9_label;

	private:
		System::Windows::Forms::Label ^ time_8_label;

	private:
		System::Windows::Forms::Label ^ time_7_label;

	private:
		System::Windows::Forms::Label ^ time_6_label;

	private:
		System::Windows::Forms::Label ^ time_5_label;

	private:
		System::Windows::Forms::Label ^ time_4_label;

	private:
		System::Windows::Forms::Label ^ time_3_label;

	private:
		System::Windows::Forms::Label ^ time_2_label;

	private:
		System::Windows::Forms::Button ^ friday_lec9_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec7_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec6_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec3_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec4_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec1_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec2_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec5_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec8_btn;

	private:
		System::Windows::Forms::Button ^ saturday_lec9_btn;

	private:
		System::Windows::Forms::Button ^ friday_lec8_btn;

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
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_Ui::typeid));
			this->create_quick_meet_btn = (gcnew System::Windows::Forms::Button());
			this->choose_excel_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->read_file_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->monday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->time_1_label = (gcnew System::Windows::Forms::Label());
			this->monday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->monday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->time_8_label = (gcnew System::Windows::Forms::Label());
			this->time_7_label = (gcnew System::Windows::Forms::Label());
			this->time_6_label = (gcnew System::Windows::Forms::Label());
			this->time_5_label = (gcnew System::Windows::Forms::Label());
			this->time_4_label = (gcnew System::Windows::Forms::Label());
			this->time_3_label = (gcnew System::Windows::Forms::Label());
			this->time_2_label = (gcnew System::Windows::Forms::Label());
			this->time_9_label = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->time_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->saturday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->saturday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tuesday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->wednesday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec1_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec2_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->thursday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec3_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec4_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec5_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec6_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec7_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec8_btn = (gcnew System::Windows::Forms::Button());
			this->friday_lec9_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
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
			this->create_quick_meet_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																			 static_cast<System::Byte>(0)));
			this->create_quick_meet_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->create_quick_meet_btn->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"create_quick_meet_btn.Image")));
			this->create_quick_meet_btn->Location = System::Drawing::Point(873, 4);
			this->create_quick_meet_btn->Margin = System::Windows::Forms::Padding(4);
			this->create_quick_meet_btn->Name = L"create_quick_meet_btn";
			this->create_quick_meet_btn->Size = System::Drawing::Size(210, 52);
			this->create_quick_meet_btn->TabIndex = 0;
			this->create_quick_meet_btn->Text = L"Create Quick Meet";
			this->create_quick_meet_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->create_quick_meet_btn->UseVisualStyleBackColor = false;
			this->create_quick_meet_btn->Click += gcnew System::EventHandler(this, &Main_Ui::create_quick_meet_btn_Click);
			//
			// choose_excel_file_btn
			//
			this->choose_excel_file_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->choose_excel_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->choose_excel_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->choose_excel_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->choose_excel_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->choose_excel_file_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choose_excel_file_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																			 static_cast<System::Byte>(0)));
			this->choose_excel_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->choose_excel_file_btn->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"choose_excel_file_btn.Image")));
			this->choose_excel_file_btn->Location = System::Drawing::Point(384, 5);
			this->choose_excel_file_btn->Margin = System::Windows::Forms::Padding(4);
			this->choose_excel_file_btn->Name = L"choose_excel_file_btn";
			this->choose_excel_file_btn->Size = System::Drawing::Size(155, 58);
			this->choose_excel_file_btn->TabIndex = 1;
			this->choose_excel_file_btn->Text = L"Choose Excel File";
			this->choose_excel_file_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->choose_excel_file_btn->UseVisualStyleBackColor = false;
			this->choose_excel_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::choose_excel_file_btn_Click);
			//
			// textBox1
			//
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(547, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(372, 32);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"File Path...";
			//
			// openFileDialog1
			//
			this->openFileDialog1->FileName = L"openFileDialog1";
			//
			// read_file_btn
			//
			this->read_file_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->read_file_btn->BackColor = System::Drawing::Color::Transparent;
			this->read_file_btn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->read_file_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->read_file_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																									   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->read_file_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->read_file_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->read_file_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->read_file_btn->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"read_file_btn.Image")));
			this->read_file_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->read_file_btn->Location = System::Drawing::Point(927, 4);
			this->read_file_btn->Margin = System::Windows::Forms::Padding(4);
			this->read_file_btn->Name = L"read_file_btn";
			this->read_file_btn->Size = System::Drawing::Size(156, 61);
			this->read_file_btn->TabIndex = 3;
			this->read_file_btn->Text = L"Read File";
			this->read_file_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->read_file_btn->UseVisualStyleBackColor = false;
			this->read_file_btn->Click += gcnew System::EventHandler(this, &Main_Ui::read_file_btn_Click);
			//
			// textBox2
			//
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(4, 18);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(372, 32);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Enter File Path...";
			//
			// monday_lec1_btn
			//
			this->monday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	   static_cast<System::Byte>(0)));
			this->monday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec1_btn->Location = System::Drawing::Point(4, 6);
			this->monday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec1_btn->Name = L"monday_lec1_btn";
			this->monday_lec1_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec1_btn->TabIndex = 10;
			this->monday_lec1_btn->Text = L"Mon Lec 1";
			this->monday_lec1_btn->UseVisualStyleBackColor = false;
			this->monday_lec1_btn->Visible = false;
			this->monday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec1_btn_Click);
			//
			// tuesday_lec1_btn
			//
			this->tuesday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec1_btn->Location = System::Drawing::Point(4, 75);
			this->tuesday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec1_btn->Name = L"tuesday_lec1_btn";
			this->tuesday_lec1_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec1_btn->TabIndex = 11;
			this->tuesday_lec1_btn->Text = L"Tue Lec 1";
			this->tuesday_lec1_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec1_btn->Visible = false;
			this->tuesday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec1_btn_Click);
			//
			// monday_lec2_btn
			//
			this->monday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec2_btn->Location = System::Drawing::Point(107, 6);
			this->monday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec2_btn->Name = L"monday_lec2_btn";
			this->monday_lec2_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec2_btn->TabIndex = 18;
			this->monday_lec2_btn->Text = L"Mon Lec 2";
			this->monday_lec2_btn->UseVisualStyleBackColor = false;
			this->monday_lec2_btn->Visible = false;
			this->monday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec2_btn_Click);
			//
			// monday_lec3_btn
			//
			this->monday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec3_btn->Location = System::Drawing::Point(210, 6);
			this->monday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec3_btn->Name = L"monday_lec3_btn";
			this->monday_lec3_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec3_btn->TabIndex = 19;
			this->monday_lec3_btn->Text = L"Mon Lec 3";
			this->monday_lec3_btn->UseVisualStyleBackColor = false;
			this->monday_lec3_btn->Visible = false;
			this->monday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec3_btn_Click);
			//
			// monday_lec4_btn
			//
			this->monday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec4_btn->Location = System::Drawing::Point(313, 6);
			this->monday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec4_btn->Name = L"monday_lec4_btn";
			this->monday_lec4_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec4_btn->TabIndex = 20;
			this->monday_lec4_btn->Text = L"Mon Lec 4";
			this->monday_lec4_btn->UseVisualStyleBackColor = false;
			this->monday_lec4_btn->Visible = false;
			this->monday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec4_btn_Click);
			//
			// monday_lec5_btn
			//
			this->monday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec5_btn->Location = System::Drawing::Point(416, 6);
			this->monday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec5_btn->Name = L"monday_lec5_btn";
			this->monday_lec5_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec5_btn->TabIndex = 21;
			this->monday_lec5_btn->Text = L"Mon Lec 5";
			this->monday_lec5_btn->UseVisualStyleBackColor = false;
			this->monday_lec5_btn->Visible = false;
			this->monday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec5_btn_Click);
			//
			// monday_lec6_btn
			//
			this->monday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec6_btn->Location = System::Drawing::Point(519, 6);
			this->monday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec6_btn->Name = L"monday_lec6_btn";
			this->monday_lec6_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec6_btn->TabIndex = 22;
			this->monday_lec6_btn->Text = L"Mon Lec 6";
			this->monday_lec6_btn->UseVisualStyleBackColor = false;
			this->monday_lec6_btn->Visible = false;
			this->monday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec6_btn_Click);
			//
			// friday_lec1_btn
			//
			this->friday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec1_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec1_btn->Location = System::Drawing::Point(4, 273);
			this->friday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec1_btn->Name = L"friday_lec1_btn";
			this->friday_lec1_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec1_btn->TabIndex = 23;
			this->friday_lec1_btn->Text = L"Fri Lec 1";
			this->friday_lec1_btn->UseVisualStyleBackColor = true;
			this->friday_lec1_btn->Visible = false;
			this->friday_lec1_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec1_btn_Click);
			//
			// friday_lec2_btn
			//
			this->friday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec2_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec2_btn->Location = System::Drawing::Point(107, 273);
			this->friday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec2_btn->Name = L"friday_lec2_btn";
			this->friday_lec2_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec2_btn->TabIndex = 24;
			this->friday_lec2_btn->Text = L"Fri Lec 2";
			this->friday_lec2_btn->UseVisualStyleBackColor = true;
			this->friday_lec2_btn->Visible = false;
			this->friday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::friday_lec2_btn_Click);
			//
			// time_1_label
			//
			this->time_1_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_1_label->AutoSize = true;
			this->time_1_label->BackColor = System::Drawing::Color::Transparent;
			this->time_1_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_1_label->Location = System::Drawing::Point(4, 2);
			this->time_1_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_1_label->Name = L"time_1_label";
			this->time_1_label->Size = System::Drawing::Size(96, 40);
			this->time_1_label->TabIndex = 27;
			this->time_1_label->Text = L"Time Label 1";
			this->time_1_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_1_label->Visible = false;
			//
			// monday_lec7_btn
			//
			this->monday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec7_btn->Location = System::Drawing::Point(622, 6);
			this->monday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec7_btn->Name = L"monday_lec7_btn";
			this->monday_lec7_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec7_btn->TabIndex = 28;
			this->monday_lec7_btn->Text = L"Mon Lec 7";
			this->monday_lec7_btn->UseVisualStyleBackColor = false;
			this->monday_lec7_btn->Visible = false;
			this->monday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec7_btn_Click);
			//
			// monday_lec8_btn
			//
			this->monday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec8_btn->Location = System::Drawing::Point(725, 6);
			this->monday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec8_btn->Name = L"monday_lec8_btn";
			this->monday_lec8_btn->Size = System::Drawing::Size(95, 59);
			this->monday_lec8_btn->TabIndex = 29;
			this->monday_lec8_btn->Text = L"Mon Lec 8";
			this->monday_lec8_btn->UseVisualStyleBackColor = false;
			this->monday_lec8_btn->Visible = false;
			this->monday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec8_btn_Click);
			//
			// monday_lec9_btn
			//
			this->monday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->monday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->monday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->monday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->monday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->monday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->monday_lec9_btn->Location = System::Drawing::Point(828, 6);
			this->monday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->monday_lec9_btn->Name = L"monday_lec9_btn";
			this->monday_lec9_btn->Size = System::Drawing::Size(104, 59);
			this->monday_lec9_btn->TabIndex = 30;
			this->monday_lec9_btn->Text = L"Mon Lec 9";
			this->monday_lec9_btn->UseVisualStyleBackColor = false;
			this->monday_lec9_btn->Visible = false;
			this->monday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::monday_lec9_btn_Click);
			//
			// tableLayoutPanel3
			//
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->AutoSize = true;
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  20)));
			this->tableLayoutPanel3->Controls->Add(this->create_quick_meet_btn, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(20, 32);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1087, 60);
			this->tableLayoutPanel3->TabIndex = 77;
			//
			// tableLayoutPanel5
			//
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->AutoSize = true;
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->ColumnCount = 9;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  10.92077F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.1349F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11111F)));
			this->tableLayoutPanel5->Controls->Add(this->time_8_label, 7, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_7_label, 6, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_6_label, 5, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_5_label, 4, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_4_label, 3, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_3_label, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_2_label, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_9_label, 8, 0);
			this->tableLayoutPanel5->Controls->Add(this->time_1_label, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(170, 102);
			this->tableLayoutPanel5->MaximumSize = System::Drawing::Size(1980, 45);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(936, 45);
			this->tableLayoutPanel5->TabIndex = 78;
			//
			// time_8_label
			//
			this->time_8_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_8_label->AutoSize = true;
			this->time_8_label->BackColor = System::Drawing::Color::Transparent;
			this->time_8_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_8_label->Location = System::Drawing::Point(730, 2);
			this->time_8_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_8_label->Name = L"time_8_label";
			this->time_8_label->Size = System::Drawing::Size(96, 40);
			this->time_8_label->TabIndex = 37;
			this->time_8_label->Text = L"Time Label 8";
			this->time_8_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_8_label->Visible = false;
			//
			// time_7_label
			//
			this->time_7_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_7_label->AutoSize = true;
			this->time_7_label->BackColor = System::Drawing::Color::Transparent;
			this->time_7_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_7_label->Location = System::Drawing::Point(626, 2);
			this->time_7_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_7_label->Name = L"time_7_label";
			this->time_7_label->Size = System::Drawing::Size(96, 40);
			this->time_7_label->TabIndex = 36;
			this->time_7_label->Text = L"Time Label 7";
			this->time_7_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_7_label->Visible = false;
			//
			// time_6_label
			//
			this->time_6_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_6_label->AutoSize = true;
			this->time_6_label->BackColor = System::Drawing::Color::Transparent;
			this->time_6_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_6_label->Location = System::Drawing::Point(524, 2);
			this->time_6_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_6_label->Name = L"time_6_label";
			this->time_6_label->Size = System::Drawing::Size(94, 40);
			this->time_6_label->TabIndex = 35;
			this->time_6_label->Text = L"Time Label 6";
			this->time_6_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_6_label->Visible = false;
			//
			// time_5_label
			//
			this->time_5_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_5_label->AutoSize = true;
			this->time_5_label->BackColor = System::Drawing::Color::Transparent;
			this->time_5_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_5_label->Location = System::Drawing::Point(420, 2);
			this->time_5_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_5_label->Name = L"time_5_label";
			this->time_5_label->Size = System::Drawing::Size(96, 40);
			this->time_5_label->TabIndex = 34;
			this->time_5_label->Text = L"Time Label 5";
			this->time_5_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_5_label->Visible = false;
			//
			// time_4_label
			//
			this->time_4_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_4_label->AutoSize = true;
			this->time_4_label->BackColor = System::Drawing::Color::Transparent;
			this->time_4_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_4_label->Location = System::Drawing::Point(316, 2);
			this->time_4_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_4_label->Name = L"time_4_label";
			this->time_4_label->Size = System::Drawing::Size(96, 40);
			this->time_4_label->TabIndex = 33;
			this->time_4_label->Text = L"Time Label 4";
			this->time_4_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_4_label->Visible = false;
			//
			// time_3_label
			//
			this->time_3_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_3_label->AutoSize = true;
			this->time_3_label->BackColor = System::Drawing::Color::Transparent;
			this->time_3_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_3_label->Location = System::Drawing::Point(212, 2);
			this->time_3_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_3_label->Name = L"time_3_label";
			this->time_3_label->Size = System::Drawing::Size(96, 40);
			this->time_3_label->TabIndex = 32;
			this->time_3_label->Text = L"Time Label 3";
			this->time_3_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_3_label->Visible = false;
			//
			// time_2_label
			//
			this->time_2_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_2_label->AutoSize = true;
			this->time_2_label->BackColor = System::Drawing::Color::Transparent;
			this->time_2_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_2_label->Location = System::Drawing::Point(108, 2);
			this->time_2_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_2_label->Name = L"time_2_label";
			this->time_2_label->Size = System::Drawing::Size(96, 40);
			this->time_2_label->TabIndex = 31;
			this->time_2_label->Text = L"Time Label 2";
			this->time_2_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_2_label->Visible = false;
			//
			// time_9_label
			//
			this->time_9_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_9_label->AutoSize = true;
			this->time_9_label->BackColor = System::Drawing::Color::Transparent;
			this->time_9_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->time_9_label->Location = System::Drawing::Point(834, 2);
			this->time_9_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_9_label->Name = L"time_9_label";
			this->time_9_label->Size = System::Drawing::Size(98, 40);
			this->time_9_label->TabIndex = 30;
			this->time_9_label->Text = L"Time Label 9";
			this->time_9_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->time_9_label->Visible = false;
			//
			// label6
			//
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(212, -87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"09:00 : 10:00";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// time_label
			//
			this->time_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->time_label->AutoSize = true;
			this->time_label->BackColor = System::Drawing::Color::Transparent;
			this->time_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->time_label->Location = System::Drawing::Point(4, 10);
			this->time_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->time_label->Name = L"time_label";
			this->time_label->Size = System::Drawing::Size(123, 25);
			this->time_label->TabIndex = 16;
			this->time_label->Text = L"Time";
			//
			// tableLayoutPanel6
			//
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left));
			this->tableLayoutPanel6->AutoSize = true;
			this->tableLayoutPanel6->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel6->Controls->Add(this->time_label, 0, 0);
			this->tableLayoutPanel6->Location = System::Drawing::Point(20, 102);
			this->tableLayoutPanel6->MaximumSize = System::Drawing::Size(131, 45);
			this->tableLayoutPanel6->MinimumSize = System::Drawing::Size(131, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(131, 45);
			this->tableLayoutPanel6->TabIndex = 79;
			//
			// tableLayoutPanel1
			//
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  100)));
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(20, 156);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(131, 407);
			this->tableLayoutPanel1->TabIndex = 80;
			//
			// label5
			//
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 357);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 28);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Saturday";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// label1
			//
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 19);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 28);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Monday";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// label2
			//
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 28);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Tuesday";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// label3
			//
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 153);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 28);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Wednesday";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// label4
			//
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(4, 220);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 28);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Thursday";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// label8
			//
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 287);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 28);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Friday";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// tableLayoutPanel2
			//
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->ColumnCount = 9;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.11F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  11.12F)));
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec3_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec4_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec1_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec2_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec5_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec8_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec9_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec6_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->saturday_lec7_btn, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec1_btn, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec2_btn, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec3_btn, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec4_btn, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec5_btn, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec6_btn, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec1_btn, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec7_btn, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec8_btn, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->monday_lec9_btn, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec1_btn, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec1_btn, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec3_btn, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec4_btn, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec5_btn, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec6_btn, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec7_btn, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec8_btn, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec9_btn, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec2_btn, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->tuesday_lec2_btn, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec2_btn, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec3_btn, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec4_btn, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec5_btn, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec6_btn, 5, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec7_btn, 6, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec8_btn, 7, 2);
			this->tableLayoutPanel2->Controls->Add(this->wednesday_lec9_btn, 8, 2);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec1_btn, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec2_btn, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec3_btn, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec4_btn, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec5_btn, 4, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec6_btn, 5, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec7_btn, 6, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec8_btn, 7, 3);
			this->tableLayoutPanel2->Controls->Add(this->thursday_lec9_btn, 8, 3);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec3_btn, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec4_btn, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec5_btn, 4, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec6_btn, 5, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec7_btn, 6, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec8_btn, 7, 4);
			this->tableLayoutPanel2->Controls->Add(this->friday_lec9_btn, 8, 4);
			this->tableLayoutPanel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tableLayoutPanel2->Location = System::Drawing::Point(170, 156);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 6;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 17.56757F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.48649F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.48649F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.48649F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.48649F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.48649F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(936, 406);
			this->tableLayoutPanel2->TabIndex = 81;
			//
			// saturday_lec3_btn
			//
			this->saturday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec3_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec3_btn->Location = System::Drawing::Point(210, 341);
			this->saturday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec3_btn->Name = L"saturday_lec3_btn";
			this->saturday_lec3_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec3_btn->TabIndex = 73;
			this->saturday_lec3_btn->Text = L"Fri Lec 2";
			this->saturday_lec3_btn->UseVisualStyleBackColor = true;
			this->saturday_lec3_btn->Visible = false;
			//
			// saturday_lec4_btn
			//
			this->saturday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec4_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec4_btn->Location = System::Drawing::Point(313, 341);
			this->saturday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec4_btn->Name = L"saturday_lec4_btn";
			this->saturday_lec4_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec4_btn->TabIndex = 72;
			this->saturday_lec4_btn->Text = L"Fri Lec 2";
			this->saturday_lec4_btn->UseVisualStyleBackColor = true;
			this->saturday_lec4_btn->Visible = false;
			//
			// saturday_lec1_btn
			//
			this->saturday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec1_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec1_btn->Location = System::Drawing::Point(4, 341);
			this->saturday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec1_btn->Name = L"saturday_lec1_btn";
			this->saturday_lec1_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec1_btn->TabIndex = 71;
			this->saturday_lec1_btn->Text = L"Fri Lec 2";
			this->saturday_lec1_btn->UseVisualStyleBackColor = true;
			this->saturday_lec1_btn->Visible = false;
			//
			// saturday_lec2_btn
			//
			this->saturday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec2_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec2_btn->Location = System::Drawing::Point(107, 341);
			this->saturday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec2_btn->Name = L"saturday_lec2_btn";
			this->saturday_lec2_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec2_btn->TabIndex = 70;
			this->saturday_lec2_btn->Text = L"Fri Lec 2";
			this->saturday_lec2_btn->UseVisualStyleBackColor = true;
			this->saturday_lec2_btn->Visible = false;
			//
			// saturday_lec5_btn
			//
			this->saturday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec5_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec5_btn->Location = System::Drawing::Point(416, 341);
			this->saturday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec5_btn->Name = L"saturday_lec5_btn";
			this->saturday_lec5_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec5_btn->TabIndex = 69;
			this->saturday_lec5_btn->Text = L"Fri Lec 2";
			this->saturday_lec5_btn->UseVisualStyleBackColor = true;
			this->saturday_lec5_btn->Visible = false;
			//
			// saturday_lec8_btn
			//
			this->saturday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec8_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec8_btn->Location = System::Drawing::Point(725, 341);
			this->saturday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec8_btn->Name = L"saturday_lec8_btn";
			this->saturday_lec8_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec8_btn->TabIndex = 68;
			this->saturday_lec8_btn->Text = L"Fri Lec 2";
			this->saturday_lec8_btn->UseVisualStyleBackColor = true;
			this->saturday_lec8_btn->Visible = false;
			//
			// saturday_lec9_btn
			//
			this->saturday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec9_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec9_btn->Location = System::Drawing::Point(828, 341);
			this->saturday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec9_btn->Name = L"saturday_lec9_btn";
			this->saturday_lec9_btn->Size = System::Drawing::Size(104, 58);
			this->saturday_lec9_btn->TabIndex = 67;
			this->saturday_lec9_btn->Text = L"Fri Lec 2";
			this->saturday_lec9_btn->UseVisualStyleBackColor = true;
			this->saturday_lec9_btn->Visible = false;
			//
			// saturday_lec6_btn
			//
			this->saturday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec6_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec6_btn->Location = System::Drawing::Point(519, 341);
			this->saturday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec6_btn->Name = L"saturday_lec6_btn";
			this->saturday_lec6_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec6_btn->TabIndex = 62;
			this->saturday_lec6_btn->Text = L"Fri Lec 2";
			this->saturday_lec6_btn->UseVisualStyleBackColor = true;
			this->saturday_lec6_btn->Visible = false;
			//
			// saturday_lec7_btn
			//
			this->saturday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->saturday_lec7_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->saturday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->saturday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->saturday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saturday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->saturday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->saturday_lec7_btn->Location = System::Drawing::Point(622, 341);
			this->saturday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->saturday_lec7_btn->Name = L"saturday_lec7_btn";
			this->saturday_lec7_btn->Size = System::Drawing::Size(95, 58);
			this->saturday_lec7_btn->TabIndex = 61;
			this->saturday_lec7_btn->Text = L"Fri Lec 2";
			this->saturday_lec7_btn->UseVisualStyleBackColor = true;
			this->saturday_lec7_btn->Visible = false;
			//
			// wednesday_lec1_btn
			//
			this->wednesday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec1_btn->Location = System::Drawing::Point(4, 141);
			this->wednesday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec1_btn->Name = L"wednesday_lec1_btn";
			this->wednesday_lec1_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec1_btn->TabIndex = 11;
			this->wednesday_lec1_btn->Text = L"Wed Lec 1";
			this->wednesday_lec1_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec1_btn->Visible = false;
			//
			// tuesday_lec3_btn
			//
			this->tuesday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec3_btn->Location = System::Drawing::Point(210, 75);
			this->tuesday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec3_btn->Name = L"tuesday_lec3_btn";
			this->tuesday_lec3_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec3_btn->TabIndex = 37;
			this->tuesday_lec3_btn->Text = L"Tue Lec 1";
			this->tuesday_lec3_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec3_btn->Visible = false;
			this->tuesday_lec3_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec3_btn_Click);
			//
			// tuesday_lec4_btn
			//
			this->tuesday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec4_btn->Location = System::Drawing::Point(313, 75);
			this->tuesday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec4_btn->Name = L"tuesday_lec4_btn";
			this->tuesday_lec4_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec4_btn->TabIndex = 38;
			this->tuesday_lec4_btn->Text = L"Tue Lec 1";
			this->tuesday_lec4_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec4_btn->Visible = false;
			this->tuesday_lec4_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec4_btn_Click);
			//
			// tuesday_lec5_btn
			//
			this->tuesday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec5_btn->Location = System::Drawing::Point(416, 75);
			this->tuesday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec5_btn->Name = L"tuesday_lec5_btn";
			this->tuesday_lec5_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec5_btn->TabIndex = 35;
			this->tuesday_lec5_btn->Text = L"Tue Lec 1";
			this->tuesday_lec5_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec5_btn->Visible = false;
			this->tuesday_lec5_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec5_btn_Click);
			//
			// tuesday_lec6_btn
			//
			this->tuesday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec6_btn->Location = System::Drawing::Point(519, 75);
			this->tuesday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec6_btn->Name = L"tuesday_lec6_btn";
			this->tuesday_lec6_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec6_btn->TabIndex = 34;
			this->tuesday_lec6_btn->Text = L"Tue Lec 1";
			this->tuesday_lec6_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec6_btn->Visible = false;
			this->tuesday_lec6_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec6_btn_Click);
			//
			// tuesday_lec7_btn
			//
			this->tuesday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec7_btn->Location = System::Drawing::Point(622, 75);
			this->tuesday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec7_btn->Name = L"tuesday_lec7_btn";
			this->tuesday_lec7_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec7_btn->TabIndex = 33;
			this->tuesday_lec7_btn->Text = L"Tue Lec 1";
			this->tuesday_lec7_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec7_btn->Visible = false;
			this->tuesday_lec7_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec7_btn_Click);
			//
			// tuesday_lec8_btn
			//
			this->tuesday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec8_btn->Location = System::Drawing::Point(725, 75);
			this->tuesday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec8_btn->Name = L"tuesday_lec8_btn";
			this->tuesday_lec8_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec8_btn->TabIndex = 36;
			this->tuesday_lec8_btn->Text = L"Tue Lec 1";
			this->tuesday_lec8_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec8_btn->Visible = false;
			this->tuesday_lec8_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec8_btn_Click);
			//
			// tuesday_lec9_btn
			//
			this->tuesday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec9_btn->Location = System::Drawing::Point(828, 75);
			this->tuesday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec9_btn->Name = L"tuesday_lec9_btn";
			this->tuesday_lec9_btn->Size = System::Drawing::Size(104, 57);
			this->tuesday_lec9_btn->TabIndex = 32;
			this->tuesday_lec9_btn->Text = L"Tue Lec 1";
			this->tuesday_lec9_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec9_btn->Visible = false;
			this->tuesday_lec9_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec9_btn_Click);
			//
			// tuesday_lec2_btn
			//
			this->tuesday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tuesday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->tuesday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										  static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tuesday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->tuesday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tuesday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->tuesday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->tuesday_lec2_btn->Location = System::Drawing::Point(107, 75);
			this->tuesday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->tuesday_lec2_btn->Name = L"tuesday_lec2_btn";
			this->tuesday_lec2_btn->Size = System::Drawing::Size(95, 57);
			this->tuesday_lec2_btn->TabIndex = 39;
			this->tuesday_lec2_btn->Text = L"Tue Lec 1";
			this->tuesday_lec2_btn->UseVisualStyleBackColor = false;
			this->tuesday_lec2_btn->Visible = false;
			this->tuesday_lec2_btn->Click += gcnew System::EventHandler(this, &Main_Ui::tuesday_lec2_btn_Click);
			//
			// wednesday_lec2_btn
			//
			this->wednesday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec2_btn->Location = System::Drawing::Point(107, 141);
			this->wednesday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec2_btn->Name = L"wednesday_lec2_btn";
			this->wednesday_lec2_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec2_btn->TabIndex = 44;
			this->wednesday_lec2_btn->Text = L"Wed Lec 1";
			this->wednesday_lec2_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec2_btn->Visible = false;
			//
			// wednesday_lec3_btn
			//
			this->wednesday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec3_btn->Location = System::Drawing::Point(210, 141);
			this->wednesday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec3_btn->Name = L"wednesday_lec3_btn";
			this->wednesday_lec3_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec3_btn->TabIndex = 46;
			this->wednesday_lec3_btn->Text = L"Wed Lec 1";
			this->wednesday_lec3_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec3_btn->Visible = false;
			//
			// wednesday_lec4_btn
			//
			this->wednesday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec4_btn->Location = System::Drawing::Point(313, 141);
			this->wednesday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec4_btn->Name = L"wednesday_lec4_btn";
			this->wednesday_lec4_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec4_btn->TabIndex = 45;
			this->wednesday_lec4_btn->Text = L"Wed Lec 1";
			this->wednesday_lec4_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec4_btn->Visible = false;
			//
			// wednesday_lec5_btn
			//
			this->wednesday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec5_btn->Location = System::Drawing::Point(416, 141);
			this->wednesday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec5_btn->Name = L"wednesday_lec5_btn";
			this->wednesday_lec5_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec5_btn->TabIndex = 42;
			this->wednesday_lec5_btn->Text = L"Wed Lec 1";
			this->wednesday_lec5_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec5_btn->Visible = false;
			//
			// wednesday_lec6_btn
			//
			this->wednesday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec6_btn->Location = System::Drawing::Point(519, 141);
			this->wednesday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec6_btn->Name = L"wednesday_lec6_btn";
			this->wednesday_lec6_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec6_btn->TabIndex = 43;
			this->wednesday_lec6_btn->Text = L"Wed Lec 1";
			this->wednesday_lec6_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec6_btn->Visible = false;
			//
			// wednesday_lec7_btn
			//
			this->wednesday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec7_btn->Location = System::Drawing::Point(622, 141);
			this->wednesday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec7_btn->Name = L"wednesday_lec7_btn";
			this->wednesday_lec7_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec7_btn->TabIndex = 41;
			this->wednesday_lec7_btn->Text = L"Wed Lec 1";
			this->wednesday_lec7_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec7_btn->Visible = false;
			//
			// wednesday_lec8_btn
			//
			this->wednesday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec8_btn->Location = System::Drawing::Point(725, 141);
			this->wednesday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec8_btn->Name = L"wednesday_lec8_btn";
			this->wednesday_lec8_btn->Size = System::Drawing::Size(95, 58);
			this->wednesday_lec8_btn->TabIndex = 40;
			this->wednesday_lec8_btn->Text = L"Wed Lec 1";
			this->wednesday_lec8_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec8_btn->Visible = false;
			//
			// wednesday_lec9_btn
			//
			this->wednesday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->wednesday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->wednesday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																											static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->wednesday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->wednesday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wednesday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(0)));
			this->wednesday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->wednesday_lec9_btn->Location = System::Drawing::Point(828, 141);
			this->wednesday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->wednesday_lec9_btn->Name = L"wednesday_lec9_btn";
			this->wednesday_lec9_btn->Size = System::Drawing::Size(104, 58);
			this->wednesday_lec9_btn->TabIndex = 47;
			this->wednesday_lec9_btn->Text = L"Wed Lec 1";
			this->wednesday_lec9_btn->UseVisualStyleBackColor = false;
			this->wednesday_lec9_btn->Visible = false;
			//
			// thursday_lec1_btn
			//
			this->thursday_lec1_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec1_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec1_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec1_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec1_btn->Location = System::Drawing::Point(4, 207);
			this->thursday_lec1_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec1_btn->Name = L"thursday_lec1_btn";
			this->thursday_lec1_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec1_btn->TabIndex = 53;
			this->thursday_lec1_btn->Text = L"Wed Lec 1";
			this->thursday_lec1_btn->UseVisualStyleBackColor = false;
			this->thursday_lec1_btn->Visible = false;
			//
			// thursday_lec2_btn
			//
			this->thursday_lec2_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec2_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec2_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec2_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec2_btn->Location = System::Drawing::Point(107, 207);
			this->thursday_lec2_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec2_btn->Name = L"thursday_lec2_btn";
			this->thursday_lec2_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec2_btn->TabIndex = 56;
			this->thursday_lec2_btn->Text = L"Wed Lec 1";
			this->thursday_lec2_btn->UseVisualStyleBackColor = false;
			this->thursday_lec2_btn->Visible = false;
			//
			// thursday_lec3_btn
			//
			this->thursday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec3_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec3_btn->Location = System::Drawing::Point(210, 207);
			this->thursday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec3_btn->Name = L"thursday_lec3_btn";
			this->thursday_lec3_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec3_btn->TabIndex = 48;
			this->thursday_lec3_btn->Text = L"Wed Lec 1";
			this->thursday_lec3_btn->UseVisualStyleBackColor = false;
			this->thursday_lec3_btn->Visible = false;
			//
			// thursday_lec4_btn
			//
			this->thursday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec4_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec4_btn->Location = System::Drawing::Point(313, 207);
			this->thursday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec4_btn->Name = L"thursday_lec4_btn";
			this->thursday_lec4_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec4_btn->TabIndex = 50;
			this->thursday_lec4_btn->Text = L"Wed Lec 1";
			this->thursday_lec4_btn->UseVisualStyleBackColor = false;
			this->thursday_lec4_btn->Visible = false;
			//
			// thursday_lec5_btn
			//
			this->thursday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec5_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec5_btn->Location = System::Drawing::Point(416, 207);
			this->thursday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec5_btn->Name = L"thursday_lec5_btn";
			this->thursday_lec5_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec5_btn->TabIndex = 54;
			this->thursday_lec5_btn->Text = L"Wed Lec 1";
			this->thursday_lec5_btn->UseVisualStyleBackColor = false;
			this->thursday_lec5_btn->Visible = false;
			//
			// thursday_lec6_btn
			//
			this->thursday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec6_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec6_btn->Location = System::Drawing::Point(519, 207);
			this->thursday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec6_btn->Name = L"thursday_lec6_btn";
			this->thursday_lec6_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec6_btn->TabIndex = 52;
			this->thursday_lec6_btn->Text = L"Wed Lec 1";
			this->thursday_lec6_btn->UseVisualStyleBackColor = false;
			this->thursday_lec6_btn->Visible = false;
			//
			// thursday_lec7_btn
			//
			this->thursday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec7_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec7_btn->Location = System::Drawing::Point(622, 207);
			this->thursday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec7_btn->Name = L"thursday_lec7_btn";
			this->thursday_lec7_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec7_btn->TabIndex = 55;
			this->thursday_lec7_btn->Text = L"Wed Lec 1";
			this->thursday_lec7_btn->UseVisualStyleBackColor = false;
			this->thursday_lec7_btn->Visible = false;
			//
			// thursday_lec8_btn
			//
			this->thursday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec8_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec8_btn->Location = System::Drawing::Point(725, 207);
			this->thursday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec8_btn->Name = L"thursday_lec8_btn";
			this->thursday_lec8_btn->Size = System::Drawing::Size(95, 58);
			this->thursday_lec8_btn->TabIndex = 51;
			this->thursday_lec8_btn->Text = L"Wed Lec 1";
			this->thursday_lec8_btn->UseVisualStyleBackColor = false;
			this->thursday_lec8_btn->Visible = false;
			//
			// thursday_lec9_btn
			//
			this->thursday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->thursday_lec9_btn->BackColor = System::Drawing::Color::Transparent;
			this->thursday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->thursday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->thursday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thursday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		 static_cast<System::Byte>(0)));
			this->thursday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->thursday_lec9_btn->Location = System::Drawing::Point(828, 207);
			this->thursday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->thursday_lec9_btn->Name = L"thursday_lec9_btn";
			this->thursday_lec9_btn->Size = System::Drawing::Size(104, 58);
			this->thursday_lec9_btn->TabIndex = 49;
			this->thursday_lec9_btn->Text = L"Wed Lec 1";
			this->thursday_lec9_btn->UseVisualStyleBackColor = false;
			this->thursday_lec9_btn->Visible = false;
			//
			// friday_lec3_btn
			//
			this->friday_lec3_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec3_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec3_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec3_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec3_btn->Location = System::Drawing::Point(210, 273);
			this->friday_lec3_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec3_btn->Name = L"friday_lec3_btn";
			this->friday_lec3_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec3_btn->TabIndex = 57;
			this->friday_lec3_btn->Text = L"Fri Lec 2";
			this->friday_lec3_btn->UseVisualStyleBackColor = true;
			this->friday_lec3_btn->Visible = false;
			//
			// friday_lec4_btn
			//
			this->friday_lec4_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec4_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec4_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec4_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec4_btn->Location = System::Drawing::Point(313, 273);
			this->friday_lec4_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec4_btn->Name = L"friday_lec4_btn";
			this->friday_lec4_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec4_btn->TabIndex = 65;
			this->friday_lec4_btn->Text = L"Fri Lec 2";
			this->friday_lec4_btn->UseVisualStyleBackColor = true;
			this->friday_lec4_btn->Visible = false;
			//
			// friday_lec5_btn
			//
			this->friday_lec5_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec5_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec5_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec5_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec5_btn->Location = System::Drawing::Point(416, 273);
			this->friday_lec5_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec5_btn->Name = L"friday_lec5_btn";
			this->friday_lec5_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec5_btn->TabIndex = 58;
			this->friday_lec5_btn->Text = L"Fri Lec 2";
			this->friday_lec5_btn->UseVisualStyleBackColor = true;
			this->friday_lec5_btn->Visible = false;
			//
			// friday_lec6_btn
			//
			this->friday_lec6_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec6_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec6_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec6_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec6_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec6_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec6_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec6_btn->Location = System::Drawing::Point(519, 273);
			this->friday_lec6_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec6_btn->Name = L"friday_lec6_btn";
			this->friday_lec6_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec6_btn->TabIndex = 60;
			this->friday_lec6_btn->Text = L"Fri Lec 2";
			this->friday_lec6_btn->UseVisualStyleBackColor = true;
			this->friday_lec6_btn->Visible = false;
			//
			// friday_lec7_btn
			//
			this->friday_lec7_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec7_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec7_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec7_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec7_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec7_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec7_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec7_btn->Location = System::Drawing::Point(622, 273);
			this->friday_lec7_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec7_btn->Name = L"friday_lec7_btn";
			this->friday_lec7_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec7_btn->TabIndex = 63;
			this->friday_lec7_btn->Text = L"Fri Lec 2";
			this->friday_lec7_btn->UseVisualStyleBackColor = true;
			this->friday_lec7_btn->Visible = false;
			//
			// friday_lec8_btn
			//
			this->friday_lec8_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec8_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec8_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec8_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec8_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec8_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec8_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec8_btn->Location = System::Drawing::Point(725, 273);
			this->friday_lec8_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec8_btn->Name = L"friday_lec8_btn";
			this->friday_lec8_btn->Size = System::Drawing::Size(95, 58);
			this->friday_lec8_btn->TabIndex = 66;
			this->friday_lec8_btn->Text = L"Fri Lec 2";
			this->friday_lec8_btn->UseVisualStyleBackColor = true;
			this->friday_lec8_btn->Visible = false;
			//
			// friday_lec9_btn
			//
			this->friday_lec9_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->friday_lec9_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->friday_lec9_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
																										 static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->friday_lec9_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->friday_lec9_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->friday_lec9_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->friday_lec9_btn->ForeColor = System::Drawing::Color::White;
			this->friday_lec9_btn->Location = System::Drawing::Point(828, 273);
			this->friday_lec9_btn->Margin = System::Windows::Forms::Padding(4);
			this->friday_lec9_btn->Name = L"friday_lec9_btn";
			this->friday_lec9_btn->Size = System::Drawing::Size(104, 58);
			this->friday_lec9_btn->TabIndex = 64;
			this->friday_lec9_btn->Text = L"Fri Lec 2";
			this->friday_lec9_btn->UseVisualStyleBackColor = true;
			this->friday_lec9_btn->Visible = false;
			//
			// tableLayoutPanel4
			//
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel4->ColumnCount = 4;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  35)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  15)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  35)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  15)));
			this->tableLayoutPanel4->Controls->Add(this->textBox2, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->read_file_btn, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->choose_excel_file_btn, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox1, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(20, 576);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1087, 69);
			this->tableLayoutPanel4->TabIndex = 82;
			//
			// Main_Ui
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
															   static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1134, 657);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Main_Ui";
			this->Text = L"Main_Ui";
			this->Load += gcnew System::EventHandler(this, &Main_Ui::Main_Ui_Load);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		//Initializations
	private:
		System::String ^ global_file_path = L"";
		int monday_row;
		int monday_col;
		int string_row;
		int string_col;
		int links_table_start_row;
		int links_table_start_col;
		CellType cellType;
		System::String ^ system_string_up_arrow;
		System::String ^ monday_lec1_url, ^monday_lec2_url, ^monday_lec3_url, ^monday_lec4_url, ^monday_lec5_url, ^monday_lec6_url, ^monday_lec7_url, ^monday_lec8_url, ^monday_lec9_url;
		System::String ^ tuesday_lec1_url, ^tuesday_lec2_url, ^tuesday_lec3_url, ^tuesday_lec4_url, ^tuesday_lec5_url, ^tuesday_lec6_url, ^tuesday_lec7_url, ^tuesday_lec8_url, ^tuesday_lec9_url;
		System::String ^ wednesday_lec1_url, ^wednesday_lec2_url, ^wednesday_lec3_url, ^wednesday_lec4_url, ^wednesday_lec5_url, ^wednesday_lec6_url, ^wednesday_lec7_url, ^wednesday_lec8_url, ^wednesday_lec9_url;
		System::String ^ thursday_lec1_url, ^thursday_lec2_url, ^thursday_lec3_url, ^thursday_lec4_url, ^thursday_lec5_url, ^thursday_lec6_url, ^thursday_lec7_url, ^thursday_lec8_url, ^thursday_lec9_url;
		System::String ^ friday_lec1_url, ^friday_lec2_url, ^friday_lec3_url, ^friday_lec4_url, ^friday_lec5_url, ^friday_lec6_url, ^friday_lec7_url, ^friday_lec8_url, ^friday_lec9_url;
		System::String ^ saturday_lec1_url, ^saturday_lec2_url, ^saturday_lec3_url, ^saturday_lec4_url, ^saturday_lec5_url, ^saturday_lec6_url, ^saturday_lec7_url, ^saturday_lec8_url, ^saturday_lec9_url;

		System::String ^ links_modifier(const wchar_t *cell_string_data)
		{
			wstring cell_string_data_wide(cell_string_data);
			string cell_string_data_string(cell_string_data_wide.begin(), cell_string_data_wide.end());
			system_string_up_arrow = system_string_up_arrow + msclr::interop::marshal_as<System::String ^>(cell_string_data_string);
			return system_string_up_arrow;
		}

			void find_links_table(Sheet *sheet, wstring toFind)
		{
			for (int row = sheet->firstRow(); row <= sheet->lastRow(); ++row)
			{
				for (int col = sheet->firstCol(); col < sheet->lastCol(); ++col)
				{
					/*cin >> x;
            cout << row << col;*/
					CellType cellType = sheet->cellType(row, col);
					//std::wcout << "(" << row << ", " << col << ") = ";
					if (cellType == CELLTYPE_STRING)
					{
						//const wchar_t *s = sheet->readFormula(row, col);
						//std::wcout << (s ? s : L"null") << " [formula]";
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());

						// fstream my_file;
						// my_file.open("error_logs.txt", ios::out);
						// if (my_file)
						// {
						// 	my_file << *s + *(s + 1);
						// 	my_file.close();
						// }
						if (str1 == str2)
						{
							links_table_start_row = row;
							links_table_start_col = col;
							std::cout << "[row = " << row << ",column" << col << "]";
							return;
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
				}
			}
		}

		void find_strings_in_links_table(Sheet *sheet, wstring toFind)
		{
			for (int row = links_table_start_row; row <= sheet->lastRow(); ++row)
			{
				for (int col = links_table_start_col; col < sheet->lastCol(); ++col)
				{
					CellType cellType = sheet->cellType(row, col);
					if (cellType == CELLTYPE_STRING)
					{
						std::wstring str(toFind);
						const wchar_t *szStr = str.c_str();
						const wchar_t *s = sheet->readStr(row, col);

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());
						if (str1 == str2)
						{
							string_row = row;
							string_col = col;

							std::cout << "[row = " << row << ",column" << col << "]";
							return;
						}
					}
				}
			}
		}

		string wchar_t_ptr_to_string(const wchar_t *toConvert)
		{
			wstring wide_string(toConvert);
			string converted(wide_string.begin(), wide_string.end());
			return converted;
		}
		wstring wchar_t_ptr_to_wstring(const wchar_t *toConvert)
		{
			wstring converted_wide_string(toConvert);
			return converted_wide_string;
		}
		void button_modifier(System::Windows::Forms::Button ^ btn, const wchar_t *lec_str)
		{
			btn->Visible = true;
			btn->Text = "";
			btn->Text = btn->Text + msclr::interop::marshal_as<System::String ^>(wchar_t_ptr_to_string(lec_str));
		}
		void replaceAll(std::string &str, const std::string &from, const std::string &to)
		{
			if (from.empty())
				return;
			size_t start_pos = 0;
			while ((start_pos = str.find(from, start_pos)) != std::string::npos)
			{
				str.replace(start_pos, from.length(), to);
				start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
			}
		}

		void read_previous_file()
		{
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
			String ^ previous_file_path_2;
			previous_file_path_2 = msclr::interop::marshal_as<String ^>(previous_file_path_1);
			if (previous_file_path_1 != "")
			{
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
			//textBox3->Text = msclr::interop::marshal_as<System::String ^>(toFind);
			for (int row = links_table_start_row; row < sheet->lastRow(); ++row)
			{
				for (int col = links_table_start_col; col < sheet->lastCol(); ++col)
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

						wstring ws1(s);
						string str1(ws1.begin(), ws1.end());

						wstring ws2(szStr);
						string str2(ws2.begin(), ws2.end());

						// fstream my_file;
						// my_file.open("error_logs.txt", ios::out);
						// if (my_file)
						// {
						// 	my_file << *s + *(s + 1);
						// 	my_file.close();
						// }
						if (str1 == str2)
						{
							string_row = row;
							string_col = col;
							return;
							//std::cout<< "[row = " << row << ",column" << col << "]";
						}
						//std::wcout << (s ? s : L"null") << " [string]";
					}
					//std::wcout << std::endl;
				}
			}
		};

		void timeline_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//Timeline Label 1
			row = monday_row - 1;
			col = monday_col + 1;
			const wchar_t *time_label_1_string = sheet->readStr(row, col);
			wstring time_label_1(time_label_1_string);
			string time_label_1_str(time_label_1.begin(), time_label_1.end());

			time_1_label->Visible = true;
			time_1_label->Text = "";
			time_1_label->Text = time_1_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_1_str);

			//Timeline Label 2
			col = col + 1;
			const wchar_t *time_label_2_string = sheet->readStr(row, col);
			wstring time_label_2(time_label_2_string);
			string time_label_2_str(time_label_2.begin(), time_label_2.end());

			time_2_label->Visible = true;
			time_2_label->Text = "";
			time_2_label->Text = time_2_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_2_str);

			//Timeline Label 3
			col = col + 1;
			const wchar_t *time_label_3_string = sheet->readStr(row, col);
			wstring time_label_3(time_label_3_string);
			string time_label_3_str(time_label_3.begin(), time_label_3.end());

			time_3_label->Visible = true;
			time_3_label->Text = "";
			time_3_label->Text = time_3_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_3_str);

			//Timeline Label 4
			col = col + 1;
			const wchar_t *time_label_4_string = sheet->readStr(row, col);
			wstring time_label_4(time_label_4_string);
			string time_label_4_str(time_label_4.begin(), time_label_4.end());

			time_4_label->Visible = true;
			time_4_label->Text = "";
			time_4_label->Text = time_4_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_4_str);

			//Timeline Label 5
			col = col + 1;
			const wchar_t *time_label_5_string = sheet->readStr(row, col);
			wstring time_label_5(time_label_5_string);
			string time_label_5_str(time_label_5.begin(), time_label_5.end());

			time_5_label->Visible = true;
			time_5_label->Text = "";
			time_5_label->Text = time_5_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_5_str);

			//Timeline Label 6
			col = col + 1;
			const wchar_t *time_label_6_string = sheet->readStr(row, col);
			wstring time_label_6(time_label_6_string);
			string time_label_6_str(time_label_6.begin(), time_label_6.end());

			time_6_label->Visible = true;
			time_6_label->Text = "";
			time_6_label->Text = time_6_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_6_str);

			//Timeline Label 7
			col = col + 1;
			const wchar_t *time_label_7_string = sheet->readStr(row, col);
			wstring time_label_7(time_label_7_string);
			string time_label_7_str(time_label_7.begin(), time_label_7.end());

			time_7_label->Visible = true;
			time_7_label->Text = "";
			time_7_label->Text = time_7_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_7_str);

			//Timeline Label 8
			col = col + 1;
			const wchar_t *time_label_8_string = sheet->readStr(row, col);
			wstring time_label_8(time_label_8_string);
			string time_label_8_str(time_label_8.begin(), time_label_8.end());

			time_8_label->Visible = true;
			time_8_label->Text = "";
			time_8_label->Text = time_8_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_8_str);

			//Timeline Label 9
			col = col + 1;
			const wchar_t *time_label_9_string = sheet->readStr(row, col);
			wstring time_label_9(time_label_9_string);
			string time_label_9_str(time_label_9.begin(), time_label_9.end());

			time_9_label->Visible = true;
			time_9_label->Text = "";
			time_9_label->Text = time_9_label->Text + msclr::interop::marshal_as<System::String ^>(time_label_9_str);
		};

		void monday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			row = monday_row;
			//Monday Lec1
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);

			if (cellType != CELLTYPE_BLANK)
			{
				button_modifier(monday_lec1_btn, sheet->readStr(row, col));

				//find_string(sheet, sheet->readStr(row, col));
				find_strings_in_links_table(sheet, L"AAB DS");

				const wchar_t *monday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring monday_lec1_url_raw_2(monday_lec1_url_raw);
				string monday_lec1_url_raw_3(monday_lec1_url_raw_2.begin(), monday_lec1_url_raw_2.end());

				monday_lec1_url = monday_lec1_url + msclr::interop::marshal_as<System::String ^>(monday_lec1_url_raw_3);

				//std::string string_in_file = msclr::interop::marshal_as<std::string>(monday_lec1_url_raw_3);
				fstream my_file;
				my_file.open("log_file.txt", ios::out);
				if (my_file)
				{
					my_file << monday_lec1_url_raw_3 << "  " << string_row << "  " << string_col;
					my_file.close();
				}
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
				// find_string(sheet, lec);
				// const wchar_t *monday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec2_url_raw_2(monday_lec2_url_raw);
				// string monday_lec2_url_raw_3(monday_lec2_url_raw_2.begin(), monday_lec2_url_raw_2.end());
				// monday_lec2_url = monday_lec2_url + msclr::interop::marshal_as<System::String ^>(monday_lec2_url_raw_3);
			}
			//Monday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec3_btn->Visible = true;
				monday_lec3_btn->Text = "";
				monday_lec3_btn->Text = monday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec3_url_raw_2(monday_lec3_url_raw);
				// string monday_lec3_url_raw_3(monday_lec3_url_raw_2.begin(), monday_lec3_url_raw_2.end());
				// monday_lec3_url = monday_lec3_url + msclr::interop::marshal_as<System::String ^>(monday_lec3_url_raw_3);
			}
			//Monday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec4_btn->Visible = true;
				monday_lec4_btn->Text = "";
				monday_lec4_btn->Text = monday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec4_url_raw_2(monday_lec4_url_raw);
				// string monday_lec4_url_raw_3(monday_lec4_url_raw_2.begin(), monday_lec4_url_raw_2.end());
				// monday_lec4_url = monday_lec4_url + msclr::interop::marshal_as<System::String ^>(monday_lec4_url_raw_3);
			}
			//Monday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec5_btn->Visible = true;
				monday_lec5_btn->Text = "";
				monday_lec5_btn->Text = monday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec5_url_raw_2(monday_lec5_url_raw);
				// string monday_lec5_url_raw_3(monday_lec5_url_raw_2.begin(), monday_lec5_url_raw_2.end());
				// monday_lec5_url = monday_lec5_url + msclr::interop::marshal_as<System::String ^>(monday_lec5_url_raw_3);
			}
			//Monday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec6_btn->Visible = true;
				monday_lec6_btn->Text = "";
				monday_lec6_btn->Text = monday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec6_url_raw_2(monday_lec6_url_raw);
				// string monday_lec6_url_raw_3(monday_lec6_url_raw_2.begin(), monday_lec6_url_raw_2.end());
				// monday_lec6_url = monday_lec6_url + msclr::interop::marshal_as<System::String ^>(monday_lec6_url_raw_3);
			}
			//Monday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec7_btn->Visible = true;
				monday_lec7_btn->Text = "";
				monday_lec7_btn->Text = monday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec7_url_raw = sheet->readStr(17, 2);
				// wstring monday_lec7_url_raw_2(monday_lec7_url_raw);
				// string monday_lec7_url_raw_3(monday_lec7_url_raw_2.begin(), monday_lec7_url_raw_2.end());
				// monday_lec7_url = monday_lec7_url + msclr::interop::marshal_as<System::String ^>(monday_lec7_url_raw_3);
			}
			//Monday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec8_btn->Visible = true;
				monday_lec8_btn->Text = "";
				monday_lec8_btn->Text = monday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec8_url_raw_2(monday_lec8_url_raw);
				// string monday_lec8_url_raw_3(monday_lec8_url_raw_2.begin(), monday_lec8_url_raw_2.end());
				// monday_lec8_url = monday_lec8_url + msclr::interop::marshal_as<System::String ^>(monday_lec8_url_raw_3);
			}
			//Monday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string = sheet->readStr(row, col);
				wstring lec(lec_string);
				string lec_str(lec.begin(), lec.end());

				monday_lec9_btn->Visible = true;
				monday_lec9_btn->Text = "";
				monday_lec9_btn->Text = monday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str);
				// find_string(sheet, lec);
				// const wchar_t *monday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring monday_lec9_url_raw_2(monday_lec9_url_raw);
				// string monday_lec9_url_raw_3(monday_lec9_url_raw_2.begin(), monday_lec9_url_raw_2.end());
				// monday_lec9_url = monday_lec9_url + msclr::interop::marshal_as<System::String ^>(monday_lec9_url_raw_3);
			}
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
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{

				const wchar_t *lec_string2 = sheet->readStr(row, col);
				wstring lec2(lec_string2);
				string lec_str2(lec2.begin(), lec2.end());

				tuesday_lec2_btn->Visible = true;
				tuesday_lec2_btn->Text = "";
				tuesday_lec2_btn->Text = tuesday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str2);
				find_string(sheet, lec2);
				const wchar_t *tuesday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec2_url_raw_2(tuesday_lec2_url_raw);
				string tuesday_lec2_url_raw_3(tuesday_lec2_url_raw_2.begin(), tuesday_lec2_url_raw_2.end());
				tuesday_lec2_url = tuesday_lec2_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec2_url_raw_3);
			}

			//tuesday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string3 = sheet->readStr(row, col);
				wstring lec3(lec_string3);
				string lec_str3(lec3.begin(), lec3.end());

				tuesday_lec3_btn->Visible = true;
				tuesday_lec3_btn->Text = "";
				tuesday_lec3_btn->Text = tuesday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str3);
				find_string(sheet, lec3);
				const wchar_t *tuesday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec3_url_raw_2(tuesday_lec3_url_raw);
				string tuesday_lec3_url_raw_3(tuesday_lec3_url_raw_2.begin(), tuesday_lec3_url_raw_2.end());
				tuesday_lec3_url = tuesday_lec3_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec3_url_raw_3);
			}
			//tuesday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string4 = sheet->readStr(row, col);
				wstring lec4(lec_string4);
				string lec_str4(lec4.begin(), lec4.end());

				tuesday_lec4_btn->Visible = true;
				tuesday_lec4_btn->Text = "";
				tuesday_lec4_btn->Text = tuesday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str4);
				find_string(sheet, lec4);
				const wchar_t *tuesday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec4_url_raw_2(tuesday_lec4_url_raw);
				string tuesday_lec4_url_raw_3(tuesday_lec4_url_raw_2.begin(), tuesday_lec4_url_raw_2.end());
				tuesday_lec4_url = tuesday_lec4_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec4_url_raw_3);
			}
			//tuesday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string5 = sheet->readStr(row, col);
				wstring lec5(lec_string5);
				string lec_str5(lec5.begin(), lec5.end());

				tuesday_lec5_btn->Visible = true;
				tuesday_lec5_btn->Text = "";
				tuesday_lec5_btn->Text = tuesday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str5);
				find_string(sheet, lec5);
				const wchar_t *tuesday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec5_url_raw_2(tuesday_lec5_url_raw);
				string tuesday_lec5_url_raw_3(tuesday_lec5_url_raw_2.begin(), tuesday_lec5_url_raw_2.end());
				tuesday_lec5_url = tuesday_lec5_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec5_url_raw_3);
			}
			//tuesday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string6 = sheet->readStr(row, col);
				wstring lec6(lec_string6);
				string lec_str6(lec6.begin(), lec6.end());

				tuesday_lec6_btn->Visible = true;
				tuesday_lec6_btn->Text = "";
				tuesday_lec6_btn->Text = tuesday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str6);
				find_string(sheet, lec6);
				const wchar_t *tuesday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec6_url_raw_2(tuesday_lec6_url_raw);
				string tuesday_lec6_url_raw_3(tuesday_lec6_url_raw_2.begin(), tuesday_lec6_url_raw_2.end());
				tuesday_lec6_url = tuesday_lec6_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec6_url_raw_3);
			}
			//tuesday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string7 = sheet->readStr(row, col);
				wstring lec7(lec_string7);
				string lec_str7(lec7.begin(), lec7.end());

				tuesday_lec7_btn->Visible = true;
				tuesday_lec7_btn->Text = "";
				tuesday_lec7_btn->Text = tuesday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str7);
				find_string(sheet, lec7);
				const wchar_t *tuesday_lec7_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec7_url_raw_2(tuesday_lec7_url_raw);
				string tuesday_lec7_url_raw_3(tuesday_lec7_url_raw_2.begin(), tuesday_lec7_url_raw_2.end());
				tuesday_lec7_url = tuesday_lec7_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec7_url_raw_3);
			}
			//tuesday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string8 = sheet->readStr(row, col);
				wstring lec8(lec_string8);
				string lec_str8(lec8.begin(), lec8.end());

				tuesday_lec8_btn->Visible = true;
				tuesday_lec8_btn->Text = "";
				tuesday_lec8_btn->Text = tuesday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str8);
				find_string(sheet, lec8);
				const wchar_t *tuesday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec8_url_raw_2(tuesday_lec8_url_raw);
				string tuesday_lec8_url_raw_3(tuesday_lec8_url_raw_2.begin(), tuesday_lec8_url_raw_2.end());
				tuesday_lec8_url = tuesday_lec8_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec8_url_raw_3);
			}
			//tuesday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string9 = sheet->readStr(row, col);
				wstring lec9(lec_string9);
				string lec_str9(lec9.begin(), lec9.end());

				tuesday_lec9_btn->Visible = true;
				tuesday_lec9_btn->Text = "";
				tuesday_lec9_btn->Text = tuesday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str9);
				find_string(sheet, lec9);
				const wchar_t *tuesday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring tuesday_lec9_url_raw_2(tuesday_lec9_url_raw);
				string tuesday_lec9_url_raw_3(tuesday_lec9_url_raw_2.begin(), tuesday_lec9_url_raw_2.end());
				tuesday_lec9_url = tuesday_lec9_url + msclr::interop::marshal_as<System::String ^>(tuesday_lec9_url_raw_3);
			}
		}

		void wednesday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//wednesday Lec1
			row = monday_row + 2;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *wednesday_lec1_lec_string = sheet->readStr(row, col);
				wstring wednesday_lec1_lec(wednesday_lec1_lec_string);
				string wednesday_lec1_lec_str(wednesday_lec1_lec.begin(), wednesday_lec1_lec.end());

				wednesday_lec1_btn->Visible = true;
				wednesday_lec1_btn->Text = "";
				wednesday_lec1_btn->Text = wednesday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(wednesday_lec1_lec_str);
				find_string(sheet, wednesday_lec1_lec);
				const wchar_t *wednesday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec1_url_raw_2(wednesday_lec1_url_raw);
				string wednesday_lec1_url_raw_3(wednesday_lec1_url_raw_2.begin(), wednesday_lec1_url_raw_2.end());
				wednesday_lec1_url = wednesday_lec1_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec1_url_raw_3);
			}

			//wednesday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{

				const wchar_t *lec_string2 = sheet->readStr(row, col);
				wstring lec2(lec_string2);
				string lec_str2(lec2.begin(), lec2.end());

				wednesday_lec2_btn->Visible = true;
				wednesday_lec2_btn->Text = "";
				wednesday_lec2_btn->Text = wednesday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str2);
				find_string(sheet, lec2);
				const wchar_t *wednesday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec2_url_raw_2(wednesday_lec2_url_raw);
				string wednesday_lec2_url_raw_3(wednesday_lec2_url_raw_2.begin(), wednesday_lec2_url_raw_2.end());
				wednesday_lec2_url = wednesday_lec2_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec2_url_raw_3);
			}

			//wednesday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string3 = sheet->readStr(row, col);
				wstring lec3(lec_string3);
				string lec_str3(lec3.begin(), lec3.end());

				wednesday_lec3_btn->Visible = true;
				wednesday_lec3_btn->Text = "";
				wednesday_lec3_btn->Text = wednesday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str3);
				find_string(sheet, lec3);
				const wchar_t *wednesday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec3_url_raw_2(wednesday_lec3_url_raw);
				string wednesday_lec3_url_raw_3(wednesday_lec3_url_raw_2.begin(), wednesday_lec3_url_raw_2.end());
				wednesday_lec3_url = wednesday_lec3_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec3_url_raw_3);
			}
			//wednesday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string4 = sheet->readStr(row, col);
				wstring lec4(lec_string4);
				string lec_str4(lec4.begin(), lec4.end());

				wednesday_lec4_btn->Visible = true;
				wednesday_lec4_btn->Text = "";
				wednesday_lec4_btn->Text = wednesday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str4);
				find_string(sheet, lec4);
				const wchar_t *wednesday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec4_url_raw_2(wednesday_lec4_url_raw);
				string wednesday_lec4_url_raw_3(wednesday_lec4_url_raw_2.begin(), wednesday_lec4_url_raw_2.end());
				wednesday_lec4_url = wednesday_lec4_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec4_url_raw_3);
			}
			//wednesday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string5 = sheet->readStr(row, col);
				wstring lec5(lec_string5);
				string lec_str5(lec5.begin(), lec5.end());

				wednesday_lec5_btn->Visible = true;
				wednesday_lec5_btn->Text = "";
				wednesday_lec5_btn->Text = wednesday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str5);
				find_string(sheet, lec5);
				const wchar_t *wednesday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec5_url_raw_2(wednesday_lec5_url_raw);
				string wednesday_lec5_url_raw_3(wednesday_lec5_url_raw_2.begin(), wednesday_lec5_url_raw_2.end());
				wednesday_lec5_url = wednesday_lec5_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec5_url_raw_3);
			}
			//wednesday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string6 = sheet->readStr(row, col);
				wstring lec6(lec_string6);
				string lec_str6(lec6.begin(), lec6.end());

				wednesday_lec6_btn->Visible = true;
				wednesday_lec6_btn->Text = "";
				wednesday_lec6_btn->Text = wednesday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str6);
				find_string(sheet, lec6);
				const wchar_t *wednesday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec6_url_raw_2(wednesday_lec6_url_raw);
				string wednesday_lec6_url_raw_3(wednesday_lec6_url_raw_2.begin(), wednesday_lec6_url_raw_2.end());
				wednesday_lec6_url = wednesday_lec6_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec6_url_raw_3);
			}
			//wednesday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string7 = sheet->readStr(row, col);
				wstring lec7(lec_string7);
				string lec_str7(lec7.begin(), lec7.end());

				wednesday_lec7_btn->Visible = true;
				wednesday_lec7_btn->Text = "";
				wednesday_lec7_btn->Text = wednesday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str7);
				find_string(sheet, lec7);
				const wchar_t *wednesday_lec7_url_raw = sheet->readStr(string_row, string_col + 1);
				wstring wednesday_lec7_url_raw_2(wednesday_lec7_url_raw);
				string wednesday_lec7_url_raw_3(wednesday_lec7_url_raw_2.begin(), wednesday_lec7_url_raw_2.end());
				wednesday_lec7_url = wednesday_lec7_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec7_url_raw_3);
			}
			//wednesday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string8 = sheet->readStr(row, col);
				wstring lec8(lec_string8);
				string lec_str8(lec8.begin(), lec8.end());

				wednesday_lec8_btn->Visible = true;
				wednesday_lec8_btn->Text = "";
				wednesday_lec8_btn->Text = wednesday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str8);
				// find_string(sheet, lec8);
				// const wchar_t *wednesday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring wednesday_lec8_url_raw_2(wednesday_lec8_url_raw);
				// string wednesday_lec8_url_raw_3(wednesday_lec8_url_raw_2.begin(), wednesday_lec8_url_raw_2.end());
				// wednesday_lec8_url = wednesday_lec8_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec8_url_raw_3);
			}
			//wednesday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string9 = sheet->readStr(row, col);
				wstring lec9(lec_string9);
				string lec_str9(lec9.begin(), lec9.end());

				wednesday_lec9_btn->Visible = true;
				wednesday_lec9_btn->Text = "";
				wednesday_lec9_btn->Text = wednesday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str9);
				// find_string(sheet, lec9);
				// const wchar_t *wednesday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring wednesday_lec9_url_raw_2(wednesday_lec9_url_raw);
				// string wednesday_lec9_url_raw_3(wednesday_lec9_url_raw_2.begin(), wednesday_lec9_url_raw_2.end());
				// wednesday_lec9_url = wednesday_lec9_url + msclr::interop::marshal_as<System::String ^>(wednesday_lec9_url_raw_3);
			}
		}

		void thursday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//thursday Lec1
			row = monday_row + 3;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *thursday_lec1_lec_string = sheet->readStr(row, col);
				wstring thursday_lec1_lec(thursday_lec1_lec_string);
				string thursday_lec1_lec_str(thursday_lec1_lec.begin(), thursday_lec1_lec.end());

				thursday_lec1_btn->Visible = true;
				thursday_lec1_btn->Text = "";
				thursday_lec1_btn->Text = thursday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(thursday_lec1_lec_str);
				// find_string(sheet, thursday_lec1_lec);
				// const wchar_t *thursday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec1_url_raw_2(thursday_lec1_url_raw);
				// string thursday_lec1_url_raw_3(thursday_lec1_url_raw_2.begin(), thursday_lec1_url_raw_2.end());
				// thursday_lec1_url = thursday_lec1_url + msclr::interop::marshal_as<System::String ^>(thursday_lec1_url_raw_3);
			}

			//thursday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{

				const wchar_t *lec_string2 = sheet->readStr(row, col);
				wstring lec2(lec_string2);
				string lec_str2(lec2.begin(), lec2.end());

				thursday_lec2_btn->Visible = true;
				thursday_lec2_btn->Text = "";
				thursday_lec2_btn->Text = thursday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str2);
				// find_string(sheet, lec2);
				// const wchar_t *thursday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec2_url_raw_2(thursday_lec2_url_raw);
				// string thursday_lec2_url_raw_3(thursday_lec2_url_raw_2.begin(), thursday_lec2_url_raw_2.end());
				// thursday_lec2_url = thursday_lec2_url + msclr::interop::marshal_as<System::String ^>(thursday_lec2_url_raw_3);
			}

			//thursday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string3 = sheet->readStr(row, col);
				wstring lec3(lec_string3);
				string lec_str3(lec3.begin(), lec3.end());

				thursday_lec3_btn->Visible = true;
				thursday_lec3_btn->Text = "";
				thursday_lec3_btn->Text = thursday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str3);
				// find_string(sheet, lec3);
				// const wchar_t *thursday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec3_url_raw_2(thursday_lec3_url_raw);
				// string thursday_lec3_url_raw_3(thursday_lec3_url_raw_2.begin(), thursday_lec3_url_raw_2.end());
				// thursday_lec3_url = thursday_lec3_url + msclr::interop::marshal_as<System::String ^>(thursday_lec3_url_raw_3);
			}
			//thursday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string4 = sheet->readStr(row, col);
				wstring lec4(lec_string4);
				string lec_str4(lec4.begin(), lec4.end());

				thursday_lec4_btn->Visible = true;
				thursday_lec4_btn->Text = "";
				thursday_lec4_btn->Text = thursday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str4);
				// find_string(sheet, lec4);
				// const wchar_t *thursday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec4_url_raw_2(thursday_lec4_url_raw);
				// string thursday_lec4_url_raw_3(thursday_lec4_url_raw_2.begin(), thursday_lec4_url_raw_2.end());
				// thursday_lec4_url = thursday_lec4_url + msclr::interop::marshal_as<System::String ^>(thursday_lec4_url_raw_3);
			}
			//thursday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string5 = sheet->readStr(row, col);
				wstring lec5(lec_string5);
				string lec_str5(lec5.begin(), lec5.end());

				thursday_lec5_btn->Visible = true;
				thursday_lec5_btn->Text = "";
				thursday_lec5_btn->Text = thursday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str5);
				// find_string(sheet, lec5);
				// const wchar_t *thursday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec5_url_raw_2(thursday_lec5_url_raw);
				// string thursday_lec5_url_raw_3(thursday_lec5_url_raw_2.begin(), thursday_lec5_url_raw_2.end());
				// thursday_lec5_url = thursday_lec5_url + msclr::interop::marshal_as<System::String ^>(thursday_lec5_url_raw_3);
			}
			//thursday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string6 = sheet->readStr(row, col);
				wstring lec6(lec_string6);
				string lec_str6(lec6.begin(), lec6.end());

				thursday_lec6_btn->Visible = true;
				thursday_lec6_btn->Text = "";
				thursday_lec6_btn->Text = thursday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str6);
				// find_string(sheet, lec6);
				// const wchar_t *thursday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec6_url_raw_2(thursday_lec6_url_raw);
				// string thursday_lec6_url_raw_3(thursday_lec6_url_raw_2.begin(), thursday_lec6_url_raw_2.end());
				// thursday_lec6_url = thursday_lec6_url + msclr::interop::marshal_as<System::String ^>(thursday_lec6_url_raw_3);
			}
			//thursday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string7 = sheet->readStr(row, col);
				wstring lec7(lec_string7);
				string lec_str7(lec7.begin(), lec7.end());

				thursday_lec7_btn->Visible = true;
				thursday_lec7_btn->Text = "";
				thursday_lec7_btn->Text = thursday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str7);
				// find_string(sheet, lec7);
				// const wchar_t *thursday_lec7_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec7_url_raw_2(thursday_lec7_url_raw);
				// string thursday_lec7_url_raw_3(thursday_lec7_url_raw_2.begin(), thursday_lec7_url_raw_2.end());
				// thursday_lec7_url = thursday_lec7_url + msclr::interop::marshal_as<System::String ^>(thursday_lec7_url_raw_3);
			}
			//thursday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string8 = sheet->readStr(row, col);
				wstring lec8(lec_string8);
				string lec_str8(lec8.begin(), lec8.end());

				thursday_lec8_btn->Visible = true;
				thursday_lec8_btn->Text = "";
				thursday_lec8_btn->Text = thursday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str8);
				// find_string(sheet, lec8);
				// const wchar_t *thursday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec8_url_raw_2(thursday_lec8_url_raw);
				// string thursday_lec8_url_raw_3(thursday_lec8_url_raw_2.begin(), thursday_lec8_url_raw_2.end());
				// thursday_lec8_url = thursday_lec8_url + msclr::interop::marshal_as<System::String ^>(thursday_lec8_url_raw_3);
			}
			//thursday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string9 = sheet->readStr(row, col);
				wstring lec9(lec_string9);
				string lec_str9(lec9.begin(), lec9.end());

				thursday_lec9_btn->Visible = true;
				thursday_lec9_btn->Text = "";
				thursday_lec9_btn->Text = thursday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str9);
				// find_string(sheet, lec9);
				// const wchar_t *thursday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring thursday_lec9_url_raw_2(thursday_lec9_url_raw);
				// string thursday_lec9_url_raw_3(thursday_lec9_url_raw_2.begin(), thursday_lec9_url_raw_2.end());
				// thursday_lec9_url = thursday_lec9_url + msclr::interop::marshal_as<System::String ^>(thursday_lec9_url_raw_3);
			}
		}

		void friday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//friday Lec1
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
				// find_string(sheet, friday_lec1_lec);
				// const wchar_t *friday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec1_url_raw_2(friday_lec1_url_raw);
				// string friday_lec1_url_raw_3(friday_lec1_url_raw_2.begin(), friday_lec1_url_raw_2.end());
				// friday_lec1_url = friday_lec1_url + msclr::interop::marshal_as<System::String ^>(friday_lec1_url_raw_3);
			}

			//friday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{

				const wchar_t *lec_string2 = sheet->readStr(row, col);
				wstring lec2(lec_string2);
				string lec_str2(lec2.begin(), lec2.end());

				friday_lec2_btn->Visible = true;
				friday_lec2_btn->Text = "";
				friday_lec2_btn->Text = friday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str2);
				// find_string(sheet, lec2);
				// const wchar_t *friday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec2_url_raw_2(friday_lec2_url_raw);
				// string friday_lec2_url_raw_3(friday_lec2_url_raw_2.begin(), friday_lec2_url_raw_2.end());
				// friday_lec2_url = friday_lec2_url + msclr::interop::marshal_as<System::String ^>(friday_lec2_url_raw_3);
			}

			//friday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string3 = sheet->readStr(row, col);
				wstring lec3(lec_string3);
				string lec_str3(lec3.begin(), lec3.end());

				friday_lec3_btn->Visible = true;
				friday_lec3_btn->Text = "";
				friday_lec3_btn->Text = friday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str3);
				// find_string(sheet, lec3);
				// const wchar_t *friday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec3_url_raw_2(friday_lec3_url_raw);
				// string friday_lec3_url_raw_3(friday_lec3_url_raw_2.begin(), friday_lec3_url_raw_2.end());
				// friday_lec3_url = friday_lec3_url + msclr::interop::marshal_as<System::String ^>(friday_lec3_url_raw_3);
			}
			//friday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string4 = sheet->readStr(row, col);
				wstring lec4(lec_string4);
				string lec_str4(lec4.begin(), lec4.end());

				friday_lec4_btn->Visible = true;
				friday_lec4_btn->Text = "";
				friday_lec4_btn->Text = friday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str4);
				// find_string(sheet, lec4);
				// const wchar_t *friday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec4_url_raw_2(friday_lec4_url_raw);
				// string friday_lec4_url_raw_3(friday_lec4_url_raw_2.begin(), friday_lec4_url_raw_2.end());
				// friday_lec4_url = friday_lec4_url + msclr::interop::marshal_as<System::String ^>(friday_lec4_url_raw_3);
			}
			//friday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string5 = sheet->readStr(row, col);
				wstring lec5(lec_string5);
				string lec_str5(lec5.begin(), lec5.end());

				friday_lec5_btn->Visible = true;
				friday_lec5_btn->Text = "";
				friday_lec5_btn->Text = friday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str5);
				// find_string(sheet, lec5);
				// const wchar_t *friday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec5_url_raw_2(friday_lec5_url_raw);
				// string friday_lec5_url_raw_3(friday_lec5_url_raw_2.begin(), friday_lec5_url_raw_2.end());
				// friday_lec5_url = friday_lec5_url + msclr::interop::marshal_as<System::String ^>(friday_lec5_url_raw_3);
			}
			//friday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string6 = sheet->readStr(row, col);
				wstring lec6(lec_string6);
				string lec_str6(lec6.begin(), lec6.end());

				friday_lec6_btn->Visible = true;
				friday_lec6_btn->Text = "";
				friday_lec6_btn->Text = friday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str6);
				// find_string(sheet, lec6);
				// const wchar_t *friday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec6_url_raw_2(friday_lec6_url_raw);
				// string friday_lec6_url_raw_3(friday_lec6_url_raw_2.begin(), friday_lec6_url_raw_2.end());
				// friday_lec6_url = friday_lec6_url + msclr::interop::marshal_as<System::String ^>(friday_lec6_url_raw_3);
			}
			//friday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string7 = sheet->readStr(row, col);
				wstring lec7(lec_string7);
				string lec_str7(lec7.begin(), lec7.end());

				friday_lec7_btn->Visible = true;
				friday_lec7_btn->Text = "";
				friday_lec7_btn->Text = friday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str7);
				// find_string(sheet, lec7);
				// const wchar_t *friday_lec7_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec7_url_raw_2(friday_lec7_url_raw);
				// string friday_lec7_url_raw_3(friday_lec7_url_raw_2.begin(), friday_lec7_url_raw_2.end());
				// friday_lec7_url = friday_lec7_url + msclr::interop::marshal_as<System::String ^>(friday_lec7_url_raw_3);
			}
			//friday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string8 = sheet->readStr(row, col);
				wstring lec8(lec_string8);
				string lec_str8(lec8.begin(), lec8.end());

				friday_lec8_btn->Visible = true;
				friday_lec8_btn->Text = "";
				friday_lec8_btn->Text = friday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str8);
				// find_string(sheet, lec8);
				// const wchar_t *friday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec8_url_raw_2(friday_lec8_url_raw);
				// string friday_lec8_url_raw_3(friday_lec8_url_raw_2.begin(), friday_lec8_url_raw_2.end());
				// friday_lec8_url = friday_lec8_url + msclr::interop::marshal_as<System::String ^>(friday_lec8_url_raw_3);
			}
			//friday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string9 = sheet->readStr(row, col);
				wstring lec9(lec_string9);
				string lec_str9(lec9.begin(), lec9.end());

				friday_lec9_btn->Visible = true;
				friday_lec9_btn->Text = "";
				friday_lec9_btn->Text = friday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str9);
				// find_string(sheet, lec9);
				// const wchar_t *friday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring friday_lec9_url_raw_2(friday_lec9_url_raw);
				// string friday_lec9_url_raw_3(friday_lec9_url_raw_2.begin(), friday_lec9_url_raw_2.end());
				// friday_lec9_url = friday_lec9_url + msclr::interop::marshal_as<System::String ^>(friday_lec9_url_raw_3);
			}
		}

		void saturday_buttons_maker(Sheet *sheet)
		{
			int row, col;
			//saturday Lec1
			row = monday_row + 5;
			col = monday_col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *saturday_lec1_lec_string = sheet->readStr(row, col);
				wstring saturday_lec1_lec(saturday_lec1_lec_string);
				string saturday_lec1_lec_str(saturday_lec1_lec.begin(), saturday_lec1_lec.end());

				saturday_lec1_btn->Visible = true;
				saturday_lec1_btn->Text = "";
				saturday_lec1_btn->Text = saturday_lec1_btn->Text + msclr::interop::marshal_as<System::String ^>(saturday_lec1_lec_str);
				// find_string(sheet, saturday_lec1_lec);
				// const wchar_t *saturday_lec1_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec1_url_raw_2(saturday_lec1_url_raw);
				// string saturday_lec1_url_raw_3(saturday_lec1_url_raw_2.begin(), saturday_lec1_url_raw_2.end());
				// saturday_lec1_url = saturday_lec1_url + msclr::interop::marshal_as<System::String ^>(saturday_lec1_url_raw_3);
			}

			//saturday Lec2
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{

				const wchar_t *lec_string2 = sheet->readStr(row, col);
				wstring lec2(lec_string2);
				string lec_str2(lec2.begin(), lec2.end());

				saturday_lec2_btn->Visible = true;
				saturday_lec2_btn->Text = "";
				saturday_lec2_btn->Text = saturday_lec2_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str2);
				// find_string(sheet, lec2);
				// const wchar_t *saturday_lec2_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec2_url_raw_2(saturday_lec2_url_raw);
				// string saturday_lec2_url_raw_3(saturday_lec2_url_raw_2.begin(), saturday_lec2_url_raw_2.end());
				// saturday_lec2_url = saturday_lec2_url + msclr::interop::marshal_as<System::String ^>(saturday_lec2_url_raw_3);
			}

			//saturday Lec3
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string3 = sheet->readStr(row, col);
				wstring lec3(lec_string3);
				string lec_str3(lec3.begin(), lec3.end());

				saturday_lec3_btn->Visible = true;
				saturday_lec3_btn->Text = "";
				saturday_lec3_btn->Text = saturday_lec3_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str3);
				// find_string(sheet, lec3);
				// const wchar_t *saturday_lec3_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec3_url_raw_2(saturday_lec3_url_raw);
				// string saturday_lec3_url_raw_3(saturday_lec3_url_raw_2.begin(), saturday_lec3_url_raw_2.end());
				// saturday_lec3_url = saturday_lec3_url + msclr::interop::marshal_as<System::String ^>(saturday_lec3_url_raw_3);
			}
			//saturday Lec4
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string4 = sheet->readStr(row, col);
				wstring lec4(lec_string4);
				string lec_str4(lec4.begin(), lec4.end());

				saturday_lec4_btn->Visible = true;
				saturday_lec4_btn->Text = "";
				saturday_lec4_btn->Text = saturday_lec4_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str4);
				// find_string(sheet, lec4);
				// const wchar_t *saturday_lec4_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec4_url_raw_2(saturday_lec4_url_raw);
				// string saturday_lec4_url_raw_3(saturday_lec4_url_raw_2.begin(), saturday_lec4_url_raw_2.end());
				// saturday_lec4_url = saturday_lec4_url + msclr::interop::marshal_as<System::String ^>(saturday_lec4_url_raw_3);
			}
			//saturday Lec5
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string5 = sheet->readStr(row, col);
				wstring lec5(lec_string5);
				string lec_str5(lec5.begin(), lec5.end());

				saturday_lec5_btn->Visible = true;
				saturday_lec5_btn->Text = "";
				saturday_lec5_btn->Text = saturday_lec5_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str5);
				// find_string(sheet, lec5);
				// const wchar_t *saturday_lec5_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec5_url_raw_2(saturday_lec5_url_raw);
				// string saturday_lec5_url_raw_3(saturday_lec5_url_raw_2.begin(), saturday_lec5_url_raw_2.end());
				// saturday_lec5_url = saturday_lec5_url + msclr::interop::marshal_as<System::String ^>(saturday_lec5_url_raw_3);
			}
			//saturday Lec6
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string6 = sheet->readStr(row, col);
				wstring lec6(lec_string6);
				string lec_str6(lec6.begin(), lec6.end());

				saturday_lec6_btn->Visible = true;
				saturday_lec6_btn->Text = "";
				saturday_lec6_btn->Text = saturday_lec6_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str6);
				// find_string(sheet, lec6);
				// const wchar_t *saturday_lec6_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec6_url_raw_2(saturday_lec6_url_raw);
				// string saturday_lec6_url_raw_3(saturday_lec6_url_raw_2.begin(), saturday_lec6_url_raw_2.end());
				// saturday_lec6_url = saturday_lec6_url + msclr::interop::marshal_as<System::String ^>(saturday_lec6_url_raw_3);
			}
			//saturday Lec7
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string7 = sheet->readStr(row, col);
				wstring lec7(lec_string7);
				string lec_str7(lec7.begin(), lec7.end());

				saturday_lec7_btn->Visible = true;
				saturday_lec7_btn->Text = "";
				saturday_lec7_btn->Text = saturday_lec7_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str7);
				// find_string(sheet, lec7);
				// const wchar_t *saturday_lec7_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec7_url_raw_2(saturday_lec7_url_raw);
				// string saturday_lec7_url_raw_3(saturday_lec7_url_raw_2.begin(), saturday_lec7_url_raw_2.end());
				// saturday_lec7_url = saturday_lec7_url + msclr::interop::marshal_as<System::String ^>(saturday_lec7_url_raw_3);
			}
			//saturday Lec8
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string8 = sheet->readStr(row, col);
				wstring lec8(lec_string8);
				string lec_str8(lec8.begin(), lec8.end());

				saturday_lec8_btn->Visible = true;
				saturday_lec8_btn->Text = "";
				saturday_lec8_btn->Text = saturday_lec8_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str8);
				// find_string(sheet, lec8);
				// const wchar_t *saturday_lec8_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec8_url_raw_2(saturday_lec8_url_raw);
				// string saturday_lec8_url_raw_3(saturday_lec8_url_raw_2.begin(), saturday_lec8_url_raw_2.end());
				// saturday_lec8_url = saturday_lec8_url + msclr::interop::marshal_as<System::String ^>(saturday_lec8_url_raw_3);
			}
			//saturday Lec9
			col = col + 1;
			cellType = sheet->cellType(row, col);
			if (cellType != CELLTYPE_BLANK)
			{
				const wchar_t *lec_string9 = sheet->readStr(row, col);
				wstring lec9(lec_string9);
				string lec_str9(lec9.begin(), lec9.end());

				saturday_lec9_btn->Visible = true;
				saturday_lec9_btn->Text = "";
				saturday_lec9_btn->Text = saturday_lec9_btn->Text + msclr::interop::marshal_as<System::String ^>(lec_str9);
				// find_string(sheet, lec9);
				// const wchar_t *saturday_lec9_url_raw = sheet->readStr(string_row, string_col + 1);
				// wstring saturday_lec9_url_raw_2(saturday_lec9_url_raw);
				// string saturday_lec9_url_raw_3(saturday_lec9_url_raw_2.begin(), saturday_lec9_url_raw_2.end());
				// saturday_lec9_url = saturday_lec9_url + msclr::interop::marshal_as<System::String ^>(saturday_lec9_url_raw_3);
			}
		}

		void display_buttons(Sheet *sheet)
		{
			/*for (int row = monday_row; row < sheet->lastRow(); ++row)
			{
				for (int col = monday_col + 1; col < sheet->lastCol(); ++col)
				{*/
			timeline_buttons_maker(sheet);
			find_links_table(sheet, L"Links");
			monday_buttons_maker(sheet);
			//tuesday_buttons_maker(sheet);
			//wednesday_buttons_maker(sheet);
			//thursday_buttons_maker(sheet);
			//friday_buttons_maker(sheet);
			//saturday_buttons_maker(sheet);

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
			if (global_file_path != "")
			{
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
			else
			{
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
		System::Void monday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec3_url_secondary = "" + monday_lec3_url;
			std::string monday_lec3_final_url = msclr::interop::marshal_as<std::string>(monday_lec3_url_secondary);
			system(("start " + monday_lec3_final_url).c_str());
		}

	private:
		System::Void monday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec4_url_secondary = "" + monday_lec4_url;
			std::string monday_lec4_final_url = msclr::interop::marshal_as<std::string>(monday_lec4_url_secondary);
			system(("start " + monday_lec4_final_url).c_str());
		}

	private:
		System::Void monday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec5_url_secondary = "" + monday_lec5_url;
			std::string monday_lec5_final_url = msclr::interop::marshal_as<std::string>(monday_lec5_url_secondary);
			system(("start " + monday_lec5_final_url).c_str());
		}

	private:
		System::Void monday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec6_url_secondary = "" + monday_lec6_url;
			std::string monday_lec6_final_url = msclr::interop::marshal_as<std::string>(monday_lec6_url_secondary);
			system(("start " + monday_lec6_final_url).c_str());
		}

	private:
		System::Void monday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec7_url_secondary = "" + monday_lec7_url;
			std::string monday_lec7_final_url = msclr::interop::marshal_as<std::string>(monday_lec7_url_secondary);
			system(("start " + monday_lec7_final_url).c_str());
		}

	private:
		System::Void monday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec8_url_secondary = "" + monday_lec8_url;
			std::string monday_lec8_final_url = msclr::interop::marshal_as<std::string>(monday_lec8_url_secondary);
			system(("start " + monday_lec8_final_url).c_str());
		}

	private:
		System::Void monday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ monday_lec9_url_secondary = "" + monday_lec9_url;
			std::string monday_lec9_final_url = msclr::interop::marshal_as<std::string>(monday_lec9_url_secondary);
			system(("start " + monday_lec9_final_url).c_str());
		}

	private:
		System::Void tuesday_lec1_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec1_url_secondary = "" + tuesday_lec1_url;
			std::string tuesday_lec1_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec1_url_secondary);
			system(("start " + tuesday_lec1_final_url).c_str());
		}

	private:
		System::Void tuesday_lec2_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec2_url_secondary = "" + tuesday_lec2_url;
			std::string tuesday_lec2_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec2_url_secondary);
			system(("start " + tuesday_lec2_final_url).c_str());
		}

	private:
		System::Void tuesday_lec3_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec3_url_secondary = "" + tuesday_lec3_url;
			std::string tuesday_lec3_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec3_url_secondary);
			system(("start " + tuesday_lec3_final_url).c_str());
		}

	private:
		System::Void tuesday_lec4_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec4_url_secondary = "" + tuesday_lec4_url;
			std::string tuesday_lec4_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec4_url_secondary);
			system(("start " + tuesday_lec4_final_url).c_str());
		}

	private:
		System::Void tuesday_lec5_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec5_url_secondary = "" + tuesday_lec5_url;
			std::string tuesday_lec5_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec5_url_secondary);
			system(("start " + tuesday_lec5_final_url).c_str());
		}

	private:
		System::Void tuesday_lec6_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec6_url_secondary = "" + tuesday_lec6_url;
			std::string tuesday_lec6_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec6_url_secondary);
			system(("start " + tuesday_lec6_final_url).c_str());
		}

	private:
		System::Void tuesday_lec7_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec7_url_secondary = "" + tuesday_lec7_url;
			std::string tuesday_lec7_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec7_url_secondary);
			system(("start " + tuesday_lec7_final_url).c_str());
		}

	private:
		System::Void tuesday_lec8_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec8_url_secondary = "" + tuesday_lec8_url;
			std::string tuesday_lec8_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec8_url_secondary);
			system(("start " + tuesday_lec8_final_url).c_str());
		}

	private:
		System::Void tuesday_lec9_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			System::String ^ tuesday_lec9_url_secondary = "" + tuesday_lec9_url;
			std::string tuesday_lec9_final_url = msclr::interop::marshal_as<std::string>(tuesday_lec9_url_secondary);
			system(("start " + tuesday_lec9_final_url).c_str());
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

	private:
		System::Void Main_Ui_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}
	};
}
