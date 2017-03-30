/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QGridLayout *_2;
    QStackedWidget *mainStack;
    QWidget *basicPage;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *basicPageClockIn;
    QPushButton *basicPageClockOut;
    QPushButton *basicPageAdvanced;
    QWidget *advPage;
    QGridLayout *gridLayout_7;
    QTabWidget *MainTabs;
    QWidget *EmployeeTab;
    QGridLayout *gridLayout_4;
    QTableView *EmployeeView;
    QWidget *ProjectTab;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QTableView *ProjectView;
    QTableView *ProjectItemView;
    QWidget *ItemTab;
    QGridLayout *gridLayout_6;
    QTableView *ItemView;
    QWidget *ShiftTab;
    QGridLayout *gridLayout_3;
    QTableView *ShiftView;
    QTabWidget *HeaderTabs;
    QWidget *EmployeeSettings;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *EmployeeAdd;
    QPushButton *EmployeeArchive;
    QPushButton *EmployeeDelete;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QCheckBox *EmployeeName;
    QCheckBox *EmployeeActive;
    QCheckBox *EmployeeShiftCount;
    QCheckBox *EmployeeAdminStatus;
    QCheckBox *EmployeePin;
    QCheckBox *EmployeeId;
    QCheckBox *EmployeeCurrent;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *AllRadio;
    QRadioButton *CurrentRadio;
    QRadioButton *PastRadio;
    QSpacerItem *horizontalSpacer_4;
    QWidget *ProjectsSettings;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *ProjectAdd;
    QPushButton *ProjectDelete;
    QPushButton *ProjectArchive;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QCheckBox *ProjectName;
    QCheckBox *ProjectId;
    QCheckBox *ProjectCurrent;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *ProjectAllRadio;
    QRadioButton *ProjectCurrentRadio;
    QRadioButton *ProjectPastRadio;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_12;
    QPushButton *ProjectItemAdd;
    QPushButton *ProjectItemRemove;
    QComboBox *ProjectItemCombo;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_11;
    QCheckBox *ProjectItemName;
    QCheckBox *ProjectItemId;
    QWidget *ItemsSettings;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *ItemAdd;
    QPushButton *ItemDelete;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_10;
    QCheckBox *ItemName;
    QCheckBox *ItemId;
    QCheckBox *ItemSub;
    QCheckBox *ItemCategory;
    QCheckBox *ItemDimension;
    QSpacerItem *horizontalSpacer_7;
    QWidget *ShiftSettings;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ShiftAdd;
    QPushButton *ShiftEdit;
    QPushButton *ShiftDelete;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QComboBox *ShiftEmployeeCombo;
    QComboBox *ShiftProjectCombo;
    QComboBox *ShiftItemCombo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_13;
    QDateEdit *ShiftDate1;
    QDateEdit *ShiftDate2;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_15;
    QLabel *ShiftTotalTime;
    QWidget *DataBaseSettings;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_14;
    QPushButton *DataBaseConnect;
    QPushButton *DataBaseClear;
    QLineEdit *DataBaseEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *DataBaseLabel1;
    QLabel *DataBaseLabel2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mainFinish;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(1162, 744);
        MainForm->setStyleSheet(QLatin1String("*{\n"
"font-family:\"Calibri\";\n"
"font-size: 12px;\n"
"\n"
"}\n"
"QTabWidget{\n"
"margin:0px;\n"
"padding:0px;\n"
"border-top: 15px solid #D3D3D3;\n"
"\n"
"}\n"
"QStackedWidget{\n"
"margin:0px;\n"
"padding:0px;\n"
"}\n"
"QWidget{\n"
"margin:0px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QPushButton{\n"
"padding:3px;\n"
"}\n"
"QRadioButton{\n"
"padding:0px;\n"
"margin:0px;\n"
"}"));
        _2 = new QGridLayout(MainForm);
        _2->setObjectName(QStringLiteral("_2"));
        mainStack = new QStackedWidget(MainForm);
        mainStack->setObjectName(QStringLiteral("mainStack"));
        mainStack->setStyleSheet(QStringLiteral(""));
        basicPage = new QWidget();
        basicPage->setObjectName(QStringLiteral("basicPage"));
        gridLayout_2 = new QGridLayout(basicPage);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        basicPageClockIn = new QPushButton(basicPage);
        basicPageClockIn->setObjectName(QStringLiteral("basicPageClockIn"));

        verticalLayout->addWidget(basicPageClockIn);

        basicPageClockOut = new QPushButton(basicPage);
        basicPageClockOut->setObjectName(QStringLiteral("basicPageClockOut"));

        verticalLayout->addWidget(basicPageClockOut);

        basicPageAdvanced = new QPushButton(basicPage);
        basicPageAdvanced->setObjectName(QStringLiteral("basicPageAdvanced"));

        verticalLayout->addWidget(basicPageAdvanced);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        mainStack->addWidget(basicPage);
        advPage = new QWidget();
        advPage->setObjectName(QStringLiteral("advPage"));
        gridLayout_7 = new QGridLayout(advPage);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        MainTabs = new QTabWidget(advPage);
        MainTabs->setObjectName(QStringLiteral("MainTabs"));
        MainTabs->setTabPosition(QTabWidget::South);
        EmployeeTab = new QWidget();
        EmployeeTab->setObjectName(QStringLiteral("EmployeeTab"));
        gridLayout_4 = new QGridLayout(EmployeeTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        EmployeeView = new QTableView(EmployeeTab);
        EmployeeView->setObjectName(QStringLiteral("EmployeeView"));
        EmployeeView->setFrameShape(QFrame::NoFrame);
        EmployeeView->setGridStyle(Qt::SolidLine);

        gridLayout_4->addWidget(EmployeeView, 0, 0, 1, 1);

        MainTabs->addTab(EmployeeTab, QString());
        ProjectTab = new QWidget();
        ProjectTab->setObjectName(QStringLiteral("ProjectTab"));
        gridLayout_5 = new QGridLayout(ProjectTab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ProjectView = new QTableView(ProjectTab);
        ProjectView->setObjectName(QStringLiteral("ProjectView"));
        ProjectView->setFrameShape(QFrame::NoFrame);

        horizontalLayout_11->addWidget(ProjectView);

        ProjectItemView = new QTableView(ProjectTab);
        ProjectItemView->setObjectName(QStringLiteral("ProjectItemView"));
        ProjectItemView->setFrameShape(QFrame::NoFrame);

        horizontalLayout_11->addWidget(ProjectItemView);


        gridLayout_5->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        MainTabs->addTab(ProjectTab, QString());
        ItemTab = new QWidget();
        ItemTab->setObjectName(QStringLiteral("ItemTab"));
        gridLayout_6 = new QGridLayout(ItemTab);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        ItemView = new QTableView(ItemTab);
        ItemView->setObjectName(QStringLiteral("ItemView"));
        ItemView->setFrameShape(QFrame::NoFrame);

        gridLayout_6->addWidget(ItemView, 0, 0, 1, 1);

        MainTabs->addTab(ItemTab, QString());
        ShiftTab = new QWidget();
        ShiftTab->setObjectName(QStringLiteral("ShiftTab"));
        gridLayout_3 = new QGridLayout(ShiftTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ShiftView = new QTableView(ShiftTab);
        ShiftView->setObjectName(QStringLiteral("ShiftView"));
        ShiftView->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(ShiftView, 0, 0, 1, 1);

        MainTabs->addTab(ShiftTab, QString());

        gridLayout_7->addWidget(MainTabs, 2, 0, 1, 1);

        HeaderTabs = new QTabWidget(advPage);
        HeaderTabs->setObjectName(QStringLiteral("HeaderTabs"));
        HeaderTabs->setMaximumSize(QSize(16777215, 110));
        HeaderTabs->setStyleSheet(QStringLiteral(""));
        HeaderTabs->setDocumentMode(false);
        HeaderTabs->setTabsClosable(false);
        HeaderTabs->setMovable(false);
        HeaderTabs->setTabBarAutoHide(false);
        EmployeeSettings = new QWidget();
        EmployeeSettings->setObjectName(QStringLiteral("EmployeeSettings"));
        horizontalLayout_2 = new QHBoxLayout(EmployeeSettings);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(EmployeeSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(200, 16777215));
        groupBox->setStyleSheet(QStringLiteral(""));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        EmployeeAdd = new QPushButton(groupBox);
        EmployeeAdd->setObjectName(QStringLiteral("EmployeeAdd"));

        horizontalLayout_5->addWidget(EmployeeAdd);

        EmployeeArchive = new QPushButton(groupBox);
        EmployeeArchive->setObjectName(QStringLiteral("EmployeeArchive"));

        horizontalLayout_5->addWidget(EmployeeArchive);

        EmployeeDelete = new QPushButton(groupBox);
        EmployeeDelete->setObjectName(QStringLiteral("EmployeeDelete"));

        horizontalLayout_5->addWidget(EmployeeDelete);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(EmployeeSettings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        EmployeeName = new QCheckBox(groupBox_2);
        EmployeeName->setObjectName(QStringLiteral("EmployeeName"));

        gridLayout_8->addWidget(EmployeeName, 0, 0, 1, 1);

        EmployeeActive = new QCheckBox(groupBox_2);
        EmployeeActive->setObjectName(QStringLiteral("EmployeeActive"));

        gridLayout_8->addWidget(EmployeeActive, 1, 2, 1, 1);

        EmployeeShiftCount = new QCheckBox(groupBox_2);
        EmployeeShiftCount->setObjectName(QStringLiteral("EmployeeShiftCount"));

        gridLayout_8->addWidget(EmployeeShiftCount, 0, 2, 1, 1);

        EmployeeAdminStatus = new QCheckBox(groupBox_2);
        EmployeeAdminStatus->setObjectName(QStringLiteral("EmployeeAdminStatus"));

        gridLayout_8->addWidget(EmployeeAdminStatus, 1, 1, 1, 1);

        EmployeePin = new QCheckBox(groupBox_2);
        EmployeePin->setObjectName(QStringLiteral("EmployeePin"));

        gridLayout_8->addWidget(EmployeePin, 0, 1, 1, 1);

        EmployeeId = new QCheckBox(groupBox_2);
        EmployeeId->setObjectName(QStringLiteral("EmployeeId"));

        gridLayout_8->addWidget(EmployeeId, 1, 0, 1, 1);

        EmployeeCurrent = new QCheckBox(groupBox_2);
        EmployeeCurrent->setObjectName(QStringLiteral("EmployeeCurrent"));

        gridLayout_8->addWidget(EmployeeCurrent, 0, 3, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(EmployeeSettings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, -1, -1, -1);
        AllRadio = new QRadioButton(groupBox_3);
        AllRadio->setObjectName(QStringLiteral("AllRadio"));

        verticalLayout_2->addWidget(AllRadio);

        CurrentRadio = new QRadioButton(groupBox_3);
        CurrentRadio->setObjectName(QStringLiteral("CurrentRadio"));

        verticalLayout_2->addWidget(CurrentRadio);

        PastRadio = new QRadioButton(groupBox_3);
        PastRadio->setObjectName(QStringLiteral("PastRadio"));

        verticalLayout_2->addWidget(PastRadio);


        horizontalLayout_2->addWidget(groupBox_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        HeaderTabs->addTab(EmployeeSettings, QString());
        ProjectsSettings = new QWidget();
        ProjectsSettings->setObjectName(QStringLiteral("ProjectsSettings"));
        horizontalLayout_7 = new QHBoxLayout(ProjectsSettings);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_6 = new QGroupBox(ProjectsSettings);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        ProjectAdd = new QPushButton(groupBox_6);
        ProjectAdd->setObjectName(QStringLiteral("ProjectAdd"));

        horizontalLayout_9->addWidget(ProjectAdd);

        ProjectDelete = new QPushButton(groupBox_6);
        ProjectDelete->setObjectName(QStringLiteral("ProjectDelete"));

        horizontalLayout_9->addWidget(ProjectDelete);

        ProjectArchive = new QPushButton(groupBox_6);
        ProjectArchive->setObjectName(QStringLiteral("ProjectArchive"));

        horizontalLayout_9->addWidget(ProjectArchive);


        horizontalLayout_7->addWidget(groupBox_6);

        groupBox_8 = new QGroupBox(ProjectsSettings);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        ProjectName = new QCheckBox(groupBox_8);
        ProjectName->setObjectName(QStringLiteral("ProjectName"));

        gridLayout_9->addWidget(ProjectName, 0, 0, 1, 1);

        ProjectId = new QCheckBox(groupBox_8);
        ProjectId->setObjectName(QStringLiteral("ProjectId"));

        gridLayout_9->addWidget(ProjectId, 1, 0, 1, 1);

        ProjectCurrent = new QCheckBox(groupBox_8);
        ProjectCurrent->setObjectName(QStringLiteral("ProjectCurrent"));

        gridLayout_9->addWidget(ProjectCurrent, 0, 1, 1, 1);


        horizontalLayout_7->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(ProjectsSettings);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_3 = new QVBoxLayout(groupBox_9);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ProjectAllRadio = new QRadioButton(groupBox_9);
        ProjectAllRadio->setObjectName(QStringLiteral("ProjectAllRadio"));

        verticalLayout_3->addWidget(ProjectAllRadio);

        ProjectCurrentRadio = new QRadioButton(groupBox_9);
        ProjectCurrentRadio->setObjectName(QStringLiteral("ProjectCurrentRadio"));

        verticalLayout_3->addWidget(ProjectCurrentRadio);

        ProjectPastRadio = new QRadioButton(groupBox_9);
        ProjectPastRadio->setObjectName(QStringLiteral("ProjectPastRadio"));

        verticalLayout_3->addWidget(ProjectPastRadio);


        horizontalLayout_7->addWidget(groupBox_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        groupBox_11 = new QGroupBox(ProjectsSettings);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_12 = new QGridLayout(groupBox_11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        ProjectItemAdd = new QPushButton(groupBox_11);
        ProjectItemAdd->setObjectName(QStringLiteral("ProjectItemAdd"));

        gridLayout_12->addWidget(ProjectItemAdd, 0, 0, 1, 1);

        ProjectItemRemove = new QPushButton(groupBox_11);
        ProjectItemRemove->setObjectName(QStringLiteral("ProjectItemRemove"));

        gridLayout_12->addWidget(ProjectItemRemove, 0, 1, 1, 1);

        ProjectItemCombo = new QComboBox(groupBox_11);
        ProjectItemCombo->setObjectName(QStringLiteral("ProjectItemCombo"));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        ProjectItemCombo->setFont(font);

        gridLayout_12->addWidget(ProjectItemCombo, 1, 0, 1, 2);


        horizontalLayout_7->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(ProjectsSettings);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_11 = new QGridLayout(groupBox_12);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        ProjectItemName = new QCheckBox(groupBox_12);
        ProjectItemName->setObjectName(QStringLiteral("ProjectItemName"));

        gridLayout_11->addWidget(ProjectItemName, 0, 0, 1, 1);

        ProjectItemId = new QCheckBox(groupBox_12);
        ProjectItemId->setObjectName(QStringLiteral("ProjectItemId"));

        gridLayout_11->addWidget(ProjectItemId, 1, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_12);

        HeaderTabs->addTab(ProjectsSettings, QString());
        ItemsSettings = new QWidget();
        ItemsSettings->setObjectName(QStringLiteral("ItemsSettings"));
        horizontalLayout_8 = new QHBoxLayout(ItemsSettings);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        groupBox_7 = new QGroupBox(ItemsSettings);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_7);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        ItemAdd = new QPushButton(groupBox_7);
        ItemAdd->setObjectName(QStringLiteral("ItemAdd"));

        horizontalLayout_10->addWidget(ItemAdd);

        ItemDelete = new QPushButton(groupBox_7);
        ItemDelete->setObjectName(QStringLiteral("ItemDelete"));

        horizontalLayout_10->addWidget(ItemDelete);


        horizontalLayout_8->addWidget(groupBox_7);

        groupBox_10 = new QGroupBox(ItemsSettings);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        gridLayout_10 = new QGridLayout(groupBox_10);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        ItemName = new QCheckBox(groupBox_10);
        ItemName->setObjectName(QStringLiteral("ItemName"));

        gridLayout_10->addWidget(ItemName, 0, 0, 1, 1);

        ItemId = new QCheckBox(groupBox_10);
        ItemId->setObjectName(QStringLiteral("ItemId"));

        gridLayout_10->addWidget(ItemId, 1, 0, 1, 1);

        ItemSub = new QCheckBox(groupBox_10);
        ItemSub->setObjectName(QStringLiteral("ItemSub"));

        gridLayout_10->addWidget(ItemSub, 1, 1, 1, 1);

        ItemCategory = new QCheckBox(groupBox_10);
        ItemCategory->setObjectName(QStringLiteral("ItemCategory"));

        gridLayout_10->addWidget(ItemCategory, 0, 1, 1, 1);

        ItemDimension = new QCheckBox(groupBox_10);
        ItemDimension->setObjectName(QStringLiteral("ItemDimension"));

        gridLayout_10->addWidget(ItemDimension, 0, 2, 1, 1);


        horizontalLayout_8->addWidget(groupBox_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        HeaderTabs->addTab(ItemsSettings, QString());
        ShiftSettings = new QWidget();
        ShiftSettings->setObjectName(QStringLiteral("ShiftSettings"));
        horizontalLayout_3 = new QHBoxLayout(ShiftSettings);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_4 = new QGroupBox(ShiftSettings);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ShiftAdd = new QPushButton(groupBox_4);
        ShiftAdd->setObjectName(QStringLiteral("ShiftAdd"));

        horizontalLayout_6->addWidget(ShiftAdd);

        ShiftEdit = new QPushButton(groupBox_4);
        ShiftEdit->setObjectName(QStringLiteral("ShiftEdit"));

        horizontalLayout_6->addWidget(ShiftEdit);

        ShiftDelete = new QPushButton(groupBox_4);
        ShiftDelete->setObjectName(QStringLiteral("ShiftDelete"));

        horizontalLayout_6->addWidget(ShiftDelete);


        horizontalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(ShiftSettings);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ShiftEmployeeCombo = new QComboBox(groupBox_5);
        ShiftEmployeeCombo->setObjectName(QStringLiteral("ShiftEmployeeCombo"));
        ShiftEmployeeCombo->setFont(font);
        ShiftEmployeeCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(ShiftEmployeeCombo, 0, 1, 1, 1);

        ShiftProjectCombo = new QComboBox(groupBox_5);
        ShiftProjectCombo->setObjectName(QStringLiteral("ShiftProjectCombo"));
        ShiftProjectCombo->setFont(font);
        ShiftProjectCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(ShiftProjectCombo, 1, 1, 1, 1);

        ShiftItemCombo = new QComboBox(groupBox_5);
        ShiftItemCombo->setObjectName(QStringLiteral("ShiftItemCombo"));
        ShiftItemCombo->setFont(font);
        ShiftItemCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(ShiftItemCombo, 2, 1, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_5);

        groupBox_13 = new QGroupBox(ShiftSettings);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout_13 = new QGridLayout(groupBox_13);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        ShiftDate1 = new QDateEdit(groupBox_13);
        ShiftDate1->setObjectName(QStringLiteral("ShiftDate1"));

        gridLayout_13->addWidget(ShiftDate1, 0, 1, 1, 1);

        ShiftDate2 = new QDateEdit(groupBox_13);
        ShiftDate2->setObjectName(QStringLiteral("ShiftDate2"));

        gridLayout_13->addWidget(ShiftDate2, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_13);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_13->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_13);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_13->addWidget(label_5, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_13);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        groupBox_15 = new QGroupBox(ShiftSettings);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        gridLayout_15 = new QGridLayout(groupBox_15);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        ShiftTotalTime = new QLabel(groupBox_15);
        ShiftTotalTime->setObjectName(QStringLiteral("ShiftTotalTime"));
        ShiftTotalTime->setLayoutDirection(Qt::LeftToRight);
        ShiftTotalTime->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(ShiftTotalTime, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_15);

        HeaderTabs->addTab(ShiftSettings, QString());
        DataBaseSettings = new QWidget();
        DataBaseSettings->setObjectName(QStringLiteral("DataBaseSettings"));
        horizontalLayout_4 = new QHBoxLayout(DataBaseSettings);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_14 = new QGroupBox(DataBaseSettings);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        gridLayout_14 = new QGridLayout(groupBox_14);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        DataBaseConnect = new QPushButton(groupBox_14);
        DataBaseConnect->setObjectName(QStringLiteral("DataBaseConnect"));

        gridLayout_14->addWidget(DataBaseConnect, 0, 1, 1, 1);

        DataBaseClear = new QPushButton(groupBox_14);
        DataBaseClear->setObjectName(QStringLiteral("DataBaseClear"));

        gridLayout_14->addWidget(DataBaseClear, 0, 3, 1, 1);

        DataBaseEdit = new QLineEdit(groupBox_14);
        DataBaseEdit->setObjectName(QStringLiteral("DataBaseEdit"));

        gridLayout_14->addWidget(DataBaseEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox_14);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_14->addWidget(pushButton, 0, 2, 1, 1);


        horizontalLayout_4->addWidget(groupBox_14);

        groupBox_16 = new QGroupBox(DataBaseSettings);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_16);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        DataBaseLabel1 = new QLabel(groupBox_16);
        DataBaseLabel1->setObjectName(QStringLiteral("DataBaseLabel1"));

        horizontalLayout_12->addWidget(DataBaseLabel1);

        DataBaseLabel2 = new QLabel(groupBox_16);
        DataBaseLabel2->setObjectName(QStringLiteral("DataBaseLabel2"));

        horizontalLayout_12->addWidget(DataBaseLabel2);


        horizontalLayout_4->addWidget(groupBox_16);

        HeaderTabs->addTab(DataBaseSettings, QString());

        gridLayout_7->addWidget(HeaderTabs, 1, 0, 1, 1);

        mainStack->addWidget(advPage);

        _2->addWidget(mainStack, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mainFinish = new QPushButton(MainForm);
        mainFinish->setObjectName(QStringLiteral("mainFinish"));

        horizontalLayout->addWidget(mainFinish);


        _2->addLayout(horizontalLayout, 1, 1, 1, 1);


        retranslateUi(MainForm);

        mainStack->setCurrentIndex(1);
        MainTabs->setCurrentIndex(0);
        HeaderTabs->setCurrentIndex(4);
        EmployeeAdd->setDefault(false);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Time-Track", Q_NULLPTR));
        basicPageClockIn->setText(QApplication::translate("MainForm", "Clock In", Q_NULLPTR));
        basicPageClockOut->setText(QApplication::translate("MainForm", "Clock out", Q_NULLPTR));
        basicPageAdvanced->setText(QApplication::translate("MainForm", "Advanced", Q_NULLPTR));
        MainTabs->setTabText(MainTabs->indexOf(EmployeeTab), QApplication::translate("MainForm", "Employees", Q_NULLPTR));
        MainTabs->setTabText(MainTabs->indexOf(ProjectTab), QApplication::translate("MainForm", "Projects", Q_NULLPTR));
        MainTabs->setTabText(MainTabs->indexOf(ItemTab), QApplication::translate("MainForm", "Sub-Projects", Q_NULLPTR));
        MainTabs->setTabText(MainTabs->indexOf(ShiftTab), QApplication::translate("MainForm", "Shifts", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainForm", "Options", Q_NULLPTR));
        EmployeeAdd->setText(QApplication::translate("MainForm", "Add", Q_NULLPTR));
        EmployeeArchive->setText(QApplication::translate("MainForm", "Archive", Q_NULLPTR));
        EmployeeDelete->setText(QApplication::translate("MainForm", "Delete", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainForm", "Table", Q_NULLPTR));
        EmployeeName->setText(QApplication::translate("MainForm", "Name", Q_NULLPTR));
        EmployeeActive->setText(QApplication::translate("MainForm", "Active", Q_NULLPTR));
        EmployeeShiftCount->setText(QApplication::translate("MainForm", "ShiftCount", Q_NULLPTR));
        EmployeeAdminStatus->setText(QApplication::translate("MainForm", "AdminStatus", Q_NULLPTR));
        EmployeePin->setText(QApplication::translate("MainForm", "Pin", Q_NULLPTR));
        EmployeeId->setText(QApplication::translate("MainForm", "Id", Q_NULLPTR));
        EmployeeCurrent->setText(QApplication::translate("MainForm", "Current", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainForm", "Show", Q_NULLPTR));
        AllRadio->setText(QApplication::translate("MainForm", "All Employees", Q_NULLPTR));
        CurrentRadio->setText(QApplication::translate("MainForm", "Current Employees", Q_NULLPTR));
        PastRadio->setText(QApplication::translate("MainForm", "Past Employees", Q_NULLPTR));
        HeaderTabs->setTabText(HeaderTabs->indexOf(EmployeeSettings), QApplication::translate("MainForm", "Employees", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainForm", "Project Options", Q_NULLPTR));
        ProjectAdd->setText(QApplication::translate("MainForm", "Create New", Q_NULLPTR));
        ProjectDelete->setText(QApplication::translate("MainForm", "Delete", Q_NULLPTR));
        ProjectArchive->setText(QApplication::translate("MainForm", "Archive", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainForm", "Project Table", Q_NULLPTR));
        ProjectName->setText(QApplication::translate("MainForm", "Name", Q_NULLPTR));
        ProjectId->setText(QApplication::translate("MainForm", "Id", Q_NULLPTR));
        ProjectCurrent->setText(QApplication::translate("MainForm", "Current", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainForm", "Show", Q_NULLPTR));
        ProjectAllRadio->setText(QApplication::translate("MainForm", "All Projects", Q_NULLPTR));
        ProjectCurrentRadio->setText(QApplication::translate("MainForm", "Current Projects", Q_NULLPTR));
        ProjectPastRadio->setText(QApplication::translate("MainForm", "Past Projects", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainForm", "Item Options", Q_NULLPTR));
        ProjectItemAdd->setText(QApplication::translate("MainForm", "Add", Q_NULLPTR));
        ProjectItemRemove->setText(QApplication::translate("MainForm", "Remove", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainForm", "Item Table", Q_NULLPTR));
        ProjectItemName->setText(QApplication::translate("MainForm", "Name", Q_NULLPTR));
        ProjectItemId->setText(QApplication::translate("MainForm", "Id", Q_NULLPTR));
        HeaderTabs->setTabText(HeaderTabs->indexOf(ProjectsSettings), QApplication::translate("MainForm", "Projects", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainForm", "Options", Q_NULLPTR));
        ItemAdd->setText(QApplication::translate("MainForm", "Create New", Q_NULLPTR));
        ItemDelete->setText(QApplication::translate("MainForm", "Delete", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainForm", "Table", Q_NULLPTR));
        ItemName->setText(QApplication::translate("MainForm", "Name", Q_NULLPTR));
        ItemId->setText(QApplication::translate("MainForm", "Id", Q_NULLPTR));
        ItemSub->setText(QApplication::translate("MainForm", "Sub-Category", Q_NULLPTR));
        ItemCategory->setText(QApplication::translate("MainForm", "Category", Q_NULLPTR));
        ItemDimension->setText(QApplication::translate("MainForm", "Dimension", Q_NULLPTR));
        HeaderTabs->setTabText(HeaderTabs->indexOf(ItemsSettings), QApplication::translate("MainForm", "Sub-Projects", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainForm", "Options", Q_NULLPTR));
        ShiftAdd->setText(QApplication::translate("MainForm", "Add", Q_NULLPTR));
        ShiftEdit->setText(QApplication::translate("MainForm", "Edit", Q_NULLPTR));
        ShiftDelete->setText(QApplication::translate("MainForm", "Delete", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainForm", "Display By", Q_NULLPTR));
        label->setText(QApplication::translate("MainForm", "Employee:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainForm", "Project:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainForm", "Item:", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MainForm", "Time", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainForm", "From:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainForm", "To:", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("MainForm", "Total Time:", Q_NULLPTR));
        ShiftTotalTime->setText(QApplication::translate("MainForm", "0:00", Q_NULLPTR));
        HeaderTabs->setTabText(HeaderTabs->indexOf(ShiftSettings), QApplication::translate("MainForm", "Shifts", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MainForm", "Server Database", Q_NULLPTR));
        DataBaseConnect->setText(QApplication::translate("MainForm", "Connect", Q_NULLPTR));
        DataBaseClear->setText(QApplication::translate("MainForm", "Clear", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainForm", "Disconnect", Q_NULLPTR));
        groupBox_16->setTitle(QString());
        DataBaseLabel1->setText(QApplication::translate("MainForm", "Current Connection:", Q_NULLPTR));
        DataBaseLabel2->setText(QString());
        HeaderTabs->setTabText(HeaderTabs->indexOf(DataBaseSettings), QApplication::translate("MainForm", "DataBase", Q_NULLPTR));
        mainFinish->setText(QApplication::translate("MainForm", "Finish", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
