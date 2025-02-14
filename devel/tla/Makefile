PORTNAME=	tla
PORTVERSION=	1.3.5
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	GNU/gnu-arch \
		http://www.atai.org/gnuarch/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Original arch source control management CLI written in C

LICENSE=	GPLv2+

BUILD_DEPENDS=	gpatch:devel/patch \
		gdiff:textproc/diffutils \
		gtar:archivers/gtar
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		gmake pkgconfig ssl
HAS_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes
TEST_TARGET=	test

CONFIGURE_SCRIPT=	../configure
CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--with-gnu-patch gpatch \
		--with-gnu-diff gdiff \
		--with-gnu-diff3 gdiff3 \
		--with-gnu-tar gtar
CONFIGURE_ENV=	ne_cv_libsfor_SSL_library_init=yes

ORIGWRKSRC=	${WRKDIR}/${DISTNAME}/src
PATCH_WRKSRC=	${ORIGWRKSRC}/..
WRKSRC=		${ORIGWRKSRC}/=build

OPTIONS_DEFINE=	DOCS

pre-install:
	${RM} -r ${ORIGWRKSRC}/docs-tla/PLUGIN \
		${ORIGWRKSRC}/docs-tla/{arch} ${ORIGWRKSRC}/docs-tla/.arch-ids

do-install:
	${INSTALL_PROGRAM} ${ORIGWRKSRC}/=build/tla/tla/tla ${STAGEDIR}${PREFIX}/bin
	${SED} 's,^#!.*$$,#!${AWK} -f,' ${ORIGWRKSRC}/tla/=gpg-check.awk \
		> ${WRKDIR}/tla-gpg-check
	${INSTALL_SCRIPT} ${WRKDIR}/tla-gpg-check ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${ORIGWRKSRC}/docs-tla && ${FIND} . -name '*.html' | \
		${CPIO} -pdm -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
