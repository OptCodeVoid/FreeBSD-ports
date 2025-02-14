PORTNAME=	tiffgt
DISTVERSION=	4.4.0
CATEGORIES=	graphics
MASTER_SITES=	https://download.osgeo.org/libtiff/
DISTNAME=	tiff-${DISTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	X11 Tools for working with TIFF images

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libjbig.so:graphics/jbigkit \
		libtiff.so:graphics/tiff \
		libzstd.so:archivers/zstd

USES=		cpe gl jpeg libtool pathfix xorg

CPE_PRODUCT=	libtiff
CPE_VERSION=	${DISTVERSION:C/[a-z]+//}
CPE_UPDATE=	${DISTVERSION:C/[0-9.]+//}
USE_GL=		gl glu glut
USE_LDCONFIG=	yes
USE_XORG=	ice sm x11 xi xmu

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--with-jpeg-include-dir=${LOCALBASE}/include \
			--with-jpeg-lib-dir=${LOCALBASE}/lib \
			--with-x

PLIST_FILES=	bin/tiffgt \
		man/man1/tiffgt.1.gz

pre-configure:
	${REINPLACE_CMD} -e 's|^docfiles|no-docfiles|' \
		-e 's|man html|man|' ${WRKSRC}/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tools/.libs/tiffgt ${STAGEDIR}/${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/man/tiffgt.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
