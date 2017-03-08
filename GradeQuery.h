#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// GradeQuery ժҪ
	/// </summary>
	public ref class GradeQuery : public System::Windows::Forms::Form
	{
	public:
		GradeQuery(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~GradeQuery()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  CoursetextBox;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  GradetextBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  RGradetextBox;
	private: System::Windows::Forms::TextBox^  EGradetextBox;
	private: System::Windows::Forms::TextBox^  PGradetextBox;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;








	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CoursetextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->GradetextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->RGradetextBox = (gcnew System::Windows::Forms::TextBox());
			this->EGradetextBox = (gcnew System::Windows::Forms::TextBox());
			this->PGradetextBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����Ҫ��ѯ�Ŀγ�";
			// 
			// CoursetextBox
			// 
			this->CoursetextBox->Location = System::Drawing::Point(195, 9);
			this->CoursetextBox->Name = L"CoursetextBox";
			this->CoursetextBox->Size = System::Drawing::Size(284, 28);
			this->CoursetextBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(505, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GradeQuery::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����Ҫ��ѯ���ۺϳɼ�";
			// 
			// GradetextBox
			// 
			this->GradetextBox->Location = System::Drawing::Point(195, 62);
			this->GradetextBox->Name = L"GradetextBox";
			this->GradetextBox->Size = System::Drawing::Size(284, 28);
			this->GradetextBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"����Ҫ��ѯ��ƽʱ�ɼ�";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"����Ҫ��ѯ��ʵ��ɼ�";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"����Ҫ��ѯ�ľ���ɼ�";
			// 
			// RGradetextBox
			// 
			this->RGradetextBox->Location = System::Drawing::Point(195, 115);
			this->RGradetextBox->Name = L"RGradetextBox";
			this->RGradetextBox->Size = System::Drawing::Size(284, 28);
			this->RGradetextBox->TabIndex = 4;
			// 
			// EGradetextBox
			// 
			this->EGradetextBox->Location = System::Drawing::Point(195, 168);
			this->EGradetextBox->Name = L"EGradetextBox";
			this->EGradetextBox->Size = System::Drawing::Size(284, 28);
			this->EGradetextBox->TabIndex = 4;
			// 
			// PGradetextBox
			// 
			this->PGradetextBox->Location = System::Drawing::Point(195, 221);
			this->PGradetextBox->Name = L"PGradetextBox";
			this->PGradetextBox->Size = System::Drawing::Size(284, 28);
			this->PGradetextBox->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(505, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 38);
			this->button2->TabIndex = 8;
			this->button2->Text = L"ȷ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GradeQuery::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(505, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 38);
			this->button3->TabIndex = 9;
			this->button3->Text = L"ȷ��";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GradeQuery::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(505, 212);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 42);
			this->button4->TabIndex = 10;
			this->button4->Text = L"ȷ��";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GradeQuery::button4_Click_1);
			// 
			// GradeQuery
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 259);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PGradetextBox);
			this->Controls->Add(this->EGradetextBox);
			this->Controls->Add(this->RGradetextBox);
			this->Controls->Add(this->GradetextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CoursetextBox);
			this->Controls->Add(this->label1);
			this->Name = L"GradeQuery";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GradeQuery";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ course = CoursetextBox->Text; // ��ȡ�γ�����
		String^ grade = GradetextBox->Text;   // ��ȡҪ��ѯ���ۺϳɼ�
		double ggrade = Convert::ToDouble(grade); // ����õ��ۺϳɼ�����������ת��Ϊdouble��

		// �������ݿ�
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
		sqlConnection->Open();
		SqlCommand^ sqlCommand = gcnew SqlCommand();

		// �ӿγ���Ϣ���а��иóɼ�������ѧ����Ϣ����
		SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM "+course+" WHERE �ۺϳɼ� = " + ggrade, sqlConnection);
		DataTable^ myDataTable = gcnew DataTable();
		myDataAdapter->Fill(myDataTable);
		// �����������ѧ����Ϣ
		for (int i = 0; i < myDataTable->Rows->Count; i++)
		{
			String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
				myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() + 
				", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

			MessageBox::Show("ѧ��������ѧ�ţ�ƽʱ�ɼ���ʵ��ɼ�������ɼ����ۺϳɼ���Ӧ��ѧ�ֱַ�Ϊ��" + tableName);
		}
		// �ر����ݿ�
		sqlConnection->Close();
	}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // ��ȡ�γ�����
	String^ rgrade = RGradetextBox->Text;   // ��ȡҪ��ѯ���ۺϳɼ�
	double ggrade = Convert::ToDouble(rgrade); // ����õ��ۺϳɼ�����������ת��Ϊdouble��

	// �������ݿ�
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// �ӿγ���Ϣ���а��иóɼ�������ѧ����Ϣ����
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE ƽʱ�ɼ� = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// �����������ѧ����Ϣ
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("ѧ��������ѧ�ţ�ƽʱ�ɼ���ʵ��ɼ�������ɼ����ۺϳɼ���Ӧ��ѧ�ֱַ�Ϊ��" + tableName);
	}
	// �ر����ݿ�
	sqlConnection->Close();
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // ��ȡ�γ�����
	String^ egrade = EGradetextBox->Text;   // ��ȡҪ��ѯ���ۺϳɼ�
	double ggrade = Convert::ToDouble(egrade); // ����õ��ۺϳɼ�����������ת��Ϊdouble��

	// �������ݿ�
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// �ӿγ���Ϣ���а��иóɼ�������ѧ����Ϣ����
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE ʵ��ɼ� = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// �����������ѧ����Ϣ
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("ѧ��������ѧ�ţ�ƽʱ�ɼ���ʵ��ɼ�������ɼ����ۺϳɼ���Ӧ��ѧ�ֱַ�Ϊ��" + tableName);
	}
	// �ر����ݿ�
	sqlConnection->Close();
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // ��ȡ�γ�����
	String^ pgrade = PGradetextBox->Text;   // ��ȡҪ��ѯ���ۺϳɼ�
	double ggrade = Convert::ToDouble(pgrade); // ����õ��ۺϳɼ�����������ת��Ϊdouble��

	// �������ݿ�
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// �ӿγ���Ϣ���а��иóɼ�������ѧ����Ϣ����
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE ����ɼ� = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// �����������ѧ����Ϣ
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("ѧ��������ѧ�ţ�ƽʱ�ɼ���ʵ��ɼ�������ɼ����ۺϳɼ���Ӧ��ѧ�ֱַ�Ϊ��" + tableName);
	}
	// �ر����ݿ�
	sqlConnection->Close();
}
};
}
