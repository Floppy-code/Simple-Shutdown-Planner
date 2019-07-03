#pragma once
#include "Manager.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace SimpleShutdownPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			m_manager = new Manager;
		}

		//My own methods (not automaticaly generated)

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
				delete m_manager;
			}
		}
	private: System::Windows::Forms::GroupBox^  UnitGroupBox;
	private: System::Windows::Forms::RadioButton^  DaysRButton;
	protected:

	private: System::Windows::Forms::RadioButton^  HoursRButton;
	private: System::Windows::Forms::RadioButton^  MinutesRButton;
	private: System::Windows::Forms::RadioButton^  SecoundsRButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  ShutdownButton;
	private: System::Windows::Forms::TextBox^  ShutdownTime;
	private: System::Windows::Forms::Button^  DisableButton;
	private: System::Windows::Forms::RadioButton^  ShutdownRButton;
	private: System::Windows::Forms::RadioButton^  RestartRButton;

		//Own private variables
		Manager* m_manager;

		//Own private methods
		void setUnit(int unit);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->UnitGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->DaysRButton = (gcnew System::Windows::Forms::RadioButton());
			this->HoursRButton = (gcnew System::Windows::Forms::RadioButton());
			this->MinutesRButton = (gcnew System::Windows::Forms::RadioButton());
			this->SecoundsRButton = (gcnew System::Windows::Forms::RadioButton());
			this->ShutdownButton = (gcnew System::Windows::Forms::Button());
			this->ShutdownTime = (gcnew System::Windows::Forms::TextBox());
			this->DisableButton = (gcnew System::Windows::Forms::Button());
			this->ShutdownRButton = (gcnew System::Windows::Forms::RadioButton());
			this->RestartRButton = (gcnew System::Windows::Forms::RadioButton());
			this->UnitGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// UnitGroupBox
			// 
			this->UnitGroupBox->Controls->Add(this->DaysRButton);
			this->UnitGroupBox->Controls->Add(this->HoursRButton);
			this->UnitGroupBox->Controls->Add(this->MinutesRButton);
			this->UnitGroupBox->Controls->Add(this->SecoundsRButton);
			this->UnitGroupBox->Location = System::Drawing::Point(13, 13);
			this->UnitGroupBox->Name = L"UnitGroupBox";
			this->UnitGroupBox->Size = System::Drawing::Size(101, 118);
			this->UnitGroupBox->TabIndex = 0;
			this->UnitGroupBox->TabStop = false;
			this->UnitGroupBox->Text = L"Unit";
			// 
			// DaysRButton
			// 
			this->DaysRButton->AutoSize = true;
			this->DaysRButton->Location = System::Drawing::Point(7, 89);
			this->DaysRButton->Name = L"DaysRButton";
			this->DaysRButton->Size = System::Drawing::Size(49, 17);
			this->DaysRButton->TabIndex = 3;
			this->DaysRButton->Text = L"Days";
			this->DaysRButton->UseVisualStyleBackColor = true;
			// 
			// HoursRButton
			// 
			this->HoursRButton->AutoSize = true;
			this->HoursRButton->Location = System::Drawing::Point(7, 66);
			this->HoursRButton->Name = L"HoursRButton";
			this->HoursRButton->Size = System::Drawing::Size(53, 17);
			this->HoursRButton->TabIndex = 2;
			this->HoursRButton->Text = L"Hours";
			this->HoursRButton->UseVisualStyleBackColor = true;
			// 
			// MinutesRButton
			// 
			this->MinutesRButton->AutoSize = true;
			this->MinutesRButton->Location = System::Drawing::Point(7, 43);
			this->MinutesRButton->Name = L"MinutesRButton";
			this->MinutesRButton->Size = System::Drawing::Size(62, 17);
			this->MinutesRButton->TabIndex = 1;
			this->MinutesRButton->Text = L"Minutes";
			this->MinutesRButton->UseVisualStyleBackColor = true;
			// 
			// SecoundsRButton
			// 
			this->SecoundsRButton->AutoSize = true;
			this->SecoundsRButton->Checked = true;
			this->SecoundsRButton->Location = System::Drawing::Point(7, 20);
			this->SecoundsRButton->Name = L"SecoundsRButton";
			this->SecoundsRButton->Size = System::Drawing::Size(73, 17);
			this->SecoundsRButton->TabIndex = 0;
			this->SecoundsRButton->TabStop = true;
			this->SecoundsRButton->Text = L"Secounds";
			this->SecoundsRButton->UseVisualStyleBackColor = true;
			// 
			// ShutdownButton
			// 
			this->ShutdownButton->Location = System::Drawing::Point(253, 18);
			this->ShutdownButton->Name = L"ShutdownButton";
			this->ShutdownButton->Size = System::Drawing::Size(75, 23);
			this->ShutdownButton->TabIndex = 1;
			this->ShutdownButton->Text = L"&Shutdown";
			this->ShutdownButton->UseVisualStyleBackColor = true;
			this->ShutdownButton->Click += gcnew System::EventHandler(this, &MainForm::ShutdownButton_Click);
			// 
			// ShutdownTime
			// 
			this->ShutdownTime->Location = System::Drawing::Point(127, 19);
			this->ShutdownTime->Name = L"ShutdownTime";
			this->ShutdownTime->Size = System::Drawing::Size(119, 20);
			this->ShutdownTime->TabIndex = 2;
			this->ShutdownTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// DisableButton
			// 
			this->DisableButton->Location = System::Drawing::Point(253, 48);
			this->DisableButton->Name = L"DisableButton";
			this->DisableButton->Size = System::Drawing::Size(75, 23);
			this->DisableButton->TabIndex = 3;
			this->DisableButton->Text = L"&Disable";
			this->DisableButton->UseVisualStyleBackColor = true;
			this->DisableButton->Click += gcnew System::EventHandler(this, &MainForm::DisableButton_Click);
			// 
			// ShutdownRButton
			// 
			this->ShutdownRButton->AutoSize = true;
			this->ShutdownRButton->Checked = true;
			this->ShutdownRButton->Location = System::Drawing::Point(127, 51);
			this->ShutdownRButton->Name = L"ShutdownRButton";
			this->ShutdownRButton->Size = System::Drawing::Size(73, 17);
			this->ShutdownRButton->TabIndex = 0;
			this->ShutdownRButton->TabStop = true;
			this->ShutdownRButton->Text = L"Shutdown";
			this->ShutdownRButton->UseVisualStyleBackColor = true;
			// 
			// RestartRButton
			// 
			this->RestartRButton->AutoSize = true;
			this->RestartRButton->Location = System::Drawing::Point(127, 79);
			this->RestartRButton->Name = L"RestartRButton";
			this->RestartRButton->Size = System::Drawing::Size(59, 17);
			this->RestartRButton->TabIndex = 1;
			this->RestartRButton->Text = L"Restart";
			this->RestartRButton->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(343, 148);
			this->Controls->Add(this->RestartRButton);
			this->Controls->Add(this->ShutdownRButton);
			this->Controls->Add(this->DisableButton);
			this->Controls->Add(this->ShutdownTime);
			this->Controls->Add(this->ShutdownButton);
			this->Controls->Add(this->UnitGroupBox);
			this->Name = L"MainForm";
			this->Text = L"Simple Shutdown Planner";
			this->UnitGroupBox->ResumeLayout(false);
			this->UnitGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void ShutdownButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	bool isSafe = true;
	if (ShutdownRButton->Checked)
	{
		m_manager->SetOptions(false);
	}
	else if (RestartRButton->Checked)
	{
		m_manager->SetOptions(true);
	}

	if (SecoundsRButton->Checked)
	{
		m_manager->setUnitOfMeasurement(0);
	}
	else if (MinutesRButton->Checked)
	{
		m_manager->setUnitOfMeasurement(1);
	}
	else if (HoursRButton->Checked)
	{
		m_manager->setUnitOfMeasurement(2);
	}
	else if (DaysRButton->Checked)
	{
		m_manager->setUnitOfMeasurement(3);
	}

	try
	{
		m_manager->setShutdownTime(std::stoi(msclr::interop::marshal_as<std::string>(ShutdownTime->Text)));
	}
	catch (std::exception e)
	{
		isSafe = false;
	}

	if (isSafe)
	{
		m_manager->ShutdownSystem();
	}
	else
	{
		//TODO ERROR
	}
}

private: System::Void DisableButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	m_manager->DisableShutdown();
}

};
}
