PORTNAME=	rx
PORTVERSION=	1.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	1
DISTNAME=	Rx-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Reactive Extensions (Rx) for Python

LICENSE=	APACHE20

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

# rx 3.0.0+ requires Python 3.6+
PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
