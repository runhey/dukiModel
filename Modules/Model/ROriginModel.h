#ifndef RORIGINMODEL_H
#define RORIGINMODEL_H

#include <QAbstractListModel>
#include "ROrigin.h"

class ROriginModel : public QAbstractListModel
{
    Q_OBJECT
    enum ROriginRoles {
        TypeRole = Qt::UserRole + 1,
        NameRole,
        ValRole
    };

public:
    using QAbstractListModel::QAbstractListModel;
    explicit ROriginModel(QObject *parent = nullptr);
    ~ROriginModel();


    //这些是重写QAbstranctListModel的
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    QHash<int,QByteArray> roleNames() const override;

    //......
    void addROrigin( ROrigin *rorigin);


private:
    QList<ROrigin *> m_ROrigins;
};

#endif // RORIGINMODEL_H