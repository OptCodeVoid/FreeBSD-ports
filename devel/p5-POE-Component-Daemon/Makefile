PORTNAME=	POE-Component-Daemon
PORTVERSION=	0.1400
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handles all the housework for a daemon in POE

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=1:devel/p5-POE

USES=		perl5 shebangfix
SHEBANG_FILES=	eg/forking eg/preforking
USE_PERL5=	configure
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	*

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	for i in ${WRKSRC}/eg/*forking; do \
		${PERL} -pi -e '$$_ = undef if m{use FindBin}o;' \
			-e 's{.FindBin::Dir(.+)$$}{/tmp$$1\nwarn "Logging to \$$logfile\\n";}o' $${i}; \
		${INSTALL_SCRIPT} $${i} ${STAGEDIR}${EXAMPLESDIR}; \
	done

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	for i in ${WRKSRC}/eg/*.png ${WRKSRC}/eg/*.dot; do \
		${INSTALL_DATA} $${i} ${STAGEDIR}${DOCSDIR}; \
	done

.include <bsd.port.mk>
