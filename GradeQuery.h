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
	/// GradeQuery 摘要
	/// </summary>
	public ref class GradeQuery : public System::Windows::Forms::Form
	{
	public:
		GradeQuery(void)
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
			this->label1->Text = L"输入要查询的课程";
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
			this->button1->Text = L"确定";
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
			this->label2->Text = L"输入要查询的综合成绩";
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
			this->label3->Text = L"输入要查询的平时成绩";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"输入要查询的实验成绩";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"输入要查询的卷面成绩";
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
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GradeQuery::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(505, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 38);
			this->button3->TabIndex = 9;
			this->button3->Text = L"确定";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GradeQuery::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(505, 212);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 42);
			this->button4->TabIndex = 10;
			this->button4->Text = L"确定";
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
		String^ course = CoursetextBox->Text; // 获取课程名称
		String^ grade = GradetextBox->Text;   // 获取要查询的综合成绩
		double ggrade = Convert::ToDouble(grade); // 将获得的综合成绩的数据类型转换为double型

		// 连接数据库
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
		sqlConnection->Open();
		SqlCommand^ sqlCommand = gcnew SqlCommand();

		// 从课程信息表中把有该成绩的所有学生信息调出
		SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM "+course+" WHERE 综合成绩 = " + ggrade, sqlConnection);
		DataTable^ myDataTable = gcnew DataTable();
		myDataAdapter->Fill(myDataTable);
		// 输出检索到的学生信息
		for (int i = 0; i < myDataTable->Rows->Count; i++)
		{
			String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
				myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() + 
				", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

			MessageBox::Show("学生姓名，学号，平时成绩，实验成绩，卷面成绩，综合成绩，应得学分分别为：" + tableName);
		}
		// 关闭数据库
		sqlConnection->Close();
	}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // 获取课程名称
	String^ rgrade = RGradetextBox->Text;   // 获取要查询的综合成绩
	double ggrade = Convert::ToDouble(rgrade); // 将获得的综合成绩的数据类型转换为double型

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// 从课程信息表中把有该成绩的所有学生信息调出
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE 平时成绩 = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// 输出检索到的学生信息
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("学生姓名，学号，平时成绩，实验成绩，卷面成绩，综合成绩，应得学分分别为：" + tableName);
	}
	// 关闭数据库
	sqlConnection->Close();
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // 获取课程名称
	String^ egrade = EGradetextBox->Text;   // 获取要查询的综合成绩
	double ggrade = Convert::ToDouble(egrade); // 将获得的综合成绩的数据类型转换为double型

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// 从课程信息表中把有该成绩的所有学生信息调出
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE 实验成绩 = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// 输出检索到的学生信息
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("学生姓名，学号，平时成绩，实验成绩，卷面成绩，综合成绩，应得学分分别为：" + tableName);
	}
	// 关闭数据库
	sqlConnection->Close();
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ course = CoursetextBox->Text; // 获取课程名称
	String^ pgrade = PGradetextBox->Text;   // 获取要查询的综合成绩
	double ggrade = Convert::ToDouble(pgrade); // 将获得的综合成绩的数据类型转换为double型

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// 从课程信息表中把有该成绩的所有学生信息调出
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + course + " WHERE 卷面成绩 = " + ggrade, sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);
	// 输出检索到的学生信息
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + ", " + myDataTable->Select()[i][4]->ToString() +
			", " + myDataTable->Select()[i][5]->ToString() + ", " + myDataTable->Select()[i][6]->ToString() + "\n";

		MessageBox::Show("学生姓名，学号，平时成绩，实验成绩，卷面成绩，综合成绩，应得学分分别为：" + tableName);
	}
	// 关闭数据库
	sqlConnection->Close();
}
};
}
