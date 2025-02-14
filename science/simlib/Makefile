PORTNAME=	simlib
DISTVERSION=	3.06
DISTVERSIONSUFFIX=	-20181003
CATEGORIES=	science
MASTER_SITES=	http://www.fit.vutbr.cz/~peringer/SIMLIB/source/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SIMulation LIBrary for C++ programming language

LICENSE=	LGPL20

USES=		gmake
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

CXXFLAGS+=	-fPIC

BROKEN_riscv64=		fails to compile: process.cc:53:3: module process.cc is not ported to this processor architecture
NOT_FOR_ARCHS=		aarch64 armv6 armv7 mips mips64 powerpc powerpc64 sparc64
NOT_FOR_ARCHS_REASON=	contains not working ${ARCH}-dependent assembly code

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD
# nm crashes during the build:
# Assertion failed: (ddata->output.size > 0), function cpp_demangle_read_sname, file /usr/src/contrib/elftoolchain/libelftc/libelftc_dem_gnu3.c, line 2137.
USE_BINUTILS=	yes
BINARY_ALIAS=	nm=${NM}
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|make|gmake|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's#%%PREFIX%%#${PREFIX}#g' \
		${WRKSRC}/src/Makefile.generic
	@${REINPLACE_CMD} -e 's#g++#${CXX}#g' \
		${WRKSRC}/src/Makefile.FreeBSD-i386 \
		${WRKSRC}/examples/Makefile.FreeBSD-i386 \
		${WRKSRC}/tests/Makefile.FreeBSD-i386
	@${MV} ${WRKSRC}/src/Makefile.FreeBSD-i386 ${WRKSRC}/src/Makefile
	@${MV} ${WRKSRC}/examples/Makefile.FreeBSD-i386 ${WRKSRC}/examples/Makefile
	@${MV} ${WRKSRC}/tests/Makefile.FreeBSD-i386 ${WRKSRC}/tests/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsimlib.so

.include <bsd.port.mk>
