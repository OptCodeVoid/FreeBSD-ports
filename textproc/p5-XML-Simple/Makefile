PORTNAME=	XML-Simple
PORTVERSION=	2.25
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Trivial API for reading and writing XML (esp config files)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser \
		p5-XML-SAX>=0.15:textproc/p5-XML-SAX \
		p5-XML-SAX-Expat>=0:textproc/p5-XML-SAX-Expat

USES=		perl5
NO_ARCH=	yes
USE_PERL5=	configure
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
