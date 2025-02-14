PORTNAME=	pika
DISTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	devel

PATCH_SITES=	https://github.com/pika-org/pika/commit/
PATCHFILES=	b3f72acf5d4f90ed3dfb9092efe351a9e76fa6e8.patch:-p1

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ library for concurrency and parallelism

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

BUILD_DEPENDS=	boost-libs>=0:devel/boost-libs
LIB_DEPENDS=	libhwloc.so:devel/hwloc2 \
		libtcmalloc_minimal.so:devel/google-perftools

USES=		cmake:testing compiler:c++17-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	pika-org

CMAKE_ON=	PIKA_WITH_MALLOC
CMAKE_ON+=	PIKA_WITH_GENERIC_CONTEXT_COROUTINES # prerequisite, build breaks on aarch64, armv6 w/out it
CMAKE_TESTING_ON=	PIKA_WITH_TESTS PIKA_WITH_TESTS_UNIT # unclear how to run tests
CMAKE_TESTING_TARGET=	tests test

BINARY_ALIAS=	git=false

post-install:
	@${RM} -r ${STAGEDIR}${DATADIR} # remove copy of license

pre-test: # unlike most other cmake projects tests fail to build when reconfigured, and require full rebuild
	@${RM} -r ${BUILD_WRKSRC}/*

.include <bsd.port.mk>
