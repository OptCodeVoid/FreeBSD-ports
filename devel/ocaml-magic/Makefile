PORTNAME=	magic
PORTVERSION=	0.7.3
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	SF/ocaml-${PORTNAME}/ocaml-${PORTNAME}/0.7
PKGNAMEPREFIX=	ocaml-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OCaml binding for libmagic(3)

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_OCAML=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAML_LDCONFIG=	yes

MAKE_JOBS_UNSAFE=	yes

USES=		gmake
GNU_CONFIGURE=	yes

ALL_TARGET=	doc examples
DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
EXAMPLESDIR=	${OCAML_EXAMPLESDIR}/${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/html/* ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
