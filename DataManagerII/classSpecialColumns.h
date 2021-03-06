/**************************************************
 *
 *
 **************************************************
 * This code was created by Peter Harvey @ CodeByDesign.
 * Released under GPL 18.FEB.99
 *
 * Contributions from...
 * -----------------------------------------------
 * Peter Harvey   - pharvey@codebydesign.com
 **************************************************/
#ifndef classSpecialColumns_included
#define classSpecialColumns_included

#include "classCanvas.h"
#include "classColumn.h"
#ifdef QT_V4LAYOUT
#include <Qt/qstring.h>
#include <Qt/q3ptrlist.h>
#include <Qt/q3listview.h>
#else
#include <qstring.h>
#include <qlist.h>
#include <qlistview.h>
#endif
#include <sqlext.h>

class classSpecialColumns: public classNode
{
public:
#ifdef QT_V4LAYOUT
   classSpecialColumns( Q3ListViewItem *pParent, Q3ListViewItem *pAfter, classCanvas *pCanvas, SQLHDBC hDbc, const char *pszTable = 0, const char *pszLibrary = 0 );
#else
   classSpecialColumns( QListViewItem *pParent, QListViewItem *pAfter, classCanvas *pCanvas, SQLHDBC hDbc, const char *pszTable = 0, const char *pszLibrary = 0 );
#endif
  ~classSpecialColumns() {}

   void setOpen( bool );

private:
#ifdef QT_V4LAYOUT
  Q3PtrList<classColumn>  listColumns;
#else
  QList<classColumn>  listColumns;
#endif
  SQLHDBC             hDbc;
  QString             qsLibrary;
  QString             qsTable;

  void LoadColumns();

};
#endif

