PORTNAME=	expat
PORTVERSION=	2.1.0
DISTVERSIONSUFFIX=	-12.el7
PORTREVISION=	4
CATEGORIES=	textproc linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	XML 1.0 parser written in C (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	MIT

USES=		cpe linux:c7
CPE_VENDOR=	${CPE_PRODUCT}_project
CPE_PRODUCT=	lib${PORTNAME}
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

CONFLICTS=	linux-c6-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}2/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
