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
	/// CommonQuery 摘要
	/// </summary>
	public ref class CommonQuery : public System::Windows::Forms::Form
	{
	public:
		CommonQuery(void)
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
		~CommonQuery()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  IDQuerytextBox;
	private: System::Windows::Forms::TextBox^  NameQuerytextBox;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  DormQuerytextBox;

	private: System::Windows::Forms::Button^  button3;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IDQuerytextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameQuerytextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DormQuerytextBox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名查询";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"学号查询";
			// 
			// IDQuerytextBox
			// 
			this->IDQuerytextBox->Location = System::Drawing::Point(145, 146);
			this->IDQuerytextBox->Name = L"IDQuerytextBox";
			this->IDQuerytextBox->Size = System::Drawing::Size(206, 28);
			this->IDQuerytextBox->TabIndex = 1;
			// 
			// NameQuerytextBox
			// 
			this->NameQuerytextBox->Location = System::Drawing::Point(145, 69);
			this->NameQuerytextBox->Name = L"NameQuerytextBox";
			this->NameQuerytextBox->Size = System::Drawing::Size(206, 28);
			this->NameQuerytextBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(386, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CommonQuery::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(386, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CommonQuery::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"宿舍查询";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 28);
			this->textBox1->TabIndex = 1;
			// 
			// DormQuerytextBox
			// 
			this->DormQuerytextBox->Location = System::Drawing::Point(145, 232);
			this->DormQuerytextBox->Name = L"DormQuerytextBox";
			this->DormQuerytextBox->Size = System::Drawing::Size(206, 28);
			this->DormQuerytextBox->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(386, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 41);
			this->button3->TabIndex = 4;
			this->button3->Text = L"确定";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CommonQuery::button3_Click);
			// 
			// CommonQuery
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 334);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->NameQuerytextBox);
			this->Controls->Add(this->DormQuerytextBox);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->IDQuerytextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CommonQuery";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CommonQuery";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ nameQuery = NameQuerytextBox->Text; // 获取要查询的学生姓名

		// 连接数据库
		SqlConnection^ sqlConnection = gcnew SqlConnection();
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
		sqlConnection->Open();
		SqlCommand^ sqlCommand = gcnew SqlCommand();

		// 从学生信息表中把所有学生信息调出
		SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM 学生信息 WHERE 姓名 = '"+nameQuery+"'", sqlConnection);
		DataTable^ myDataTable = gcnew DataTable();
		myDataAdapter->Fill(myDataTable);

		// 输出检索到的学生信息
		for (int i = 0; i < myDataTable->Rows->Count; i++)
		{
			String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString()+ ", " +
									myDataTable->Select()[i][2]->ToString()+ ", " +myDataTable->Select()[i][3]->ToString() + "\n";
			
			MessageBox::Show("学生姓名，学号，宿舍号，学分分别为：" + tableName);
		}
		// 关闭数据库
		sqlConnection->Close();
	}       

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ IDQuery = IDQuerytextBox->Text; // 获取要查询学生的学号

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// 从学生信息表中把所有学生信息调出
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM 学生信息 WHERE 学号 = '" + IDQuery + "'", sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);

	// 输出检索到的学生信息
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + "\n";

		MessageBox::Show("学生姓名，学号，宿舍号，学分分别为：" + tableName);
	}
	// 关闭数据库
	sqlConnection->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ dormQuery = DormQuerytextBox->Text; // 获取要查询的学生宿舍

	// 连接数据库
	SqlConnection^ sqlConnection = gcnew SqlConnection();
	sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";
	sqlConnection->Open();
	SqlCommand^ sqlCommand = gcnew SqlCommand();

	// 从学生信息表中把所有学生信息调出
	SqlDataAdapter^ myDataAdapter = gcnew SqlDataAdapter("SELECT * FROM 学生信息 WHERE 宿舍号 = '" + dormQuery + "'", sqlConnection);
	DataTable^ myDataTable = gcnew DataTable();
	myDataAdapter->Fill(myDataTable);

	// 输出检索到的学生信息
	for (int i = 0; i < myDataTable->Rows->Count; i++)
	{
		String^ tableName = myDataTable->Select()[i][0]->ToString() + ", " + myDataTable->Select()[i][1]->ToString() + ", " +
			myDataTable->Select()[i][2]->ToString() + ", " + myDataTable->Select()[i][3]->ToString() + "\n";

		MessageBox::Show("学生姓名，学号，宿舍号，学分分别为：" + tableName);
	}
	// 关闭数据库
	sqlConnection->Close();
}
};
}
