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
#ifndef SAKTABPAGESERIALPORTASSISTANT_HH
#define SAKTABPAGESERIALPORTASSISTANT_HH

#include "SAKDebugPage.hh"

class SAKSerialPortDeviceController;
class SAKSerialPortDebugPage : public SAKDebugPage
{
    Q_OBJECT
public:
    SAKSerialPortDebugPage(QWidget *parent = Q_NULLPTR);
    ~SAKSerialPortDebugPage();

    /**
     * @brief controllerInstance 获取设备控制面板实例
     * @return 设备控制面板实例
     */
    SAKSerialPortDeviceController *controllerInstance();
protected:
    SAKDevice *createDevice() final;
    void refreshDevice() final;
    QWidget *controllerWidget() final;
    void setUiEnable(bool enable) final;
private:
    SAKSerialPortDeviceController *controller;
};

#endif
