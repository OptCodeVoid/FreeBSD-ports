PORTNAME=	nagstamon
PORTVERSION=	3.8.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	net-mgmt python

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Nagios status monitor for your desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>=2.0:sysutils/py-psutil@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4.2.1:www/py-beautifulsoup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:sysutils/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests-kerberos>0:security/py-requests-kerberos@${PY_FLAVOR}

USES=		cpe pyqt:5 python:3.6+
CPE_VENDOR=	henri_wahl
USE_GITHUB=	yes
GH_ACCOUNT=	HenriWahl
GH_PROJECT=	Nagstamon
USE_PYQT=	pyqt5_run sip_run
USE_PYTHON=	autoplist distutils noflavors

NO_ARCH=	yes

.include <bsd.port.mk>
