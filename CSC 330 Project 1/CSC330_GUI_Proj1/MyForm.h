#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<msclr\marshal.h>
#include<msclr\marshal_cppstd.h>
#include"VehicleManager.h"
using namespace std;
//global vehiclemanager variable
VehicleManager Log;
namespace CSC330GUIProj1 {
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
			//
			//TODO: Add the constructor code here
			//
			ifstream inventoryList;
			inventoryList.open("Inventory.txt");//open inventory file
			if (inventoryList.is_open())//check if file is open
			{
				string temp;
				while (inventoryList >> temp)//while items in list, add to inventoryList
				{
					contentList->Items->Add(msclr::interop::marshal_as<String^>(temp));
				}
			}
			else
			{
				fileError->Text = "Inventory.txt not found.";
			}
			inventoryList.close();//close file
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
			exit(0);
		}
	private: System::Windows::Forms::Button^  createLog;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  logVehicleID;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  logDriverName;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  logDate;
	private: System::Windows::Forms::NumericUpDown^  logMileage;
	private: System::Windows::Forms::ListView^  contentList;
	private: System::Windows::Forms::Button^  addToContents;
	private: System::Windows::Forms::NumericUpDown^  contentStock;
	private: System::Windows::Forms::Label^  errorLabel;
	private: System::Windows::Forms::TextBox^  vehicleUsage;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  fileError;



	protected:

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
			this->createLog = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->logVehicleID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->logDriverName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->logDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->logMileage = (gcnew System::Windows::Forms::NumericUpDown());
			this->contentList = (gcnew System::Windows::Forms::ListView());
			this->addToContents = (gcnew System::Windows::Forms::Button());
			this->contentStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->errorLabel = (gcnew System::Windows::Forms::Label());
			this->vehicleUsage = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fileError = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logMileage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contentStock))->BeginInit();
			this->SuspendLayout();
			// 
			// createLog
			// 
			this->createLog->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->createLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createLog->Location = System::Drawing::Point(550, 355);
			this->createLog->Name = L"createLog";
			this->createLog->Size = System::Drawing::Size(200, 100);
			this->createLog->TabIndex = 0;
			this->createLog->Text = L"Create Log";
			this->createLog->UseVisualStyleBackColor = true;
			this->createLog->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vehicle ID:";
			// 
			// logVehicleID
			// 
			this->logVehicleID->Location = System::Drawing::Point(176, 63);
			this->logVehicleID->Name = L"logVehicleID";
			this->logVehicleID->Size = System::Drawing::Size(100, 20);
			this->logVehicleID->TabIndex = 2;
			this->logVehicleID->TextChanged += gcnew System::EventHandler(this, &MyForm::logVehicleID_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Trip Date(M/D//Y):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(32, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Trip Mileage:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(32, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Vehicle Contents:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(181, 362);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Content";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(264, 263);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Stock";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(415, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 319);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// logDriverName
			// 
			this->logDriverName->Location = System::Drawing::Point(176, 99);
			this->logDriverName->Name = L"logDriverName";
			this->logDriverName->Size = System::Drawing::Size(100, 20);
			this->logDriverName->TabIndex = 21;
			this->logDriverName->TextChanged += gcnew System::EventHandler(this, &MyForm::logDriverName_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Driver Name:";
			// 
			// logDate
			// 
			this->logDate->Location = System::Drawing::Point(176, 163);
			this->logDate->Name = L"logDate";
			this->logDate->Size = System::Drawing::Size(200, 20);
			this->logDate->TabIndex = 22;
			this->logDate->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// logMileage
			// 
			this->logMileage->Location = System::Drawing::Point(176, 202);
			this->logMileage->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500000, 0, 0, 0 });
			this->logMileage->Name = L"logMileage";
			this->logMileage->Size = System::Drawing::Size(120, 20);
			this->logMileage->TabIndex = 23;
			this->logMileage->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// contentList
			// 
			this->contentList->Location = System::Drawing::Point(176, 237);
			this->contentList->Name = L"contentList";
			this->contentList->Size = System::Drawing::Size(82, 122);
			this->contentList->TabIndex = 24;
			this->contentList->UseCompatibleStateImageBehavior = false;
			this->contentList->View = System::Windows::Forms::View::List;
			// 
			// addToContents
			// 
			this->addToContents->Location = System::Drawing::Point(176, 385);
			this->addToContents->Name = L"addToContents";
			this->addToContents->Size = System::Drawing::Size(92, 23);
			this->addToContents->TabIndex = 25;
			this->addToContents->Text = L"Add to contents";
			this->addToContents->UseVisualStyleBackColor = true;
			this->addToContents->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// contentStock
			// 
			this->contentStock->Location = System::Drawing::Point(264, 240);
			this->contentStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500000, 0, 0, 0 });
			this->contentStock->Name = L"contentStock";
			this->contentStock->Size = System::Drawing::Size(78, 20);
			this->contentStock->TabIndex = 26;
			this->contentStock->ValueChanged += gcnew System::EventHandler(this, &MyForm::contentStock_ValueChanged);
			// 
			// errorLabel
			// 
			this->errorLabel->AutoSize = true;
			this->errorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorLabel->ForeColor = System::Drawing::Color::Red;
			this->errorLabel->Location = System::Drawing::Point(276, 421);
			this->errorLabel->Name = L"errorLabel";
			this->errorLabel->Size = System::Drawing::Size(0, 31);
			this->errorLabel->TabIndex = 27;
			// 
			// vehicleUsage
			// 
			this->vehicleUsage->Location = System::Drawing::Point(176, 130);
			this->vehicleUsage->Name = L"vehicleUsage";
			this->vehicleUsage->Size = System::Drawing::Size(100, 20);
			this->vehicleUsage->TabIndex = 29;
			this->vehicleUsage->TextChanged += gcnew System::EventHandler(this, &MyForm::vehicleUsage_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Vehicle Usage:";
			// 
			// fileError
			// 
			this->fileError->AutoSize = true;
			this->fileError->Location = System::Drawing::Point(13, 345);
			this->fileError->Name = L"fileError";
			this->fileError->Size = System::Drawing::Size(10, 13);
			this->fileError->TabIndex = 30;
			this->fileError->Text = L"-";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 461);
			this->Controls->Add(this->fileError);
			this->Controls->Add(this->vehicleUsage);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->errorLabel);
			this->Controls->Add(this->contentStock);
			this->Controls->Add(this->addToContents);
			this->Controls->Add(this->contentList);
			this->Controls->Add(this->logMileage);
			this->Controls->Add(this->logDate);
			this->Controls->Add(this->logDriverName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->logVehicleID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->createLog);
			this->Name = L"MyForm";
			this->Text = L"Vehicle Log";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logMileage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contentStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ofstream outputFile;//file stream
		outputFile.open(Log.getID()+".txt", ofstream::app);//open/create file based on vehicle ID

		if (outputFile.is_open())//check if file is open, if not exit program
		{
			int day, month, year;
			if ((Log.getName() == "") || (Log.getID() == "") || (Log.getMileage() == NULL) || (day == NULL) || (Log.getVectSize() < 1) || (Log.getUsage() == ""))//check if all fields for log are filled
			{
				errorLabel->Text = "Must fill in all fields";
			}
			else
			{
				Log.getDateAll(day, month, year);//get info from class VehicleManager and write to log
				outputFile << "Vehicle Operator: " << Log.getName() << endl;
				outputFile << "Vehicle ID: " << Log.getID() << endl;
				outputFile << "Vehicle Usage: " << Log.getUsage() << endl;
				outputFile << "Trip Mileage: " << Log.getMileage() << endl;
				outputFile << "Operating Date: " << month << " / " << day << " / " << year << endl;
				outputFile << "--------------Cargo List--------------" << endl;
				for(int i = 0; i < Log.getVectSize(); i++)//while still items in vector, add to log
				{
					outputFile << Log.getItemName(i) << "\tx" << Log.getQuantity(i) << endl;
				}
				outputFile << "|--|" << endl << endl;
				//clear data on Log variable
				
				logVehicleID->Text = "";//reset input fields
				logDriverName->Text = "";
				vehicleUsage->Text = "";
				logMileage->Value = 0;
				contentStock->Value = 0;
				errorLabel->Text = "";
			}
		}
		else//error if file cannot be opened/created
		{
			errorLabel->Text = "File cannot be opened.";
		}
		outputFile.close();//close output stream
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	Log.setDate(logDate->Value.Day,logDate->Value.Month, logDate->Value.Year);//store selected date
}
private: System::Void logVehicleID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Log.setID(msclr::interop::marshal_as<std::string>(logVehicleID->Text));//store vehicleID
}
private: System::Void logDriverName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Log.setName(msclr::interop::marshal_as<std::string>(logDriverName->Text));//store driver name
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	Log.setMileage(System::Convert::ToDouble(logMileage->Value));//store mileage of trip
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Log.setItemName(msclr::interop::marshal_as<std::string>(contentList->SelectedItems[0]->ToString()));//store item name
	Log.setQuantity(System::Convert::ToInt16(contentStock->Value));//store item quantity
	contentStock->Value = 0;//reset value of quantity
}
private: System::Void contentStock_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void vehicleUsage_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Log.setUsage(msclr::interop::marshal_as<std::string>(vehicleUsage->Text));//store usage of vehicle
}
};
}
