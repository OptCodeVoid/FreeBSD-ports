PORTNAME=	ktp-desktop-applets
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging plasma widgets

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		compiler:c++11-lang cmake gettext kde:5 qt:5 tar:xz
USE_KDE=	plasma-framework windowsystem \
		ecm_build
USE_QT=		core dbus declarative gui network widgets \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
