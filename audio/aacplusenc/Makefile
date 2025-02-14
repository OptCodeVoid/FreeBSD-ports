PORTNAME=	aacplusenc
PORTVERSION=	0.17.5
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://ppa.launchpad.net/teknoraver/ppa/ubuntu/pool/main/a/aacplusenc/
DISTFILES=	${DISTNAME:S,-,_,}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AacPlus v2 command-line encoder

USES=		cpe gmake

# Converted from RESTRICTED
LICENSE=	AACPLUSENC
LICENSE_NAME=	aacplusenc
LICENSE_TEXT=	unclear legal status, probably need licenses from 3GPP, Via Licensing and Coding Technologies
LICENSE_PERMS=	auto-accept

DEPRECATED=	Legacy audio format, superseded by HE-AAC(v1), HE-AACv2 and xHE-AAC/USAC. Please consider using audio/fdk-aac via FFmpeg or audio/exhale
EXPIRATION_DATE=2022-09-30

CPE_VENDOR=	aacplusenc_project

OPTIONS_DEFINE=	FFTW3
OPTIONS_DEFAULT=	FFTW3
FFTW3_DESC=	Use FFTW3 library for performance

CONFLICTS=	libaacplus

PLIST_FILES=	bin/aacplusenc
MAKE_ARGS+=	INSTDIR=${STAGEDIR}${PREFIX}

FFTW3_MAKE_ARGS_OFF=	NOFFTW3=1
FFTW3_LIB_DEPENDS=	libfftw3f.so:math/fftw3-float \
			libfftw3.so:math/fftw3
FFTW3_CFLAGS=	-I${LOCALBASE}/include

WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|-O3 -ftree-vectorize|${CFLAGS}| ; s|-lfftw3f|-L${LOCALBASE}/lib -lfftw3f| ; s|INSTDIR=.*|INSTDIR=${PREFIX}|' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's|<endian.h>|<sys/endian.h>| ; s|__BYTE|_BYTE|' ${WRKSRC}/au_channel.h
	@${REINPLACE_CMD} -e 's|gcc|${CC}|' ${WRKSRC}/configure

.include <bsd.port.mk>
