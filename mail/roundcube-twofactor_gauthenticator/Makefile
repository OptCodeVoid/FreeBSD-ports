PORTNAME=	twofactor_gauthenticator
PORTVERSION=	g20220403
CATEGORIES=	mail security
PKGNAMEPREFIX=	roundcube-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	Roundcube TOTP auth plugin

LICENSE=	GPLv2

BUILD_DEPENDS=	roundcube${PHP_PKGNAMESUFFIX}>=1.0:mail/roundcube@${PHP_FLAVOR}
RUN_DEPENDS=	roundcube${PHP_PKGNAMESUFFIX}>=1.0:mail/roundcube@${PHP_FLAVOR}

USES=		php:flavors
IGNORE_WITH_PHP=81 82

USE_GITHUB=	yes
GH_ACCOUNT=	alexandregz
GH_TAGNAME=	06e21b0

NO_BUILD=	yes
NO_ARCH=	yes

SUB_FILES=	pkg-message

WWWDIR=		${PREFIX}/www/roundcube/plugins/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${PAX} -r -w . ${STAGEDIR}${WWWDIR}
	cd ${STAGEDIR}${WWWDIR} && \
		${MV} config.inc.php.dist config.inc.php.sample

.include <bsd.port.mk>
