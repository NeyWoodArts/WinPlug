#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Plug Test - Windows Version");
    window.resize(400, 300);

    QWidget *centralWidget = new QWidget;
    window.setCentralWidget(centralWidget);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *titleLabel = new QLabel("Plug for Fender Mustang Amps");
    titleLabel->setAlignment(Qt::AlignCenter);
    QFont titleFont = titleLabel->font();
    titleFont.setPointSize(16);
    titleFont.setBold(true);
    titleLabel->setFont(titleFont);
    layout->addWidget(titleLabel);

    QLabel *statusLabel = new QLabel("Windows Test Version\nUSB functionality not available");
    statusLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(statusLabel);

    QLabel *infoLabel = new QLabel("This is a test build to verify Qt6 and UI components work on Windows.\n"
                                   "Full USB communication requires libusb library.");
    infoLabel->setAlignment(Qt::AlignCenter);
    infoLabel->setWordWrap(true);
    layout->addWidget(infoLabel);

    window.show();

    return app.exec();
}