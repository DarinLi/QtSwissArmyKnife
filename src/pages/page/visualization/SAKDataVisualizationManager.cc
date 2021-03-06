﻿/*
 * Copyright (C) 2018-2020 wuuhii. All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project. The project is a open source project, you can get the source from:
 *     https://github.com/qsak/QtSwissArmyKnife
 *     https://gitee.com/qsak/QtSwissArmyKnife
 *
 * For more information about the project, please join our QQ group(952218522).
 * In addition, the email address of the project author is wuuhii@outlook.com.
 */
#include "SAKDebugPage.hh"
#include "SAKThroughputWidget.hh"
#include "SAKDataVisualizationManager.hh"

#include "ui_SAKDataVisualizationManager.h"

SAKDataVisualizationManager::SAKDataVisualizationManager(SAKDebugPage *page, QWidget *parent)
    :QWidget (parent)
    ,debugPage (page)
    ,ui (new Ui::SAKDataVisualizationManager)
{
    ui->setupUi(this);
    tabWidget = ui->tabWidget;

    setAttribute(Qt::WA_DeleteOnClose, true);

    initPage();
}

SAKDataVisualizationManager::~SAKDataVisualizationManager()
{
    delete ui;
    delete throughputWidget;
}

void SAKDataVisualizationManager::initPage()
{
    throughputWidget = new SAKThroughputWidget(debugPage);
    tabWidget->addTab(throughputWidget, tr("吞吐量"));
}
