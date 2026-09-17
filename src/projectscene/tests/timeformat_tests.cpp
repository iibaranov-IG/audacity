/*
* Audacity: A Digital Audio Editor
*/
#include <gtest/gtest.h>

#include "view/timeline/timeformat.h"

using namespace au::projectscene;

TEST(ProjectScene_TimeFormatTests, PreservesFractionalMinorTickLabels)
{
    TimeFormat format;
    const IntervalInfo intervalInfo { 5.0, 2.5, 0.5, 1 };

    EXPECT_EQ(format.label(2.5, intervalInfo, TickType::MINOR), QStringLiteral("2.5"));
    EXPECT_EQ(format.label(7.5, intervalInfo, TickType::MINOR), QStringLiteral("7.5"));
}
