#include "signsound.h"

SignSound::SignSound(QVector<QPolygonF> geomPixelData, QVector<QPolygonF> geomCoordinateData, OGRLayer* feat, QString tabName) :
      ChartObjectInterface(geomPixelData,geomCoordinateData,feat,tabName),
    pGeometry(geomPixelData),
    cGeometry(geomCoordinateData),
    featureData(feat),
    tableName(tabName)
{
    setupGraphicProperties();
}

SignSound::~SignSound(){}

void SignSound::setupGraphicProperties() {
    pen.setColor(Qt::transparent);
    pen.setWidthF(2);
    brush.setColor(Qt::transparent);
}

ChartObjectInterface::ChartObjectType SignSound::getType() const {
    return ChartObjectInterface::Point;
}

QVector<QPolygonF> SignSound::getPixelGeometry() const {
    return pGeometry;
}

QVector<QPolygonF> SignSound::getCoordinateGeometry() const {
    return cGeometry;
}
QPen SignSound::getPen() const {
    return pen;
}

QBrush SignSound::getBrush() const {
    return brush;
}

QString SignSound::getTableName() const {
    return tableName;
}

OGRLayer* SignSound::getFeatureData() const {
    return featureData;
}



