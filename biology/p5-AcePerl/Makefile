PORTNAME=	AcePerl
PORTVERSION=	1.92
PORTREVISION=	5
CATEGORIES=	biology databases perl5
MASTER_SITES=	CPAN/Ace
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the ACEDB genome database system

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cache-Cache>=0:devel/p5-Cache-Cache

MAKE_JOBS_UNSAFE=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${SED} -e 's|XX__CC__XX|${CC}|' < ${FILESDIR}/FREEBSD_DEF \
	  > ${WRKSRC}/acelib/wmake/FREEBSD_DEF

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Ace/Freesubs/Freesubs.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Ace/RPC/RPC.so

.include <bsd.port.mk>
