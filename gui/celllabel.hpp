#ifndef CELLLABEL_HPP
#define CELLLABEL_HPP

#include <QLabel>
#include <QMouseEvent>
#include <QEvent>

#include "guidisk.hpp"

class CellLabel : public QLabel
{
    Q_OBJECT

public:
    explicit CellLabel(int x_base, int y_base, int x, int y, int cell_size, QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *);
    GUIDisk *get_disk() { return &this->disk; };

signals:
    void cell_selected(int x, int y);

private:
    int x;
    int y;
    GUIDisk disk;
};

#endif // CELLLABEL_HPP
