PORTNAME=	Email-LocalDelivery-Ezmlm
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Deliver mail into ezmlm archives

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-LocalDelivery>=0:mail/p5-Email-LocalDelivery \
		p5-Email-FolderType>=0:mail/p5-Email-FolderType

USES=		perl5
USE_PERL5=	configure

post-patch:
		@${RM} ${WRKSRC}/lib/Email/LocalDelivery/Ezmlm.pm.orig
test:
	cd ${WRKSRC} ; make test

.include <bsd.port.mk>
