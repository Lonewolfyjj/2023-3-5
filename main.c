#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    //初始化自定义成员
    num = 0;
    temp = 0;
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::on_pushButton_1_clicked()
{
    if(num < 1000000000000000)
	{
		num = num*10 +1;
		ui->lcdNumber->display(QString("%1").arg(num));
		
	}
	//使用num替换%1 ---- 第一个参数
   
}

void Calculator::on_pushButton_2_clicked()
{
    if(num<100000000000000){
        num = num*10+2;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_3_clicked()
{
    if(num<100000000000000){
        num = num*10+3;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_4_clicked()
{
    if(num<100000000000000){
        num = num*10+4;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_5_clicked()
{
    if(num<100000000000000){
        num = num*10+5;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_6_clicked()
{
    if(num<100000000000000){
        num = num*10+6;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_7_clicked()
{
    if(num<100000000000000){
        num = num*10+7;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_8_clicked()
{
    if(num<100000000000000){
        num = num*10+8;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_9_clicked()
{
    if(num<100000000000000){
        num = num*10+9;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_0_clicked()
{
    if(num<100000000000000){
        num = num*10;
        //显示
        ui->lcdNumber->display(QString("%1").arg(num));//使用num替换%1 ---- 第一个参数
    }
}

void Calculator::on_pushButton_clear_clicked()
{
    num = 0;
    temp = 0;

    ui->lcdNumber->display(0);
}

void Calculator::on_pushButton_equal_clicked()
{
    switch(op){               
        case oper_add://加法
            num = temp+num;
            break;
        case oper_sub:
            num = temp-num;
            break;
        case oper_mul:
            num = temp*num;
            break;
        case oper_div:
            if(num==0){
                ui->lcdNumber->display("Err");
                num = 0;
                temp = 0;
                return;
            }
            num = temp/num;
            break;
    }

    //操作数清0
    temp = 0;
    //显示结果
    if(num>999999999999999||num<-99999999999999){
        ui->lcdNumber->display("Err");
        num = 0;
    }
    else
        ui->lcdNumber->display(QString("%1").arg(num));
}

void Calculator::on_pushButton_add_clicked()         // 2+3+2
{
    //temp不为0，前面已经输入过其他运算符
    if(temp){
        on_pushButton_equal_clicked();
    }
    //记录加法
    op = oper_add;
    //把当前数字计入第一操作数
    temp = num;
    //num清0
    num = 0;
}

void Calculator::on_pushButton_sub_clicked()
{
    //temp不为0，前面已经输入过其他运算符
    if(temp){
        on_pushButton_equal_clicked();
    }
    //记录减法
    op = oper_sub;
    //把当前数字计入第一操作数
    temp = num;
    //num清0
    num = 0;
}

void Calculator::on_pushButton_mul_clicked()
{
    //temp不为0，前面已经输入过其他运算符
    if(temp){
        on_pushButton_equal_clicked();
    }
    //记录乘法
    op = oper_mul;
    //把当前数字计入第一操作数
    temp = num;
    //num清0
    num = 0;
}

void Calculator::on_pushButton_div_clicked()
{
    //temp不为0，前面已经输入过其他运算符
    if(temp){
        on_pushButton_equal_clicked();
    }
    //记录除法
    op = oper_div;
    //把当前数字计入第一操作数
    temp = num;
    //num清0
    num = 0;
}

