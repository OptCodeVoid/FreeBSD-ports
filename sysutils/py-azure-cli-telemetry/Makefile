PORTNAME=	azure-cli-telemetry
PORTVERSION=	1.0.7
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure CLI Telemetry Package

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}applicationinsights>=0.11.1<0.12:devel/py-applicationinsights@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}portalocker>=1.2:devel/py-portalocker@${PY_FLAVOR}

USES=		azurepy python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
