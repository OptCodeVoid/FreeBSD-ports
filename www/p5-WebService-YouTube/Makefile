PORTNAME=	WebService-YouTube
PORTVERSION=	1.0.3
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to YouTube

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>0:devel/p5-Class-Accessor \
		p5-libwww>0:www/p5-libwww \
		p5-URI>0:net/p5-URI \
		p5-XML-Simple>0:textproc/p5-XML-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
