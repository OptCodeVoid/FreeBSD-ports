PORTNAME=	subprocess-tee
PORTVERSION=	0.3.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Captures output while still printing it in real-time

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>=19.3.1:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools>=42:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm>=3.5.0:devel/py-setuptools_scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm_git_archive>=1.1:devel/py-setuptools_scm_git_archive@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.33.6:devel/py-wheel@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}enrich>=1.2.6:textproc/py-enrich@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>=4.0.3:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}molecule>=3.4.0:devel/py-molecule@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-cov>=2.12.1:devel/py-pytest-cov@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-plus>=0.2:devel/py-pytest-plus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-xdist>=2.3.0:devel/py-pytest-xdist@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>=6.2.5:devel/py-pytest@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	cd ${WRKSRC} && ${PYTHON_CMD} -m pytest -v -rs

.include <bsd.port.mk>
