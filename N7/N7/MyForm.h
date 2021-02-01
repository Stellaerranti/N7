#pragma once

#include <iostream>              
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <direct.h>
#include <clocale> 
#include "MyForm2.h"


namespace N7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace Runtime::InteropServices;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





	private: System::Windows::Forms::DataVisualization::Charting::Chart^  z1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  mh;



	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  openpmdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openrmgToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ a_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ ZY_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ XZ_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ YZ_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ MH_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ left_point;
			 System::Windows::Forms::DataVisualization::Charting::DataPoint^ gained_point;
			 System::Windows::Forms::DataVisualization::Charting::Series^ series1 =	 (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;













	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelNRM;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelARM;



	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::RadioButton^  LN;
	private: System::Windows::Forms::RadioButton^  V;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Button^  buttonMone;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  outputfilelabel;
	private: System::Windows::Forms::SaveFileDialog^  saveFileOutput;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  H;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Z;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AFZ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_AFz;
private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;

private: System::Windows::Forms::ToolStripMenuItem^  onOffRowsToolStripMenuItem;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  armchart;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
private: System::Windows::Forms::RadioButton^  NRMradio;
private: System::Windows::Forms::RadioButton^  ARMradio;
private: System::Windows::Forms::RadioButton^  AFZradio;



private: System::Windows::Forms::CheckBox^  NRMcheck;
private: System::Windows::Forms::CheckBox^  ARMcheck;
private: System::Windows::Forms::CheckBox^  AFZcheck;











	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->z1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->mh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->openpmdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openrmgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->onOffRowsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->H = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Z = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->M = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ARM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->M_ARM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AFZ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->M_AFz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonMone = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LN = (gcnew System::Windows::Forms::RadioButton());
			this->V = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelNRM = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelARM = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->outputfilelabel = (gcnew System::Windows::Forms::Label());
			this->armchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileOutput = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NRMradio = (gcnew System::Windows::Forms::RadioButton());
			this->ARMradio = (gcnew System::Windows::Forms::RadioButton());
			this->AFZradio = (gcnew System::Windows::Forms::RadioButton());
			this->NRMcheck = (gcnew System::Windows::Forms::CheckBox());
			this->ARMcheck = (gcnew System::Windows::Forms::CheckBox());
			this->AFZcheck = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->armchart))->BeginInit();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// z1
			// 
			chartArea6->Name = L"ChartArea1";
			chartArea7->Name = L"ChartArea2";
			chartArea7->Visible = false;
			this->z1->ChartAreas->Add(chartArea6);
			this->z1->ChartAreas->Add(chartArea7);
			this->z1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->z1->Location = System::Drawing::Point(6, 6);
			this->z1->Name = L"z1";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series8->LabelBorderWidth = 5;
			series8->LegendText = L"X,Y";
			series8->Name = L"XY";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series9->LabelBorderWidth = 5;
			series9->LegendText = L"Z.X";
			series9->Name = L"ZX";
			series10->ChartArea = L"ChartArea2";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series10->LegendText = L"X,Y";
			series10->Name = L"XY2";
			series11->ChartArea = L"ChartArea2";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series11->LegendText = L"Z,Y";
			series11->Name = L"ZY";
			this->z1->Series->Add(series8);
			this->z1->Series->Add(series9);
			this->z1->Series->Add(series10);
			this->z1->Series->Add(series11);
			this->z1->Size = System::Drawing::Size(449, 460);
			this->z1->TabIndex = 4;
			this->z1->Text = L"chart1";
			this->z1->Click += gcnew System::EventHandler(this, &MyForm::z1_Click);
			// 
			// mh
			// 
			chartArea8->AxisX->IsLabelAutoFit = false;
			chartArea8->AxisX->Minimum = 0;
			chartArea8->AxisX->Title = L"M";
			chartArea8->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			chartArea8->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.980198F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			chartArea8->Name = L"ChartArea1";
			this->mh->ChartAreas->Add(chartArea8);
			this->mh->Cursor = System::Windows::Forms::Cursors::Default;
			this->mh->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mh->Location = System::Drawing::Point(464, 6);
			this->mh->Name = L"mh";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series12->Legend = L"Legend1";
			series12->Name = L"MH";
			this->mh->Series->Add(series12);
			this->mh->Size = System::Drawing::Size(449, 460);
			this->mh->TabIndex = 6;
			this->mh->Text = L"chart3";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(17, 17);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1584, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openpmdToolStripMenuItem,
					this->openrmgToolStripMenuItem, this->saveAsToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(40, 22);
			this->toolStripDropDownButton1->Text = L"File";
			// 
			// openpmdToolStripMenuItem
			// 
			this->openpmdToolStripMenuItem->Name = L"openpmdToolStripMenuItem";
			this->openpmdToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->openpmdToolStripMenuItem->Text = L"Open .pmd";
			this->openpmdToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openpmdToolStripMenuItem_Click);
			// 
			// openrmgToolStripMenuItem
			// 
			this->openrmgToolStripMenuItem->Name = L"openrmgToolStripMenuItem";
			this->openrmgToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->openrmgToolStripMenuItem->Text = L"Open .rmg";
			this->openrmgToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openrmgToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->onOffRowsToolStripMenuItem });
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(67, 22);
			this->toolStripDropDownButton2->Text = L"Options";
			// 
			// onOffRowsToolStripMenuItem
			// 
			this->onOffRowsToolStripMenuItem->Name = L"onOffRowsToolStripMenuItem";
			this->onOffRowsToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->onOffRowsToolStripMenuItem->Text = L"On/Off rows";
			this->onOffRowsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::onOffRowsToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->H, this->X,
					this->Y, this->Z, this->M, this->ARM, this->M_ARM, this->AFZ, this->M_AFz
			});
			this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(6, 475);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->Size = System::Drawing::Size(907, 377);
			this->dataGridView1->TabIndex = 9;
			// 
			// H
			// 
			this->H->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->H->HeaderText = L"H(mT)";
			this->H->Name = L"H";
			this->H->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// X
			// 
			this->X->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->X->HeaderText = L"X(Am2)";
			this->X->Name = L"X";
			this->X->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Y
			// 
			this->Y->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Y->HeaderText = L"Y(Am2)";
			this->Y->Name = L"Y";
			this->Y->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Z
			// 
			this->Z->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Z->HeaderText = L"Z(Am2)";
			this->Z->Name = L"Z";
			this->Z->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// M
			// 
			this->M->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M->HeaderText = L"NRM moment(emu)";
			this->M->Name = L"M";
			this->M->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// ARM
			// 
			this->ARM->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->ARM->HeaderText = L"ARM";
			this->ARM->Name = L"ARM";
			this->ARM->ReadOnly = true;
			this->ARM->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ARM->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->ARM->Visible = false;
			// 
			// M_ARM
			// 
			this->M_ARM->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_ARM->HeaderText = L"ARM gained(emu)";
			this->M_ARM->Name = L"M_ARM";
			this->M_ARM->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// AFZ
			// 
			this->AFZ->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->AFZ->HeaderText = L"AFZ";
			this->AFZ->Name = L"AFZ";
			this->AFZ->ReadOnly = true;
			this->AFZ->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->AFZ->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->AFZ->Visible = false;
			// 
			// M_AFz
			// 
			this->M_AFz->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_AFz->HeaderText = L"ARM left(emu)";
			this->M_AFz->Name = L"M_AFz";
			this->M_AFz->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				29)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				29)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				29)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				13)));
			this->tableLayoutPanel1->Controls->Add(this->z1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->mh, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->armchart, 2, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 25);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1584, 858);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tableLayoutPanel7);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(3, 304);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(443, 70);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Changing ";
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->buttonMone, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(437, 51);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change projection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonMone
			// 
			this->buttonMone->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonMone->Location = System::Drawing::Point(223, 6);
			this->buttonMone->Name = L"buttonMone";
			this->buttonMone->Size = System::Drawing::Size(208, 39);
			this->buttonMone->TabIndex = 1;
			this->buttonMone->Text = L"Multiplying by -1";
			this->buttonMone->UseVisualStyleBackColor = true;
			this->buttonMone->Click += gcnew System::EventHandler(this, &MyForm::buttonMone_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBox2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->groupBox3, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(922, 475);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(449, 377);
			this->tableLayoutPanel2->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBox1->Controls->Add(this->tableLayoutPanel5);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(443, 107);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Removing rows";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->button3, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->button4, 1, 1);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(437, 88);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(5, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear table";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(5, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(222, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delete the selected row";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(222, 48);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Delete rows";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel6);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(3, 116);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(443, 182);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Removal of non-magnetized residue";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.74139F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.82326F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.43535F)));
			this->tableLayoutPanel6->Controls->Add(this->textBox2, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->button6, 2, 1);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel8, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel9, 0, 3);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 4;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(437, 163);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// textBox2
			// 
			this->tableLayoutPanel6->SetColumnSpan(this->textBox2, 3);
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(3, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(431, 20);
			this->textBox2->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(293, 27);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 67);
			this->button6->TabIndex = 6;
			this->button6->Text = L"remove unmagnetized residue";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel6->SetColumnSpan(this->tableLayoutPanel4, 2);
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->LN, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->V, 0, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 27);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(284, 67);
			this->tableLayoutPanel4->TabIndex = 7;
			// 
			// LN
			// 
			this->LN->AutoSize = true;
			this->LN->Checked = true;
			this->LN->Location = System::Drawing::Point(5, 5);
			this->LN->Name = L"LN";
			this->LN->Size = System::Drawing::Size(95, 19);
			this->LN->TabIndex = 0;
			this->LN->TabStop = true;
			this->LN->Text = L"Line number";
			this->LN->UseVisualStyleBackColor = true;
			// 
			// V
			// 
			this->V->AutoSize = true;
			this->V->Location = System::Drawing::Point(5, 37);
			this->V->Name = L"V";
			this->V->Size = System::Drawing::Size(56, 19);
			this->V->TabIndex = 1;
			this->V->Text = L"Value";
			this->V->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->labelNRM, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->labelARM, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->button7, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->button5, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->outputfilelabel, 1, 2);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel3->Location = System::Drawing::Point(1380, 6);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(198, 133);
			this->tableLayoutPanel3->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"NRM file";
			// 
			// labelNRM
			// 
			this->labelNRM->AutoSize = true;
			this->labelNRM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNRM->Location = System::Drawing::Point(103, 3);
			this->labelNRM->Name = L"labelNRM";
			this->labelNRM->Size = System::Drawing::Size(89, 29);
			this->labelNRM->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(6, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ARM file";
			// 
			// labelARM
			// 
			this->labelARM->AutoSize = true;
			this->labelARM->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelARM->Location = System::Drawing::Point(103, 35);
			this->labelARM->Name = L"labelARM";
			this->labelARM->Size = System::Drawing::Size(89, 29);
			this->labelARM->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Location = System::Drawing::Point(6, 102);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 25);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Create output file";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(103, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 25);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Plot";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(6, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Output file";
			// 
			// outputfilelabel
			// 
			this->outputfilelabel->AutoSize = true;
			this->outputfilelabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->outputfilelabel->Location = System::Drawing::Point(103, 67);
			this->outputfilelabel->Name = L"outputfilelabel";
			this->outputfilelabel->Size = System::Drawing::Size(89, 29);
			this->outputfilelabel->TabIndex = 7;
			// 
			// armchart
			// 
			chartArea9->Name = L"ChartArea1";
			chartArea10->Name = L"ChartArea2";
			chartArea10->Visible = false;
			this->armchart->ChartAreas->Add(chartArea9);
			this->armchart->ChartAreas->Add(chartArea10);
			this->armchart->Dock = System::Windows::Forms::DockStyle::Fill;
			this->armchart->Location = System::Drawing::Point(922, 6);
			this->armchart->Name = L"armchart";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series13->IsVisibleInLegend = false;
			series13->Name = L"gained";
			series14->ChartArea = L"ChartArea2";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series14->Name = L"left";
			this->armchart->Series->Add(series13);
			this->armchart->Series->Add(series14);
			this->armchart->Size = System::Drawing::Size(449, 460);
			this->armchart->TabIndex = 13;
			this->armchart->Text = L"chart1";
			this->armchart->Click += gcnew System::EventHandler(this, &MyForm::armchart_Click);
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel8->ColumnCount = 3;
			this->tableLayoutPanel6->SetColumnSpan(this->tableLayoutPanel8, 3);
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->Controls->Add(this->NRMradio, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->ARMradio, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->AFZradio, 2, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 100);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(431, 26);
			this->tableLayoutPanel8->TabIndex = 8;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel9->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel9->ColumnCount = 3;
			this->tableLayoutPanel6->SetColumnSpan(this->tableLayoutPanel9, 3);
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel9->Controls->Add(this->NRMcheck, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->ARMcheck, 1, 0);
			this->tableLayoutPanel9->Controls->Add(this->AFZcheck, 2, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(3, 132);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(431, 28);
			this->tableLayoutPanel9->TabIndex = 9;
			// 
			// NRMradio
			// 
			this->NRMradio->AutoSize = true;
			this->NRMradio->Checked = true;
			this->NRMradio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NRMradio->Location = System::Drawing::Point(6, 6);
			this->NRMradio->Name = L"NRMradio";
			this->NRMradio->Size = System::Drawing::Size(133, 14);
			this->NRMradio->TabIndex = 0;
			this->NRMradio->TabStop = true;
			this->NRMradio->Text = L"NRM";
			this->NRMradio->UseVisualStyleBackColor = true;
			// 
			// ARMradio
			// 
			this->ARMradio->AutoSize = true;
			this->ARMradio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ARMradio->Location = System::Drawing::Point(148, 6);
			this->ARMradio->Name = L"ARMradio";
			this->ARMradio->Size = System::Drawing::Size(133, 14);
			this->ARMradio->TabIndex = 1;
			this->ARMradio->Text = L"ARM gained";
			this->ARMradio->UseVisualStyleBackColor = true;
			// 
			// AFZradio
			// 
			this->AFZradio->AutoSize = true;
			this->AFZradio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AFZradio->Location = System::Drawing::Point(290, 6);
			this->AFZradio->Name = L"AFZradio";
			this->AFZradio->Size = System::Drawing::Size(135, 14);
			this->AFZradio->TabIndex = 2;
			this->AFZradio->Text = L"ARM left";
			this->AFZradio->UseVisualStyleBackColor = true;
			// 
			// NRMcheck
			// 
			this->NRMcheck->AutoSize = true;
			this->NRMcheck->Checked = true;
			this->NRMcheck->CheckState = System::Windows::Forms::CheckState::Checked;
			this->NRMcheck->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NRMcheck->Location = System::Drawing::Point(6, 6);
			this->NRMcheck->Name = L"NRMcheck";
			this->NRMcheck->Size = System::Drawing::Size(133, 16);
			this->NRMcheck->TabIndex = 0;
			this->NRMcheck->Text = L"NRM";
			this->NRMcheck->UseVisualStyleBackColor = true;
			// 
			// ARMcheck
			// 
			this->ARMcheck->AutoSize = true;
			this->ARMcheck->Checked = true;
			this->ARMcheck->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ARMcheck->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ARMcheck->Location = System::Drawing::Point(148, 6);
			this->ARMcheck->Name = L"ARMcheck";
			this->ARMcheck->Size = System::Drawing::Size(133, 16);
			this->ARMcheck->TabIndex = 1;
			this->ARMcheck->Text = L"ARM gained";
			this->ARMcheck->UseVisualStyleBackColor = true;
			// 
			// AFZcheck
			// 
			this->AFZcheck->AutoSize = true;
			this->AFZcheck->Checked = true;
			this->AFZcheck->CheckState = System::Windows::Forms::CheckState::Checked;
			this->AFZcheck->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AFZcheck->Location = System::Drawing::Point(290, 6);
			this->AFZcheck->Name = L"AFZcheck";
			this->AFZcheck->Size = System::Drawing::Size(135, 16);
			this->AFZcheck->TabIndex = 2;
			this->AFZcheck->Text = L"ARM left";
			this->AFZcheck->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 883);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"pseudo Tellier";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->armchart))->EndInit();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Что бы русская кодировка работала делаем это
	void MarshalString(String ^ s, string& os) 
	{	
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	double **data = (double**)malloc(1 * sizeof(double));
	double **dataRMG=(double**)malloc(1 * sizeof(double));
	int line_PMD=0, line_RMG=0;
	int flag_number = 0;
	String ^path = "";
	MyForm2 ^F2 = gcnew MyForm2;
	//MyForm^ F1 = gcnew MyForm;
	//Поиск максимума и минимума в массиве
	double max(double **data, int len, int ind, int begin)
	{
		double a = data[begin][ind];
		for (int i = begin; i < len; i++)
		{
			if (a < data[i][ind])
				a = data[i][ind];
		}
		return a;
	}
	double min(double **data, int len, int ind, int begin)
	{
		double a = data[begin][ind];
		for (int i = begin; i < len; i++)
		{
			if (a > data[i][ind])
				a = data[i][ind];
		}
		return a;
	}
	//максимум и минимум из 2 
	double maxvalue(double a, double b)
	{
		if (a > b)
			return a;
		else
			return b;
	}
	double minvalue(double a, double b)
	{
		if (a < b)
			return a;
		else
			return b;
	}

	//Графики

	void draw(double **data, int line_counter)
	{
		//a,b,c -вспомогательные перменые
		double from,maxx,maxy, axislenght;
		double to,a,b,c,d;

		z1->Series["XY"]->Points->Clear();
		z1->Series["ZX"]->Points->Clear();
		z1->Series["XY2"]->Points->Clear();
		z1->Series["ZY"]->Points->Clear();
		mh->Series["MH"]->Points->Clear();

		z1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisX->LabelStyle->Format = "{0:0.#E+0}";
		z1->ChartAreas[0]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
		z1->ChartAreas[0]->AxisY->Crossing = 0;
		z1->ChartAreas[0]->AxisX->Crossing = 0;

		//Первый график
		
		a = max(data, line_counter,3, 1);
		b= max(data, line_counter, 2, 1);
		c = min(data, line_counter, 1, 1);
		d = max(data, line_counter, 1, 1);

		maxx = maxvalue(fabs(a), fabs(b));
		maxy = maxvalue(fabs(c), fabs(d));

		axislenght = maxvalue(maxx,maxy);

		string am2 = " am2";
		string step = "Scale ";
		string yy = "Y,Y";
		string zx = "-Z,X";
		String^ dim = gcnew String(am2.c_str());
		String^ yyval = Convert::ToString(axislenght/10);
		if ((yyval->IndexOf("E") != (-1)) && (yyval->Length > 8))
		yyval = yyval->Remove(4, yyval->IndexOf("E") - 4);
		z1->ChartAreas[0]->AxisY->CustomLabels->Add(8*c/10, c, gcnew String(step.c_str()) +yyval+dim, 8*c/10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->AxisX->CustomLabels->Add(8*b/10,b,gcnew String(yy.c_str()), 8*b/10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->AxisY->CustomLabels->Add((9)*c/10, c,gcnew String(zx.c_str()), 9*c/10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->IsSameFontSizeForAllAxes = true;
		z1->ChartAreas[0]->AxisX->Interval = axislenght/10;
		z1->ChartAreas[0]->AxisY->Interval = axislenght/10;

		//второй график

		z1->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisX->LabelStyle->Format = "{0:0.#E+0}";
		z1->ChartAreas[1]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
		z1->ChartAreas[1]->AxisY->Crossing = 0;
		z1->ChartAreas[1]->AxisX->Crossing = 0;

		a = max(data, line_counter, 3, 1);
		b = max(data, line_counter, 1, 1);
		c = min(data, line_counter, 2, 1);
		d = max(data, line_counter, 2, 1);

		maxy= maxvalue(fabs(a), fabs(b));
		maxx = maxvalue(fabs(c), fabs(d));
		axislenght = maxvalue(maxx, maxy);

		string yz = "Y,Z";
		string xx = "-X,X";
			   
		z1->ChartAreas[1]->AxisY->CustomLabels->Add((-8) * maxy / 10, (-1)*maxy, gcnew String(step.c_str()) + Convert::ToString(axislenght / 10) + dim, (8) * maxy / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[1]->AxisX->CustomLabels->Add(8 * maxx / 10, maxx, gcnew String(yz.c_str()), 8 * maxx / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[1]->AxisY->CustomLabels->Add((-9)*maxy / 10, (-1)*maxy, gcnew String(xx.c_str()), 9 * maxy / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);

		z1->ChartAreas[1]->AxisX->Interval = axislenght / 10;
		z1->ChartAreas[1]->AxisY->Interval = axislenght / 10;
		
		//Третий график

		mh->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		//mh->ChartAreas[0]->AxisX->LabelStyle->Format = "{0:0.#E+0}";
		mh->ChartAreas[0]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
		mh->ChartAreas[0]->AxisY->Crossing = 0;
		mh->ChartAreas[0]->AxisX->Crossing = 0;

		from = max(data, line_counter, 4, 1);
		
		string name = " emu";
		string h = "H ";
		String^ s = gcnew String(name.c_str());
		String^ number = Convert::ToString(data[1][4]);
		if ((number->IndexOf("E") != (-1)) && (number->Length > 8))
		number = number->Remove(4, number->IndexOf("E")-4 );

		mh->ChartAreas[0]->AxisY->CustomLabels->Add(9 * from / 10, from, gcnew String(h.c_str()) + number + s, 9 * from / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);

		for (int i = 1; i < line_counter; i++)
		{
			a_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
			a_point->SetValueXY(data[i][2], data[i][1]);
			a_point->Label = i.ToString();
			a_point->LabelForeColor = System::Drawing::Color::Gray;
			z1->Series["XY"]->Points->Add(a_point);
					
			ZY_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
			ZY_point->SetValueXY((-1.)*data[i][3], data[i][1]);
			ZY_point->Label = i.ToString();
			ZY_point->LabelForeColor = System::Drawing::Color::Gray;
			z1->Series["ZX"]->Points->Add(ZY_point);
			
			XZ_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
			XZ_point->SetValueXY(data[i][2], data[i][1]);
			XZ_point->Label = i.ToString();
			XZ_point->LabelForeColor = System::Drawing::Color::Gray;
			z1->Series["XY2"]->Points->Add(XZ_point);

			YZ_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
			YZ_point->SetValueXY(data[i][2], (-1.)*data[i][3]);
			YZ_point->Label = i.ToString();
			YZ_point->LabelForeColor = System::Drawing::Color::Gray;
			z1->Series["ZY"]->Points->Add(YZ_point);

			MH_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
			MH_point->SetValueXY(data[i][0], data[i][4]);
			MH_point->Label = i.ToString();
			MH_point->LabelForeColor = System::Drawing::Color::Gray;
			mh->Series["MH"]->Points->Add(MH_point);
		}

	}
	void drawTable(double **data, int line_counter)
	{
		double from, maxx, maxy, axislenght;
		double to, a, b, c, d;
		
		armchart->Series["left"]->Points->Clear();
		armchart->Series["gained"]->Points->Clear();

		armchart->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		armchart->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		//armchart->ChartAreas[0]->AxisX->LabelStyle->Format = "{0:0.#E+0}";
		armchart->ChartAreas[0]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
		armchart->ChartAreas[0]->AxisY->Crossing = 0;
		armchart->ChartAreas[0]->AxisX->Crossing = 0;

		armchart->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
		armchart->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
		//armchart->ChartAreas[0]->AxisX->LabelStyle->Format = "{0:0.#E+0}";
		armchart->ChartAreas[1]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
		armchart->ChartAreas[1]->AxisY->Crossing = 0;
		armchart->ChartAreas[1]->AxisX->Crossing = 0;

		z1->Series["XY"]->Points->Clear();
		z1->Series["ZX"]->Points->Clear();
		z1->Series["XY2"]->Points->Clear();
		z1->Series["ZY"]->Points->Clear();

		
		mh->Series["MH"]->Points->Clear();
		
		z1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->Crossing = 0;
		z1->ChartAreas[0]->AxisX->Crossing = 0;

		//первый график
		a = max(data, line_counter, 3, 1);
		b = max(data, line_counter, 2, 1);
		c = min(data, line_counter, 1, 1);
		d = max(data, line_counter, 1, 1);

		maxx = maxvalue(fabs(a), fabs(b));
		maxy = maxvalue(fabs(c), fabs(d));

		axislenght = maxvalue(maxx, maxy);

		string am2 = " am2";
		string step = "Scale ";
		string yy = "Y,Y";
		string zx = "-Z,X";
		String^ dim = gcnew String(am2.c_str());
		String^ yyval = Convert::ToString(axislenght / 10);
		if ((yyval->IndexOf("E") != (-1)) && (yyval->Length > 8))
			yyval = yyval->Remove(4, yyval->IndexOf("E") - 4);
		z1->ChartAreas[0]->AxisY->CustomLabels->Clear();
		z1->ChartAreas[0]->AxisX->CustomLabels->Clear();
		z1->ChartAreas[0]->AxisY->CustomLabels->Add(8 * c / 10, c, gcnew String(step.c_str()) + yyval + dim, 8 * c / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->AxisX->CustomLabels->Add(8 * b / 10, b, gcnew String(yy.c_str()), 8 * b / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->AxisY->CustomLabels->Add((9)*c / 10, c, gcnew String(zx.c_str()), 9 * c / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[0]->IsSameFontSizeForAllAxes = true;
		z1->ChartAreas[0]->AxisX->Interval = axislenght / 10;
		z1->ChartAreas[0]->AxisY->Interval = axislenght / 10;

		//второй график

		z1->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->Crossing = 0;
		z1->ChartAreas[1]->AxisX->Crossing = 0;

		a = max(data, line_counter, 3, 1);
		b = max(data, line_counter, 1, 1);
		c = min(data, line_counter, 2, 1);
		d = max(data, line_counter, 2, 1);

		maxy = maxvalue(fabs(a), fabs(b));
		maxx = maxvalue(fabs(c), fabs(d));
		axislenght = maxvalue(maxx, maxy);

		string yz = "Y,Z";
		string xx = "-X,X";

		z1->ChartAreas[1]->AxisY->CustomLabels->Clear();
		z1->ChartAreas[1]->AxisX->CustomLabels->Clear();
		z1->ChartAreas[1]->AxisY->CustomLabels->Add((-8) * maxy / 10, (-1)*maxy, gcnew String(step.c_str()) + Convert::ToString(axislenght / 10) + dim, (8) * maxy / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[1]->AxisX->CustomLabels->Add(8 * maxx / 10, maxx, gcnew String(yz.c_str()), 8 * maxx / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);
		z1->ChartAreas[1]->AxisY->CustomLabels->Add((-9)*maxy / 10, (-1)*maxy, gcnew String(xx.c_str()), 9 * maxy / 10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);

		z1->ChartAreas[1]->AxisX->Interval = axislenght / 10;
		z1->ChartAreas[1]->AxisY->Interval = axislenght / 10;

		mh->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->Crossing = 0;
		mh->ChartAreas[0]->AxisX->Crossing = 0;
		
		from = max(data,line_counter,4,0);

		string name = " emu";
		string h = "H ";
		String^ s = gcnew String(name.c_str());
		String^ number = Convert::ToString(data[1][4]);
		
		if((number->IndexOf("E") != (-1))&&(number->Length >8))
			number = number->Remove(4, number->IndexOf("E") - 4);

		

		mh->ChartAreas[0]->AxisY->CustomLabels->Clear();
		mh->ChartAreas[0]->AxisY->CustomLabels->Add(9*from/10, from, gcnew String(h.c_str()) + number + s,9*from/10, System::Windows::Forms::DataVisualization::Charting::LabelMarkStyle::None);

			for (int i = 0; i < line_counter; i++)
			{
				a_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				a_point->SetValueXY(data[i][2], data[i][1]);
				a_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				a_point->LabelForeColor = System::Drawing::Color::Gray;
				z1->Series["XY"]->Points->Add(a_point);

				ZY_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				ZY_point->SetValueXY((-1.)*data[i][3], data[i][1]);
				ZY_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				ZY_point->LabelForeColor = System::Drawing::Color::Gray;
				z1->Series["ZX"]->Points->Add(ZY_point);

				XZ_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				XZ_point->SetValueXY(data[i][2], data[i][1]);
				XZ_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				XZ_point->LabelForeColor = System::Drawing::Color::Gray;
				z1->Series["XY2"]->Points->Add(XZ_point);

				YZ_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				YZ_point->SetValueXY(data[i][2], (-1.)*data[i][3]);
				YZ_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				YZ_point->LabelForeColor = System::Drawing::Color::Gray;
				z1->Series["ZY"]->Points->Add(YZ_point);

				MH_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				MH_point->SetValueXY(data[i][0], data[i][4]);
				MH_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				MH_point->LabelForeColor = System::Drawing::Color::Gray;
				mh->Series["MH"]->Points->Add(MH_point);

				left_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				left_point->SetValueXY(data[i][0], data[i][6]);
				left_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				left_point->LabelForeColor = System::Drawing::Color::Gray;
				armchart->Series["left"]->Points->Add(left_point);

				gained_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				gained_point->SetValueXY(data[i][0], data[i][8]);
				gained_point->Label = dataGridView1->Rows[i]->HeaderCell->Value->ToString();
				gained_point->LabelForeColor = System::Drawing::Color::Gray;
				armchart->Series["gained"]->Points->Add(gained_point);
			}
		
			
	}
	void drawARM(double **data,double **dataRMG, int nrmcounter,int rmgcounter)
	{
		if (nrmcounter != rmgcounter)
		{
			return;
		}
		else
		{
			armchart->Series["left"]->Points->Clear();
			armchart->Series["gained"]->Points->Clear();

			armchart->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
			armchart->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
			armchart->ChartAreas[0]->AxisX->LabelStyle->Format = "{0}";
			armchart->ChartAreas[0]->AxisX->Minimum = 0;
			armchart->ChartAreas[0]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
			armchart->ChartAreas[0]->AxisY->Crossing = 0;
			armchart->ChartAreas[0]->AxisX->Crossing = 0;

			armchart->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
			armchart->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
			armchart->ChartAreas[1]->AxisX->LabelStyle->Format = "{0}";
			armchart->ChartAreas[1]->AxisX->Minimum = 0;
			armchart->ChartAreas[1]->AxisY->LabelStyle->Format = "{0:0.#E+0}";
			armchart->ChartAreas[1]->AxisY->Crossing = 0;
			armchart->ChartAreas[1]->AxisX->Crossing = 0;

			for (int i = 1; i < nrmcounter+1; i++)
			{
				left_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				left_point->SetValueXY(data[i][0], dataRMG[i-1][0]);
				left_point->Label = i.ToString();
				left_point->LabelForeColor = System::Drawing::Color::Gray;
				armchart->Series["left"]->Points->Add(left_point);
				
				gained_point = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint());
				gained_point->SetValueXY(data[i][0], dataRMG[i - 1][1]);
				gained_point->Label = i.ToString();
				gained_point->LabelForeColor = System::Drawing::Color::Gray;
				armchart->Series["gained"]->Points->Add(gained_point);
			}
		}
	}
	//Открываем pmd
	private: System::Void openpmdToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		//setlocale(LC_ALL, "Russian");
		//Открываем файловый диалог
		//openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "NRM data|*.pmd";

		System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
		if (result != System::Windows::Forms::DialogResult::OK)
			return;
			
		System::String^ path_f = openFileDialog1->FileName;
		string s2 = "";
		MarshalString(path_f, s2);
		ifstream fin(s2);
		char fname[255];
		strcpy_s(fname, s2.c_str());
		char *pch = strrchr(fname, '\\');
		string filelabel = string(pch);
		filelabel.erase(0, 1);
		labelNRM->Text = gcnew System::String(filelabel.c_str());
		//ofstream fout("testout.txt");//удолить после тестирований
		int column_counter=0;
		int line_counter = 0;
		if (!fin.is_open()) {
			MessageBox::Show("Unable to open file");
		}
		else 
		{
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

			string str;
			int flag_count = 0;
			int flag = 0;
			while (getline(fin, str))
			{ // пока не достигнут конец файла класть очередную строку в переменную 
				//Крайне неприятно и криво переводим строку в массив
				if (((str[0] == 'M')||(str[0] == 'T'))&&(line_counter >= 1))//А это удоляем М и Т что бы удобнее перевести значение напряженности
				{
					str.erase(0,1);
				}

				char p[255];
				double *line;
				flag = 0;

				double *values = NULL;
				strcpy_s(p, str.c_str());		//Как иначе перевести string в char я без понятия	

				char *buf = strtok(p, " ,=");
				column_counter = 0;

				while (buf != NULL) //переводим все числа из символов-чисел в числа-числа
				{

					//cout << buf << endl;

					//if ((buf != NULL) && (isdigit(buf[0])))
					if ((buf != NULL))
					{

						double d2 = strtod(buf, NULL);
						
						if ((d2 != NULL) || (isdigit(buf[0])))						
						{
							column_counter++;
							line = (double*)realloc(values, column_counter * sizeof(double));
							if (line != NULL)
							{
								flag = 1;

								values = line;
								values[column_counter - 1] = d2;                      // добавить к массиву только что введённое число
							}
							else
							{
								/*free(values);                                   // удалить массив
								std::cout << "Error code 5. Wrong format!";
								exit(5);           */                               // завершить работу программы
							}
						}
					}
					buf = strtok(NULL, " ,=");

				}
				if (flag == 1)
				{
					line_counter++;
					if (line_counter == 1)
					{
						data[0] = (double*)malloc(5 * sizeof(double));
						for (int i = 0; i <4; i++)
						{
							data[line_counter - 1][i] = values[i];
							
						}
						data[line_counter - 1][4] = sqrt(data[line_counter - 1][3]* data[line_counter - 1][3]+ data[line_counter - 1][2]* data[line_counter - 1][2]+ data[line_counter - 1][1]* data[line_counter - 1][1])*1000;
						
					}
					else
					{
						data = (double**)realloc(data, line_counter * sizeof(double*));
						data[line_counter - 1] = (double*)malloc(5 * sizeof(double));
						for (int i = 0; i < 4; i++)
						{
							data[line_counter - 1][i] = values[i];
							
						}
						data[line_counter - 1][4] = sqrt(data[line_counter - 1][3] * data[line_counter - 1][3] + data[line_counter - 1][2] * data[line_counter - 1][2] + data[line_counter - 1][1] * data[line_counter - 1][1])*1000;
					}
				}
			}
			//Конец цикла 
			fin.close();
			draw(data, line_counter);
			fillGridPMD(data, line_counter);			
			this->Cursor = System::Windows::Forms::Cursors::Default;
			line_PMD = line_counter-1;
			drawARM(data, dataRMG, line_PMD, line_RMG);
		}

	}
	//открываем rmg
	private: System::Void openrmgToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//setlocale(LC_ALL, "Russian");
	//Открываем файловый диалог
		openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "ARM and AFz data|*.rmg";
		
		System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
		if (result != System::Windows::Forms::DialogResult::OK)
			return;
			
		System::String^ path_f = openFileDialog1->FileName;
		string s2 = "";
		MarshalString(path_f, s2);
		ifstream fin(s2);
		char fname[255];
		strcpy_s(fname, s2.c_str());
		char *pch = strrchr(fname, '\\');
		string filelabel = string(pch);
		filelabel.erase(0, 1);
		labelARM->Text = gcnew System::String(filelabel.c_str());
		//ofstream fout("testout.txt");//удолить после тестирований
		int column_counter = 0;
		int line_counter_RMG = 0;
		if (!fin.is_open()) {
			MessageBox::Show("Unable to open file");
		}
		else
		{
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

			string str;
			int flag_count = 0;
			int flagRMG = 0;
			int flagline = 0;
			int line_AFz = 0;
			string ARM = "ARM";
			string AFz = "AFz";
			string NRM = "NRM";

			while (getline(fin, str))
			{ // пока не достигнут конец файла класть очередную строку в переменную 
				//Крайне неприятно и криво переводим строку в массив

				char p[1024];
				double *line;
				
				
				double *values = NULL;
				strcpy_s(p, str.c_str());		//Как иначе перевести string в char я без понятия	
				string bi = str.substr(0, 3);
				
			
				column_counter = 0;

				if ((flagline >0)&&((bi==ARM)||(bi==AFz)||(bi == NRM)))
				{
					char *buf = strtok(p, " ,=");
					while ((column_counter < 5) && (buf != NULL)) //переводим все числа из символов-чисел в числа-числа
					{

						//cout << buf << endl;

						//if ((buf != NULL) && (isdigit(buf[0])))
						if ((buf != NULL))
						{

							double d2 = strtod(buf, NULL);

							if ((d2 != NULL) || (isdigit(buf[0])))
							{
								column_counter++;
								line = (double*)realloc(values, column_counter * sizeof(double));
								if (line != NULL)
								{
									flagRMG ++;
									values = line;
									values[column_counter - 1] = d2;                      // добавить к массиву только что введённое число
								}
								else
								{
									/*free(values);                                   // удалить массив
									std::cout << "Error code 5. Wrong format!";
									exit(5);           */                               // завершить работу программы
								}
							}
						}

						buf = strtok(NULL, " ,=");

					}

					

					
					if (flagRMG == 1)
					{
						line_counter_RMG++;
						dataRMG[0] = (double*)malloc(2 * sizeof(double));
						dataRMG[line_counter_RMG - 1][0] = 0;
						line_counter_RMG++;
						dataRMG = (double**)realloc(dataRMG, (line_counter_RMG + 1) * sizeof(double*));
						dataRMG[line_counter_RMG - 1] = (double*)malloc(2 * sizeof(double));
						dataRMG[line_counter_RMG - 1][0] = values[4];
					}
					else
					{
						if ((bi == ARM)||(bi ==NRM))
						{
							line_counter_RMG++;
							dataRMG = (double**)realloc(dataRMG, (line_counter_RMG +1)* sizeof(double*));
							dataRMG[line_counter_RMG - 1] = (double*)malloc(2 * sizeof(double));
							dataRMG[line_counter_RMG - 1][0] = values[4];
						}
						if (bi == AFz)
						{
							if (line_AFz == 0)
							{
								dataRMG[line_AFz][1] = dataRMG[line_counter_RMG - 1][0];
								line_AFz++;
								dataRMG[line_AFz][1] = values[4];
								line_AFz++;
							}
							else
							{
								
								dataRMG[line_AFz][1] = values[4];
								line_AFz++;
								
							}

						}


					}

				}

					flagline++;
			}
			//Конец цикла 
			fin.close();
			
			fillGridRMG(dataRMG, line_counter_RMG);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			line_RMG = line_counter_RMG;

			drawARM(data,dataRMG,  line_PMD, line_RMG);
		}


	}
	//Очистка при закрытии
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
{
	free(data);
	free(dataRMG);
	
}
//заполняем то что получили в PMD файле
 void fillGridPMD(double **data, int line_count)

 {

	 dataGridView1->Columns[5]->DefaultCellStyle->BackColor = Color::Yellow;
	 dataGridView1->Columns[7]->DefaultCellStyle->BackColor = Color::Yellow;
	 
		 while (line_count > dataGridView1->RowCount)
		 {
			 DataGridViewRow ^r = gcnew DataGridViewRow();
			 r->HeaderCell->Value = (dataGridView1->RowCount).ToString();
			 //r->HeaderCell->Value = (char)i;
			 r->CreateCells(dataGridView1);
			 //cli::array <String ^> ^Values = gcnew cli::array <String ^>(dataGridView1->ColumnCount);
			 dataGridView1->Rows->Add(r);
			 dataGridView1->RowHeadersWidth = 50;
			 //int rowIndex = dataGridView1->Rows->Add();				 
			 
			 

		 }

	 for(int i =1; i< line_count; i++)
	 {
		 dataGridView1->Rows[i - 1]->Cells[0]->Value = (data[i][0]).ToString();
		 dataGridView1->Rows[i - 1]->Cells[1]->Value = (data[i][1]).ToString("E3");
		 dataGridView1->Rows[i - 1]->Cells[2]->Value = (data[i][2]).ToString("E3");
		 dataGridView1->Rows[i - 1]->Cells[3]->Value = (data[i][3]).ToString("E3");
		 dataGridView1->Rows[i - 1]->Cells[4]->Value = (data[i][4]).ToString("E3");
	 }

 }
 //заполняем то что получили в RMG файле
 void fillGridRMG(double **dataRMG, int line_count)

 {
	 dataGridView1->Columns[5]->DefaultCellStyle->BackColor = Color::Yellow;
	 dataGridView1->Columns[7]->DefaultCellStyle->BackColor = Color::Yellow;
	 

	 while (line_count > (dataGridView1->RowCount - 1))
	 {
		 DataGridViewRow ^r = gcnew DataGridViewRow();
		 r->HeaderCell->Value = (dataGridView1->RowCount).ToString();
		 //r->HeaderCell->Value = (char)i;
		 r->CreateCells(dataGridView1);
		 //cli::array <String ^> ^Values = gcnew cli::array <String ^>(dataGridView1->ColumnCount);
		 dataGridView1->Rows->Add(r);
		 dataGridView1->RowHeadersWidth = 50;
		 //int rowIndex = dataGridView1->Rows->Add();		 
	 }

	 for (int i = 0; i < line_count; i++)
	 {
		// if

		 dataGridView1->Rows[i]->Cells[6]->Value = (dataRMG[i][0]).ToString("E3");
		 dataGridView1->Rows[i]->Cells[8]->Value = (dataRMG[i][1]).ToString("E3");

	 }

 }

 //изменение типа графика
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{

	if(z1->ChartAreas[0]->Visible)
	{
		z1->ChartAreas[0]->Visible = false;
		z1->ChartAreas[1]->Visible = true;
	}
	else
	{
		z1->ChartAreas[0]->Visible = true;
		z1->ChartAreas[1]->Visible = false;
		
	}
	
	
	
}

//удоление строк
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	
	button2->Enabled = false;
	if (dataGridView1->SelectedRows->Count > 0) {
		for (int i = 0; i < dataGridView1->SelectedRows->Count; i++) {
			int index = dataGridView1->SelectedRows[i]->Index;
			try {dataGridView1->Rows->RemoveAt(index);}
			catch (...) { MessageBox::Show("Unable to delete this row "); }
		}
		double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 
		
		
		for (int count = 0; count < dataGridView1->RowCount; count++)
			comp_ore[count] = new double[dataGridView1->ColumnCount];
		
		
		
		for (int i = 0; i < dataGridView1->RowCount; i++) 
		{
			
			
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				String ^ st2;
				st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
				if (st2)
				{
					double::TryParse(st2, comp_ore[i][j]);
				}
				
				
				
			}
			dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
			
		}
		drawTable(comp_ore, dataGridView1->RowCount-1);
		//delete[] comp_ore;
		//free(comp_ore);
	}
	else {
		int index;

		try {
			
			index = dataGridView1->CurrentCell->RowIndex; }
		catch (...) {}
		if (index != -1) {
			try { 
				dataGridView1->Rows->RemoveAt(index); 
			
			
			}
			catch (...) { MessageBox::Show("Unable to delete this row "); }
			
			double **comp_ore = new double*[dataGridView1->RowCount ]; // создание динамического массива 
			
			for (int count = 0; count < dataGridView1->RowCount; count++)
				comp_ore[count] = new double[dataGridView1->ColumnCount];
			
			
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					String ^ st2;
					st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
					if (st2)
					{
						double::TryParse(st2, comp_ore[i][j]);
					}
					
				}
				dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
			}
			drawTable(comp_ore, dataGridView1->RowCount-1);
			//delete[] comp_ore;
			//free(comp_ore);

		}
		else	MessageBox::Show("Select the rows/cell to delete");
	}
	
	button2->Enabled = true;

}
 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	dataGridView1->Rows->Clear();
	
}
//удоление строк, номера которых введены в строке
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		System::String ^t = textBox1->Text;
		string s = "";
		MarshalString(t, s);

		string buf;
		string subbuf1, subbuf2;
		
		int a, b;
		
		int k = 0;
		int len = s.length();

		int counter = 0;
		while (k < len)
		{
			if (s.find(",") != -1)
			{
				buf = s.substr(0, s.find(","));
				if (buf.find("-") != -1)
				{
					subbuf1 = buf.substr(0, buf.find("-"));
					subbuf2 = buf.substr(buf.find("-") + 1, buf.length());
					a = stoi(subbuf1);
					b = stoi(subbuf2);
					
					try {
					while (a <= b)
					{
				
						dataGridView1->Rows->RemoveAt(a-1- counter);
						counter++;
						a++;
					}
					}
					catch (...) { MessageBox::Show("Unable to delete this row "); }
					s = s.substr(s.find(",") + 1, s.length());
					k = k + buf.length() + 1;
				}
				else
				{
					a = stoi(buf);
					s = s.substr(s.find(",") + 1, s.length());
					k = k + buf.length() + 1;
					
					try { dataGridView1->Rows->RemoveAt(a-1- counter); }
					catch (...) { MessageBox::Show("Unable to delete this row "); }
					counter++;
				}

			}
			else
			{
				if (s.find("-") != -1)
				{
					subbuf1 = s.substr(0, s.find("-"));
					subbuf2 = s.substr(s.find("-") + 1, s.length());
					a = stoi(subbuf1);
					b = stoi(subbuf2);
					try {
						
					while (a <= b)
					{
						 dataGridView1->Rows->RemoveAt(a-1- counter);
						 counter++;
						a++;
					}
					}
					catch (...) { MessageBox::Show("Unable to delete this row "); }
					k = k + s.length() + 1;
				}
				else
				{
					a = stoi(s);
					try { dataGridView1->Rows->RemoveAt(a-1- counter); }
					catch (...) { MessageBox::Show("Unable to delete this row "); }
					counter++;
					k = k + s.length() + 1;
					
				}

			}



		}

		double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 


		for (int count = 0; count < dataGridView1->RowCount; count++)
			comp_ore[count] = new double[dataGridView1->ColumnCount];



		for (int i = 0; i < dataGridView1->RowCount; i++)
		{


			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				String ^ st2;
				st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
				if (st2)
				{
					double::TryParse(st2, comp_ore[i][j]);
				}



			}
			dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();

		}
		drawTable(comp_ore, dataGridView1->RowCount - 1);

	}
	catch (const std::exception&)
	{
		MessageBox::Show("Can't delete this rows");
	}
	
}

		 //изменение графика по нажатию по нему
private: System::Void z1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (z1->ChartAreas[0]->Visible)
	{
		z1->ChartAreas[0]->Visible = false;
		z1->ChartAreas[1]->Visible = true;
	}
	else
	{
		z1->ChartAreas[0]->Visible = true;
		z1->ChartAreas[1]->Visible = false;

	}
}
// сохранение в файл
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	saveFileDialog1->Filter = "Telie file|*.pst";
	System::Windows::Forms::DialogResult result = saveFileDialog1->ShowDialog();
	
	if (result != System::Windows::Forms::DialogResult::OK)
		return;

	saveFileDialog1->FilterIndex = 2;
	//saveFileDialog1->RestoreDirectory = true;
	// получаем выбранный файл
	System::String^ path_f  = saveFileDialog1->FileName;
	string s2 = "";
	MarshalString(path_f, s2);

	double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 

	for (int count = 0; count < dataGridView1->RowCount; count++)
		comp_ore[count] = new double[dataGridView1->ColumnCount];
	   
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{


		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			String ^ st2;
			st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
			if (st2)
			{
				double::TryParse(st2, comp_ore[i][j]);
			}



		}
	}

	ofstream fout(s2, ios_base::app);;
	 
	

	for (int i = 0; i < dataGridView1->RowCount-1; i++)
	{
		fout << comp_ore[i][0] << char(32) << comp_ore[i][1] << char(32) << comp_ore[i][2] << char(32) << comp_ore[i][3] << char(32) << comp_ore[i][4] <<char(32)<<"ARM"<< char(32) << comp_ore[i][6] <<char(32)<<"AFz"<< char(32) << comp_ore[i][8] << endl;
	}
	fout.close();

}

//Начало рассчёта
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (line_PMD != line_RMG)
	{
		MessageBox::Show("Different amount of data for NRM and ARM");
	}
	else
	{
		double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 
		for (int count = 0; count < dataGridView1->RowCount; count++)
			comp_ore[count] = new double[dataGridView1->ColumnCount];

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				String ^ st2;
				st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
				if (st2)
				{
					double::TryParse(st2, comp_ore[i][j]);
				}



			}
		}

		F2->Do(comp_ore, dataGridView1->RowCount - 1, labelARM->Text, labelNRM->Text, path);
		F2->Show();
		F2->WindowState= System::Windows::Forms::FormWindowState::Normal;
		//F2->Activate();
		F2->BringToFront();

	}
}

//Удоление неразмагниченного остатка
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
//Смотрим в каком виде хотим взять значение
	if (LN->Checked)
	{
		//Это для номера строки
		//Считываем таблицу

		double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 
		for (int count = 0; count < dataGridView1->RowCount; count++)
			comp_ore[count] = new double[dataGridView1->ColumnCount];

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				String ^ st2;
				st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
				if (st2)
				{
					double::TryParse(st2, comp_ore[i][j]);
				}



			}
		}
		try
		{


			if ((textBox2->Text) == "")
				throw std::exception("No such numbers");
			int num = Convert::ToInt32(textBox2->Text);
			if (num > dataGridView1->RowCount)
			{
				MessageBox::Show("Number out of range");
			}
			else
			{
				double val;
				if(NRMradio->Checked)
				val = comp_ore[num - 1][4];
				if(ARMradio->Checked)
					val = comp_ore[num - 1][6];
				if (AFZradio->Checked)
					val = comp_ore[num - 1][8];

				for (int i = 0; i < dataGridView1->RowCount - 1; i++)
				{
					if(NRMcheck->Checked)
					dataGridView1->Rows[i]->Cells[4]->Value = (comp_ore[i][4] - val).ToString("E3");
					if (ARMcheck->Checked)
					dataGridView1->Rows[i]->Cells[6]->Value = (comp_ore[i][6] - val).ToString("E3");
					if (AFZcheck->Checked)
					dataGridView1->Rows[i]->Cells[8]->Value = (comp_ore[i][8] - val).ToString("E3");
				}
			}
			for (int i = 0; i < dataGridView1->RowCount; i++)
			{
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					String ^ st2;
					st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
					if (st2)
					{
						double::TryParse(st2, comp_ore[i][j]);
					}



				}
			}

			drawTable(comp_ore, dataGridView1->RowCount - 1);

		}
		catch (const std::exception&)
		{
			MessageBox::Show("Invalid input");
		}
		

	}
	else
	{

		//Это для значения
		//Считываем таблицу

		double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 
		for (int count = 0; count < dataGridView1->RowCount; count++)
			comp_ore[count] = new double[dataGridView1->ColumnCount];

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				String ^ st2;
				st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
				if (st2)
				{
					double::TryParse(st2, comp_ore[i][j]);
				}



			}
		}
		try
		{
			if ((textBox2->Text) == "")
				throw std::exception("No such numbers");
				double val = Convert::ToDouble(textBox2->Text);

			for (int i = 0; i < dataGridView1->RowCount - 1; i++)
			{
				if (NRMcheck->Checked)
					dataGridView1->Rows[i]->Cells[4]->Value = (comp_ore[i][4] - val).ToString("E3");
				if (ARMcheck->Checked)
					dataGridView1->Rows[i]->Cells[6]->Value = (comp_ore[i][6] - val).ToString("E3");
				if (AFZcheck->Checked)
					dataGridView1->Rows[i]->Cells[8]->Value = (comp_ore[i][8] - val).ToString("E3");
			}
			for (int i = 0; i < dataGridView1->RowCount; i++)
			{
				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					String ^ st2;
					st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
					if (st2)
					{
						double::TryParse(st2, comp_ore[i][j]);
					}



				}
			}

			drawTable(comp_ore, dataGridView1->RowCount - 1);
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Invalid input");
		}


	}
}

//Домножение таблицы на -1
private: System::Void buttonMone_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (dataGridView1->RowCount == 1)
	{
		MessageBox::Show("No rows");
		return;
	}
	double **comp_ore = new double*[dataGridView1->RowCount]; // создание динамического массива 
	for (int count = 0; count < dataGridView1->RowCount; count++)
		comp_ore[count] = new double[dataGridView1->ColumnCount];

	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			String ^ st2;
			st2 = dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString();
			if (st2)
			{
				double::TryParse(st2, comp_ore[i][j]);
			}



		}
	}

	for (int i = 0; i < dataGridView1->RowCount - 1; i++)
	{
		comp_ore[i][6] = comp_ore[i][6] * (-1);
		comp_ore[i][8] = comp_ore[i][8] * (-1);
		dataGridView1->Rows[i]->Cells[6]->Value = (comp_ore[i][6]).ToString("E3");
		dataGridView1->Rows[i]->Cells[8]->Value = (comp_ore[i][8]).ToString("E3");
	}
	drawTable(comp_ore, dataGridView1->RowCount - 1);

}
		 //подключение выходного файла
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	saveFileOutput->Filter = "Result files|*.dmg|All files(*.*)|*.*";
	System::Windows::Forms::DialogResult result = saveFileOutput->ShowDialog();

	if (result != System::Windows::Forms::DialogResult::OK)
		return;
	System::String^ filename = saveFileOutput->FileName;

	string s2 = "";
	MarshalString(filename, s2);
	ofstream fout(s2, ios_base::app);
	char fname[255];
	strcpy_s(fname, s2.c_str());
	path = filename;
	char *pch = strrchr(fname, '\\');
	string filabel = string(pch);
	filabel.erase(0, 1);

	outputfilelabel->Text = gcnew System::String(filabel.c_str());
	fout << "pmd file   |  rmg file  | N |  range  |   slope   | std error |   beta   | f reside |  r squared" << endl;


}
		 //Подключаем и отключаем желтые столбца
private: System::Void onOffRowsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dataGridView1->Columns[5]->Visible == false)
	{
		
		dataGridView1->Columns[7]->Visible = true;
		dataGridView1->Columns[5]->Visible = true;
	}
	else
	{
		dataGridView1->Columns[7]->Visible = false;
		dataGridView1->Columns[5]->Visible = false;
	}
}

		 //переключение между графиками ARM
private: System::Void armchart_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (armchart->ChartAreas[0]->Visible)
	{
		armchart->ChartAreas[0]->Visible = false;
		armchart->ChartAreas[1]->Visible = true;
	}
	else
	{
		armchart->ChartAreas[0]->Visible = true;
		armchart->ChartAreas[1]->Visible = false;

	}
}
		 //разворачиваем на весь экран при запуске
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	WindowState = System::Windows::Forms::FormWindowState::Maximized;
}

};


}
