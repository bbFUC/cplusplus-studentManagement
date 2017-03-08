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
	/// AddCourse ժҪ
	/// </summary>
	public ref class AddCourse : public System::Windows::Forms::Form
	{
	public:
		AddCourse(void)
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
		~AddCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  CourseNametextBox;
	private: System::Windows::Forms::TextBox^  CourseIDtextBox;
	private: System::Windows::Forms::TextBox^  CourseCredittextBox;
	private: System::Windows::Forms::Button^  button1;

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
		{	//��ʼ����������
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CourseNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseIDtextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseCredittextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�γ�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�γ̱��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ѧ��";
			// 
			// CourseNametextBox
			// 
			this->CourseNametextBox->Location = System::Drawing::Point(145, 27);
			this->CourseNametextBox->Name = L"CourseNametextBox";
			this->CourseNametextBox->Size = System::Drawing::Size(224, 28);
			this->CourseNametextBox->TabIndex = 3;
			// 
			// CourseIDtextBox
			// 
			this->CourseIDtextBox->Location = System::Drawing::Point(145, 102);
			this->CourseIDtextBox->Name = L"CourseIDtextBox";
			this->CourseIDtextBox->Size = System::Drawing::Size(224, 28);
			this->CourseIDtextBox->TabIndex = 4;
			// 
			// CourseCredittextBox
			// 
			this->CourseCredittextBox->Location = System::Drawing::Point(145, 176);
			this->CourseCredittextBox->Name = L"CourseCredittextBox";
			this->CourseCredittextBox->Size = System::Drawing::Size(224, 28);
			this->CourseCredittextBox->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCourse::button1_Click);
			// 
			// AddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 315);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CourseCredittextBox);
			this->Controls->Add(this->CourseIDtextBox);
			this->Controls->Add(this->CourseNametextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddCourse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddCourse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ coursename = CourseNametextBox->Text;    // ��ȡ�γ�����
		String^ courseid = CourseIDtextBox->Text;	     // ��ȡ�γ̱��
		String^ coursecredit = CourseCredittextBox->Text;// ��ȡ�γ�ѧ��
		double credit = Convert::ToDouble(coursecredit); // ��ѧ�ִ�String^����ת����double����
		

		// �������ݿ�
		SqlConnection^ sqlConnection = gcnew SqlConnection(); // �������ݿ����Ӷ���
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";  // �뱾�����ݿ⽨������
		sqlConnection->Open();  // �����ݿ�����
		SqlCommand^ sqlCommand = gcnew SqlCommand();  // �������ݿ��������

		// ����ӵ��¿γ������ݿ��н�һ���±�����¼�ϸÿε�ѧ����Ϣ
		// �����µ�sql����
		sqlCommand->CommandText = "CREATE TABLE " + coursename + "( ���� VARCHAR(50), ѧ�� VARCHAR(50), ƽʱ�ɼ� FLOAT, ʵ��ɼ� FLOAT, ����ɼ� FLOAT, �ۺϳɼ� FLOAT, Ӧ��ѧ�� FLOAT )";
		sqlCommand->Connection = sqlConnection;  // ������ͬ���ݿ�����
		sqlCommand->ExecuteNonQuery();  // ִ��sql����
		

		// ���´����Ŀγ̵���Ϣ����γ���Ϣ��
		sqlCommand->CommandText = "INSERT INTO �γ���Ϣ VALUES ('" + coursename + "', '" + courseid + "', " + credit +")";
		sqlCommand->Connection = sqlConnection;
		sqlCommand->ExecuteNonQuery();

		MessageBox::Show("�γ������");
		// �ر����ݿ�
		sqlConnection->Close();
	}
};
}
