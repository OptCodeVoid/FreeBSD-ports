PORTNAME=	plasma-browser-integration
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	www kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 components to integrate browsers into the desktop

USES=		cmake compiler:c++11-lang kde:5 qt:5 tar:xz
USE_KDE=	activities completion config coreaddons crash dbusaddons \
		filemetadata i18n jobwidgets kio notifications package \
		plasma-framework plasma-workspace purpose runner service \
		widgetsaddons windowsystem
USE_QT=		concurrent core dbus gui network widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
