#include "FileHandler.h"
#include <QFile>

QString FileHandler::openFile(const QString &fileName)
{
	QFile file(fileName);

	if (!file.open(QFile::ReadOnly | QFile::Text))
		return QString();

	const QString &content(file.readAll());

	file.close();

	return content;
}

bool FileHandler::saveFile(const QString &fileName, const QString &content)
{
	QFile file(fileName);

	if (!file.open(QFile::WriteOnly | QFile::Text))
		return false;

	file.write(content.toLatin1());
	file.close();

	return true;
}
