/********************************************************************************
** Form generated from reading UI file 'teachingboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHINGBOARD_H
#define UI_TEACHINGBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeachingBoard
{
public:
    QWidget *centralwidget;
    QFrame *paletteFrame;
    QPushButton *penButton;
    QPushButton *shapeButton;
    QPushButton *addImageButton;
    QPushButton *eraseButton;
    QPushButton *selectButton;
    QPushButton *commentButton;
    QFrame *fileFrame;
    QPushButton *openButton;
    QPushButton *saveButtton;
    QLabel *fileNameLabel;
    QFrame *colorSettingsFrame;
    QPushButton *lineTypeButton;
    QPushButton *lineColorButton;
    QPushButton *lineWidthButton;
    QSlider *lineWidthSlider;
    QFrame *backgroundSettingsFrame;
    QPushButton *nextSheetButton;
    QPushButton *previousSheetButton;
    QPushButton *backgroundTypeButton;
    QFrame *line_2;
    QPushButton *backgroundColorButton;
    QPushButton *sheetReviewButton;
    QFrame *line;
    QFrame *sheetReviewFrame;
    QPushButton *addNewPageButton;
    QPushButton *pageNumber1Button;
    QFrame *lineColorFrame;
    QPushButton *redLineButton;
    QPushButton *greenLineButton;
    QPushButton *blackLineButton;
    QPushButton *blueLineButton;
    QPushButton *yellowLineButton;
    QPushButton *whiteLineButton;
    QPushButton *lineColorFrameCloseButton;
    QFrame *shapeFrame;
    QPushButton *shapeFrameCloseButton;
    QPushButton *rectangleButton;
    QPushButton *lineButton;
    QPushButton *ellipseButton;
    QFrame *sheetBackgroundColorFrame;
    QPushButton *whiteBackgroundColorButton;
    QPushButton *blueBackgroundColorButton;
    QPushButton *greenBackgroundColorButton;
    QPushButton *addBackgroundColorButton;
    QPushButton *rustBackgroundColorButton;
    QPushButton *blackBackgroundColorButton;
    QFrame *drawingFrame;
    QPushButton *clearSheetButton;
    QFrame *lineTypeFrame;
    QPushButton *lineTypeFrameClosrButton;
    QPushButton *solidLineButton;
    QPushButton *dottedLineButton;
    QPushButton *dashLine;
    QFrame *sheetBackgroundTypeFrame;
    QPushButton *graphSheetButton;
    QPushButton *ruledSheetButton;
    QPushButton *gridSheetButton;
    QPushButton *plainSheetButton;
    QPushButton *undoButton;
    QPushButton *redoButton1;
    QMenuBar *menubar;

    void setupUi(QMainWindow *TeachingBoard)
    {
        if (TeachingBoard->objectName().isEmpty())
            TeachingBoard->setObjectName("TeachingBoard");
        TeachingBoard->resize(2056, 850);
        TeachingBoard->setMouseTracking(true);
        TeachingBoard->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(TeachingBoard);
        centralwidget->setObjectName("centralwidget");
        paletteFrame = new QFrame(centralwidget);
        paletteFrame->setObjectName("paletteFrame");
        paletteFrame->setGeometry(QRect(1286, 200, 50, 275));
        paletteFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 25px;\n"
"border-color : black;\n"
"border-style: solid;\n"
"}"));
        paletteFrame->setFrameShape(QFrame::StyledPanel);
        paletteFrame->setFrameShadow(QFrame::Raised);
        penButton = new QPushButton(paletteFrame);
        penButton->setObjectName("penButton");
        penButton->setGeometry(QRect(5, 5, 40, 40));
        penButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        penButton->setMouseTracking(true);
        penButton->setAutoFillBackground(false);
        penButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../logo/pen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        penButton->setIcon(icon);
        penButton->setIconSize(QSize(25, 25));
        shapeButton = new QPushButton(paletteFrame);
        shapeButton->setObjectName("shapeButton");
        shapeButton->setGeometry(QRect(5, 50, 40, 40));
        shapeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        shapeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../logo/geometrical-shapes-set.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shapeButton->setIcon(icon1);
        shapeButton->setIconSize(QSize(30, 30));
        addImageButton = new QPushButton(paletteFrame);
        addImageButton->setObjectName("addImageButton");
        addImageButton->setGeometry(QRect(5, 95, 40, 40));
        addImageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addImageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../logo/image.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addImageButton->setIcon(icon2);
        addImageButton->setIconSize(QSize(25, 25));
        eraseButton = new QPushButton(paletteFrame);
        eraseButton->setObjectName("eraseButton");
        eraseButton->setGeometry(QRect(5, 140, 40, 40));
        eraseButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        eraseButton->setAutoFillBackground(false);
        eraseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../logo/eraser.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        eraseButton->setIcon(icon3);
        eraseButton->setIconSize(QSize(25, 25));
        selectButton = new QPushButton(paletteFrame);
        selectButton->setObjectName("selectButton");
        selectButton->setGeometry(QRect(5, 185, 40, 40));
        selectButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        selectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../logo/cursor.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        selectButton->setIcon(icon4);
        selectButton->setIconSize(QSize(30, 30));
        commentButton = new QPushButton(paletteFrame);
        commentButton->setObjectName("commentButton");
        commentButton->setGeometry(QRect(5, 230, 40, 40));
        commentButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        commentButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../logo/text-format.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        commentButton->setIcon(icon5);
        commentButton->setIconSize(QSize(30, 30));
        fileFrame = new QFrame(centralwidget);
        fileFrame->setObjectName("fileFrame");
        fileFrame->setGeometry(QRect(0, 0, 1366, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Geometr212 BkCn BT")});
        font.setPointSize(16);
        fileFrame->setFont(font);
        fileFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"	border-bottom-color: rgb(0, 0, 0);\n"
"}"));
        fileFrame->setFrameShape(QFrame::StyledPanel);
        fileFrame->setFrameShadow(QFrame::Raised);
        openButton = new QPushButton(fileFrame);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(215, 2, 100, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(12);
        openButton->setFont(font1);
        openButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 6px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(98, 98, 98);\n"
"	color: rgb(253, 253, 253);\n"
"}"));
        saveButtton = new QPushButton(fileFrame);
        saveButtton->setObjectName("saveButtton");
        saveButtton->setGeometry(QRect(316, 2, 100, 20));
        saveButtton->setFont(font1);
        saveButtton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 6px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"\n"
"QPushButton:hover {\n"
"			background-color: rgb(98, 98, 98);\n"
"	color: rgb(253, 253, 253);\n"
"}"));
        fileNameLabel = new QLabel(fileFrame);
        fileNameLabel->setObjectName("fileNameLabel");
        fileNameLabel->setGeometry(QRect(15, 3, 190, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("HP Simplified")});
        font2.setPointSize(18);
        fileNameLabel->setFont(font2);
        colorSettingsFrame = new QFrame(centralwidget);
        colorSettingsFrame->setObjectName("colorSettingsFrame");
        colorSettingsFrame->setGeometry(QRect(30, 200, 50, 265));
        colorSettingsFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 25px;\n"
"border-color : black;\n"
"border-style: solid;\n"
"}\n"
"\n"
"QFrame#colorSettingsFame > QPushButton {\n"
"border-radius:20px;\n"
"border:none;\n"
"}"));
        colorSettingsFrame->setFrameShape(QFrame::StyledPanel);
        colorSettingsFrame->setFrameShadow(QFrame::Raised);
        lineTypeButton = new QPushButton(colorSettingsFrame);
        lineTypeButton->setObjectName("lineTypeButton");
        lineTypeButton->setGeometry(QRect(5, 60, 40, 40));
        lineTypeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineTypeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border-radius: 20px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../logo/dashed-line.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        lineTypeButton->setIcon(icon6);
        lineTypeButton->setIconSize(QSize(30, 30));
        lineColorButton = new QPushButton(colorSettingsFrame);
        lineColorButton->setObjectName("lineColorButton");
        lineColorButton->setGeometry(QRect(5, 5, 40, 40));
        lineColorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(0,0,0);\n"
"border-radius:20px;\n"
"}"));
        lineWidthButton = new QPushButton(colorSettingsFrame);
        lineWidthButton->setObjectName("lineWidthButton");
        lineWidthButton->setGeometry(QRect(5, 115, 40, 40));
        lineWidthButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineWidthButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: none;\n"
"border-radius:20px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(234, 249, 255);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../logo/width.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        lineWidthButton->setIcon(icon7);
        lineWidthButton->setIconSize(QSize(25, 25));
        lineWidthSlider = new QSlider(colorSettingsFrame);
        lineWidthSlider->setObjectName("lineWidthSlider");
        lineWidthSlider->setGeometry(QRect(5, 115, 40, 135));
        lineWidthSlider->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineWidthSlider->setMinimum(1);
        lineWidthSlider->setMaximum(10);
        lineWidthSlider->setPageStep(1);
        lineWidthSlider->setOrientation(Qt::Vertical);
        lineWidthSlider->setTickPosition(QSlider::NoTicks);
        lineWidthSlider->setTickInterval(1);
        backgroundSettingsFrame = new QFrame(centralwidget);
        backgroundSettingsFrame->setObjectName("backgroundSettingsFrame");
        backgroundSettingsFrame->setGeometry(QRect(0, 25, 1366, 35));
        backgroundSettingsFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
""));
        backgroundSettingsFrame->setFrameShape(QFrame::StyledPanel);
        backgroundSettingsFrame->setFrameShadow(QFrame::Raised);
        nextSheetButton = new QPushButton(backgroundSettingsFrame);
        nextSheetButton->setObjectName("nextSheetButton");
        nextSheetButton->setGeometry(QRect(718, 5, 25, 25));
        nextSheetButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nextSheetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         background-color: white;\n"
"		border:none;\n"
"     }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../logo/right-arrow.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextSheetButton->setIcon(icon8);
        nextSheetButton->setIconSize(QSize(15, 15));
        previousSheetButton = new QPushButton(backgroundSettingsFrame);
        previousSheetButton->setObjectName("previousSheetButton");
        previousSheetButton->setGeometry(QRect(623, 5, 25, 25));
        previousSheetButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        previousSheetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         background-color: white;\n"
"		border:none;\n"
"     }"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../logo/left-arrow.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        previousSheetButton->setIcon(icon9);
        previousSheetButton->setIconSize(QSize(15, 15));
        backgroundTypeButton = new QPushButton(backgroundSettingsFrame);
        backgroundTypeButton->setObjectName("backgroundTypeButton");
        backgroundTypeButton->setGeometry(QRect(15, 5, 145, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(16);
        font3.setBold(false);
        backgroundTypeButton->setFont(font3);
        backgroundTypeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backgroundTypeButton->setMouseTracking(true);
        backgroundTypeButton->setStyleSheet(QString::fromUtf8("QPushButton {;\n"
"	color: rgb(49, 49, 49);\n"
"         border-radius:2px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:pressed {  	 \n"
"	background-color: rgb(255, 74, 192);\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(231, 231, 231);\n"
"}"));
        line_2 = new QFrame(backgroundSettingsFrame);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(170, 5, 3, 25));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::Shape::VLine);
        backgroundColorButton = new QPushButton(backgroundSettingsFrame);
        backgroundColorButton->setObjectName("backgroundColorButton");
        backgroundColorButton->setGeometry(QRect(180, 5, 150, 25));
        backgroundColorButton->setFont(font3);
        backgroundColorButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backgroundColorButton->setStyleSheet(QString::fromUtf8("QPushButton {;\n"
"	color: rgb(49, 49, 49);\n"
"         border-radius:2px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:pressed {  	 \n"
"	background-color: rgb(255, 74, 192);\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(231, 231, 231);\n"
"}"));
        sheetReviewButton = new QPushButton(backgroundSettingsFrame);
        sheetReviewButton->setObjectName("sheetReviewButton");
        sheetReviewButton->setGeometry(QRect(653, 5, 60, 25));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font4.setPointSize(12);
        font4.setBold(false);
        sheetReviewButton->setFont(font4);
        sheetReviewButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sheetReviewButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(57, 57, 57);\n"
"         border-radius: 6px;\n"
"         background-color: white;\n"
"     }\n"
"\n"
"QPushButton:pressed {  	 \n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(156, 156, 156);\n"
"	color: rgb(253, 253, 253);\n"
"}"));
        line = new QFrame(backgroundSettingsFrame);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 0, 1366, 2));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        sheetReviewFrame = new QFrame(centralwidget);
        sheetReviewFrame->setObjectName("sheetReviewFrame");
        sheetReviewFrame->setEnabled(true);
        sheetReviewFrame->setGeometry(QRect(116, 80, 1132, 60));
        sheetReviewFrame->setMouseTracking(true);
        sheetReviewFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgba(143, 143, 143,50);\n"
"	border-radius:5px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 1px;\n"
"}"));
        sheetReviewFrame->setFrameShape(QFrame::StyledPanel);
        sheetReviewFrame->setFrameShadow(QFrame::Raised);
        addNewPageButton = new QPushButton(sheetReviewFrame);
        addNewPageButton->setObjectName("addNewPageButton");
        addNewPageButton->setGeometry(QRect(90, 10, 60, 40));
        QFont font5;
        font5.setPointSize(11);
        addNewPageButton->setFont(font5);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../Minor-Icons/AddPage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addNewPageButton->setIcon(icon10);
        addNewPageButton->setIconSize(QSize(40, 35));
        pageNumber1Button = new QPushButton(sheetReviewFrame);
        pageNumber1Button->setObjectName("pageNumber1Button");
        pageNumber1Button->setGeometry(QRect(20, 10, 60, 40));
        pageNumber1Button->setIconSize(QSize(40, 40));
        lineColorFrame = new QFrame(centralwidget);
        lineColorFrame->setObjectName("lineColorFrame");
        lineColorFrame->setGeometry(QRect(1400, 200, 50, 265));
        lineColorFrame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineColorFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(196, 225, 255);\n"
"	border-radius: 25px;\n"
"	border: none;\n"
"}\n"
"\n"
"QFrame#lineColorFrame > QPushButton{\n"
"	border-radius : 15px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QFrame#lineColorFrame > QPushButton#finalColorBtn{\n"
"border-radius:20px;\n"
"}"));
        lineColorFrame->setFrameShape(QFrame::StyledPanel);
        lineColorFrame->setFrameShadow(QFrame::Raised);
        redLineButton = new QPushButton(lineColorFrame);
        redLineButton->setObjectName("redLineButton");
        redLineButton->setGeometry(QRect(10, 230, 30, 30));
        redLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 0, 0);"));
        greenLineButton = new QPushButton(lineColorFrame);
        greenLineButton->setObjectName("greenLineButton");
        greenLineButton->setGeometry(QRect(10, 195, 30, 30));
        greenLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 238, 77);"));
        blackLineButton = new QPushButton(lineColorFrame);
        blackLineButton->setObjectName("blackLineButton");
        blackLineButton->setGeometry(QRect(10, 160, 30, 30));
        blackLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 3, 3);"));
        blueLineButton = new QPushButton(lineColorFrame);
        blueLineButton->setObjectName("blueLineButton");
        blueLineButton->setGeometry(QRect(10, 90, 30, 30));
        blueLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 130, 255);"));
        yellowLineButton = new QPushButton(lineColorFrame);
        yellowLineButton->setObjectName("yellowLineButton");
        yellowLineButton->setGeometry(QRect(10, 55, 30, 30));
        yellowLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 234, 8);"));
        whiteLineButton = new QPushButton(lineColorFrame);
        whiteLineButton->setObjectName("whiteLineButton");
        whiteLineButton->setGeometry(QRect(10, 125, 30, 30));
        whiteLineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineColorFrameCloseButton = new QPushButton(lineColorFrame);
        lineColorFrameCloseButton->setObjectName("lineColorFrameCloseButton");
        lineColorFrameCloseButton->setGeometry(QRect(5, 5, 40, 40));
        lineColorFrameCloseButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(3, 3, 3);\n"
"border-radius:20px;\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color:black\n"
"}"));
        shapeFrame = new QFrame(centralwidget);
        shapeFrame->setObjectName("shapeFrame");
        shapeFrame->setGeometry(QRect(1400, 580, 50, 190));
        shapeFrame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        shapeFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:none;\n"
"	background-color: rgb(196, 225, 255);\n"
"border-radius:25px;\n"
"}\n"
"\n"
"QFrame#shapeFrame > QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(196, 225, 255);\n"
"}\n"
"\n"
"QFrame#shapeFrame > QPushButton:hover {\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        shapeFrame->setFrameShape(QFrame::StyledPanel);
        shapeFrame->setFrameShadow(QFrame::Raised);
        shapeFrameCloseButton = new QPushButton(shapeFrame);
        shapeFrameCloseButton->setObjectName("shapeFrameCloseButton");
        shapeFrameCloseButton->setGeometry(QRect(5, 5, 40, 40));
        shapeFrameCloseButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        shapeFrameCloseButton->setIcon(icon1);
        shapeFrameCloseButton->setIconSize(QSize(30, 30));
        rectangleButton = new QPushButton(shapeFrame);
        rectangleButton->setObjectName("rectangleButton");
        rectangleButton->setGeometry(QRect(5, 55, 40, 40));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../logo/rectangle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        rectangleButton->setIcon(icon11);
        rectangleButton->setIconSize(QSize(25, 25));
        lineButton = new QPushButton(shapeFrame);
        lineButton->setObjectName("lineButton");
        lineButton->setGeometry(QRect(5, 100, 40, 40));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../logo/diagonal-line.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        lineButton->setIcon(icon12);
        lineButton->setIconSize(QSize(30, 30));
        ellipseButton = new QPushButton(shapeFrame);
        ellipseButton->setObjectName("ellipseButton");
        ellipseButton->setGeometry(QRect(5, 145, 40, 40));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../logo/ellipse.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ellipseButton->setIcon(icon13);
        ellipseButton->setIconSize(QSize(30, 30));
        sheetBackgroundColorFrame = new QFrame(centralwidget);
        sheetBackgroundColorFrame->setObjectName("sheetBackgroundColorFrame");
        sheetBackgroundColorFrame->setGeometry(QRect(1480, 210, 230, 145));
        sheetBackgroundColorFrame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sheetBackgroundColorFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(240, 240, 240);\n"
"border-style: solid;\n"
"border-color: gray;\n"
"border-width: 2px;\n"
"border-radius: 5px\n"
"}\n"
"\n"
"QFrame#sheetBackgroundColorFrame > QPushButton{\n"
"border-radius:5px;\n"
"border-width:3px;\n"
"}"));
        sheetBackgroundColorFrame->setFrameShape(QFrame::StyledPanel);
        sheetBackgroundColorFrame->setFrameShadow(QFrame::Raised);
        whiteBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        whiteBackgroundColorButton->setObjectName("whiteBackgroundColorButton");
        whiteBackgroundColorButton->setGeometry(QRect(120, 10, 100, 35));
        whiteBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        blueBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        blueBackgroundColorButton->setObjectName("blueBackgroundColorButton");
        blueBackgroundColorButton->setGeometry(QRect(10, 55, 100, 35));
        blueBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 133, 255);"));
        greenBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        greenBackgroundColorButton->setObjectName("greenBackgroundColorButton");
        greenBackgroundColorButton->setGeometry(QRect(120, 55, 100, 35));
        greenBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 158, 84);\n"
""));
        addBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        addBackgroundColorButton->setObjectName("addBackgroundColorButton");
        addBackgroundColorButton->setGeometry(QRect(120, 100, 100, 35));
        addBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: dotted;\n"
"border-color: gray;\n"
"border-width: 2px;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../logo/photo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addBackgroundColorButton->setIcon(icon14);
        addBackgroundColorButton->setIconSize(QSize(30, 30));
        rustBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        rustBackgroundColorButton->setObjectName("rustBackgroundColorButton");
        rustBackgroundColorButton->setGeometry(QRect(10, 100, 100, 35));
        rustBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 72, 52);"));
        blackBackgroundColorButton = new QPushButton(sheetBackgroundColorFrame);
        blackBackgroundColorButton->setObjectName("blackBackgroundColorButton");
        blackBackgroundColorButton->setGeometry(QRect(10, 10, 100, 35));
        blackBackgroundColorButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        drawingFrame = new QFrame(centralwidget);
        drawingFrame->setObjectName("drawingFrame");
        drawingFrame->setGeometry(QRect(105, 70, 1156, 625));
        drawingFrame->setStyleSheet(QString::fromUtf8(""));
        drawingFrame->setFrameShape(QFrame::Box);
        drawingFrame->setFrameShadow(QFrame::Plain);
        drawingFrame->setLineWidth(5);
        clearSheetButton = new QPushButton(centralwidget);
        clearSheetButton->setObjectName("clearSheetButton");
        clearSheetButton->setGeometry(QRect(10, 70, 90, 30));
        clearSheetButton->setFont(font1);
        clearSheetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		color: rgb(255, 255, 255);\n"
"         border-radius: 20px;\n"
"        background-color: rgb(75,75,75);\n"
"     }\n"
"\n"
"QPushButton:hover {\n"
"		border:solid;\n"
"		border-width:2px;\n"
"border-color:white;\n"
"    	color: rgb(255, 255, 255);\n"
"}"));
        lineTypeFrame = new QFrame(centralwidget);
        lineTypeFrame->setObjectName("lineTypeFrame");
        lineTypeFrame->setGeometry(QRect(100, 470, 50, 190));
        lineTypeFrame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineTypeFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:none;\n"
"	background-color: rgb(196, 225, 255);\n"
"border-radius:25px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(196, 225, 255);\n"
"}\n"
"\n"
"QFrame#shapeFrame > QPushButton:hover {\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        lineTypeFrame->setFrameShape(QFrame::StyledPanel);
        lineTypeFrame->setFrameShadow(QFrame::Raised);
        lineTypeFrameClosrButton = new QPushButton(lineTypeFrame);
        lineTypeFrameClosrButton->setObjectName("lineTypeFrameClosrButton");
        lineTypeFrameClosrButton->setGeometry(QRect(5, 5, 40, 40));
        lineTypeFrameClosrButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineTypeFrameClosrButton->setIcon(icon1);
        lineTypeFrameClosrButton->setIconSize(QSize(30, 30));
        solidLineButton = new QPushButton(lineTypeFrame);
        solidLineButton->setObjectName("solidLineButton");
        solidLineButton->setGeometry(QRect(5, 55, 40, 40));
        solidLineButton->setIcon(icon12);
        solidLineButton->setIconSize(QSize(25, 25));
        dottedLineButton = new QPushButton(lineTypeFrame);
        dottedLineButton->setObjectName("dottedLineButton");
        dottedLineButton->setGeometry(QRect(5, 100, 40, 40));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../logo/Facebook Post 940x788 px (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dottedLineButton->setIcon(icon15);
        dottedLineButton->setIconSize(QSize(30, 30));
        dashLine = new QPushButton(lineTypeFrame);
        dashLine->setObjectName("dashLine");
        dashLine->setGeometry(QRect(5, 145, 40, 40));
        dashLine->setIcon(icon6);
        dashLine->setIconSize(QSize(30, 30));
        sheetBackgroundTypeFrame = new QFrame(centralwidget);
        sheetBackgroundTypeFrame->setObjectName("sheetBackgroundTypeFrame");
        sheetBackgroundTypeFrame->setGeometry(QRect(1610, 240, 230, 110));
        sheetBackgroundTypeFrame->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sheetBackgroundTypeFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(196, 225, 255);\n"
"border: solid gray 2px;\n"
"border-radius: 5px\n"
"}\n"
"\n"
"QFrame#sheetTypeFrame > QPushButtons{\n"
"border-radius:5px;\n"
"border-style: solid;\n"
"	border-color: rgb(103, 169, 255);\n"
"border-width:3px;\n"
"}"));
        sheetBackgroundTypeFrame->setFrameShape(QFrame::StyledPanel);
        sheetBackgroundTypeFrame->setFrameShadow(QFrame::Raised);
        graphSheetButton = new QPushButton(sheetBackgroundTypeFrame);
        graphSheetButton->setObjectName("graphSheetButton");
        graphSheetButton->setGeometry(QRect(10, 10, 100, 40));
        graphSheetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-color:rgb(216, 213, 213);\n"
"	background-image:url(\"f:/Qt prog/logo/graph.jpg\");\n"
"	background-position: center;\n"
"border-radius: 5px;\n"
"}"));
        graphSheetButton->setIconSize(QSize(300, 300));
        ruledSheetButton = new QPushButton(sheetBackgroundTypeFrame);
        ruledSheetButton->setObjectName("ruledSheetButton");
        ruledSheetButton->setGeometry(QRect(120, 10, 100, 40));
        ruledSheetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-color:rgb(216, 213, 213);\n"
"	background-image:url(\"f:/Qt prog/logo/lined_page.jpg\");\n"
"	background-position: center;\n"
"border-radius: 5px;\n"
"}"));
        ruledSheetButton->setIconSize(QSize(200, 200));
        gridSheetButton = new QPushButton(sheetBackgroundTypeFrame);
        gridSheetButton->setObjectName("gridSheetButton");
        gridSheetButton->setGeometry(QRect(10, 60, 100, 40));
        gridSheetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-color:rgb(216, 213, 213);\n"
"	background-image:url(\"f:/Qt prog/logo/dotted_page.png\");\n"
"	background-position: center;\n"
"border-radius: 5px;\n"
"}"));
        plainSheetButton = new QPushButton(sheetBackgroundTypeFrame);
        plainSheetButton->setObjectName("plainSheetButton");
        plainSheetButton->setGeometry(QRect(120, 60, 100, 40));
        plainSheetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-color:rgb(216, 213, 213);\n"
"	background-color:rgb(255,255,255);\n"
"	background-position: center;\n"
"border-radius: 5px;\n"
"}"));
        undoButton = new QPushButton(centralwidget);
        undoButton->setObjectName("undoButton");
        undoButton->setGeometry(QRect(7, 110, 43, 50));
        undoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(57, 57, 57);\n"
"         border-radius: 20px;\n"
"        background-color: rgb(75,75,75);\n"
"     }\n"
""));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("F:/Qt prog/logo/icons8-undo-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        undoButton->setIcon(icon16);
        undoButton->setIconSize(QSize(30, 30));
        redoButton1 = new QPushButton(centralwidget);
        redoButton1->setObjectName("redoButton1");
        redoButton1->setGeometry(QRect(54, 110, 42, 50));
        redoButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(57, 57, 57);\n"
"         border-radius: 20px;\n"
"        background-color: rgb(75,75,75);\n"
"     }\n"
""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("../logo/icons8-redo-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        redoButton1->setIcon(icon17);
        redoButton1->setIconSize(QSize(30, 30));
        TeachingBoard->setCentralWidget(centralwidget);
        drawingFrame->raise();
        paletteFrame->raise();
        fileFrame->raise();
        colorSettingsFrame->raise();
        backgroundSettingsFrame->raise();
        sheetReviewFrame->raise();
        lineColorFrame->raise();
        shapeFrame->raise();
        sheetBackgroundColorFrame->raise();
        clearSheetButton->raise();
        lineTypeFrame->raise();
        undoButton->raise();
        redoButton1->raise();
        sheetBackgroundTypeFrame->raise();
        menubar = new QMenuBar(TeachingBoard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2056, 20));
        TeachingBoard->setMenuBar(menubar);

        retranslateUi(TeachingBoard);

        QMetaObject::connectSlotsByName(TeachingBoard);
    } // setupUi

    void retranslateUi(QMainWindow *TeachingBoard)
    {
        TeachingBoard->setWindowTitle(QCoreApplication::translate("TeachingBoard", "TeachingBoard", nullptr));
#if QT_CONFIG(tooltip)
        penButton->setToolTip(QCoreApplication::translate("TeachingBoard", "pen", nullptr));
#endif // QT_CONFIG(tooltip)
        penButton->setText(QString());
#if QT_CONFIG(tooltip)
        shapeButton->setToolTip(QCoreApplication::translate("TeachingBoard", "add shapes", nullptr));
#endif // QT_CONFIG(tooltip)
        shapeButton->setText(QString());
#if QT_CONFIG(tooltip)
        addImageButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Add image", nullptr));
#endif // QT_CONFIG(tooltip)
        addImageButton->setText(QString());
#if QT_CONFIG(tooltip)
        eraseButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Erase", nullptr));
#endif // QT_CONFIG(tooltip)
        eraseButton->setText(QString());
#if QT_CONFIG(tooltip)
        selectButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Select", nullptr));
#endif // QT_CONFIG(tooltip)
        selectButton->setText(QString());
        commentButton->setText(QString());
        openButton->setText(QCoreApplication::translate("TeachingBoard", "Open", nullptr));
        saveButtton->setText(QCoreApplication::translate("TeachingBoard", "Save", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("TeachingBoard", "    Teaching Board", nullptr));
#if QT_CONFIG(tooltip)
        lineTypeButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Line Type", nullptr));
#endif // QT_CONFIG(tooltip)
        lineTypeButton->setText(QString());
        lineColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        lineWidthButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        lineWidthButton->setText(QString());
        nextSheetButton->setText(QString());
        previousSheetButton->setText(QString());
        backgroundTypeButton->setText(QCoreApplication::translate("TeachingBoard", "Sheet Type", nullptr));
        backgroundColorButton->setText(QCoreApplication::translate("TeachingBoard", "Sheet Color", nullptr));
#if QT_CONFIG(tooltip)
        sheetReviewButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Show Sheets", nullptr));
#endif // QT_CONFIG(tooltip)
        sheetReviewButton->setText(QCoreApplication::translate("TeachingBoard", "1 / 1", nullptr));
        addNewPageButton->setText(QCoreApplication::translate("TeachingBoard", "+", nullptr));
        pageNumber1Button->setText(QCoreApplication::translate("TeachingBoard", "1", nullptr));
#if QT_CONFIG(tooltip)
        redLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Red", nullptr));
#endif // QT_CONFIG(tooltip)
        redLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        greenLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Green", nullptr));
#endif // QT_CONFIG(tooltip)
        greenLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        blackLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Black", nullptr));
#endif // QT_CONFIG(tooltip)
        blackLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        blueLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Blue", nullptr));
#endif // QT_CONFIG(tooltip)
        blueLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        yellowLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Yellow", nullptr));
#endif // QT_CONFIG(tooltip)
        yellowLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        whiteLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "White", nullptr));
#endif // QT_CONFIG(tooltip)
        whiteLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        lineColorFrameCloseButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        lineColorFrameCloseButton->setText(QString());
#if QT_CONFIG(tooltip)
        shapeFrameCloseButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        shapeFrameCloseButton->setText(QString());
#if QT_CONFIG(tooltip)
        rectangleButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        rectangleButton->setText(QString());
#if QT_CONFIG(tooltip)
        lineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Rounded Rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        lineButton->setText(QString());
#if QT_CONFIG(tooltip)
        ellipseButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Eclipse", nullptr));
#endif // QT_CONFIG(tooltip)
        ellipseButton->setText(QString());
#if QT_CONFIG(tooltip)
        whiteBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>White</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        whiteBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        blueBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Blue</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        blueBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        greenBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Green</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        greenBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        addBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Add image</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        rustBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Rust</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rustBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        blackBackgroundColorButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Black</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        blackBackgroundColorButton->setText(QString());
        clearSheetButton->setText(QCoreApplication::translate("TeachingBoard", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        lineTypeFrameClosrButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        lineTypeFrameClosrButton->setText(QString());
#if QT_CONFIG(tooltip)
        solidLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        solidLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        dottedLineButton->setToolTip(QCoreApplication::translate("TeachingBoard", "Rounded Rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        dottedLineButton->setText(QString());
#if QT_CONFIG(tooltip)
        dashLine->setToolTip(QCoreApplication::translate("TeachingBoard", "Eclipse", nullptr));
#endif // QT_CONFIG(tooltip)
        dashLine->setText(QString());
#if QT_CONFIG(tooltip)
        graphSheetButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Graph</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        graphSheetButton->setText(QString());
#if QT_CONFIG(tooltip)
        ruledSheetButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Lines</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ruledSheetButton->setText(QString());
#if QT_CONFIG(shortcut)
        ruledSheetButton->setShortcut(QCoreApplication::translate("TeachingBoard", "CapsLock", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        gridSheetButton->setToolTip(QCoreApplication::translate("TeachingBoard", "<html><head/><body><p>Dots</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        gridSheetButton->setText(QString());
        plainSheetButton->setText(QString());
        undoButton->setText(QString());
        redoButton1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TeachingBoard: public Ui_TeachingBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHINGBOARD_H
