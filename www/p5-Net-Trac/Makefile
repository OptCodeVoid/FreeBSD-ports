PORTNAME=	Net-Trac
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interact with a remote Trac instance

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Any-Moose>0:devel/p5-Any-Moose \
		p5-DateTime>0:devel/p5-DateTime \
		p5-Lingua-EN-Inflect>0:textproc/p5-Lingua-EN-Inflect \
		p5-Params-Validate>0:devel/p5-Params-Validate \
		p5-Text-CSV>0:textproc/p5-Text-CSV \
		p5-URI>0:net/p5-URI \
		p5-WWW-Mechanize>=1.52:www/p5-WWW-Mechanize \
		p5-libwww>0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
