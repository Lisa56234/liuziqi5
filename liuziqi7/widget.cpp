#include "widget.h"
#include "ui_widget.h"
#include"manvsman.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("://Image/untitled.png"));  //导入背景图片
    //ui->label_2->setPixmap(QPixmap("://Image/614356656556334208.png"));
    setMaximumSize(374,497);  //设置窗口大小
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButton_mm_clicked(){
  Manvsman *mm=new Manvsman();
  mm->show();
}
