#ifndef ITEMNAMEDECODE_H
#define ITEMNAMEDECODE_H


#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QMap>
#include <QTextStream>

class ItemNameDecode
{
public:
    ItemNameDecode();


    QRegularExpression pattern;//("\\bitem_name_begin\\b(.*?)\\bitem_name_end\\b", QRegularExpression::DotMatchesEverythingOption);
    QRegularExpression pattern2;//("\\bautomatic_use_begin\\b(.*?)\\bautomatic_use_end\\b", QRegularExpression::DotMatchesEverythingOption);

    QString decode(QString str)
    {

        QRegularExpressionMatchIterator m = pattern2.globalMatch(str);
        QMap<int, QString> automaticUseParams;
        while (m.hasNext())
        {
            QRegularExpressionMatch match = m.next();
            QMap<QString, QString> params = stringToMap(match.captured(1));
            automaticUseParams.insert(params.value("item_id").toInt(), params.value("type"));
        }

        QString result;
        QRegularExpressionMatchIterator m2 = pattern.globalMatch(str);
        while (m2.hasNext())
        {
            QRegularExpressionMatch match = m2.next();
            QMap<QString, QString> params = stringToMap(match.captured(1));
            int itemId = params.value("id").toInt();
            QString option = params.value("item_option");
            params["item_option"] = option.left(option.length() - 1) + ";" + automaticUseParams.value(itemId, "0") + "}";
            result.append("item_name_begin\t").append(mapToString(params)).append("item_name_end").append("\r\n");
        }

        return result;
    }

    QString encode(QString str)
    {
        QString result;
        QMap<QString, QString> automaticUseParams;
        QRegularExpressionMatchIterator m2 = pattern2.globalMatch(str);
        while (m2.hasNext())
        {
            QRegularExpressionMatch match = m2.next();
            QMap<QString, QString> params = stringToMap(match.captured(1));
            QString option = params.value("item_option");
            QStringList optionParams = option.mid(1, option.length() - 2).split(";");
            automaticUseParams.insert(params.value("id"), optionParams[5]);
            result.append("item_name_begin\t").append(mapToString(params)).append("item_name_end").append("\r\n");
        }

        QMapIterator<QString, QString> iter(automaticUseParams);
        while (iter.hasNext())
        {
            iter.next();
            result.append("automatic_use_begin\titem_id=").append(iter.key()).append("\ttype=").append(iter.value()).append("\tautomatic_use_end\r\n");
        }

        return result;
    }


    // 将 QMap<QString, QString> 转换为字符串
    QString mapToString(const QMap<QString, QString>& map)
    {
        QStringList keyValuePairs;
        QMapIterator<QString, QString> iter(map);
        while (iter.hasNext())
        {
            iter.next();
            keyValuePairs.append(QString("%1=%2").arg(iter.key(), iter.value()));
        }
        return keyValuePairs.join("\t");
    }

    // 将字符串转换为 QMap<QString, QString>
    QMap<QString, QString> stringToMap(const QString& str)
    {
        QMap<QString, QString> map;
        QStringList keyValuePairs = str.split("\t");
        foreach (const QString& keyValuePair, keyValuePairs)
        {
            QStringList parts = keyValuePair.split("=");
            if (parts.size() == 2)
            {
                map.insert(parts[0], parts[1]);
            }
        }
        return map;
    }
};


#endif // ITEMNAMEDECODE_H
