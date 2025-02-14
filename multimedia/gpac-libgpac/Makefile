PORTNAME=	gpac
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.0
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	multimedia
PKGNAMESUFFIX=	-libgpac

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Gpac MPEG-4 Systems library and headers

LICENSE=	LGPL21

BUILD_DEPENDS=	bash:shells/bash

ALL_TARGET=	lib
INSTALL_TARGET=	install-lib
USES=		cpe gmake dos2unix shebangfix
SHEBANG_FILES=	check_revision.sh
bash_OLD_CMD+=	/bin/sh
USE_GITHUB=	yes
HAS_CONFIGURE=	yes
USE_LDCONFIG=	yes
DOS2UNIX_FILES=	src/utils/os_config_init.c

OPTIONS_DEFINE=	IPV6 JPEG OPENGL SSL PNG XVIDEO
OPTIONS_DEFAULT=	JPEG SSL PNG

CFLAGS+=	-I${WRKSRC}/include -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CONFIGURE_ARGS=	--prefix="${PREFIX}" --cc="${CC}" --X11-path="${LOCALBASE}" \
		--extra-cflags="${CFLAGS}" --extra-ldflags="${LDFLAGS}" \
		--static-modules \
		--enable-pic \
		--disable-wx \
		--use-js=no --use-a52=no --use-faad=no --use-ffmpeg=no \
		--use-ft=no --use-mad=no --use-ogg=no --use-xvid=no \
		--use-openjpeg=no --use-theora=no --use-vorbis=no

SSL_USES=		ssl
SSL_CONFIGURE_ENABLE=	ssl
OPENGL_USES=	gl
OPENGL_USE=	GL=gl GL=glu
OPENGL_CONFIGURE_ENABLE=3d
XVIDEO_LIB_DEPENDS=	libXv.so:x11/libXv
XVIDEO_CONFIGURE_OFF=	--disable-x11-xv --disable-x11-shm
IPV6_CONFIGURE_ENABLE=	ipv6
JPEG_USES=		jpeg
JPEG_CONFIGURE_ON=	--use-jpeg=local
JPEG_CONFIGURE_OFF=	--use-jpeg=no
PNG_LIB_DEPENDS=	libpng.so:graphics/png
PNG_CONFIGURE_ON=	--use-png=local
PNG_CONFIGURE_OFF=	--use-png=no

post-patch:
	${REINPLACE_CMD} -e 's|s/\.\*\\(\[0-9\]\\)\\+\$$/\\1/|s/^[^0-9]*//| ;\
		/CFLAGS=/s/-O3//' ${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${WRKSRC}/gpac.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig

.include <bsd.port.mk>
