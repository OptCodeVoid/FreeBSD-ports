PORTNAME=	POE-Component-LaDBI
PORTVERSION=	1.2.1
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for asynchronous non-blocking DBI calls in POE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-DBI>=0:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure patch

post-extract:
	${RM} ${WRKSRC}/*.pl

post-patch:
	@${PERL} -pi -e 's!(?=read_answer_yes\()!0 and !;' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
