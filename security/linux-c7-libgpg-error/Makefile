PORTNAME=	libgpg-error
PORTVERSION=	1.12
DISTVERSIONSUFFIX=	-3.el7
PORTREVISION=	2
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Common error values for all GnuPG components (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

CONFLICTS=	linux-c6-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
