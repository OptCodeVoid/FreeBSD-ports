PORTNAME=	WWW-HatenaStar
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Perl interface to Hatena::Star

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-YAML-Syck>=0:textproc/p5-YAML-Syck \
		p5-URI>=0:net/p5-URI \
		p5-WWW-HatenaLogin>=0:www/p5-WWW-HatenaLogin \
		p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e "s|WWW::HatenaLogin|'WWW::HatenaLogin'|" \
	    ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
