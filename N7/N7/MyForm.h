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
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;


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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->z1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->z2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->mh = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->BeginInit();
			this->toolStrip1->SuspendLayout();
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
			legend1->Name = L"Legend1";
			this->z1->Legends->Add(legend1);
			this->z1->Location = System::Drawing::Point(4, 28);
			this->z1->Name = L"z1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->LabelBorderWidth = 5;
			series1->Legend = L"Legend1";
			series1->MarkerSize = 1;
			series1->Name = L"XY";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"ZY";
			this->z1->Series->Add(series1);
			this->z1->Series->Add(series2);
			this->z1->Size = System::Drawing::Size(500, 500);
			this->z1->TabIndex = 4;
			this->z1->Text = L"chart1";
			// 
			// z2
			// 
			chartArea2->Name = L"ChartArea1";
			this->z2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->z2->Legends->Add(legend2);
			this->z2->Location = System::Drawing::Point(510, 28);
			this->z2->Name = L"z2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"XZ";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"YZ";
			this->z2->Series->Add(series3);
			this->z2->Series->Add(series4);
			this->z2->Size = System::Drawing::Size(500, 500);
			this->z2->TabIndex = 5;
			this->z2->Text = L"chart2";
			// 
			// mh
			// 
			chartArea3->Name = L"ChartArea1";
			this->mh->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->mh->Legends->Add(legend3);
			this->mh->Location = System::Drawing::Point(1016, 28);
			this->mh->Name = L"mh";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"MH";
			this->mh->Series->Add(series5);
			this->mh->Size = System::Drawing::Size(500, 500);
			this->mh->TabIndex = 6;
			this->mh->Text = L"chart3";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(17, 17);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1524, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(65, 22);
			this->toolStripButton1->Text = L"Open file";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1524, 538);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->mh);
			this->Controls->Add(this->z2);
			this->Controls->Add(this->z1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mh))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
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
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		setlocale(LC_ALL, "Russian");
		//Открываем файловый диалог
		openFileDialog1->ShowDialog();
		System::String^ path_f = openFileDialog1->FileName;
		string s2 = "";
		MarshalString(path_f, s2);
		ifstream fin(s2);
		int column_counter=0;
		int line_counter = 0;
		if (!fin.is_open()) {
			MessageBox::Show("Unable to open file");
		}
		else 
		{
			
			string str;
			int flag_count = 0;
			
			while (getline(fin, str))
			{ // пока не достигнут конец файла класть очередную строку в переменную 
				//Крайне неприятно и криво переводим строку в массив
				char p[255];
				double *line;
				int flag = 0;

				double *values = NULL;
				strcpy(p, str.c_str());		//Как иначе перевести string в char я без понятия		
				char *buf = strtok(p, " ,=");
				column_counter = 0;

				while (buf != NULL) //переводим все числа из символов-чисел в числа-числа
				{

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
								free(values);                                   // удалить массив
								std::cout << "Error code 5. Wrong format!";
								exit(5);                                          // завершить работу программы
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
						data[0] = (double*)malloc(column_counter * sizeof(double));
						for (int i = 0; i < column_counter; i++)
						{
							data[line_counter - 1][i] = values[i];
						}
					}
					else
					{
						data = (double**)realloc(data, line_counter * sizeof(double*));
						data[line_counter - 1] = (double*)malloc(column_counter * sizeof(double));
						for (int i = 0; i < column_counter; i++)
						{
							data[line_counter - 1][i] = values[i];
						}
					}
				}
			}
			//Конец цикла 
			fin.close();

		}
		
		for (int i = 1; i < line_counter; i++)
		{
			z1->Series["XY"]->Points->AddXY(data[i][2], data[i][1]);
			z1->Series["ZY"]->Points->AddXY(data[i][2], data[i][3]);
			z2->Series["XZ"]->Points->AddXY(data[i][1], data[i][3]);
			z2->Series["YZ"]->Points->AddXY(data[i][1], data[i][2]);
			mh->Series["MH"]->Points->AddXY(data[i][0], data[i][4]);
		}
		free(data);
	}

	




};
}
