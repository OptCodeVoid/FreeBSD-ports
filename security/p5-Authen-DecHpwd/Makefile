PORTNAME=	Authen-DecHpwd
PORTVERSION=	2.007
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for DEC VMS password hashing

LICENSE=	GPLv2+

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Integer>=0:devel/p5-Data-Integer \
		p5-Digest-CRC>=0:security/p5-Digest-CRC \
		p5-Scalar-String>=0:devel/p5-Scalar-String

USES=		perl5
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Authen/DecHpwd/DecHpwd.so

.include <bsd.port.mk>
