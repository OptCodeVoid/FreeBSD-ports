PORTNAME=	MARC-Charset
PORTVERSION=	1.35
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert MARC-8 encoded strings to UTF-8

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-XML-SAX>=0:textproc/p5-XML-SAX

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
