PORTNAME=	flask-restx
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

PATCH_SITES=	https://github.com/${PORTNAME:S,flask,python,}/${PORTNAME}/commit/
PATCHFILES+=	82f7340ebb51.patch:-p1 # https://github.com/python-restx/flask-restx/pull/463
PATCHFILES+=	09e57b8af6ca.patch:-p1 # https://github.com/python-restx/flask-restx/pull/463

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Extension for Flask that adds support for quickly building REST APIs

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}aniso8601>=0.82:devel/py-aniso8601@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsonschema>0:devel/py-jsonschema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>0:devel/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.3.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Flask>=0.8:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}werkzeug>0:www/py-werkzeug@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:3.6+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
