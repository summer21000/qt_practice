#include <QCoreApplication>
//#include <iostream> 일반 c++ 출력 방식
#include <QDebug> //Qt의 부가적인 출력방식

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //std::cout<<"Hello Qt!"; 일반 C++출력방식
    qDebug() <<"Hello Qt!"; //Qt의 부가적인 출력방식

    return a.exec();
}
