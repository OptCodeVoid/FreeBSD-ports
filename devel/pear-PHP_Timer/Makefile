PORTNAME=	PHP_Timer
PORTVERSION=	2.1.2
CATEGORIES=	devel pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Utility class for timing

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	php-timer

NO_ARCH=	yes

NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/Timer.php

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/src/Timer.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
