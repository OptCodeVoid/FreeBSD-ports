PORTNAME=	dalmp
PORTVERSION=	3.1.0
CATEGORIES=	databases

MAINTAINER=	nbari@tequila.io
COMMENT=	Database Abstraction Layer for MySQL using PHP

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_GITHUB=	yes
GH_ACCOUNT=	nbari
GH_PROJECT=	${PORTNAME:tu}

USES=		php

NO_BUILD=	yes
NO_ARCH=	yes
USE_PHP=	pcre mysqli session memcache sqlite3 curl redis

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
