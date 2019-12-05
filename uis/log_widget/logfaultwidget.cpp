#include "logfaultwidget.h"
#include "ui_logfaultwidget.h"

LogFaultWidget::LogFaultWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogFaultWidget)
{
    ui->setupUi(this);

    ui->dateEdit_begin->setDate(QDate::currentDate().addDays(-1));
    ui->dateEdit_end->setDate(QDate::currentDate());

    ui->tableWidget->horizontalHeader()->setResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setResizeMode(1, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setResizeMode(2, QHeaderView::ResizeToContents);

    connect(ui->pushButton_search, SIGNAL(clicked()),
            this, SLOT(slotSearch()));
    connect(ui->pushButton_export, SIGNAL(clicked()),
            this, SLOT(slotExport()));

    refresh();
}

LogFaultWidget::~LogFaultWidget()
{
    delete ui;
}

void LogFaultWidget::refresh()
{
    QList<Log> logs = LogData::getIns()->getLog(LOG_FAULT);
    refreshUI(logs);
}

void LogFaultWidget::refreshUI(const QList<Log> logs)
{
    while(ui->tableWidget->rowCount()){
        ui->tableWidget->removeRow(0);
    }

    for(int i = 0; i < logs.count(); i++)
    {
        Log log = logs.at(i);
        ui->tableWidget->insertRow(i);
        QTableWidgetItem * item = new QTableWidgetItem(QString::number(i));
        ui->tableWidget->setItem(i, 0, item);
        item = new QTableWidgetItem(log.dt.toString(DATETIME_FORMAT));
        ui->tableWidget->setItem(i,1,item);
        item = new QTableWidgetItem(log.detail);
        ui->tableWidget->setItem(i,2,item);
        item = new QTableWidgetItem(log.notes);
        ui->tableWidget->setItem(i,3,item);
    }
}

void LogFaultWidget::slotSearch()
{
    QDate date_begin = ui->dateEdit_begin->date();
    QDate date_end = ui->dateEdit_end->date();

    QDateTime dt_begin = QDateTime(date_begin,QTime(0,0,0));
    QDateTime dt_end = QDateTime(date_end,QTime(23,59,59));

    QList<Log> logs = LogData::getIns()->getLog(LOG_FAULT,dt_begin, dt_end);

    refreshUI(logs);
}

void LogFaultWidget::slotExport()
{
    //
}
