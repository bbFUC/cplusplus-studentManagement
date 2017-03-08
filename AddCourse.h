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
	/// AddCourse 摘要
	/// </summary>
	public ref class AddCourse : public System::Windows::Forms::Form
	{
	public:
		AddCourse(void)
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{	//初始化界面的组件
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
			this->label1->Text = L"课程名称";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"课程编号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"学分";
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
			this->button1->Text = L"确定";
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
		String^ coursename = CourseNametextBox->Text;    // 获取课程名字
		String^ courseid = CourseIDtextBox->Text;	     // 获取课程编号
		String^ coursecredit = CourseCredittextBox->Text;// 获取课程学分
		double credit = Convert::ToDouble(coursecredit); // 将学分从String^类型转换到double类型
		

		// 连接数据库
		SqlConnection^ sqlConnection = gcnew SqlConnection(); // 创建数据库连接对象
		sqlConnection->ConnectionString = "Server=ROCK;Database=sdb;Integrated Security=true";  // 与本地数据库建立连接
		sqlConnection->Open();  // 打开数据库连接
		SqlCommand^ sqlCommand = gcnew SqlCommand();  // 建立数据库命令对象

		// 给添加的新课程在数据库中建一个新表，来记录上该课的学生信息
		// 输入新的sql命令
		sqlCommand->CommandText = "CREATE TABLE " + coursename + "( 姓名 VARCHAR(50), 学号 VARCHAR(50), 平时成绩 FLOAT, 实验成绩 FLOAT, 卷面成绩 FLOAT, 综合成绩 FLOAT, 应得学分 FLOAT )";
		sqlCommand->Connection = sqlConnection;  // 将命令同数据库连接
		sqlCommand->ExecuteNonQuery();  // 执行sql命令
		

		// 将新创建的课程的信息插入课程信息表
		sqlCommand->CommandText = "INSERT INTO 课程信息 VALUES ('" + coursename + "', '" + courseid + "', " + credit +")";
		sqlCommand->Connection = sqlConnection;
		sqlCommand->ExecuteNonQuery();

		MessageBox::Show("课程已添加");
		// 关闭数据库
		sqlConnection->Close();
	}
};
}
