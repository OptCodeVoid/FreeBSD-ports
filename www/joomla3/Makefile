PORTNAME=	joomla
DISTVERSION=	3-10-8
CATEGORIES=	www
MASTER_SITES=	https://downloads.joomla.org/cms/joomla3/${DISTVERSION}/
PKGNAMESUFFIX=	3
DISTNAME=	Joomla_${DISTVERSION}-Stable-Full_Package.tar.bz2?format=bz2

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Dynamic web content management system (CMS)

LICENSE=	GPLv2

USES=		cpe php:web tar:bz2 shebangfix
CPE_VENDOR=	${PORTNAME}
CPE_PRODUCT=	${PORTNAME}\!

CONFLICTS_INSTALL=	joomla

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

OPTIONS_DEFINE=	MYSQL PGSQL
OPTIONS_DEFAULT=MYSQL
OPTIONS_SUB=	yes

PLIST_SUB=	WWWOWN=${WWWOWN} WWWGRP=${WWWGRP}

SHEBANG_FILES=	libraries/vendor/leafo/lessphp/lessify

SUB_FILES=	pkg-message

USE_PHP=	gd json mbstring pcre session simplexml xml zip zlib

MYSQL_USE=	PHP=mysqli
PGSQL_USE=	PHP=pgsql

WWWDIR=		${PREFIX}/www/${PORTNAME}${PORTVERSION:R:R}

.include <bsd.port.options.mk>

.if ${FLAVOR} != php80 && !defined(PACKAGE_BUILDING)
USE_PHP+=	pdf
.endif

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	@(cd ${WRKSRC} && \
		${FIND} . -type d -exec ${MKDIR} ${STAGEDIR}${WWWDIR}/{} \;)
	@(cd ${WRKSRC} && \
		${FIND} . \! -type d -and \! \( -name .gitignore -or -name .travis.yml \
			-or -name travisci-phpunit.xml -or -name LICENSE.txt \
			-or -name README.md \) \
			-exec ${INSTALL_DATA} {} ${STAGEDIR}${WWWDIR}/{} \;)

.include <bsd.port.mk>
