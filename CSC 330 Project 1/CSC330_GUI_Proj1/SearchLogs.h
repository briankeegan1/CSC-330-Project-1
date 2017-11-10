#pragma once
#include"MainWindow.h"
#include<msclr\marshal.h>
#include<msclr\marshal_cppstd.h>
#include<string>
#include<stdlib.h>
#include"VehicleManager.h"
using namespace std;

vector<VehicleManager> searchLog;
namespace CSC330GUIProj1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for SeachLogs
	/// </summary>
	public ref class SearchLogs : public System::Windows::Forms::Form
	{
	public:
		SearchLogs(void)
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
		~SearchLogs()
		{
			if (components)
			{
				delete components;
			}
			exit(0);
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  inputID;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  logIndices;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ListBox^  contentIndices;
	private: System::Windows::Forms::Label^  tripMileage;
	private: System::Windows::Forms::Label^  vehicleID;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::NumericUpDown^  contentStock;
	private: System::Windows::Forms::Label^  year;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  day;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  month;
	private: System::Windows::Forms::Label^  errorLog;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputID = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->year = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->month = (gcnew System::Windows::Forms::Label());
			this->contentStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->contentIndices = (gcnew System::Windows::Forms::ListBox());
			this->tripMileage = (gcnew System::Windows::Forms::Label());
			this->vehicleID = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->logIndices = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->errorLog = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contentStock))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vehicle ID:";
			// 
			// inputID
			// 
			this->inputID->Location = System::Drawing::Point(100, 31);
			this->inputID->Name = L"inputID";
			this->inputID->Size = System::Drawing::Size(100, 20);
			this->inputID->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(206, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search by Vehicle ID";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchLogs::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Controls->Add(this->year);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->day);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->month);
			this->groupBox1->Controls->Add(this->contentStock);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->contentIndices);
			this->groupBox1->Controls->Add(this->tripMileage);
			this->groupBox1->Controls->Add(this->vehicleID);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->logIndices);
			this->groupBox1->Location = System::Drawing::Point(12, 87);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(733, 186);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Log Info";
			// 
			// year
			// 
			this->year->AutoSize = true;
			this->year->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->year->Location = System::Drawing::Point(316, 88);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(49, 24);
			this->year->TabIndex = 17;
			this->year->Text = L"Year";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(298, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 24);
			this->label9->TabIndex = 16;
			this->label9->Text = L"/";
			// 
			// day
			// 
			this->day->AutoSize = true;
			this->day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day->Location = System::Drawing::Point(277, 88);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(23, 24);
			this->day->TabIndex = 15;
			this->day->Text = L"D";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(259, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"/";
			// 
			// month
			// 
			this->month->AutoSize = true;
			this->month->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->month->Location = System::Drawing::Point(231, 88);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(26, 24);
			this->month->TabIndex = 13;
			this->month->Text = L"M";
			// 
			// contentStock
			// 
			this->contentStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contentStock->Location = System::Drawing::Point(591, 75);
			this->contentStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->contentStock->Name = L"contentStock";
			this->contentStock->Size = System::Drawing::Size(83, 29);
			this->contentStock->TabIndex = 12;
			this->contentStock->ThousandsSeparator = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(586, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 24);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Quantity: ";
			// 
			// contentIndices
			// 
			this->contentIndices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contentIndices->FormattingEnabled = true;
			this->contentIndices->ItemHeight = 20;
			this->contentIndices->Location = System::Drawing::Point(459, 20);
			this->contentIndices->Name = L"contentIndices";
			this->contentIndices->Size = System::Drawing::Size(120, 164);
			this->contentIndices->TabIndex = 10;
			this->contentIndices->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchLogs::contentIndices_SelectedIndexChanged);
			// 
			// tripMileage
			// 
			this->tripMileage->AutoSize = true;
			this->tripMileage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripMileage->Location = System::Drawing::Point(259, 149);
			this->tripMileage->Name = L"tripMileage";
			this->tripMileage->Size = System::Drawing::Size(0, 24);
			this->tripMileage->TabIndex = 9;
			// 
			// vehicleID
			// 
			this->vehicleID->AutoSize = true;
			this->vehicleID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vehicleID->Location = System::Drawing::Point(241, 16);
			this->vehicleID->Name = L"vehicleID";
			this->vehicleID->Size = System::Drawing::Size(0, 24);
			this->vehicleID->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(456, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Vehicle Contents:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(133, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Trip Mileage:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(134, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Trip Date:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(134, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Vehicle ID:";
			// 
			// logIndices
			// 
			this->logIndices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logIndices->FormattingEnabled = true;
			this->logIndices->ItemHeight = 20;
			this->logIndices->Location = System::Drawing::Point(7, 20);
			this->logIndices->Name = L"logIndices";
			this->logIndices->Size = System::Drawing::Size(120, 164);
			this->logIndices->TabIndex = 0;
			this->logIndices->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchLogs::logIndices_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(458, 162);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 8;
			// 
			// errorLog
			// 
			this->errorLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorLog->Location = System::Drawing::Point(467, 26);
			this->errorLog->Name = L"errorLog";
			this->errorLog->Size = System::Drawing::Size(278, 23);
			this->errorLog->TabIndex = 9;
			this->errorLog->Text = L"-";
			// 
			// SearchLogs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 276);
			this->Controls->Add(this->errorLog);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->inputID);
			this->Controls->Add(this->label1);
			this->Name = L"SearchLogs";
			this->Text = L"SeachLogs";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contentStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void logIndices_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	contentIndices->Items->Clear();//clear list of contents
	int tempDay, tempMonth, tempYear;//temporary variables for date
	int index = System::Convert::ToInt16(logIndices->SelectedIndex);//get index for VehicleManager object
	tripMileage->Text = System::Convert::ToString(searchLog.at(index).getMileage());//show mileage
	searchLog.at(index).getDateAll(tempMonth, tempDay, tempYear);//get date

	month->Text = System::Convert::ToString(tempMonth);//show date
	day->Text = System::Convert::ToString(tempDay);
	year->Text = System::Convert::ToString(tempYear);

	for (int i = 0; i < searchLog.at(index).getVectSize(); i++)//show contents of delivery
	{
		contentIndices->Items->Add(marshal_as<String^>(searchLog.at(index).getItemName(i)));
	}
	contentStock->Value = 0;//reset value of content quantity
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ifstream inputFile;//input file stream
	inputFile.open(msclr::interop::marshal_as<std::string>(inputID->Text) + ".txt");//open file
	string temp;//temp variables for getting data from file
	int tempi;
	int tempDay, tempMonth, tempYear;
	char tempc;
	if (inputFile.is_open())//check if file is open
	{
		errorLog->Text = "-";//clear error message label
		while (searchLog.size() > 0)//clear search log
		{
			searchLog.pop_back();
		}
		while (inputFile >> temp >> temp)
		{
			getline(inputFile, temp);
			Log.setName(temp);//store
			inputFile >> temp >> temp >> temp;
			Log.setID(temp);//store
			inputFile >> temp >> temp >> temp;
			Log.setUsage(temp);//store
			inputFile >> temp >> temp >> tempi;
			Log.setMileage(tempi);//store
			inputFile >> temp >> temp >> tempMonth >> tempc >> tempDay >> tempc >> tempYear;
			Log.setDate(tempMonth, tempDay, tempYear);//store
			getline(inputFile, temp);
			getline(inputFile, temp);
			while (inputFile >> temp && temp != "|--|")
			{
				inputFile >> temp >> tempc >> tempi;
				Log.setItemName(temp);
				Log.setQuantity(tempi);
			}
			//fill in fields
			temp = msclr::interop::marshal_as<std::string>(inputID->Text);
			if (temp == Log.getID())
			{
				vehicleID->Text = inputID->Text;
				logIndices->Items->Add(marshal_as<String^>(Log.getName()));
				tripMileage->Text = System::Convert::ToString(Log.getMileage());
				Log.getDateAll(tempMonth, tempDay, tempYear);
				searchLog.push_back(Log);//push back object onto vector
			}
			Log.emptyVectors();
		}
	}
	else
	{
		errorLog->Text = "No file for inputted ID found.";
	}
	inputFile.close();
}
private: System::Void contentIndices_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int index = System::Convert::ToInt32(contentIndices->SelectedIndex);
	contentStock->Value = searchLog.at(System::Convert::ToInt16(logIndices->SelectedIndex)).getQuantity(index);
}
};
}
