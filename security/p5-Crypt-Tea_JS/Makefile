PORTNAME=	Crypt-Tea_JS
PORTVERSION=	2.23
PORTREVISION=	3
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Next gen Tiny Encryption Algorithm in Perl and Javascript

CONFLICTS=	p5-Crypt-T_e_a

USES=		perl5 shebangfix
SHEBANG_FILES=	examples/tea_demo.cgi
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES
PORTEXAMPLES=	tea_demo.cgi
PORTDATA=	Tea_JS.js

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/Tea_JS/Tea_JS.so
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/Tea_JS.js ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/${PORTEXAMPLES} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
