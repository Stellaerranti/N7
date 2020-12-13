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

#define _CRT_SECURE_NO_WARNINGS
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
			 System::Windows::Forms::DataVisualization::Charting::Series^ series1 =	 (gcnew System::Windows::Forms::DataVisualization::Charting::Series());

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^  H;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Z;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AFZ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_AFz;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->z1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->mh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->openpmdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openrmgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// z1
			// 
			chartArea1->Name = L"ChartArea1";
			chartArea2->Name = L"ChartArea2";
			chartArea2->Visible = false;
			this->z1->ChartAreas->Add(chartArea1);
			this->z1->ChartAreas->Add(chartArea2);
			this->z1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->z1->Legends->Add(legend1);
			this->z1->Location = System::Drawing::Point(6, 6);
			this->z1->Name = L"z1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->LabelBorderWidth = 5;
			series1->Legend = L"Legend1";
			series1->LegendText = L"X,Y";
			series1->Name = L"XY";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->LabelBorderWidth = 5;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Z.X";
			series2->Name = L"ZX";
			series3->ChartArea = L"ChartArea2";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->Legend = L"Legend1";
			series3->LegendText = L"X,Y";
			series3->Name = L"XY2";
			series4->ChartArea = L"ChartArea2";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->LegendText = L"Z,Y";
			series4->Name = L"ZY";
			this->z1->Series->Add(series1);
			this->z1->Series->Add(series2);
			this->z1->Series->Add(series3);
			this->z1->Series->Add(series4);
			this->z1->Size = System::Drawing::Size(545, 254);
			this->z1->TabIndex = 4;
			this->z1->Text = L"chart1";
			this->z1->Click += gcnew System::EventHandler(this, &MyForm::z1_Click);
			// 
			// mh
			// 
			chartArea3->Name = L"ChartArea1";
			this->mh->ChartAreas->Add(chartArea3);
			this->mh->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->mh->Legends->Add(legend2);
			this->mh->Location = System::Drawing::Point(560, 6);
			this->mh->Name = L"mh";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->Legend = L"Legend1";
			series5->Name = L"MH";
			this->mh->Series->Add(series5);
			this->mh->Size = System::Drawing::Size(545, 254);
			this->mh->TabIndex = 6;
			this->mh->Text = L"chart3";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(17, 17);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripDropDownButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1390, 25);
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->H, this->X,
					this->Y, this->Z, this->M, this->ARM, this->M_ARM, this->AFZ, this->M_AFz
			});
			this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(6, 269);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->Size = System::Drawing::Size(1099, 254);
			this->dataGridView1->TabIndex = 9;
			// 
			// H
			// 
			this->H->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->H->HeaderText = L"H";
			this->H->Name = L"H";
			this->H->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// X
			// 
			this->X->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Y
			// 
			this->Y->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Y->HeaderText = L"Y";
			this->Y->Name = L"Y";
			this->Y->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Z
			// 
			this->Z->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Z->HeaderText = L"Z";
			this->Z->Name = L"Z";
			this->Z->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// M
			// 
			this->M->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M->HeaderText = L"M";
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
			this->ARM->Width = 40;
			// 
			// M_ARM
			// 
			this->M_ARM->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_ARM->HeaderText = L"M";
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
			this->AFZ->Width = 34;
			// 
			// M_AFz
			// 
			this->M_AFz->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_AFz->HeaderText = L"M";
			this->M_AFz->Name = L"M_AFz";
			this->M_AFz->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->z1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->mh, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 2, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 25);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1390, 529);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button4, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button2, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(1114, 269);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(270, 156);
			this->tableLayoutPanel2->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change projection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(138, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear table";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(3, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Delete rows";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->tableLayoutPanel2->SetColumnSpan(this->textBox1, 2);
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(3, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(138, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delete row";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel3->Location = System::Drawing::Point(1114, 6);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(270, 100);
			this->tableLayoutPanel3->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(3, 53);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 44);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Calculate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 554);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"pseudo Tellier";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
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
	int line_PMD, line_RMG;
	/*double maximumX(double **data, int counter)
	{
		double max = data[0][3];
		for (int i = 0; i < counter; i++)
		{
			if(data)
		}
	}*/
	void draw(double **data, int line_counter)
	{

		z1->Series["XY"]->Points->Clear();
		z1->Series["ZX"]->Points->Clear();
		z1->Series["XY2"]->Points->Clear();
		z1->Series["ZY"]->Points->Clear();
		mh->Series["MH"]->Points->Clear();

		z1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->Crossing = 0;
		z1->ChartAreas[0]->AxisX->Crossing = 0;

		z1->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->Crossing = 0;
		z1->ChartAreas[1]->AxisX->Crossing = 0;

		mh->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->Crossing = 0;
		mh->ChartAreas[0]->AxisX->Crossing = 0;

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
		z1->Series["XY"]->Points->Clear();
		z1->Series["ZX"]->Points->Clear();
		z1->Series["XY2"]->Points->Clear();
		z1->Series["ZY"]->Points->Clear();
		
		mh->Series["MH"]->Points->Clear();
		
		z1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[0]->AxisY->Crossing = 0;
		z1->ChartAreas[0]->AxisX->Crossing = 0;

		z1->ChartAreas[1]->AxisX->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->MajorGrid->Enabled = false;
		z1->ChartAreas[1]->AxisY->Crossing = 0;
		z1->ChartAreas[1]->AxisX->Crossing = 0;

		mh->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		mh->ChartAreas[0]->AxisY->Crossing = 0;
		mh->ChartAreas[0]->AxisX->Crossing = 0;


		
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


			}
		
			
	}
	//Открываем pmd
	private: System::Void openpmdToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		//setlocale(LC_ALL, "Russian");
		//Открываем файловый диалог
		openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "NRM data|*.pmd";
		openFileDialog1->ShowDialog();		
		System::String^ path_f = openFileDialog1->FileName;
		string s2 = "";
		MarshalString(path_f, s2);
		ifstream fin(s2);
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
						for (int i = 0; i <5; i++)
						{
							data[line_counter - 1][i] = values[i];
							
						}
						
					}
					else
					{
						data = (double**)realloc(data, line_counter * sizeof(double*));
						data[line_counter - 1] = (double*)malloc(5 * sizeof(double));
						for (int i = 0; i < 5; i++)
						{
							data[line_counter - 1][i] = values[i];
							
						}
						
					}
				}
			}
			//Конец цикла 
			fin.close();
			draw(data, line_counter);
			fillGridPMD(data, line_counter);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			line_PMD = line_counter-1;
		}
		
		
		
	}
	//открываем rmg
	private: System::Void openrmgToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//setlocale(LC_ALL, "Russian");
	//Открываем файловый диалог
		openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "ARM and AFz data|*.rmg";
		openFileDialog1->ShowDialog();
		System::String^ path_f = openFileDialog1->FileName;
		string s2 = "";
		MarshalString(path_f, s2);
		ifstream fin(s2);
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

		}

	}
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
		 dataGridView1->Rows[i - 1]->Cells[0]->Value = (data[i][0]).ToString("E3");
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

}
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
	saveFileDialog1->ShowDialog();
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
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

	ofstream fout;
	 
	fout.open(s2);

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
		MyForm2 ^F2 = gcnew MyForm2;
		F2->Do(comp_ore, line_PMD);
		F2->Show();
	}
}
};


}
