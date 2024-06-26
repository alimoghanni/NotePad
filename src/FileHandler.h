#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QObject>

class FileHandler : public QObject
{
public:
	static QString openFile(const QString &fileName);
	static bool saveFile(const QString &fileName, const QString &content);
};

#endif // FILEHANDLER_H
