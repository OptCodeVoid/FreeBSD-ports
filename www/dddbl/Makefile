PORTNAME=	dddbl
PORTVERSION=	2.0.1
CATEGORIES=	www
MASTER_SITES=	http://www.dddbl.de/dddbl-versions/
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Definition Driven Database Layer for PHP

USES=		php:flavors tar:bzip2

NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/dddbl2

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
