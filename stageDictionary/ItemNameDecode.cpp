#include "ItemNameDecode.h"

ItemNameDecode::ItemNameDecode()
{

    QRegularExpression p("\\bitem_name_begin\\b(.*?)\\bitem_name_end\\b", QRegularExpression::DotMatchesEverythingOption);
    QRegularExpression p2("\\bautomatic_use_begin\\b(.*?)\\bautomatic_use_end\\b", QRegularExpression::DotMatchesEverythingOption);

    pattern=p;

    pattern2 = p2;


}


