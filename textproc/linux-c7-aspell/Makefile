PORTNAME=	aspell
PORTVERSION=	0.60.6.1
DISTVERSIONSUFFIX=	-9.el7
PORTREVISION=	1
CATEGORIES=	textproc linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Spelling checker with better logic than ispell (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

USES=		cpe linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

CPE_VENDOR=	gnu

CONFLICTS=	linux-c6-${PORTNAME}
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
