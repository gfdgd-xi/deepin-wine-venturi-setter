#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>  //Dtk::Widget::moveToCenter(&w); 要调用它，就得引用DWidgetUtil
#include <DTitlebar>
DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    /*
     * 设置窗口
     */
    DApplication::loadDXcbPlugin();  //让bar处在标题栏中
    DApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    a.loadTranslator();
    a.setOrganizationName("deepin");
    a.setApplicationVersion(DApplication::buildVersion("1.0"));
    a.setApplicationAcknowledgementPage("https://你的网站");
    a.setProductIcon(QIcon(":/images/logo.png"));  //设置Logo
    a.setProductName("deepin wine 文管设置器");
    a.setApplicationName("deepin wine 文管设置器"); //只有在这儿修改窗口标题才有效
    a.setApplicationDescription(QObject::tr("一个可以设置 deepin wine 文管的小工具"));
    MainWindow w;
    w.titlebar()->setTitle("deepin wine 文管设置器");
    w.titlebar()->setIcon(QIcon(":/images/logo.png"));
    w.titlebar()->setBackgroundTransparent(true);
    w.show();
    //让打开时界面显示在正中
    Dtk::Widget::moveToCenter(&w);
    return a.exec();
}
