PORTNAME=	kosmorro
PORTVERSION=	0.10.10
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Ephemerides computation

LICENSE=	AGPLv3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Babel>0:devel/py-babel@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}tabulate>0:devel/py-tabulate@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}Babel>0:devel/py-babel@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}termcolor>0:devel/py-termcolor@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}kosmorrolib>0:astro/py-kosmorrolib@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Babel>0:devel/py-babel@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}tabulate>0:devel/py-tabulate@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}termcolor>0:devel/py-termcolor@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}kosmorrolib>0:astro/py-kosmorrolib@${PY_FLAVOR}

#USE_GITHUB=	yes

USES=		gettext-runtime:run python:3.7+ shebangfix
USE_PYTHON=	distutils noflavors
SHEBANG_FILES=	${PORTNAME}

OPTIONS_DEFINE=	PDF
OPTIONS_DEFAULT=PDF
PDF_DESC=	Exporting to PDF
PDF_RUN_DEPENDS=pdflatex:print/tex-formats

NO_ARCH=	yes

.include <bsd.port.mk>
