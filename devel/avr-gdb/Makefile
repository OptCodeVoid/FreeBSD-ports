PORTNAME=	gdb
PORTVERSION=	7.3.1
PORTREVISION=	6
CATEGORIES=	devel
MASTER_SITES=	GNU
PKGNAMEPREFIX=	avr-

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	GNU GDB for the AVR target

LICENSE=	GPLv3

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		cpe gmake ncurses tar:bzip2 iconv
CPE_VENDOR=	gnu

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--target=avr --program-prefix=avr --disable-nls \
		--disable-werror

pre-configure:
	cd ${WRKSRC} ; ${RM} -r dejagnu expect tcl texinfo

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdb/gdb \
		${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}${PORTNAME}

.include <bsd.port.mk>
