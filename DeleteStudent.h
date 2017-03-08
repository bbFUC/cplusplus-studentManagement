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
	/// DeleteStudent 摘要
	/// </summary>
	public ref class DeleteStudent : public System::Windows::Forms::Form
	{
	public:
		DeleteStudent(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
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
			this->label1->Text = L"请输入将要删除的学生学号";
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
			this->button1->Text = L"确认";
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
		String^ id = DeletetextBox->Text; // 获取将要删除的学生的学号

		// 连接数据库
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
		sqlConnection->Open();
		SqlCommand^ sqlCommand = gcnew SqlCommand();

		// 将该学生信息从学生信息表中删除
		sqlCommand->CommandText = "DELETE FROM 学生信息 WHERE 学号 = '" + id + "'";
		sqlCommand->Connection = sqlConnection;
		sqlCommand->ExecuteNonQuery();
		
		// 从课程信息表中把所有课程调出
		SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT 课程名 FROM 课程信息", sqlConnection);
		DataTable^ myDataTable = gcnew DataTable();
		myDataAdapter->Fill(myDataTable);
		// 遍历每个课程并把要删除学生所选的课程中的学生信息都删除
		for (int i = 0; i < myDataTable->Rows->Count; i++)
		{
			String^ tableName = myDataTable->Select()[i][0]->ToString();
			sqlCommand->CommandText = "DELETE FROM " + tableName + " WHERE 学号 = '" + id + "'";
			sqlCommand->ExecuteNonQuery();
		}

		MessageBox::Show("学生信息已删除");
		// 关闭数据库
		sqlConnection->Close();
	}
	};
}
