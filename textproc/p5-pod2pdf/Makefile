PORTNAME=	pod2pdf
PORTVERSION=	0.42
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JONALLEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Converts POD to PDF format

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Getopt-ArgvFile>0:devel/p5-Getopt-ArgvFile \
		p5-PDF-API2>=0.60:textproc/p5-PDF-API2 \
		p5-Pod-Escapes>0:textproc/p5-Pod-Escapes \
		p5-Pod-Parser>=0:textproc/p5-Pod-Parser

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
