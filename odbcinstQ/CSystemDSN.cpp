/**************************************************
 *
 *
 **************************************************
 * This code was created by Peter Harvey @ CodeByDesign.
 * Released under GPL 31.JAN.99
 *
 * Contributions from...
 * -----------------------------------------------
 * Peter Harvey		- pharvey@codebydesign.com
 **************************************************/
#include "CSystemDSN.h"

#include "dsn-system.xpm"

CSystemDSN::CSystemDSN( QWidget* parent, const char* name )
	: QWidget( parent, name )
{
	QVBoxLayout	*playoutTop		= new QVBoxLayout( this, 5 );
	
    QHBoxLayout	*playoutMain	= new QHBoxLayout( playoutTop );

	pDSNList = new CDSNList( this, "pDSNList" );
	pDSNList->setGeometry( 10, 10, 270, 190 );
	pDSNList->setMinimumSize( 50, 50 );
	pDSNList->setMaximumSize( 32767, 32767 );

    playoutMain->addWidget( pDSNList, 10 );

	QVBoxLayout	*playoutButtons	= new QVBoxLayout( playoutMain, 5 );

	pbAdd = new QPushButton( this, "pbAdd" );
	pbAdd->setGeometry( 290, 10, 100, 30 );
	pbAdd->setMinimumSize( 0, 0 );
	pbAdd->setMaximumSize( 32767, 32767 );
#ifdef QT_V4LAYOUT
	pbAdd->setFocusPolicy( Qt::TabFocus );
	pbAdd->setBackgroundMode( Qt::PaletteBackground );
#else
	pbAdd->setFocusPolicy( QWidget::TabFocus );
	pbAdd->setBackgroundMode( QWidget::PaletteBackground );
#endif
	pbAdd->setText( "A&dd..." );
	pbAdd->setAutoRepeat( FALSE );
#ifndef QT_V4LAYOUT
	pbAdd->setAutoResize( FALSE );
#endif

    playoutButtons->addWidget( pbAdd );

	pbRemove = new QPushButton( this, "pbRemove" );
	pbRemove->setGeometry( 290, 50, 100, 30 );
	pbRemove->setMinimumSize( 0, 0 );
	pbRemove->setMaximumSize( 32767, 32767 );
#ifdef QT_V4LAYOUT
	pbRemove->setFocusPolicy( Qt::TabFocus );
	pbRemove->setBackgroundMode( Qt::PaletteBackground );
#else
	pbRemove->setFocusPolicy( QWidget::TabFocus );
	pbRemove->setBackgroundMode( QWidget::PaletteBackground );
#endif
	pbRemove->setText( "&Remove" );
	pbRemove->setAutoRepeat( FALSE );
#ifndef QT_V4LAYOUT
	pbRemove->setAutoResize( FALSE );
#endif

    playoutButtons->addWidget( pbRemove );

	pbConfigure = new QPushButton( this, "pbConfigure" );
	pbConfigure->setGeometry( 290, 90, 100, 30 );
	pbConfigure->setMinimumSize( 0, 0 );
	pbConfigure->setMaximumSize( 32767, 32767 );
#ifdef QT_V4LAYOUT
	pbConfigure->setFocusPolicy( Qt::TabFocus );
	pbConfigure->setBackgroundMode( Qt::PaletteBackground );
#else
	pbConfigure->setFocusPolicy( QWidget::TabFocus );
	pbConfigure->setBackgroundMode( QWidget::PaletteBackground );
#endif
	pbConfigure->setText( "&Configure..." );
	pbConfigure->setAutoRepeat( FALSE );
#ifndef QT_V4LAYOUT
	pbConfigure->setAutoResize( FALSE );
#endif

    playoutButtons->addWidget( pbConfigure );

    playoutButtons->addStretch( 10 );

	QFrame *pframe;
	pframe = new QFrame( this, "Frame_2" );
	pframe->setGeometry( 10, 210, 380, 80 );
	pframe->setMinimumSize( 0, 0 );
	pframe->setMaximumSize( 32767, 32767 );
	pframe->setFrameStyle( QFrame::Box | QFrame::Raised );

    playoutTop->addWidget( pframe );
    QGridLayout *playoutHelp = new QGridLayout( pframe, 1, 2, 5 );

	QLabel* plabel1;
	plabel1 = new QLabel( pframe, "Label_1" );
	plabel1->setMinimumSize( 32, 32 );
//	plabel1->setMaximumSize( 32, 32 );
	plabel1->setPixmap( xpmDSN_System );

	QLabel* plabel2;
	plabel2 = new QLabel( pframe, "Label_2" );
	plabel2->setMinimumSize( 0, 0 );
	plabel2->setMaximumSize( 32767, 32767 );
	plabel2->setText( "System data sources are shared among all users of this machine. These data sources may also be used by system services. Only the administrator can configure system data sources." );
#ifdef QT_V4LAYOUT
	plabel2->setAlignment( Qt::AlignLeft | Qt::WordBreak );
	plabel2->setWordWrap( true );
#else
	plabel2->setAlignment( AlignLeft | WordBreak );
#endif

	playoutHelp->addWidget( plabel1, 0, 0 );
    playoutHelp->addWidget( plabel2, 0, 1 );
    playoutHelp->setColStretch( 1, 10 );

    pDSNList->Load( ODBC_SYSTEM_DSN );

	connect( pbAdd, SIGNAL(clicked()), pDSNList, SLOT(Add()) );
	connect( pbRemove, SIGNAL(clicked()), pDSNList, SLOT(Delete()) );
	connect( pbConfigure, SIGNAL(clicked()), pDSNList, SLOT(Edit()) );
#ifdef QT_V4LAYOUT
    connect( pDSNList, SIGNAL(doubleClicked( Q3ListViewItem * )), pDSNList, SLOT(DoubleClick( Q3ListViewItem * )));
#else
    connect( pDSNList, SIGNAL(doubleClicked( QListViewItem * )), pDSNList, SLOT(DoubleClick( QListViewItem * )));
#endif
}


CSystemDSN::~CSystemDSN()
{
}

