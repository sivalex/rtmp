#include <QApplication>
#include <QMainWindow>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

int main(int argc, char * argv[])
{

    QApplication testApp(argc, argv);
    QMainWindow w;
    QVideoWidget videoWidget(&w);
    w.setCentralWidget(&videoWidget);
    QMediaPlayer *player = new QMediaPlayer(&w);
    QMediaPlaylist *playlist = new QMediaPlaylist;

    // - THIS WORKS:
    //playlist->addMedia(QUrl( QUrl::fromLocalFile("/Users/erik/Desktop/vivoh/movies/jamie.mp4") ));

    // - THIS DOES NOT (URL DOES WORK IN VLC)
    playlist->addMedia(QUrl("rtmp://localhost/live/stream"));

    playlist->setCurrentIndex(1);
    player->setPlaylist(playlist);
    player->setVideoOutput(&videoWidget);
    w.show();
    player->play();

    return testApp.exec();
}

