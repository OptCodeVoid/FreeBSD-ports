PORTNAME=	akonadi-search
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Libraries and daemons to implement searching in Akonadi

LICENSE=	LGPL21

LIB_DEPENDS=	libxapian.so:databases/xapian-core

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		crash i18n itemmodels kcmutils package plasma-framework \
		runner service widgetsaddons \
		ecm_build
# pim components
USE_KDE+=	akonadi akonadimime calendarcore contacts  mime
USE_QT=		core dbus gui widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
