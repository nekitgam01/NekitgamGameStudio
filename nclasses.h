#ifndef NCLASSES_H
#define NCLASSES_H
#include <QString>
#include <QPixmap>

class NVariable{
    public:
        bool enable;
        long index;
        QString name;
        QString value;
};

class NSprite{
    public:
        bool enable;
        long index;
        QString name;
        int animspeed;
        int animstep;
        QVector <QPixmap>images;
};

class NEvent{
    public:
        bool enable;
        long index;
        QString command;
        QString trigger;
        int x,y,z;
};

class NHitbox{
    public:
        bool enable;
        long index;
        int x,y,w,h;
};

class NObject{
    public:
        bool enable;
        long index;
        int spriteindex;
        bool gravity;
        bool solid;
        bool hide;
        bool transparent;
        QString name;
        QVector <NHitbox> hitboxes;
        QVector <NEvent> events;
};

class NSceneObject{
    public:
        bool enable;
        long index;
        int x,y;
        int object;
};

class NScene{
    public:
        bool enable;
        long index;
        QVector <NSceneObject> objects;
};

#endif // NCLASSES_H
