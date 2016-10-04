DEPENDPATH += $${PWD}
INCLUDEPATH += $${PWD}

HEADERS += \
    $${PWD}/json/autolink.h \
    $${PWD}/json/config.h \
    $${PWD}/json/features.h \
    $${PWD}/json/forwards.h \
    $${PWD}/json/json.h \
    $${PWD}/json/reader.h \
    $${PWD}/json/value.h \
    $${PWD}/json/writer.h

SOURCES += \
    $${PWD}/json_value.cpp \
    $${PWD}/json_reader.cpp \
    $${PWD}/json_writer.cpp
