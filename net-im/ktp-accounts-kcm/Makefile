PORTNAME=	ktp-accounts-kcm
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging account management module

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libaccounts-qt5.so:net-im/libaccounts-qt5 \
		libkaccounts.so:net-im/kaccounts-integration \
		libtelepathy-qt5.so:net-im/telepathy-qt \
		libtelepathy-logger-qt.so:net-im/telepathy-logger-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals \
		libKF5AkonadiPrivate.so:databases/akonadi \
		libsignon-qt5.so:sysutils/signon-qt5
RUN_DEPENDS=	${KDE_PREFIX}/bin/ktp-contactlist:net-im/ktp-contact-list  \
		${QT_PLUGINDIR}/kaccounts/ui/owncloud_plugin_kaccounts.so:net-im/kaccounts-providers \
		accounts-qml-module>=0:sysutils/accounts-qml-module

USES=		compiler:c++11-lang cmake gettext gnome kde:5 \
		pkgconfig qt:5 tar:xz
USE_GNOME=	intltool
USE_KDE=	auth codecs config configwidgets coreaddons i18n \
		iconthemes itemviews kcmutils kio notifications notifyconfig \
		service texteditor wallet widgetsaddons windowsystem \
		ecm_build
USE_QT=		core dbus declarative gui network sql widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	IRC JABBER SALUT DOCS
OPTIONS_DEFAULT=JABBER

IRC_DESC=	Internet Relay Chat support
IRC_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-idle:net-im/telepathy-idle

JABBER_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-gabble:net-im/telepathy-gabble

SALUT_DESC=	Link-local (serverless) XMPP support
SALUT_RUN_DEPENDS=	${LOCALBASE}/libexec/telepathy-salut:net-im/telepathy-salut

.include <bsd.port.mk>
