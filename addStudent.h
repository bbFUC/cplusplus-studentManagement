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
	/// addStudent ժҪ
	/// </summary>
	public ref class addStudent : public System::Windows::Forms::Form
	{
	public:
		addStudent(void)
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
		~addStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label2;

	protected:

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  nametextBox;

	private: System::Windows::Forms::TextBox^  IDtextBox;
	private: System::Windows::Forms::TextBox^  coursenumbertextBox;

	private: System::Windows::Forms::TextBox^  coursenametextBox;

	private: System::Windows::Forms::TextBox^  credittextBox;
	private: System::Windows::Forms::TextBox^  RgtextBox;
	private: System::Windows::Forms::TextBox^  EgtextBox;











	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  PgtextBox;
	private: System::Windows::Forms::Button^  Button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  DormnumbertextBox;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nametextBox = (gcnew System::Windows::Forms::TextBox());
			this->IDtextBox = (gcnew System::Windows::Forms::TextBox());
			this->coursenumbertextBox = (gcnew System::Windows::Forms::TextBox());
			this->coursenametextBox = (gcnew System::Windows::Forms::TextBox());
			this->credittextBox = (gcnew System::Windows::Forms::TextBox());
			this->RgtextBox = (gcnew System::Windows::Forms::TextBox());
			this->EgtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PgtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DormnumbertextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ѧ��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"�γ̱��";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"�γ�����";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ѧ��";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ƽʱ�ɼ�";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 18);
			this->label7->TabIndex = 6;
			this->label7->Text = L"ʵ��ɼ�";
			// 
			// nametextBox
			// 
			this->nametextBox->Location = System::Drawing::Point(125, 16);
			this->nametextBox->Name = L"nametextBox";
			this->nametextBox->Size = System::Drawing::Size(236, 28);
			this->nametextBox->TabIndex = 7;
			// 
			// IDtextBox
			// 
			this->IDtextBox->Location = System::Drawing::Point(125, 57);
			this->IDtextBox->Name = L"IDtextBox";
			this->IDtextBox->Size = System::Drawing::Size(236, 28);
			this->IDtextBox->TabIndex = 8;
			// 
			// coursenumbertextBox
			// 
			this->coursenumbertextBox->Location = System::Drawing::Point(125, 95);
			this->coursenumbertextBox->Name = L"coursenumbertextBox";
			this->coursenumbertextBox->Size = System::Drawing::Size(236, 28);
			this->coursenumbertextBox->TabIndex = 9;
			// 
			// coursenametextBox
			// 
			this->coursenametextBox->Location = System::Drawing::Point(125, 133);
			this->coursenametextBox->Name = L"coursenametextBox";
			this->coursenametextBox->Size = System::Drawing::Size(236, 28);
			this->coursenametextBox->TabIndex = 10;
			// 
			// credittextBox
			// 
			this->credittextBox->Location = System::Drawing::Point(125, 171);
			this->credittextBox->Name = L"credittextBox";
			this->credittextBox->Size = System::Drawing::Size(236, 28);
			this->credittextBox->TabIndex = 11;
			// 
			// RgtextBox
			// 
			this->RgtextBox->Location = System::Drawing::Point(125, 211);
			this->RgtextBox->Name = L"RgtextBox";
			this->RgtextBox->Size = System::Drawing::Size(236, 28);
			this->RgtextBox->TabIndex = 12;
			// 
			// EgtextBox
			// 
			this->EgtextBox->Location = System::Drawing::Point(125, 250);
			this->EgtextBox->Name = L"EgtextBox";
			this->EgtextBox->Size = System::Drawing::Size(236, 28);
			this->EgtextBox->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"����ɼ�";
			// 
			// PgtextBox
			// 
			this->PgtextBox->Location = System::Drawing::Point(125, 292);
			this->PgtextBox->Name = L"PgtextBox";
			this->PgtextBox->Size = System::Drawing::Size(236, 28);
			this->PgtextBox->TabIndex = 15;
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(125, 408);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(133, 37);
			this->Button1->TabIndex = 16;
			this->Button1->Text = L"ȷ��";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &addStudent::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(41, 335);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 18);
			this->label9->TabIndex = 17;
			this->label9->Text = L"�����";
			// 
			// DormnumbertextBox
			// 
			this->DormnumbertextBox->Location = System::Drawing::Point(125, 332);
			this->DormnumbertextBox->Name = L"DormnumbertextBox";
			this->DormnumbertextBox->Size = System::Drawing::Size(236, 28);
			this->DormnumbertextBox->TabIndex = 18;
			// 
			// addStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 457);
			this->Controls->Add(this->DormnumbertextBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Button1);
			this->Controls->Add(this->PgtextBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->EgtextBox);
			this->Controls->Add(this->RgtextBox);
			this->Controls->Add(this->credittextBox);
			this->Controls->Add(this->coursenametextBox);
			this->Controls->Add(this->coursenumbertextBox);
			this->Controls->Add(this->IDtextBox);
			this->Controls->Add(this->nametextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"addStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"addStudent";
			this->Load += gcnew System::EventHandler(this, &addStudent::addStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addStudent_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name = nametextBox->Text;					// ��ȡѧ������
	String^ id = IDtextBox->Text;						// ��ȡѧ��ѧ��
	String^ coursenumber = coursenumbertextBox->Text;   // ��ȡ�γ̱��
	String^ coursename = coursenametextBox->Text;		// ��ȡ�γ�����
	String^ credit = credittextBox->Text;				// ��ȡ�γ�ѧ��
	String^ rg = RgtextBox->Text;						// ��ȡƽʱ�ɼ�
	String^ eg = EgtextBox->Text;						// ��ȡʵ��ɼ�
	String^ pg = PgtextBox->Text;						// ��ȡ����ɼ�
	String^ dn = DormnumbertextBox->Text;				// ��ȡ�����
	double c = Convert::ToDouble(credit);  // ��ѧ�ִ�String^����ת����double����
	double rgrade = Convert::ToDouble(rg); // ��ƽʱ�ɼ���String^����ת����double����
	double egrade = Convert::ToDouble(eg); // ��ʵ��ɼ���String^����ת����double����
	double pgrade = Convert::ToDouble(pg); // ������ɼ���String^����ת����double����

	double ggrade; // �ۺϳɼ�
	// �����ۺϳɼ�
	if (egrade == -1.0)
		ggrade = 0.3 * rgrade + 0.7 * pgrade;
	else
		ggrade = 0.15 * rgrade + 0.15 * egrade + 0.7 * pgrade;

	double finalcredit; // Ӧ��ѧ��
	// ����Ӧ��ѧ��
	if (ggrade <= 100.0 && ggrade >= 90.0)
		finalcredit = c;
	else if (ggrade < 90.0 && ggrade >= 80.0)
		finalcredit = c * 0.8;
	else if (ggrade < 80.0 && ggrade >= 70.0)
		finalcredit = c * 0.75;
	else if (ggrade < 70.0 && ggrade >= 60.0)
		finalcredit = c * 0.6;
	else
		finalcredit = 0;

	// �������ݿ�
	SqlConnection^ sqlConnection = gcnew SqlConnection();  // �������ݿ����Ӷ���
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";  // �뱾�����ݿ⽨������
	sqlConnection->Open();  // �����ݿ�����
	SqlCommand^ sqlCommand = gcnew SqlCommand();  // �������ݿ��������

	// �жϼ���¼���ѧ���Ƿ����ڱ���¼��
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT ѧ�� FROM ѧ����Ϣ WHERE ѧ�� = '" + id + "'", sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);  // ������װ��DataTable�ṹ��
	double currentcredit = 0.0;
	if (myDataTable->Rows->Count == 0) { // ��ѧ����Ϣ֮ǰ��δ¼���
		// ��ѧ��������Ϣ����ѧ����Ϣ��
		sqlCommand->CommandText = "INSERT INTO ѧ����Ϣ (����, ѧ��, �����, ѧ��) VALUES ('" + name + "', '" + id + "', '" + dn + "', " + currentcredit + ")";
		sqlCommand->Connection = sqlConnection;
		sqlCommand->ExecuteNonQuery();
	}
	// �޸�ѧ������ѧ��
	SqlDataAdapter^ myAdapter = gcnew SqlDataAdapter("SELECT ѧ�� FROM ѧ����Ϣ WHERE ѧ�� = '" + id + "'", sqlConnection);
	DataTable^ myTable = gcnew DataTable();
	myAdapter->Fill(myTable);
	String^ currentCredit = myTable->Select()[0][0]->ToString();
	currentcredit = Convert::ToDouble(currentCredit);
	currentcredit += finalcredit;
	sqlCommand->CommandText = "UPDATE ѧ����Ϣ SET ѧ�� = " + currentcredit + " WHERE ѧ�� = '" + id + "'";
	sqlCommand->Connection = sqlConnection;
	sqlCommand->ExecuteNonQuery();
	


	// ��ѧ���ĸ���ɼ�¼���Ѿ������Ŀγ���Ϣ����
	sqlCommand->CommandText = "INSERT INTO " + coursename + " VALUES ('" + name + "', '" + id + "', " + rgrade + ", " + egrade + ", " + pgrade + ", " + ggrade + ", " + finalcredit + ")";
	sqlCommand->Connection = sqlConnection;
	sqlCommand->ExecuteNonQuery();

	MessageBox::Show("ѧ����Ϣ��¼��");
	sqlConnection->Close();
}
};
}
