PORTNAME=	sphinx_wikipedia
PORTVERSION=	20150903
CATEGORIES=	textproc
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kris@FreeBSD.org
COMMENT=	Sphinx extension which adds role to create links to Wikipedia articles

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=0,1:textproc/py-sphinx@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	flavors
NO_BUILD=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	quiver
GH_PROJECT=	sphinx-ext-wikipedia
GH_TAGNAME=	f6b2f6
PLIST_FILES=	${PYTHON_SITELIBDIR}/sphinx/ext/wikipedia.py

do-install:
	${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}/sphinx/ext
	${CP} ${WRKSRC}/sphinx-ext/wikipedia.py \
		 ${STAGEDIR}${PYTHON_SITELIBDIR}/sphinx/ext/wikipedia.py

.include <bsd.port.mk>
