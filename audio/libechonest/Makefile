PORTNAME=	libechonest
PORTVERSION=	2.3.1
PORTREVISION=	6
CATEGORIES=	audio

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Collection of C++/Qt classes designed to use the APIs of The Echo Nest

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libqjson-qt5.so:devel/qjson

USES=		cmake compiler:c++11-lang pkgconfig qt:5
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	lfranchi

USE_QT=		core buildtools_build qmake_build network xml
CMAKE_OFF+=	BUILD_WITH_QT4

PLIST_SUB=	PORTVERSION=${PORTVERSION}

OPTIONS_DEFINE=	TEST

TEST_USE=	QT=testlib_build
TEST_CMAKE_BOOL=ECHONEST_BUILD_TESTS

.include <bsd.port.mk>
