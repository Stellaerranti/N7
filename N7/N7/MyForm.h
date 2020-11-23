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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  z2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  mh;



	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  openpmdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openrmgToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  H;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Z;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_ARM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AFZ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  M_AFz;















































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
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->z1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->z2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->mh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->openpmdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openrmgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// z1
			// 
			chartArea1->Name = L"ChartArea1";
			this->z1->ChartAreas->Add(chartArea1);
			this->z1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->z1->Legends->Add(legend1);
			this->z1->Location = System::Drawing::Point(3, 3);
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
			series2->Name = L"ZY";
			this->z1->Series->Add(series1);
			this->z1->Series->Add(series2);
			this->z1->Size = System::Drawing::Size(468, 258);
			this->z1->TabIndex = 4;
			this->z1->Text = L"chart1";
			// 
			// z2
			// 
			chartArea2->Name = L"ChartArea1";
			this->z2->ChartAreas->Add(chartArea2);
			this->z2->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->z2->Legends->Add(legend2);
			this->z2->Location = System::Drawing::Point(477, 3);
			this->z2->Name = L"z2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"X,Y";
			series3->Name = L"XZ";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->LegendText = L"Z,Y";
			series4->Name = L"YZ";
			this->z2->Series->Add(series3);
			this->z2->Series->Add(series4);
			this->z2->Size = System::Drawing::Size(469, 258);
			this->z2->TabIndex = 5;
			this->z2->Text = L"chart2";
			// 
			// mh
			// 
			chartArea3->Name = L"ChartArea1";
			this->mh->ChartAreas->Add(chartArea3);
			this->mh->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Name = L"Legend1";
			this->mh->Legends->Add(legend3);
			this->mh->Location = System::Drawing::Point(952, 3);
			this->mh->Name = L"mh";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"MH";
			this->mh->Series->Add(series5);
			this->mh->Size = System::Drawing::Size(470, 258);
			this->mh->TabIndex = 6;
			this->mh->Text = L"chart3";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(17, 17);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripDropDownButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1425, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openpmdToolStripMenuItem,
					this->openrmgToolStripMenuItem
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->H, this->X,
					this->Y, this->Z, this->M, this->ARM, this->M_ARM, this->AFZ, this->M_AFz
			});
			this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 267);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->Size = System::Drawing::Size(943, 259);
			this->dataGridView1->TabIndex = 9;
			// 
			// H
			// 
			this->H->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->H->HeaderText = L"H";
			this->H->Name = L"H";
			// 
			// X
			// 
			this->X->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			// 
			// Y
			// 
			this->Y->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Y->HeaderText = L"Y";
			this->Y->Name = L"Y";
			// 
			// Z
			// 
			this->Z->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Z->HeaderText = L"Z";
			this->Z->Name = L"Z";
			// 
			// M
			// 
			this->M->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M->HeaderText = L"M";
			this->M->Name = L"M";
			// 
			// ARM
			// 
			this->ARM->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->ARM->HeaderText = L"ARM";
			this->ARM->Name = L"ARM";
			this->ARM->ReadOnly = true;
			this->ARM->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ARM->Width = 59;
			// 
			// M_ARM
			// 
			this->M_ARM->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_ARM->HeaderText = L"M";
			this->M_ARM->Name = L"M_ARM";
			// 
			// AFZ
			// 
			this->AFZ->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->AFZ->HeaderText = L"AFZ";
			this->AFZ->Name = L"AFZ";
			this->AFZ->ReadOnly = true;
			this->AFZ->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->AFZ->Width = 53;
			// 
			// M_AFz
			// 
			this->M_AFz->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->M_AFz->HeaderText = L"M";
			this->M_AFz->Name = L"M_AFz";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->Controls->Add(this->z1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->z2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->mh, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 2, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 25);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1425, 529);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(952, 267);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(470, 259);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add row";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(84, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delete row";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(165, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear table";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1425, 554);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
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
	void draw(double **data, int line_counter)
	{
		z1->Series["XY"]->Points->Clear();
		z1->Series["ZY"]->Points->Clear();
		z2->Series["XZ"]->Points->Clear();
		z2->Series["YZ"]->Points->Clear();
		mh->Series["MH"]->Points->Clear();
		
		for (int i = 1; i < line_counter; i++)
		{
			z1->Series["XY"]->Points->AddXY(data[i][2], data[i][1]);
			z1->Series["ZY"]->Points->AddXY((-1.)*data[i][3], data[i][1]);
			z2->Series["XZ"]->Points->AddXY(data[i][2], data[i][1]);
			z2->Series["YZ"]->Points->AddXY(data[i][2], (-1.)*data[i][3]);
			mh->Series["MH"]->Points->AddXY(data[i][0], data[i][4]);
		}
	}
	//Открываем pmd
	private: System::Void openpmdToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		//setlocale(LC_ALL, "Russian");
		//Открываем файловый диалог
		openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "paleo files|*.pmd";
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
				strcpy(p, str.c_str());		//Как иначе перевести string в char я без понятия	

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

		}
		
		
		
	}
	//открываем rmg
	private: System::Void openrmgToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//setlocale(LC_ALL, "Russian");
	//Открываем файловый диалог
		openFileDialog1->RestoreDirectory = true;
		this->openFileDialog1->Filter = "some|*.rmg";
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

			while (getline(fin, str))
			{ // пока не достигнут конец файла класть очередную строку в переменную 
				//Крайне неприятно и криво переводим строку в массив

				char p[1024];
				double *line;
				
				
				double *values = NULL;
				strcpy(p, str.c_str());		//Как иначе перевести string в char я без понятия	
				string bi = str.substr(0, 3);
				
			
				column_counter = 0;

				if ((flagline >0)&&((bi==ARM)||(bi==AFz)))
				{
					char *buf = strtok(p, " ,=");
					while ((column_counter == 0) && (buf != NULL)) //переводим все числа из символов-чисел в числа-числа
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
						dataRMG[line_counter_RMG - 1][0] = values[0];
					}
					else
					{
						if (bi == ARM)
						{
							line_counter_RMG++;
							dataRMG = (double**)realloc(dataRMG, (line_counter_RMG +1)* sizeof(double*));
							dataRMG[line_counter_RMG - 1] = (double*)malloc(2 * sizeof(double));
							dataRMG[line_counter_RMG - 1][0] = values[0];
						}
						if (bi == AFz)
						{
							if (line_AFz == 0)
							{
								dataRMG[line_AFz][1] = dataRMG[line_counter_RMG - 1][0];
								line_AFz++;
								dataRMG[line_AFz][1] = values[0];
								line_AFz++;
							}
							else
							{
								
								dataRMG[line_AFz][1] = values[0];
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
			 r->HeaderCell->Value = "R" + dataGridView1->RowCount;
			 //r->HeaderCell->Value = (char)i;
			 r->CreateCells(dataGridView1);
			 //cli::array <String ^> ^Values = gcnew cli::array <String ^>(dataGridView1->ColumnCount);
			 dataGridView1->Rows->Add(r);
			 dataGridView1->RowHeadersWidth = 75;
			 //int rowIndex = dataGridView1->Rows->Add();				 
			 
			 

		 }

	 for(int i =1; i< line_count; i++)
	 {
		 dataGridView1->Rows[i - 1]->Cells[0]->Value = (data[i][0]);
		 dataGridView1->Rows[i - 1]->Cells[1]->Value = (data[i][1]);
		 dataGridView1->Rows[i - 1]->Cells[2]->Value = (data[i][2]);
		 dataGridView1->Rows[i - 1]->Cells[3]->Value = (data[i][3]);
		 dataGridView1->Rows[i - 1]->Cells[4]->Value = (data[i][4]);
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
		 r->HeaderCell->Value = "R" + dataGridView1->RowCount;
		 //r->HeaderCell->Value = (char)i;
		 r->CreateCells(dataGridView1);
		 //cli::array <String ^> ^Values = gcnew cli::array <String ^>(dataGridView1->ColumnCount);
		 dataGridView1->Rows->Add(r);
		 dataGridView1->RowHeadersWidth = 75;
		 //int rowIndex = dataGridView1->Rows->Add();		 
	 }

	 for (int i = 0; i < line_count; i++)
	 {
		// if
		 dataGridView1->Rows[i]->Cells[6]->Value = (dataRMG[i][0]);
		 dataGridView1->Rows[i]->Cells[8]->Value = (dataRMG[i][1]);

	 }

 }
 
 //Добавление строк
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (!dataGridView1->ColumnCount) { MessageBox::Show("No colums"); return; }
	DataGridViewRow ^r = gcnew DataGridViewRow();
	r->HeaderCell->Value = "R"+dataGridView1->RowCount;
	r->CreateCells(dataGridView1);
	cli::array <String ^> ^Values = gcnew cli::array <String ^>(dataGridView1->ColumnCount);
	dataGridView1->Rows->Add(r);
	dataGridView1->RowHeadersWidth = 100;
}

//удоление строк
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (!dataGridView1->RowCount) { MessageBox::Show("There are no rows in the table!"); return; }
	if (dataGridView1->SelectedRows->Count > 0) {
		for (int i = 0; i < dataGridView1->SelectedRows->Count; i++) {
			int index = dataGridView1->SelectedRows[i]->Index;
			try { dataGridView1->Rows->RemoveAt(index); }
			catch (...) { MessageBox::Show("Unable to delete this row "); }
		}
	}
	else {
		int index;
		try { index = dataGridView1->CurrentCell->RowIndex; }
		catch (...) {}
		if (index != -1) {
			try { dataGridView1->Rows->RemoveAt(index); }
			catch (...) { MessageBox::Show("Unable to delete this row "); }
		}
		else	MessageBox::Show("Select the rows/cell to delete");
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	dataGridView1->Rows->Clear();
	
}
};


}
