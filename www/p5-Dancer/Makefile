PORTNAME=	Dancer
PORTVERSION=	1.3513
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BIGPRESH
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for minimal-effort oriented web application framework

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Body>=0:www/p5-HTTP-Body \
		p5-HTTP-Date>=0:www/p5-HTTP-Date \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-HTTP-Server-Simple-PSGI>=0:www/p5-HTTP-Server-Simple-PSGI \
		p5-Hash-Merge-Simple>=0:devel/p5-Hash-Merge-Simple \
		p5-MIME-Types>=0:mail/p5-MIME-Types \
		p5-Module-Runtime>=0:devel/p5-Module-Runtime \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Data-Dump>=0:devel/p5-Data-Dump \
		p5-Devel-Hide>=0:devel/p5-Devel-Hide \
		p5-HTTP-CookieJar>=0.008:www/p5-HTTP-CookieJar \
		p5-JSON>=0:converters/p5-JSON \
		p5-Plack>=0:www/p5-Plack \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

CONFLICTS_INSTALL=	dancer # bin/dancer

PORTSCOUT=	limit:^[0-9\.]*$$

OPTIONS_DEFINE=	YAML
OPTIONS_DEFAULT=YAML

YAML_RUN_DEPENDS=	p5-YAML>=0:textproc/p5-YAML

post-patch:
	@${RM} ${WRKSRC}/lib/Dancer/.Test.pm.swo

.include <bsd.port.mk>
