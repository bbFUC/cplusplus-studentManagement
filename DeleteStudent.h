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
	/// DeleteStudent ժҪ
	/// </summary>
	public ref class DeleteStudent : public System::Windows::Forms::Form
	{
	public:
		DeleteStudent(void)
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
		~DeleteStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  DeletetextBox;
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
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DeletetextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����뽫Ҫɾ����ѧ��ѧ��";
			// 
			// DeletetextBox
			// 
			this->DeletetextBox->Location = System::Drawing::Point(103, 86);
			this->DeletetextBox->Name = L"DeletetextBox";
			this->DeletetextBox->Size = System::Drawing::Size(296, 28);
			this->DeletetextBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(198, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteStudent::button1_Click);
			// 
			// DeleteStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 260);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DeletetextBox);
			this->Controls->Add(this->label1);
			this->Name = L"DeleteStudent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ id = DeletetextBox->Text; // ��ȡ��Ҫɾ����ѧ����ѧ��

		// �������ݿ�
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
		sqlConnection->Open();
		SqlCommand^ sqlCommand = gcnew SqlCommand();

		// ����ѧ����Ϣ��ѧ����Ϣ����ɾ��
		sqlCommand->CommandText = "DELETE FROM ѧ����Ϣ WHERE ѧ�� = '" + id + "'";
		sqlCommand->Connection = sqlConnection;
		sqlCommand->ExecuteNonQuery();
		
		// �ӿγ���Ϣ���а����пγ̵���
		SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT �γ��� FROM �γ���Ϣ", sqlConnection);
		DataTable^ myDataTable = gcnew DataTable();
		myDataAdapter->Fill(myDataTable);
		// ����ÿ���γ̲���Ҫɾ��ѧ����ѡ�Ŀγ��е�ѧ����Ϣ��ɾ��
		for (int i = 0; i < myDataTable->Rows->Count; i++)
		{
			String^ tableName = myDataTable->Select()[i][0]->ToString();
			sqlCommand->CommandText = "DELETE FROM " + tableName + " WHERE ѧ�� = '" + id + "'";
			sqlCommand->ExecuteNonQuery();
		}

		MessageBox::Show("ѧ����Ϣ��ɾ��");
		// �ر����ݿ�
		sqlConnection->Close();
	}
	};
}
