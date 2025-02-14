PORTNAME=	curl
PORTVERSION=	2.1.0
CATEGORIES=	ftp
MASTER_SITES=	SF/rexx${PORTNAME}/rexx${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	rexx-
DISTNAME=	RexxCURL-${PORTVERSION}

MAINTAINER=	bob@eager.cx
COMMENT=	External function package providing an interface to the cURL package

LICENSE=	CPLV1
LICENSE_NAME=	CPL V1.0 license
LICENSE_FILE=	${WRKSRC}/CPLv1.0.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	rexx:lang/rexx-regina
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libregina.so:lang/rexx-regina
RUN_DEPENDS=	rexx:lang/rexx-regina

USES=		gmake

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-rexx=regina LDFLAGS=-L/usr/lib
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

DATADIR=	${PREFIX}/share/rexx${PORTNAME}
DOCSDIR=	${PREFIX}/share/doc/rexx${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/rexx${PORTNAME}

DOCFILES=	getright.rexx getmail-pop3.rexx httppost.rexx scp.rexx \
		sendmail-smtp.rexx testcurl.rexx upload.rexx README.txt
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rexxcurl ${STAGEDIR}${PREFIX}/bin
	${INSTALL_LIB} ${WRKSRC}/librexxcurl.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/librexxcurl.a ${STAGEDIR}${PREFIX}/lib

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/index.html ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/images
	${INSTALL_DATA} ${WRKSRC}/doc/images/rxcurl64.png ${STAGEDIR}${DOCSDIR}/images

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for f in ${DOCFILES}
	${INSTALL_DATA} ${WRKSRC}/demo/$f ${STAGEDIR}${EXAMPLESDIR}
.endfor

.include <bsd.port.mk>
