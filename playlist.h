#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QList>

#include "channel.h"

class PlayList
{
public:
  // Свойства класса
  QString listName;
  QString urlTvg;
  bool autoload;
  int cache;  
  int deinterlace;
  int refreshPeriod;
  int tvgShift;
  QString userAgent;

  //Методы класса
  PlayList();
  PlayList &operator=(const PlayList);
  QString toString();
  void setCrop(int w, int h, int t, int l);
  void setCropWidth(int w);
  void setCropHeight(int h);
  void setCropTop(int t);
  void setCropLeft(int l);
  void setCrop(QString);
  QString getCrop();
  void setAspectRatio(int w, int h);
  void setAspectRatioWidth(int w);
  void setAspectRatioHeight(int h);
  void setAspectRatio(QString);
  QString getAspectRatio();
  int addChannel(Channel);
  int editChannel(Channel);
  bool deleteChannel(int);

private:
  QList<Channel> *channels;
  int channelUid;

  int cropWidth;
  int cropHeight;
  int cropTop;
  int cropLeft;
  QString crop;
  int aspectWidth;
  int aspectHeight;
  QString aspect;

  void setCrop();
  void setAspectRatio();
};

#endif // PLAYLIST_H
