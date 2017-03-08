#include "CommonQuery.h"
#include "GradeQuery.h"
#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Query 摘要
	/// </summary>
	public ref class Query : public System::Windows::Forms::Form
	{
	public:
		Query(void)
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
		~Query()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"基本信息查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Query::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"成绩查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Query::button2_Click);
			// 
			// Query
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 343);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Query";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Query";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		CommonQuery^ commonQuery = gcnew CommonQuery();
		commonQuery->Visible = false;
		commonQuery->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		GradeQuery^ gradeQuery = gcnew GradeQuery();
		gradeQuery->Visible = false;
		gradeQuery->ShowDialog();
	}
	};
}
